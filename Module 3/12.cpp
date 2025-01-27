#include <iostream>
using namespace std;
int main()
{
    int num, num1, i;
    char ch;
    cout << "Enter the number = ";
    cin >> num;
    cout << "Enter the number = ";
    cin >> num1;
    cout << "'+' , '-' , '*', '/' ";
    cout << "Enter Your Choice :";
    cin >> ch;
    switch (ch)
    {
    case '+':
        i = num + num1;
        cout << "addition : " << i;
        break;
    case '-':
        i = num - num1;
        cout << "subtraction : " << i;
        break;
    case '*':
        i = num * num1;
        cout << "multiplication : " << i;
        break;
    case '/':
        i = num / num1;
        cout << "division : " << i;
        break;

    default:
        break;
    }
    return 0;
}