#include <iostream>
using namespace std;
class c2;
class c1
{
    int value1;
    friend void swap(c1 &a, c2 &b);

public:
    void setdata(int x)
    {
        value1 = x;
    }
    void dispdata(void)
    {
        cout << "value is:" << value1 << endl;
    }
};
class c2
{
    int value2;
    friend void swap(c1 &a, c2 &b);

public:
    void setdata(int y)
    {
        value2 = y;
    }
    void dispdata(void)
    {
        cout << "value is:" << value2 << endl;
    }
};
void swap(c1 &a, c2 &b)
{
    int temp;
    temp = a.value1;
    a.value1 = b.value2;
    b.value2 = temp;
}
int main()
{
    c1 o1;
    c2 o2;
    o1.setdata(3);
    o2.setdata(5);
    swap(o1, o2);
    cout << "The value of o1 after swap is:"  << endl;
    o1.dispdata();
    cout << "The value of o2 after swap is:" << endl;
    o2.dispdata();
    return 0;
}
