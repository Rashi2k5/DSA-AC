#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"enter the number: "<<endl;
    while(n > 0){

        cout<<"enter the number: ";
        cin>>n;

        if(n % 10 == 0){
            continue;
        }
        cout<<n<<endl;
    }


}