#include <bits/stdc++.h>
using namespace std;

class BankAccount
{

public:
    string accountName;
    string address;
    int age;
    int account_number;

protected:
    int balance;

private:
    string password;

public:
    BankAccount(string accountName, string address, int age, string password)
    {
        this->accountName = accountName;
        this->address = address;
        this->age = age;
        this->password = password;
        this->account_number = rand() % 1000000000;
        this->balance = 0;
        cout << "Your account Number " << this->account_number << endl;
    }
    int show_balance(string password)
    {
        if (this->password == password)
        {
            return this->balance;
        }
        else
        {
            return -1;
        }
    }
    void AddMoney(string password, int amount)

    {

        if (amount < 0)
        {
            cout<<"Invalid Amount"<<endl;
            return;
        }
        if (this->password == password)
        {
            this->balance = amount;
            cout << "Add Money Successful" << endl;
        }
        else
        {
            cout << "Password didn't match" << endl;
        }
    }
    void depositMoney(string password, int amount)
    {   
        if (amount < 0)
        {
            cout<<"Invalid Amount"<<endl;
            return;
        }
        if(this->balance<amount){
            cout<<"Insufficient money"<<endl;
            return;
        }
        if (this->password == password)
        {
            this->balance -= amount;
            cout << "Deposit moneySuccessful" << endl;
        }
        else
        {
            cout << "Password didn't match" << endl;
        }
    }
    friend class MyCash;
};
class MyCash
{
protected:
    int balance;

public:
    MyCash()
    {
        this->balance = 0;
    }
    void addMoneyFromBank(BankAccount *myAccount, string password, int amount)
    {   
        if (amount < 0)
        {
            cout<<"Invalid Amount"<<endl;
            return;
        }
        if(myAccount->balance<amount){
             cout<<"Insufficient money"<<endl;
            return;
        }
        if (myAccount->password == password)
        {
            this->balance += amount;
            myAccount->balance -= amount;
            cout << "Add money from bank is succesful" << endl;
        }
        else
        {
            cout << "Password didn't match" << endl;
        }
    }
    int showBalance()
    {
        return balance;
    }
};
BankAccount *create_account()
{
    string accountName, password, address;
    int age;
    cout << "Create Account" << endl;
    cin >> accountName >> address >> age >> password;
    BankAccount *myAccount = new BankAccount(accountName, address, age, password);
    return myAccount;
}
void AddMoney(BankAccount *myAccount)
{
    string password;
    int amount;
    cout << "Add Money" << endl;
    cin >> password >> amount;
    myAccount->AddMoney(password, amount);
}
void depositMoney(BankAccount *myAccount)
{
    string password;
    int amount;
    cout << "Deposit Money" << endl;
    cin >> password >> amount;
    myAccount->depositMoney(password, amount);
}
void add_money_from_bank(MyCash *myCash, BankAccount *myAccount)
{
    string password;
    int amount;
    cout << "Add Money from cash" << endl;
    cin >> password >> amount;
    myCash->addMoneyFromBank(myAccount, password, amount);
    cout << "Your bank balance is " << myAccount->show_balance("abc") << endl;
    cout << "My cash balace is " << myCash->showBalance() << endl;
}
int main()
{
    BankAccount *myAccount = create_account();
    MyCash *myCash = new MyCash();
     Flag:
        cout<<"Select options"<<endl;
        cout<<"1. Add Money to bank"<<endl;
        cout<<"2. Deposit money to bank"<<endl;
        cout<<"3. Add money to My Cash"<<endl;
        int option;
        cin>>option;
        if(option==1){
            AddMoney(myAccount);
        }
        else if(option ==2){
            depositMoney(myAccount);
        }
        else if(option==3){
            add_money_from_bank(myCash,myAccount);
        }
        else{
            cout<<"Invalid"<<endl;
        }
        goto Flag;
    return 0;
}