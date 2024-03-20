#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    string *courses;
    int totalcources;

public:
    const int id;
    static int totalStudents;

    Student(const string &name, const int id, const string *courses, const int totalcources)
        : name(name), id(id), totalcources(totalcources)
    {
        this->courses = new string[totalcources];
        for (int i = 0; i < totalcources; ++i)
        {
            this->courses[i] = courses[i];
        }
        // int Student::totalStudents = 0;

        totalStudents++;
    }

    void display()
    {
        cout << endl
             << "student name: " << name << endl;
        cout << "id: " << id << endl;
        cout << "cources: ";
        for (int i = 0; i < totalcources; ++i)
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
    string course1[] = {"maths", "bio", "computer"};
    Student student1("ali", 1001, course1, 3);
    string course2[] = {"english", "urdu"};
    Student student2("khalil", 1002, course2, 2);

    student1.display();

    // student1.id = 2231; cant change the constant value
    student2.display();

    cout << endl
         << "Total Students: " << Student::getTotalStudents() << endl; 

    return 0;
}
