#include<bits/stdc++.h>
using namespace std;

class Example {
    public :
    int add(int x,int y){
        return x+y;
    }
    double add(double x,double y){
        return x+y;
    }
    void add(char a){
        cout<<"HI "<<a<<endl;
    }
};

int main(){
    Example ongko;
    cout<<ongko.add(4,5)<<" "<<ongko.add(4.33,7.22)<<endl;
    ongko.add('e');

}