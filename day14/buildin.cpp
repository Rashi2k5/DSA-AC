#include<bits/stdc++.h>
using namespace std;

int main(){

    char str1[100];
    strcpy(str1,"radhe");
    
    char str2[100];
    strcpy(str2,str1);

    cout<<str1<<endl;
    cout<<str2<<endl;

    strcat(str1,str2);
    cout<<str1<<endl;

    cout<<strcmp(str1,str2)<<endl; // if both string are equal it gives 0 
    // if the first string is smaller than second string then it will give negative
    
    

}