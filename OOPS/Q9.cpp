// construction and destruction
#include <iostream>
using namespace std;
class sayandeep
{
private:
    string name;
    static int p, q;

public:
    sayandeep(string name)
    {
        p++;
        this->name = name;
        cout << name << "created" << endl;
    }
    ~sayandeep()
    {
        p--;
        q++;
        cout << name << "destroyed" << endl;
    }
};
int sayandeep::p=0;
int sayandeep::q=0;
int main()
{
    sayandeep obj1("object 1");
    sayandeep obj2("object 2");
    {
        sayandeep obj3("object 3");
        sayandeep obj4("object 4");
    }
    {
        sayandeep obj5("object 5");
    }
    sayandeep obj6("object 6");
    return 0;
}