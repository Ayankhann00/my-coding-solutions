//c++ oops pure virtual function and abstract classes
#include <iostream> 
using namespace std; 
class Test { 
protected: 
	int width, height; 

public: 
	void set_values(int a, int b) 
	{ 
		width = a; 
		height = b; 
	} 
	virtual int area(void) = 0; 
}; 
class r : public Test { 
public: 
	int area(void) 
	{ 
	return (width * height); 
	} 
}; 
class t : public Test { 
public: 
	int area(void) 
	{ 
		return (width * height / 2); 
	} 
}; 
int main() 
{ 
	r rect; 
	t trgl; 
	Test* ppoly1 = &rect;
	Test* ppoly2 = &trgl; 
	ppoly1->set_values(4, 5); 
	ppoly2->set_values(4, 5); 
	cout << ppoly1->area(); 
	cout << ppoly2->area(); 
	return 0; 
} 
