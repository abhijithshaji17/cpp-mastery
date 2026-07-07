// Factorial
#include<iostream>
using namespace std;
int main(){
    int n,i;
    unsigned long long fact = 1;
    cout<<"Enter a no.: ";
    cin>>n;
    if(n<0){
        cout<<"Factorial of a negative is N.D";
    }else{
        for(i=1;i<=n;i++){
            fact*=i;
        }
        cout<<"Factorial of "<<n<<" = "<<fact<<endl;
    }
    return 0;
}
/*
    // Output:
       Enter a no.: 5
       Factorial of 5 = 120  
*/