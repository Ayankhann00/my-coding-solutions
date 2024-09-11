//this pointer in oops c++
#include <iostream>
using namespace std;
class A{
protected:
int a;
public:
void setdata(int a){
    this->a=a;
}
void getdata(void){
    cout<<"value of A is"<<a<<endl;
}
};


int main()
{
A x;
A*ptr=new A;
(*ptr).setdata(4);
ptr->getdata();
delete ptr;
    return 0;
}
