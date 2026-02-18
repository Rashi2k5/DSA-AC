#include<bits/stdc++.h>
using namespace std;


//function overloading 

//function over loading is where multiple functions have same name but have different parameter 
//return type se koi mtlab nhi h bs parameter alag hone chahiye
int sum(int a,int b){

    return a+b;

}

double sum(double a, double b){

    return a+b;

}

int sum(int a,int b,int c){

    return a+b+c;

}

int main(){

    cout<<sum(2,3)<<endl;
    cout<<sum(2.0,3.5)<<endl;
    cout<<sum(2.1,0.0)<<endl;
    cout<<sum(2,0,7)<<endl;


}