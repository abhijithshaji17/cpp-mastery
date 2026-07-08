// fibonacci series
#include<iostream>
using namespace std;
int main(){
    int n,i;
    long long t1=0,t2=1,nextterm;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci Series: "<<endl;
    for(i=1;i<n;i++){
        cout<<" "<<t1;
        nextterm = t1+t2;
        t1=t2;
        t2=nextterm;
    }
    cout<<endl;
    return 0;
}