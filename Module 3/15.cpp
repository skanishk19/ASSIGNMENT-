#include <iostream>
using namespace std;
int main()
{
    int num[100], i, size, a = 0;
    cout << "enter the size : ";
    cin >> size;

    for (i = 0; i < size; i++)
    {
        cout << "enter the element : ";
        cin >> num[i];
        a = a + num[i];
    }

    cout << "addition : " << a << endl;
    cout << "avrage : " << (float)a / (float)size;

    return 0;
}