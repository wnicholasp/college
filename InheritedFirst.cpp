#include<iostream>
#include<string>
#include<sstream>
using namespace std;
// Class defined as person
class Person{
  //Instance Variables of the Class
   string Adhaar, ContactNumber, age;
   string Name;
 public:
   //Function to read the person information
   void ReadPerson(){
     cin.ignore();
     cout<<"Enter Adhaar Number: ";
     getline(cin,Adhaar);
     cout<<"Enter Contact Number: ";
     getline(cin,ContactNumber);
     cin.ignore();
     cout<<"Enter Age : ";
     getline(cin,age);
     cout << "Enter Name: ";
     getline(cin,Name);
   }
   void show(){
     //Function to show the Person's information
     cout<< "Adhaar Number is : "<< Adhaar<<'\n';
     cout<< "Contact Number is: " << ContactNumber<<'\n';
     cout<< "Age              : " << age<<'\n';
     cout<< "Name is          : " << Name<<'\n';
   }
};

// Class of Employee inherting the Person Class
class Employee {
   string Id; float Salary; string Post, Department;
public:
  // Function to read the Emplyee Class information
  void ReadEmployee(){
    cout << "Enter The ID" << '\n';
    getline(cin,Id);
    cout << "Enter the Department" << '\n';
    getline(cin,Department);
    cout << "Enter Post" << '\n';
    getline(cin,Post);
    cout << "Enter Salary" << '\n';
    cin >> Salary;
  }
  // Function to show the Employee and Person's information inherted
  void ShowEmployee(){
    cout << "ID Number is :" << Id <<'\n';
    cout << "Department is:" << Department << '\n';
    cout << "Post is      :" << Post << '\n';
    cout << "Salary is    :" << Salary <<'\n';
  }
};

class Manager : public Employee, public Person{
  string Department,numberofMembers,projectName;
public:
  void readManager(){
    cout<<"Enter The Department: "<<'\n';
    getline(cin,Department);
    cout << "Enter The Number of Members: " << '\n';
    getline(cin,numberofMembers);
    cout << "Enter the project Name" << '\n';
    getline(cin,projectName);
  }
  void showManager(){
    cout <<"the Number of Team Members"<<numberofMembers << '\n';
    cout <<"The Project Name is: "<<projectName << '\n';
  }
};

int main() {
  /* code */
  Manager firstEmployee;
  firstEmployee.ReadEmployee();
  firstEmployee.ReadPerson();
  firstEmployee.readManager();
  firstEmployee.ShowEmployee();
  firstEmployee.show();
  firstEmployee.showManager();
  return 0;
}
