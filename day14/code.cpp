#include<bits/stdc++.h>
using namespace std;

int main(){

    char ch = 'a';
    int pos = ch - 'a';

    cout<<pos<<endl;
    cout<<int(ch)<<endl;

    char str[5] = {'a','b','c','d','e'};

    for(int i = 0; i < 5; i++){
        cout<<str[i]<<endl;
    }

    char arr[5] = {'c','o','d','e','\0'};
    cout<<arr<<endl;

    char arr1[] = "coder"; // "coder " is string literal
    cout<<arr1<<endl;

     char arr2[] = {'c','o','l','d','\0'};
    cout<<arr2<<endl;
    
    cout<<strlen((arr2)); //for finding the length of string

    
}