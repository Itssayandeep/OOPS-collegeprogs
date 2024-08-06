#include<iostream>
#include<string.h> 
using namespace std;
class Employee
{
private:
    int id;
    string name;
    int age;
    double salary;

public:
    void Details()
    {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee age: ";
        cin >> age;
        salary = 0;
    }
    void display()
    {
        cout << "Id Is : " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Incremented Salary Is : " << salary << endl;
    }
    void setSalary()
    {
        cout << "Enter salary: ";
        cin >> salary;
    }
    int increment;
    int increaseSalary()
    {
        cout << "Enter increment: ";
        cin >> increment;
        salary = salary + increment;
        return salary;
    }
};
class Boss
{
public:
    void Month(Employee &e)
    {
        e.setSalary();
        e.increaseSalary();
    }
};
int main()
{
    Employee e;
    e.Details();
    Boss d;
    d.Month(e);
    e.display();
    return 0;
}