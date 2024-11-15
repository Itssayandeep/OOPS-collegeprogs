// C++ program to overload the + operator to concatenate two string objects of user-defined class String having two member variables char* str and int len
#include <iostream>
#include <string.h>
using namespace std;
class String
{
private:
    char *str;
    int len;

public:
    String() { len = 0; };
    String(const char *s)
    {
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
    }
    String(const String &s)
    {
        len = strlen(s, str);
        str = new char[len + 1];
        strcpy(str, s, str);
    }
    string operator=(const String &s)
    {
        len = strlen(s, str);
        str = new char[len + 1];
        strcpy(str, s, str);
        return *this;
    }
    String operator+(const String &s)
    {
        String temp;
        temp.len = len + s.len;
        temp.str = new char[temp.len + 1]; // Allocate memory for the new concatenated string
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
    ~String(){
        delete[] str;
    }
    friend ostream & operator <<(ostream &, string &);
};
ostream & operator <<(ostream &out, String &ob)
{
    out << ob.str;
    return out;
}
int main(){
    String s1("Heritage"), s2("Institute");
    String s3=s1+s2;
    cout << s3;
    return 0;
}