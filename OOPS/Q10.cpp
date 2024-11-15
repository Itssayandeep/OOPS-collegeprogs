//template function for multiplication and addition
#include<iostream>
using namespace std;
template<typename T>
T add (T a, T b){
    return a+b;
}
template<typename T>
T multiply (T a, T b){
    return a*b;
}
int main(){
    int intA=5, intB=10;
    double doubleA=2.5, doubleB=4.2;

    cout << "Multiplication of integers: " << multiply(intA, intB) << endl;
    cout << "Addition of integers " << add(intA, intB) << endl;

    cout << "Multiplication of integers: " << multiply(doubleA, doubleB)<<endl;
    cout << "Addition of integers " << add(doubleA, doubleB)<<endl;

    return 0;
}