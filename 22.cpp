// Template 3 - square of number func. template
#include<iostream>
using namespace std;
template<typename T>
void squarenum(T num){
    cout<<"Squared number = "<<num*num<<endl;
}
int main(){
    double num;
    cout<<"Enter a number: ";
    cin>>num;
    squarenum(num);
    return 0;
}
