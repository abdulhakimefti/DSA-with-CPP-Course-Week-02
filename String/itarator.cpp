#include<bits/stdc++.h>
using namespace std;

int main(){

    string st ="abcdefghij";
    // string :: iterator it;
    // for(it=st.begin();it!=st.end();it++){
    //     cout<<*it<<endl;
    // }

   
    for( auto to=st.rbegin();to!=st.rend();to++){
        cout<<*to<<endl;
    }
    return 0;
}