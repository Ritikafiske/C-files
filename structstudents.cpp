#include <iostream>
#include <string>
using namespace std;
struct Student
{
 string name;
 string rollno;
 string degree;
 string hostel;
 float currentCGPA;
 void addDetails()
{
 cout << "Enter Name: ";
 getline(cin, name);
 fflush(stdin);
 cout << "Enter Roll No: ";
 getline(cin, rollno);
 fflush(stdin);
 cout << "Enter Degree: ";
 getline(cin, degree);
 fflush(stdin);
 cout << "Enter Hostel: ";
 getline(cin, hostel);
 fflush(stdin);
 cout << "Enter Current CGPA: ";
 cin >> currentCGPA;
 fflush(stdin);
 }
 void updateDetails()
{
 cout << "Enter new Name: ";
 getline(cin, name);
 fflush(stdin);
 cout << "Enter new Roll No: ";
 getline(cin, rollno);
 fflush(stdin);
 cout << "Enter new Degree: ";
 getline(cin, degree);
 fflush(stdin);
 cout << "Enter new Hostel: ";
 getline(cin, hostel);
 fflush(stdin);
 }
 void updateCGPA()
{
 cout << "\nEnter updated CGPA: ";
 cin >> currentCGPA;
 fflush(stdin);
 }
 void updateResidenceInfo()
{
 cout << "\nEnter new Hostel: ";
 getline(cin, hostel);
 fflush(stdin);
 }
 void displayDetails()
{
 cout << "Name: " << name << endl;
 cout << "Roll No: " << rollno << endl;
 cout << "Degree: " << degree << endl;
 cout << "Hostel: " << hostel << endl;
 cout << "Current CGPA: " << currentCGPA << endl;
 }
};
int main()
{
 Student student;
 student.addDetails();
 cout << "\nStudent Details:\n";
 student.displayDetails();
 student.updateDetails();
 student.updateCGPA();
 student.updateResidenceInfo();
 cout << "\nUpdated Student Details:\n";
 student.displayDetails();
}
