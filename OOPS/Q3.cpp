// Class student has member variable roll, a setter method and a display method for roll. Class ‘test’ inherits from class ‘student’ and has variable marks, a setter and a display method for marks. Class sports also inherits from student and has a variable ‘score’, a setter method and a display method which displays score. Class result inherits from class test and class sports, has a variable total= marks+ roll and displays score, marks ,roll and total.
#include <iostream>
using namespace std;
class Student
{
private:
    int roll;

public:
    Student(int r) : roll(r) {};
    void setr(int r)
    {
        roll = r;
    }
    void getr()
    {
        cout << "Roll no." << roll << endl;
    }
};
class test : virtual public Student
{
private:
    int marks;

public:
    test(int r, int m) : Student(r), marks(m) {};
    void setm(int m)
    {
        marks = m;
    }
    void getm()
    {
        cout << "Marks of the student " << marks << endl;
    }
};
class sports : virtual public Student
{
private:
    int score;

public:
    sports(int r, int s) : Student(r), score(s) {};
    void sets(int s)
    {
        score = s;
    }
    void gets()
    {
        cout << "score" << score << endl;
    }
};
class result : public test, public sports
{
private:
    int total;

public:
    result(int m, int r, int s) : Student(r), test(r, m), sports(r, s)
    {
        total = m + s;
    };
    

    void display()
    {
        gets();
        getm();
        getr();
        cout << "total" << total << endl;
    }
};
int main()
{
    int roll, marks, score;
    cout << "enter roll" << endl;
    cin >> roll;
    cout << "enter marks" << endl;
    cin >> marks;
    cout << "enter score" << endl;
    cin >> score;
    result r(roll, marks, score);
    r.display();
    return 0;
}