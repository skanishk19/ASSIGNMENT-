#include<iostream>
using namespace std;
class calculator
{
    public:
    int sum(int num1,int num2)
    {
        return num1+num2;
    }
     int sub(int num1,int num2)
    {
        return num1-num2;
    }
     int multi(int num1,int num2)
    {
        return num1*num2;
    }
     int div(int num1,int num2)
    {
        return num1/num2;
    }
};
int main()
{
    calculator c1;
    int num1,num2;
    cout<<"Enter the number : ";
    cin>>num1>>num2;
    cout<<"The Sum is : "<<c1.sum(num1,num2)<<endl;
    cout<<"The Subtraction is : "<<c1.sub(num1,num2)<<endl;
    cout<<"The Multiplication is : "<<c1.multi(num1,num2)<<endl;
    cout<<"The Division is : "<<c1.div(num1,num2)<<endl;
    return 0;
}   