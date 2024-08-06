#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class thinking_cap{
    private:
        char green_string[50];
        char red_string[50];
    public:
        void slots(char new_green[],char new_red[]);
        void push_green() const;
        void push_red() const;
};
void thinking_cap::slots(char new_green[], char new_red[])
{
    if(strlen(new_green)>50)
        {cout << "Error" << endl;}
    strcpy(green_string,new_green);
    strcpy(red_string,new_red);


}
void thinking_cap::push_green() const{
    cout << green_string << endl;
}
void thinking_cap::push_red() const{
    cout << red_string << endl;
}
int main()
{
    thinking_cap student;
    thinking_cap fan;
    student.slots("Hello","Goodbye");
    fan.slots("Go Team ", "Boo!");
    student.push_green();
    return 0;
}