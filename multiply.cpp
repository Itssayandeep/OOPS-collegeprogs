#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
template <class C>
class multiplier
{
public:
    C multiply(C a, C b)
    {
        cout << "Result is: " << a * b << endl;
    }
};
int main()
{
    int c;
    do
    {
        cout << "1. Int" << endl;
        cout << "2. Double" << endl;
        cout << "3. Stop" << endl;
        cout << "Enter the choice : ";
        cin >> c;
        switch (c)
        {
        case 1:
            int ip1, ip2;
            cout << "Enter first number : ";
            cin >> ip1;
            cout << "Enter second number : ";
            cin >> ip2;
            multiplier<int> P;
            P.multiply(ip1, ip2);
            break;
        case 2:
            double num1, num2;
            cout << "Enter first number : ";
            cin >> num1;
            cout << "Enter second number : ";
            cin >> num2;
            multiplier<double> Q;
            Q.multiply(num1, num2);
            break;
        case 3:
            cout << "Exiting..." << endl;
            exit(0);
        default:
            cout << "Invalid choice" << endl;
        }
    } while (c != 0);
    return 0;
}