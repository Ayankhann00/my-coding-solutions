#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 100;
const int NUM_SUBJECTS = 5; // Assuming 5 subjects

struct Student
{
    int studentID;
    string name;
    int marks[5];   // student marks.
    double average; // Add the 'average' field
};

double CalculateAverage(const int marks[], int index, int totalMarks)
{
    if (index == 0)
    {
        return 1;
    }
    else
    {
        // Recursive case: summing up marks
        return CalculateAverage(marks, index - 1, totalMarks + marks[index]);
    }
}

void InputInformation(Student arr[], int n)
{
    // information of students.
    for (int i = 0; i < n; i++)
    {
        cout << "Input information for student " << i + 1 << ":\n";
        cout << "Input the student ID of students :" << endl;
        cin >> arr[i].studentID;
        cout << "Enter the name:" << endl;
        cin.ignore(); // To clear the newline character left in the buffer
        getline(cin, arr[i].name);
        cout << "Enter the marks:" << endl;
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i].marks[j];
        }

        // Calculate and assign the average
        arr[i].average = CalculateAverage(arr[i].marks, 4, 0);
    }
}

void DisplayStudentData(const Student arr[], int n)
{
    cout << "\nStudent Information:\n";
    cout << "--------------------------------------------------------\n";
    cout << "ID      | Name               | Marks            | Average\n";
    cout << "--------------------------------------------------------\n";

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i].studentID << "   | " << arr[i].name;

        // Adjusting spaces based on name length
        for (int space = arr[i].name.length(); space < 20; ++space)
        {
            cout << " ";
        }

        cout << "| ";

        for (int j = 0; j < 5; ++j)
        {
            cout << arr[i].marks[j] << " ";
        }

        // Calculate and display average
        double average = CalculateAverage(arr[i].marks, 4, 0);
        cout << "| " << average << endl;
    }

    cout << "--------------------------------------------------------\n";
}

void DisplayHighestScorer(const Student arr[], int n)
{
    int HighestIndex = 0;
    double HighestAverage = CalculateAverage(arr[0].marks, 4, 0);

    for (int i = 1; i < n; i++)
    {
        double currentAverage = CalculateAverage(arr[i].marks, 4, 0);
        if (currentAverage > HighestAverage)
        {
            HighestIndex = i;
            HighestAverage = currentAverage;
        }
    }

    cout << "\nStudent with the highest average is:\n";
    cout << "Student ID: " << arr[HighestIndex].studentID << endl;
    cout << "Name: " << arr[HighestIndex].name << endl;
    cout << "Average marks: " << HighestAverage << endl;
}

void SearchStudentbyTargetID(const Student arr[], int n, int TargetID)
{
    bool StudentIDfound = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i].studentID == TargetID)
        {
            StudentIDfound = true;
            cout << "\nStudent with ID " << TargetID << " found:\n";
            cout << "Name: " << arr[i].name << endl;
            cout << "Marks: ";
            for (int j = 0; j < 5; ++j)
            {
                cout << arr[i].marks[j] << " ";
            }
            cout << endl;
            break; // Exit the loop after finding the student.
        }
    }

    if (!StudentIDfound)
    {
        cout << "\nStudent with ID " << TargetID << " not found.\n";
    }
}

void swap(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}

void sortAverageInDescendingOrder(Student arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j].average < arr[j + 1].average)
            {
                swap(&arr[j].average, &arr[j + 1].average);
            }
        }
    }
}

int main()
{
    Student Students[MAX_STUDENTS];

    int n;
    cout << "Enter the number of students:" << endl;
    cin >> n;

    if (n <= 0 || n > MAX_STUDENTS)
    {
        cout << "Invalid number of students. Exiting program." << endl;
        return 1; // Exit with an error code
    }

    InputInformation(Students, n);

    // Display information for each student
    DisplayStudentData(Students, n);

    // Display information of the student with the highest average
    DisplayHighestScorer(Students, n);

    // Search for a student by ID
    int TargetID;
    cout << "\nEnter the student ID to search for:" << endl;
    cin >> TargetID;
    SearchStudentbyTargetID(Students, n, TargetID);

    // Sort students based on average marks in descending order
    sortAverageInDescendingOrder(Students, n);

    return 0;
}
#include <iostream>
using namespace std;

struct student
{
private:
    string Name;
    int regNo;
    float Sessional_Marks;
    float Mid_Marks;
    float Final_Marks;
    float Total_Marks;
    string grade;

public:
    void init_values()
    {
        int n;
        cout << "Enter the number of students:" << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the name of student:" << i + 1 << endl;
            cin >> Name;
            cout << "Enter the regNo:" << endl;
            cin >> regNo;
            cout << "Enter the sessional marks:" << endl;
            cin >> Sessional_Marks;
            cout << "Enter the Mid term marks:" << endl;
            cin >> Mid_Marks;
            cout << "Enter the final term marks:" << endl;
            cin >> Final_Marks;
            Total_Marks = Sessional_Marks + Mid_Marks + Final_Marks;
            find_Grade();
        }
    }
    void find_Grade()
    {
        if (Total_Marks >= 90)
        {
            grade = "A";
        }
        else if (Total_Marks >= 80 && Total_Marks <= 89)
        {
            grade = "A-";
        }
        else if (Total_Marks >= 70 && Total_Marks <= 79)
        {
            grade = "B";
        }
        else
        {
            grade = "F";
        }
    }
    void display_record()
    {
        cout << "name:" << Name << endl;
        cout << "Registration number:" << regNo << endl;
        cout << "Sessional Marks:" << Sessional_Marks << endl;
        cout << "Mid Term Marks:" << Mid_Marks << endl;
        cout << "Final Term Marks:" << Final_Marks << endl;
        cout << "Total Marks:" << Total_Marks << endl;
        cout << "Grade is :" << grade << endl;
    }
};

int main()
{

    student record;
    record.init_values();
    record.display_record();
    return 0;
}
