#include<bits/stdc++.h>
using namespace std;

class Parent{
    private:
        int taka;
    public:
        Parent(int tk){
            taka =tk;
        }
    // friend class frindOfMine;
    friend void tellSecret(Parent *t);

};

// class frindOfMine{
//     public:
//         void tellSecret(Parent *t){
//             cout<<t->taka<<endl;
//         }
// };

void tellSecret(Parent *t){
    cout<<t->taka<<endl;
}

int main(){
    Parent t(1000);
    // frindOfMine frnd;
    // frnd.tellSecret(&t);
    tellSecret(&t);
    return 0;
}