// exceptional handling
#include <iostream>
#include <string>
using namespace std;
class vehicle
{
protected:
    string name;
    double mileage;
    double distance;
    double fuel;

public:
    void input()
    {
        try
        {
            cout << "Name of the vehicle" << endl;
            cin >> name;
            cout << "total distance covered" << endl;
            cin >> distance;
            if (distance <= 0)
            {
                throw runtime_error("Distance cannot be negative ");
            }
            cout << "fuel comsumed" << endl;
            cin >> fuel;
            if (fuel <= 0)
            {
                throw runtime_error("fuel cannot be negative ");
            }
        }
        catch (exception &a)
        {
            cout << a.what() << endl;
            exit(1);
        }
    }
    void display()
    {
        cout << "Name of the vehicle is " << name << endl;
        mileage = distance / fuel;
        cout << "Mileage is " << mileage << endl;
    }
};
class twoWheeler : public vehicle
{
private:
    double price;

public:
    void bike()
    {
        try
        {
            vehicle::input();
            vehicle::display();
            cout << "the price of the vehicle " << endl;
            cin >> price;
            if (price <= 0)
            {
                throw runtime_error("price cannot be negative ");
            }
            cout << "The price is " << price << endl;
        }
        catch (exception &a)
        {
            cout << a.what() << endl;
            exit(1);
        }
    }
};
class fourWheeler : public vehicle
{
private:
    double cost;

public:
    void car()
    {
        try
        {
            vehicle::input();
            vehicle::display();
            cout << "the cost of the vehicle " << endl;
            cin >> cost;
            if (cost <= 0)
            {
                throw runtime_error("cost cannot be negative ");
            }
            cout << "The price is " << cost << endl;
        }
        catch (exception &a)
        {
            cout << a.what() << endl;
            exit(1);
        }
    }
};
int main()
{
    try
    {
        twoWheeler obj1;
        fourWheeler obj2;
        int choice;
        cout << "Enter 1 for twowheeler or 2 for fourWheeler" << endl;
        cout << "Enter your choice " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            obj1.bike();
            break;
        case 2:
            obj2.car();
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
    catch (exception &a)
    {
        cout << "error" << a.what() << '\n';
        return 1;
    }

    return 0;
}
