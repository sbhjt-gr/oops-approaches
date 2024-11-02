/* Write a program to create a class Father with data member name and age, one member function void show() to display name and age of father. Inherit Son class from Father class. Son has its own data member name , age, mobileno and member function void show() to display Son’s name and age and int getmobileno() function which returns mobileno of Son. Use constructor to initialize all data members. Use base class pointer to display father as well as son’s information. What is the output?
 Then modify your code by using concept of runtime polymorphism and print the expected result. */

#include<iostream>
#include<string>

using namespace std;

 class Father {
    protected:
        string name;
        int age;
    public:
        Father(string n, int a) : name(n), age(a) {}
        virtual void show() {
            cout << "Father name: " << name << endl;
            cout << "Father age: " << age << endl;
        }
 };

 class Son : public Father {
    private:
        string mobile_no;
    public:
        Son(string n, int a, string mn) : Father(n, a), mobile_no(mn) {}
        void show() override {
            cout << "Son name: " << name << endl;
            cout << "Son age: " << age << endl;
            cout << "Son mobile number: " << mobile_no << endl;
        }
        string getmobileno() {
            return mobile_no;
        }
 };

 int main() {
    Father* father = new Father("Dhirendranath Gorai", 60);
    Father* son = new Son("Subhajit Gorai", 30, "7047179573");
    father->show();
    son->show();
    delete father;
    delete son;
    return 0;
 }
