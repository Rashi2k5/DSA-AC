
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int sum = 0;
    cin>>n;

    while(n > 0){

        int rem = n % 10;
        n /= 10;
        sum = sum + rem;

    }

    cout<<sum<<endl;


}