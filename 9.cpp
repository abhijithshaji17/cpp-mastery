// Reverse digits of a number
#include<iostream>
using namespace std;
int main(){
    int n,i,rem,rev=0;
    cout<<"Enter a no.: ";
    cin>>n;
    for(i=0;n!=0;i++){
        rev = rev*10 + n%10;
        n/=10;
    }
    cout<<"Reversed number = "<<rev<<endl;
    return 0;
}