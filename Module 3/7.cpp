#include <iostream>
using namespace std;
int main()
{
    int num, num1, i;
    cout << "Enter the number = ";
    cin >> num;
    cout << "Enter the number = ";
    cin >> num1;
    cout << "\nArithmetic operations\n";
    i = num + num1;
    cout << "The sum is = " << i;
    i = num - num1;
    cout << "\nThe difference is = " << i;
    i = num * num1;
    cout << "\nThe product is = " << i;
    i = num / num1;
    cout << "\nThe division is = " << i;
    cout << "\nRelational operations\n";
    i = num == num1;
    cout << "\nThe comparison is = " << i;
    i = num != num1;
    cout << "\nThe comparison is = " << i;
    i = num > num1;
    cout << "\nThe comparison is = " << i;
    i = num < num1;
    cout << "\nThe comparison is = " << i;
    cout << "\nLogical operations\n";
    i = num > 0 && num1 > 0;
    cout << "\nThe comparison is = " << i;
    i = num > 0 || num1 > 0;
    cout << "\nThe comparison is = " << i;
    return 0;
}