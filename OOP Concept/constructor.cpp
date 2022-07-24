#include<bits/stdc++.h>
using namespace std;

class Example{
    private:
        int x;
        int y;
        int z;
        int pass;
    // public:
    // Example(int a,int b,int c){

    //     x=a;
    //     y=b;
    //     z=c;
    // }
    public:
    Example (int p){
        pass=p;
    }
    void setter(int a,int p){
       if(pass==p){
         x=a;
       }
       else{
        cout<<"Your password didn't match"<<endl;
       }

    }
    int getter(int p){
        if(pass==p){
            return x;
        }
        else{
        cout<<"Your password didn't match"<<endl;
       }
    }
};

int main(){
    Example a(1200);
    a.setter(1500,1200);
    cout<<a.getter(1200)<<endl;
    // cout<<a.x<<" "<<a.y<<" "<<a.z<<endl;
    return 0;
}