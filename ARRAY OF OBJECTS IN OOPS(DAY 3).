/* c++ OOPS
ARRAYS OF OBJECTS IN OOPS. */
/* Write a program to print the name, salary and date of joining of 10 employees in a company. Use array of objects.
 */
#include <iostream>
using namespace std;
class Employees
{
private:
    string name;
    int age;
    float salary;

public:
    void getEmployeeData();
    void DisplayEmployeeData();
};
void Employees::getEmployeeData()
{

    cout << "Please enter the employees's name:" << endl;
    cin >> name;
    cout << "Enter the employee's age:" << endl;
    cin >> age;
    cout << "Enter the salary:" << endl;
    cin >> salary;
}
void Employees::DisplayEmployeeData()
{
    cout << "Name:" << name << endl;
    cout << "age:" << age << endl;
    cout << "salary:" << salary << endl;
}
int main()
{
    Employees e[10];
    for (int i = 0; i < 10; i++)
    {
        e[i].getEmployeeData();
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Details of Employee " << i + 1 << ":\n";
        e[i].DisplayEmployeeData();
        cout << endl;
    }
    return 0;
}
