#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int roll;
    void sayHi(){
        cout<<"Hi "<<roll<<endl;
    }
    
    private:
    int pass;


    protected:
    int marks;
};

int main(){

    Student rahim;
       rahim.roll=10;
    rahim.sayHi();

    return 0;
}