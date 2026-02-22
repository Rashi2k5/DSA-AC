#include<bits/stdc++.h>
using namespace std;

bool palindrome(char ch[],int n ){

    int st = 0;
    int end = n - 1;

    while(st < end){

       if(ch[st++] != ch[end--]){

            return false;

       }
        
    }

 return true;

}

int main(){
       char ch[10];
       cin>>ch;

       int n = strlen(ch);

       if(palindrome(ch,n)){

        cout<<"this is a palindrome "<<endl;

       }
       else{

            cout<<"it is not a palindrome "<<endl;

       }
}