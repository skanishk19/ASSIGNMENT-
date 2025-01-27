#include <iostream>
using namespace std;
int main()
{
    int rollno;
    string name;
    int m1, m2, m3;
    cout << "Enter Your Marks: ";
    cin >> m1 >> m2 >> m3;
    cout << "Enter Your Name: ";
    cin >> name;
    cout << "Enter Your Roll Number: ";
    cin >> rollno;
    cout << "Your Roll Number is: " << rollno;
    cout << "Your Name is: " << name;

    int total = m1 + m2 + m3;
    cout << "Your Total Marks is: " << total;

    float avg = total / 3;
    cout << "Your Average Marks is: " << avg;

    if (avg >= 80 && avg <= 100)
    {
        cout << "Your Grade is: A";
    }
    else if (avg >= 60 && avg <= 79)
    {
        cout << "Your Grade is: B";
    }
    else
    {
        cout << "Your Grade is: C";
    }

    return 0;
}