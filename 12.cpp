// palindrome number
#include<iostream>
using namespace std;
int main(){
    int n,i,rev=0,org;
    cout<<"Enter a number: ";
    cin>>n;
    org = n;
    for(i=0;n!=0;i++){
        rev = n%10 + rev*10;
        n/=10;
    }
    if(org==rev){
        cout<<"Given number is palindromic";
    }else{
        cout<<"Given number is non palindromic";
    }
    return 0;
}