#include<bits/stdc++.h>
using namespace std;

int main(){

    //using if else

    int a,b;
    cout<<"enter the numbers: "<<endl;
    cin>>a>>b;

    char op;
    cout<<"enter the operator: "<<endl;
     cin>>op;

     if(op == '+'){
        cout<<a+b<<endl;
     }

     else if(op == '-'){
        cout<<a-b<<endl;
     }

     else if(op == '*'){
        cout<<a*b<<endl;
     }

     else if(op == '/'){
        cout<<a/b<<endl;
     }

     else{

        cout<<"please enter the valid operator";
     }


}