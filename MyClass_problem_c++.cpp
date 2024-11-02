/* Create a class MyClass which has member variable x of integer type and have the following constructors:

 MyClass( ) // Default
 MyClass(int)// Parameterized
 MyClass(MyClass &amp;) // Copy
 Destructor ~ MyClass()
 Member function to display value of x

 Create global objects, objects local to a function, objects local to main and object copy of another objects.

 Write suitable code to show how multiple no of objects are created and destroyed in the program. Display appropriate message which constructor is called using object creation.

 Write down observations the order the objects are created and destroyed. 
 
 Modify program by using the concept of pointer to objects. Create dynamic object using new operator and use delete for destruction for the class Myclass.
*/

#include <iostream>

using namespace std;

class MyClass {
    private:
        int x;
    public:
        MyClass() : x(0) {
            cout << "Default constructor called." << endl;
        }
        MyClass(int val) : x(val) {
            cout << "Parameterized constructor called." << endl;
        }
        MyClass(const MyClass &other) : x(other.x) {
            cout << "Copy constructor called." << endl;
        }
        ~MyClass() {
            cout << "Destructor called for MyClass." << endl;
        }
        void display() const {
            cout << "Value of x: " << x << endl;
        }
};

MyClass globalObject(1);

void functionWithLocalObject() {
    cout << "Entering functionWithLocalObject()" << endl;
    MyClass localToFunction(2);
    localToFunction.display();
    cout << "Exiting functionWithLocalObject()" << endl;
}

int main() {
    cout << "Entering main()" << endl;

    cout << "Displaying global object:" << endl;
    globalObject.display();

    MyClass defaultObject;
    defaultObject.display();

    MyClass localToMain(3);
    localToMain.display();

    MyClass copyOfLocal(localToMain);
    copyOfLocal.display();

    functionWithLocalObject();

    MyClass* dynamicObject = new MyClass(4);
    dynamicObject->display();

    delete dynamicObject;
    
    cout << "Exiting main()" << endl;

    return 0;
}
