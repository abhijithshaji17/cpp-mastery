// matrix
#include<iostream>
using namespace std;
int main(){
    int a[10][10],m,n,i,j;
    cout<<"Enter the no. of rows and columns of matrix: ";
    cin>>m>>n;
    cout<<"Enter matrix elements:\n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"Element "<<i+1<<": ";
            cin>>a[i][j];
        }
    }
    cout<<"Matrix:\n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}

