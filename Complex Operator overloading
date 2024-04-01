
#include <iostream>
using namespace std;
class Complex
{
private:
    double real, imaginary;

public:
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}
    Complex operator+(const Complex &c)
    {
        return Complex(real + c.real, imaginary + c.imaginary);
    }
    Complex operator-(const Complex &c)
    {
        return Complex(real - c.real, imaginary - c.imaginary);
    }
    Complex operator*(const Complex &c)

        Complex operator*(const Complex &c)
    {
        double real_result = (real * c.real) - (imaginary * c.imaginary);
        double imaginary_result = (real * c.imaginary) + (imaginary * c.real);
        return Complex(real_result, imaginary_result);
    }

    friend ostream &operator<<(ostream &out, const Complex &c)
    {
        out << c.real << " + " << c.imaginary << "i";
        return out;
    }
};
int main()
{
    Complex c1(4, 5);
    Complex c2(5, 6);
    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    Complex product = c1 * c2;
    cout << "The sum is:" << sum << endl;
    cout << "THe difference is:" << difference << endl;
    cout << "The product is:" << product << endl;
    return 0;
}

#include <iostream>
using namespace std;
class Vector
{
    int x, y;

public:
    Vector(int a = 0, int b = 0) : x(a), y(b) {}
    Vector operator+(const Vector &point)
    {
        return Vector(x + point.x, y + point.y);
    }
    friend ostream &operator<<(ostream &os, const Vector &point)
    {
        os << "(" << point.x << "," << point.y << ")" << endl;
        return os;
    }
    void display()
    {
        cout << "The resultant vector after addition is:" << *this << endl;
    }
};
int main()
{
    Vector *v1 = new Vector(2, 3);
    Vector *v2 = new Vector(4, 5);

    Vector addition = *v1 + *v2;
    addition.display();
    delete v1;
    delete v2;

    return 0;
}
