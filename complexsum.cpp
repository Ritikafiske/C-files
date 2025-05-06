#include <iostream>
using namespace std;

class Complex {
private:
    float real;       
    float imaginary;  

public:
    void set(float r, float i) {
        real = r;
        imaginary = i;
    }
    void display() const {
        cout << real << " + " << imaginary << "i" << endl;
    }

    Complex add(const Complex& other) const {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }
};
int main() {
    Complex c1, c2, sum;
    c1.set(3.4, 2.5);    
    c2.set(1.6, 4.5);
    sum = c1.add(c2);
    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    cout << "Sum of complex numbers: ";
    sum.display();
    return 0;
}
