// calculator switchcase program with class and objects
#include<iostream>
using namespace std;
class Calculator{
public: 
        void getInput(){
            int op;
            double n1,n2,ans;
            cout<<"----Menu Driven Calculator----\n";
            cout<<"Enter the first number: ";
            cin>>n1;
            cout<<"Enter the second number: ";
            cin>>n2;
            cout<<"Select the desired operation below:\n";
            cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
            cin>>op;
        }
        void calculate(){
            int op;
            double n1,n2,ans;
            switch(op){
                case 1:
                    ans=n1+n2;
                    cout<<"Sum = "<<ans;
                    break;
                case 2:
                    ans=n1-n2;
                    cout<<"Difference = "<<ans;
                    break;
                case 3:
                    ans=n1*n2;
                    cout<<"Product = "<<ans;
                    break;
                case 4:
                if(n2!=0){
                    ans=n1/n2;
                    cout<<"Quotient = "<<ans;
                }else{
                    cout<<"Error: division by zero!";
                }
                    break;
                default:
                    cout<<"Invalid choice.";
            }
        }
};
int main(){
    Calculator calc;
    calc.getInput();
    calc.calculate();
    return 0;
}

    


