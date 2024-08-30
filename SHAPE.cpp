#include<iostream>
using namespace std;
class shape{
    public:
    virtual double area()=0;
    virtual double perimeter() =0;
};
class square : public shape{
    private:
    double side;
    public:
    square(double s) : side(s) {};
    double area(){
        return side*side;
    }
    double perimeter(){
        return 4*side;
    }
};
class rectangle : public shape{
    private:
    double length, breadth;
    public:
    rectangle (double l , double b) : length(l), breadth(b) {};
    double area(){
        return length*breadth;
    }
    double perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    shape *ptr;
    double side,length,breadth;
    int choice;
    cout << "Enter the choice" << endl;
    cin >> choice;
    if(choice==1){
        cout << "Enter the side of square "<< endl;
        cin >> side;
        ptr= new square(side);
    }
    else if(choice==2){
        cout << "Enter the length of rectangle "<< endl;
        cin >> length;
        cout << "Enter the breadth of rectangle "<< endl;
        cin >> breadth;
        ptr= new rectangle(length,breadth);
    }
    else{
        cout << "Invalid choice"<< endl;
        return 1;
    }
    cout << "Area: " << ptr->area() << endl;
    cout << "Perimeter: " << ptr->perimeter() << endl;
    delete ptr;
    return 0;

}