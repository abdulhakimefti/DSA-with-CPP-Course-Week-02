#include<bits/stdc++.h>
using namespace std;

int main(){
    string st= "abcdefsdafjalkdsflk";
    cout<<st.length()<<endl;
    cout<<st.size()<<endl;
    st.resize(5);
    cout<<st<<endl;
    st.clear();
    cout<<st.size()<<endl;
    if(st.empty()){
        cout<<"Yes"<<endl;
    }
    return 0;
}