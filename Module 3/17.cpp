#include <iostream>
using namespace std;
int main()
{
    string str1, temp;
    cout << "Enter  string name  :";
    getline(cin, str1);
    temp = str1;
    int i, length = 0, j = 0;
    char str2[100];
    for (i = 0; str1[i] != '\0'; i++)
    {
        length++;
    }
    for (i = length - 1; i >= 0; i--)
    {
        str2[j] = str1[i];
        j++;
    }
    if (temp == str2)
    {
        cout << "The string is pellindrom";
    }
    else
    {
        cout << "The string id not pellindrom";
    }
}