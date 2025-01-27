#include <iostream>
using namespace std;
void gv(int num)
{
    cout << "global variable is : " << num << endl;
}
void lv()
{
    int num;
    cout << "enter the variable : ";
    cin >> num;
    cout << "local variable is : " << num;
}
int main()
{
    int num;
    cout << "enter the variable : ";
    cin >> num;
    gv(num);
    lv();
    return 0;
}