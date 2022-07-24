#include<bits/stdc++.h>
using namespace std;


class Student{
    public:
    string name;
    char section;
    int roll;
    protected:
    int english_marks;
    private:
    string password;
     public:
//    Student (string n,char s,int r,int e,string pass){
//         name=n;
//         section=s;
//         roll=r;
//         english_marks=e;
//         password=pass;
//    }
  
    void set_marks(int e){
        english_marks=e;
    }
    void set_password(string pass){
        password=pass;
    }
    int get_Marks(){
        return english_marks;
    }
    void update_marks(string pass, int m){
       if(pass == password){
            english_marks=m;
            cout<<"Updated"<<endl;
       }
       else{
            cout<<"Wrong Pass of roll "<<roll<<endl;
       }
    }

};


int main(){
    int sz;
    cin>>sz;
    Student arr[sz];

    for(int i=0;i<sz;i++){
        int a;
        string  p ;
        cin>>arr[i].name>> arr[i].section>>arr[i].roll>>a>>p;
        arr[i].set_marks(a);
        arr[i].set_password(p);
        
    }
    for(int i=0;i<sz;i++){
        cout<<arr[i].name<<" "<<arr[i].section<<" "<<arr[i].roll<<" "<<arr[i].get_Marks()<<endl;
    }

    for(int i=0;i<sz;i++){
        int m;
        string pass;
        cin>>pass>>m;
        arr[i].update_marks(pass,m);
    }

    return 0;
}



    // Restaurant(int food_item_codes[], string food_items_names[], int food_item_prices[])
    // {
    //     for (int i = 0; i < 12; i++)
    //     {
    //         this->food_item_codes[i] = food_item_codes[i];
    //         this->food_item_names[i] = food_items_names[i];
    //         this->food_item_prices[i] = food_item_prices[i];
    //     }
    // }