// Reverse digits of a number
#include<iostream>
using namespace std;
int main(){
    int n,i,rev=0;
    cout<<"Enter a no.: ";
    cin>>n;
    for(i=0;n!=0;i++){
        rev = n%10 + rev*10;
        n/=10;
    }
    cout<<"Reversed number = "<<rev<<endl;
    return 0;
}
/*
Loop Trace(n=67):
Initial Setup: n = 67, rev = 0
Iteration 1 -> 
Find the last digit: n % 10 => 67 % 10 = 7
Update rev: rev = (0 * 10) + 7 = 7
Drop the last digit: n = 67 / 10 = 6

Iteration 2 ->
Find the last digit: n % 10 => 6 % 10 = 6
Update rev: rev = (7 * 10) + 6 = 76
Drop the last digit: n = 6 / 10 = 0

Reversed no. = 76
*/