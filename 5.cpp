// Multiple line pattern 1
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<6;i++){                 // . i for rows, j for iterating thru each row elements
        for(j=1;j<=i;j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }
    return 0;
} 
/*
    // Output:
        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5   
*/