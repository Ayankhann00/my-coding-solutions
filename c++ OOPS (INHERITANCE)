/* C++ INHERITANCE(OOPS) */
 #include <iostream>
using namespace std;
class A
{
public:
    void func(void)
    {
        cout << "Inheritence:" << endl;
    }
};
class B : public A
{
};
int main()
{
    B b;
    b.func();

    return 0;
} 
 #include <iostream>
using namespace std;

class ground
{
    int rooms;

protected:
    void put();

public:
    void get(int r);
    int getRooms() const; // Added a getter function for rooms
};

void ground::get(int r)
{
    rooms = r;
    cout << "Enter the number of rooms: " << rooms << endl;
}

int ground::getRooms() const
{
    return rooms;
}

class middle : private ground
{
    int labs;

public:
    void take();
    void give();
};

void middle::take()
{
    int r;
    cout << "Enter the number of rooms to pass to the base class: ";
    cin >> r;
    get(r); // Accessing the protected member function from the base class
    cout << "Enter the number of labs: ";
    cin >> labs;
}

void middle::give()
{
    put(); // Accessing the protected member function from the base class
    cout << "Number of rooms: " << getRooms() << endl;
    cout << "Number of labs: " << labs << endl;
}

class top : public middle
{
    int roof;

public:
    void in();
    void out();
};

void top::in()
{
    take(); // Accessing the member function from the derived class
    cout << "Enter the number of roofs: ";
    cin >> roof;
}

void top::out()
{
    give(); // Accessing the member function from the derived class
    cout << "Number of roofs: " << roof << endl;
}

int main()
{
    top t;
    t.in();
    t.out();

    return 0;
} 
 /*Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both the above classes. Now, create a function in each of these classes which prints "I am mammal", "I am a marine animal" and "I belong to both the categories: Mammals as well as Marine Animals" respectively. Now, create an object for each of the above class and try calling
1 - function of Mammals by the object of Mammal
2 - function of MarineAnimal by the object of MarineAnimal
3 - function of BlueWhale by the object of BlueWhale
4 - function of each of its parent by the object of BlueWhale */
#include <iostream>
using namespace std;

class Mammals
{
public:
    void mammals()
    {
        cout << "I am a mammal." << endl;
    }
};

class MarineAnimals
{
public:
    void marineanimals()
    {
        cout << "I am a marine animal." << endl;
    }
};

class BlueWhale : public Mammals, public MarineAnimals
{
public:
    void bluewhale()
    {
        cout << "I belong to both the categories: Mammals as well as Marine Animals." << endl;
    }
};

int main()
{
    BlueWhale BW;

    // 1 - function of Mammals by the object of Mammals
    Mammals MM;
    MM.mammals();

    // 2 - function of MarineAnimal by the object of MarineAnimal
    MarineAnimals MA;
    MA.marineanimals();

    // 3 - function of BlueWhale by the object of BlueWhale
    BW.bluewhale();

    // 4 - function of each of its parent by the object of BlueWhale
    BW.mammals();
    BW.marineanimals();

    return 0;
}
#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    float salary;

    void getdata(int i, float s)
    {
        id = i;
        salary = s;
    }
};
class Programmer : public Employee
{
private:
    string name;

public:
    void getname(string n)
    {
        name = n;
    }
    void display()
    {
        cout << id << endl;
        cout << salary << endl;
        cout << name << endl;
    }
};

int main()
{
    Employee Ayan;
    Ayan.getdata(5, 3);
    cout << Ayan.id << endl;
    cout << Ayan.salary << endl;
    Programmer Ahmed;
    Ahmed.getname("ahmed");
    Ahmed.display();

    return 0;
}

#include <iostream>
using namespace std;

class studentmarks
{
protected:
    int rollno;

public:
    void set_marks(int);
    void get_marks(void);
};

void studentmarks::set_marks(int r)
{
    rollno = r;
}

void studentmarks::get_marks()
{
    cout << "The rollno is: " << rollno << endl;
}

class ExamStudent : public studentmarks
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void ExamStudent::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}

void ExamStudent::get_marks()
{
    cout << "The maths marks is: " << maths << endl;
    cout << "The physics marks is: " << physics << endl;
}

class Result : public ExamStudent
{
protected:
    float percentage;

public:
    void calculate_percentage();
    void get_marks();
};

void Result::calculate_percentage()
{
    percentage = (maths + physics) / 2;
}

void Result::get_marks()
{
    cout << "The percentage is: " << percentage << "%" << endl;
}

int main()
{
    studentmarks s;
    s.set_marks(5);
    s.get_marks();

    ExamStudent e;
    e.set_marks(8, 7);
    e.get_marks();

    Result r;
    r.calculate_percentage();
    r.get_marks();

    return 0;
}
