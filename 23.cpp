// array operations
// insertion sort
#include<iostream>
using namespace std;
int main(){
    int a[10],lb,ub,n;
    cout<<"Enter the number of array elements: ";
    cin>>n;
    cout<<"Enter array elements:\n";
    for(lb=0;lb<n;lb++){
        cout<<"Element "<<lb+1<<": ";
        cin>>a[lb];
    }
    cout<<"Array:\n";
    cout<<"[";
    for(lb=0;lb<n;lb++){
        cout<<a[lb]<<" ";
    }
    cout<<"]";
    void insertbeg();
    void insertpos();
    void insertend();
    return 0;
}

