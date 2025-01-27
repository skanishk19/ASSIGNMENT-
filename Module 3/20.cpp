#include <iostream>
using namespace std;
class person
{
private:
    int age;
    string name;

public:
    person(int age, string name)
    {
        this->age = age;
        this->name = name;
    }
    void display()
    {
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
    }
};
class student
{
private:
    int rollno;
    string name;

public:
    student(int rollno, string name)
    {
        this->rollno = rollno;
        this->name = name;
    }
    void display()
    {
        cout << "Name :" << name << endl;
        cout << "Rollno :" << rollno << endl;
    }
};
class teacher
{
private:
    int salary;
    string name;

public:
    teacher(int salary, string name)
    {
        this->salary = salary;
        this->name = name;
    }
    void display()
    {
        cout << "Name :" << name << endl;
        cout << "Salary :" << salary << endl;
    }
};

int main()
{
    person p1(20, "aditya");
    student s1(20, "delasi");
    teacher t1(20000, "kanishk");
    p1.display();
    s1.display();
    t1.display();
    return 0;
}