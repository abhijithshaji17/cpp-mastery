// sum of digits of number
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,i;
    cout<<"Enter a no.: ";
    cin>>n;
    for(i=0;n>0;i++){
        sum+=n%10;
        n/=10;
    }
    cout<<"Sum of digits = "<<sum;
    return 0;
}