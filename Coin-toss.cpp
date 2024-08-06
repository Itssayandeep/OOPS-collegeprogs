#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
class coin
{
private:
    string call;
    string outcome;

public:
    void makecall()
    {
        cout << "Enter your call(head/tail)" << endl;
        cin >> call;
    }
    void toss()
    {
        srand(time(0));
        int random = rand() % 2;
        if (random == 0)
        {
            outcome = "head";
        }
        else
        {
            outcome = "tail";
        }
    }
    void analyze()
    {
        if (call == outcome)
        {
            cout << "You won!" << endl;
        }
        else
        {
            cout << "You lost!" << endl;
        }
    }
    void declare()
    {
        cout << "The outcome is: " << outcome << endl;
    }
};
int main()
{
    coin c1;
    c1.makecall();
    c1.toss();
    c1.analyze();
    c1.declare();
    return 0;
}
