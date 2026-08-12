// Quick sort - lomuto
#include<iostream>
using namespace std;

int partition(int a[], int lb, int ub){
    int i,j,pivot;
    pivot = a[ub];
    i = lb - 1;
    for(j=lb;j<ub;j++){
        if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[ub]);
    return i+1;
}
