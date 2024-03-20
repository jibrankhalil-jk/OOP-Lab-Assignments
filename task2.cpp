#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    static int totalStudents;
    const int studentID;
    string name;
    string *courses;
    int total_courses;

public:
    Student(string name, int id, const string *courses, int total_courses)
        : name(name), studentID(id), total_courses(total_courses)
    {
        this->courses = new string[total_courses];
        for (int i = 0; i < total_courses; ++i)
        {
            this->courses[i] = courses[i];
        }
        totalStudents++;
    }

    Student();

    ~Student()
    {
        delete[] courses;
        totalStudents--;
    }

    void displayInfo() const
    {
        cout << endl
             << "Student Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Courses: ";
        for (int i = 0; i < total_courses; ++i)
        {
            cout << courses[i] << " ";
        }
        cout << endl;
    }

    static int getTotalStudents()
    {
        return totalStudents;
    }
};

int Student::totalStudents = 0;

int main()
{

    int id, tcourses;
    string name;

    cout << "Enter student name:";
    getline(cin, name);
    cout << "Enter student id:";
    cin >> id;
    cout << "Enter total courses:";
    cin >> tcourses;
    string courses[tcourses];
    for (int i = 0; i < tcourses; i++)
    {
        cout << "Enter course " << i + 1 << " name : ";
        cin >> courses[i];
    }

    Student s1(name, id, courses, tcourses);
    Student s2("khalil", ++id, courses, tcourses);
    Student s3("ali", ++id, courses, tcourses);

    s1.displayInfo();
    s2.displayInfo();
    s3.displayInfo();

    cout << "Total Students: " << Student::getTotalStudents() << endl;

    return 0;
}
