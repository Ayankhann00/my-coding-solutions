#include <iostream>
using namespace std;
int sumOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + sumOfDigits(n / 10);
    }
}
int main()
{
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;
    cout << "The sum of digits of:" << num << "is:" << sumOfDigits(num) << endl;
    return 0;
}
//to calculate power of a base
#include <iostream>
using namespace std;
int findPower(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    else
    {
        return base * findPower(base, power - 1);
    }
}

int main()
{
    int b;
    int p;
    cout << "Input the base:" << endl;
    cin >> b;
    cout << "Input the power:" << endl;
    cin >> p;
    cout << "The calculated result is:"<< " " << findPower(b, p) << endl;
    return 0;
}
