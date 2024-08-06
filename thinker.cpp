#include<iostream>
#include<stdlib.h>
#include<string.h>
#include"Thinker.h"
using namespace std;
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