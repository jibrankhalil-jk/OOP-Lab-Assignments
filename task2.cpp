#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
  int id;
  string name;
  string job_title;
  float no_of_hours_worked_per_week;

public:
  // setters
  void set_id(int id) { this->id = id; }
  void set_name(string name) { this->name = name; }
  void set_jobtitle(string job_title) { this->job_title = job_title; }
  void set_no_of_hours_worked_per_week(float no_of_hours_worked_per_week) { this->no_of_hours_worked_per_week = no_of_hours_worked_per_week; }
  // getters
  int get_id() { return id; }
  string get_name() { return name; }
  string get_jobtitle() { return job_title; }
  float get_no_of_hours_worked_per_week() { return no_of_hours_worked_per_week; }

  Employee() {}

  double cacl_Salary(double hourly_rate)
  {
     float salary = 0;
        if (no_of_hours_worked_per_week <= 40) {
            salary = no_of_hours_worked_per_week * hourly_rate;
        } else {
            salary = (40 * hourly_rate) + ((no_of_hours_worked_per_week - 40) * hourly_rate * 2);
        }
        return salary;
  }
};

int main()
{

  int total;
  cout << "Enter the total no of Employee to store: ";
  cin >> total;

  Employee employees[total];

  for (int i = 0; i < total; i++)
  {
    int id;
    string name;
    string job_title;
    float no_of_hours_worked_per_week;
    cout << "Enter Employee id:";
    cin >> id;
    employees[i].set_id(id);
    cout << "Enter Name:";
    cin.ignore();
    getline(cin, name);
    employees[i].set_name(name);
    cout << "Enter jobtitle:";
    cin.ignore();
    getline(cin, job_title);
    employees[i].set_jobtitle(job_title);
    cout << "Enter no of hours worked per week:";
    cin >> no_of_hours_worked_per_week;
    employees[i].set_no_of_hours_worked_per_week(no_of_hours_worked_per_week);
    cout<<endl;
  }


  cout<<endl;
  double houre_rate;
  cout<<"Enter hourly rate :";
  cin>>houre_rate;

  for (int i = 0; i < total; i++)
  {
     cout<<"Name : "<< employees[i].get_name()<<" salary :"<<employees[i].cacl_Salary(houre_rate)<<endl;

  }
  


  return 0;
}