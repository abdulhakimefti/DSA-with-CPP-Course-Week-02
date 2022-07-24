#include<bits/stdc++.h>
using namespace std;

class Parent {
    public:
    int x;
    private:
    int y;
    protected:
    int z;
    public:
    Parent (int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
};
class Child : public Parent {
    public : 
    int xx;
    Child (int aa,int a,int b,int c) : Parent(a,b,c){
        xx==aa;
    }
    void tellMe(){
        cout<<"Protect value :"<<z<<endl;
    }
};

int main(){
    Parent m(10,20,30);
    Child l(22,10,20,30);
    // cout<<l.x<<endl;
    l.tellMe();

}