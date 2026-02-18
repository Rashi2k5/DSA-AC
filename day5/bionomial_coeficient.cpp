#include<bits/stdc++.h>
using namespace std;

int fact(int num){

    int product = 1;

    for(int i = 2; i < num ; i++){

        product = product * i;
    }

    return product;
}
int main(){

    int n,r;

    cout<<"enter the value of n: "<<endl;
    cin>>n;

    cout<<"enter the value of r : "<<endl;
    cin>>r;

    double bi_co = fact(n)/(fact(r)*fact(n-r));

    cout<<" the binomial coeficient nCr is : "<<bi_co;

}