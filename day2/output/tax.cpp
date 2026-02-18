#include<bits/stdc++.h>
using namespace std;

int main(){

    int salary ;
    float tax ;

    cout<<"enter the salary in lakhs : "<<endl;
    cin>>salary;

    if(salary < 5 ){
        tax = 0;
    }

    else if(salary <= 10){
        tax = 0.2 * salary;
    }

    else{
        tax = 0.3 * salary;
    }

    cout<<(tax * 100000)<<endl;


}