#include<iostream>
using namespace std;

int main(){

    //arithmetic operator
    int a = 5;
    int b = 3;

    cout<<"+"<<(a + b)<<endl;
    cout<<"+"<<(a - b)<<endl;
    cout<<"+"<<(a / b)<<endl;
    cout<<"+"<<(a * b)<<endl;
    cout<<"+"<<(a % b)<<endl;
    

    // unary_operator

    a++;//post increament
    ++a;//pre increament
    a--; //post dectrement
    --a;//pre decreament
    cout<<a<<endl;

    //asignment operators
    //  = , += , -= ,  *= , /=

    int c = 1;

    c += 5;
    cout<<c<<endl;

    c *= 5;
    cout<<c<<endl;

    c -= 5;
    cout<<c<<endl;

   //relational operator
   
//    == , != ,> , < , <= , >=

cout<<(a == b)<<endl;
cout<<(a != b)<< endl;


//logical operator
cout<<"AND && : " <<(a>b) && (b>a)<<endl;
cout<<"OR || : "<<(a>b)||(a<b)<<endl;



}