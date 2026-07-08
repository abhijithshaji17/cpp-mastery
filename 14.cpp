// linear array
#include<iostream>
using namespace std;
int main(){
    int a[10],i,n;
    cout<<"Enter the number of array elements: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>a[i];
    }
    cout<<"Array: "<<endl;
    cout<<"[ ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"]";
    return 0;
}