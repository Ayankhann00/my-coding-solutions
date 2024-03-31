
#include <iostream>
using namespace std;
class MyString
{
private:
    string s1, s2;

public:
    MyString(string str1 = " ", string str2 = " ") : s1(str1), s2(str2) {}
    MyString operator+(const MyString &s)
    {

        return MyString(s1 + s.s2, " ");
    }
    void display() const
    {
        cout << "The string concatenated string :" << s1 << s2 << endl;
    }
};
int main()
{
    MyString M("AYAAN", "KHAN");
    MyString Concatenation = M + M;
    Concatenation.display();

    return 0;
}
