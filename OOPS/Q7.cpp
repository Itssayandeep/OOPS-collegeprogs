// Publication of books
#include <iostream>
using namespace std;
class publication
{
private:
    string title;
    double price;

public:
    publication(string t = "hello", int p = 0) : title(t), price(p) {};
    void inputpub()
    {
        cout << "Enter the book title " << endl;
        cin >> title;
        cout << "Enter the book price" << endl;
        cin >> price;
    }
    string gett()
    {
        return title;
    }
    double getp()
    {
        return price;
    }
};
class sales
{
private:
    int noc;
    int sold;

public:
    sales(int c = 0, int s = 0) : noc(c), sold(s) {};
    void inputsales()
    {
        cout << "Enter the no of copies " << endl;
        cin >> noc;
        cout << "Enter the no of sold copies" << endl;
        cin >> sold;
    }
    int getc()
    {
        return noc;
    }
    int gets()
    {
        return sold;
    }
};
class book
{
private:
    int nop;
    publication obj1;
    sales obj2;

public:
    book(string t = "hello", int p = 0, int c = 0, int s = 0, int n = 0) : obj1(t, p), obj2(c, s), nop(n) {};
    void inputbook()
    {
        obj1.inputpub();
        obj2.inputsales();
        cout << "Enter the no of pages" << endl;
        cin >> nop;
    }
    void getbook()
    {
        cout << "title" << obj1.gett() << endl;
        cout << "price" << obj1.getp() << endl;
        cout << "printed copies" << obj2.getc() << endl;
        cout << "sold copies" << obj2.gets() << endl;
        cout << "no of pages are " << nop << endl;
    }
};
int main()
{
    book b;
    b.inputbook();
    b.getbook();
    return 0;
}