#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    cout<<"enter the numbers : "<<endl;
    cin>>a>>b;

    char op;
    cout<<"enter the operator: "<<endl;
    cin>>op;

    switch(op){
            
        case '+':
               cout<<a+b<<endl;
               break;
        case '-':
               cout<<a-b<<endl;
               break;     
               
        case '*':
               cout<<a*b<<endl;
               break;
 
        case '/':
               cout<<a/b<<endl;
               break;


        default:
              cout<<"invalid operator";
    }



}