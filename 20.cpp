#include<iostream>
using namespace std;
template<class T>                       //this is a class template
class num{
    private:                            //type need not be specified
        T a;
    public:                             //type needs to be specified
        num(T x){
            a = x;
        }
        void display(){
            cout<<a<<endl;
        }
};
int main(){
    num<int>obj1(10);
    obj1.display();
    num<float>obj2(1.1);
    obj2.display();
    return 0;
}
