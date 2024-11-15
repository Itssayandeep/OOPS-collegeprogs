//Exceptional handling in c++ 
//In a triangle, the sum of two sides is greater than the third. If we are given three values a,b,c then a+b>c; b+c>a;c+a>b.write a exception class of your own in c++ that will be thrown if any of the above conditions are not satisfied. Evaluate the area of triangle and output
#include<iostream>
#include<exception>
#include<cmath>
using namespace std;
class invalid: public exception{
    public:
        const char* what() const throw(){
            return "Sum of the two sides must be greater than the third side";
        }
};
double calculate (double a, double b, double c){
    if(a+b <= c || b+c<=a || c+a <= b){
        throw invalid();
    }
    double s=(a+b+c)/2;
    return sqrt (s*(s-a)*(s-b)*(s-c));
}
int main(){
    double a,b,c;
    cout << "Enter the sides"<< endl;
    cout << "side a :";
    cin >> a;
    cout << "side b :";
    cin >> b;
    cout << "side c :";
    cin >> c;
    try{
        double area = calculate(a,b,c);
        cout << "Area is :" << area << endl;

    }catch(exception& a){
        cout << a.what() <<endl;
    }
    return 0;
    
}

