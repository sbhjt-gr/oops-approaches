/*
Create a structure Student which has variables student_name of data type string, roll_no as
 integer and branch_name as character array and functions to accept and display student’s
 information.
*/

#include<iostream>
using namespace std;

struct Student {
    string student_name;
    int roll_no;
    char branch_name[50];
};

void StudentInfo(Student &s) {
    cout << "Enter student name: ";
    getline(cin, s.student_name);
    cout << "Enter student roll number: ";
    cin >> s.roll_no;
    cout << "Enter student branch: ";
    cin.ignore();
    cin.getline(s.branch_name, 50);
}

void Display(Student s) {
    cout << "Name: " << s.student_name << endl;
    cout << "Roll No.: " << s.roll_no << endl;
    cout << "Branch: " << s.branch_name << endl;
}

int main() {
    Student s;
    StudentInfo(s);
    Display(s);
    return 0;
}
