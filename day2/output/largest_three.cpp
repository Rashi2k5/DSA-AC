#include<bits/stdc++.h>
using namespace std;

int main(){

    int num1,num2,num3;
    cout<<"enter the three numbers you have to compare: ";
    cin>>num1>>num2>>num3;

    if((num1 > num2) && (num1 > num3)){

        cout<<" num1 is the greatest number !";

    }

    else if((num2 > num1) && (num2 > num3)){

        cout<<"num2 is the greatest number ! ";

    }

    else{

        cout<<"num3 is the greatest number !";
    }
}