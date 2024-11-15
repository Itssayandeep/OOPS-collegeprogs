#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {} // Default constructor with default arguments

    Complex operator+(const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void print() const {
        cout << real << "i+" << imag << endl;
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4), c3(4, 3), c4(5, 7);
    Complex c5 = c1 + c2 + c3 + c4;
    c5.print();
    return 0;
}
