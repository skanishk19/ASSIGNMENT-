#include<iostream>
using namespace std;
int main()
{
int length, weight, ans;
cout << "Enter the number of lengths:\t"; 
 cin >> length;
cout << "Please enter the weight:\t";
cin >> weight;

ans = length * weight;

cout << "The area of ​​the rectangle is:" << ans;

return 0;
}