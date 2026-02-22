#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "helloworldc++asdfghjkc++";

    for(char i  : str ){
        cout<<i<<endl;
    }

    //member functions for string class

    cout<<str.length()<<endl;
    cout<<str.at(3)<<endl;
    cout<<str.substr(1,5)<<endl;
    cout<<str.find("c++",14);

}