// Sum of linear array elements
#include<iostream>
using namespace std;
int main(){
    int a[10],n,i,sum=0;
    cout<<"Enter the no. of array elements: ";
    cin>>n;
    cout<<"Enter the array elements:\n";
    for(i=0;i<n;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"Array:\n";
    cout<<"[";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"]\n";
    cout<<"Sum of array elements = "<<sum;
    return 0;
}