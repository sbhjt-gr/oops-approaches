Create a class MyClass which has member variable x of integer type and have the
following constructors
MyClass( ) // Default
MyClass(int)// Parameterized
MyClass(MyClass &amp;) // Copy
destructor ~ MyClass()
member function to display value of x
Create global objects, objects local to a function, local to main and object copy of another objects.
Write suitable code to show how multiple no of objects are created and destroyed in
the program. Display appropriate message which constructor is called using object creation.
Write down observations the order the objects are created and destroyed. Modify program by using
the concept of pointer to objects. Create dynamic object using new operator and use delete for
destruction for the class Myclass.

=>

#include <iostream>

class MyClass {
public:
    int x;

    // Default constructor
    MyClass() : x(0) {
        std::cout << "Default constructor called. x = " << x << std::endl;
    }

    // Parameterized constructor
    MyClass(int val) : x(val) {
        std::cout << "Parameterized constructor called. x = " << x << std::endl;
    }

    // Copy constructor
    MyClass(const MyClass& other) : x(other.x) {
        std::cout << "Copy constructor called. x = " << x << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called. x = " << x << std::endl;
    }

    // Member function to display value of x
    void display() const {
        std::cout << "Value of x: " << x << std::endl;
    }
};

// Function to create a local object
void createLocalObject() {
    MyClass localObj(20);
    localObj.display();
}

int main() {
    static MyClass globalObj;
    
    MyClass mainObj(10);
    mainObj.display();

    createLocalObject();

    MyClass copiedObj(mainObj);
    copiedObj.display();

    MyClass* dynamicObj = new MyClass(30);
    dynamicObj->display();
    delete dynamicObj; // Deleting the dynamically allocated object

    return 0;
}
