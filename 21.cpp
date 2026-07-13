// Template 2 - largest using template
#include<iostream>
using namespace std;
template<typename T>
T getLargest(T n1, T n2){
    return (n1>n2)?n1:n2;
}
int main(){
    cout<<getLargest<int>(3,4)<<endl;
    cout<<getLargest<double>(4.5,3.1)<<endl;
    return 0;
}