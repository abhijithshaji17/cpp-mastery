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

void quicksort(int a[], int lb, int ub){
    int p;
    if(lb<ub){
        p = partition(a,lb,ub);
        quicksort(a,lb,p-1);
        quicksort(a,p+1,ub);
    }
}

int main(){
    int a[20],i,n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    cout<<"Enter elements:\n";
    for(i=0;i<n;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>a[i];
    }
    cout<<"\nUnsorted Array:\n";
    cout<<"[";
    for(i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<"]\n";
    quicksort(a,0,n-1);
    cout<<"\nSorted Array:\n";
    cout<<"[";
    for(i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<"]\n";
    return 0;
}
