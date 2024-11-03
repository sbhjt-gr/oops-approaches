/*
 Use template to design and implement a generic class TARRAY that abstracts out a one dimensional C++ array. The class TARRAY should have the following properties and methods:

 • TARRAY(size_t size) – Constructor, allocates an array with the specified size 
 
 • TARRAY(const TARRAY& other) – Copy Constructor, allocates, does a deep copy of the elements

 • T&operator[](size_t index)- Returns the element at index, if valid, throws exception otherwise 
 
 • TARRAY&operator=(const TARRAY& other)– assignment operator, does a deep copy of the elements

 • size_t size() const- Returns the size of the array.

 • friend istream& operator>>(istream& is, TARRAY& arr)- Overload the extraction (>>) operator 
 
 • friend ostream& operator<<(ostream& os, const TARRAY& arr)- Overload the insertion (<<) operator

The following main function should run:

 int main() {
 TARRAY<int> intArray(4);
 TARRAY<string> wordArray(3), wordArray2(2);
 cin >> intArray; // input 4 integers as: 10, 20, 30, 40
 cin >> wordArray; // input 3 words as: hi hello greet
 TARRAY<int> intArray2 = intArray; // initialized through copy constructor call
 wordArray2 = wordArray; // assigned through assignment operator call
 cout << "intArray2: " << intArray2 << endl; // output expected: intArray2: [10 20 30 40] 
 cout << "wordArray2: " << wordArray2 << endl; // output expected: wordArray2: [hi hello greet] 
 return 0;
 }

*/

#include <iostream>
#include <string>
using namespace std;

template <typename T>

class TARRAY {
private:
    size_t size_;
    T* arr;
public:
    TARRAY(size_t size) {
        this->size_ = size;
        arr = new T[size];
    }
    TARRAY(const TARRAY& other) {
        this->size_ = other.size_;
        arr = new T[size_];
        for (size_t i = 0; i < size_; ++i) {
            arr[i] = other.arr[i];
        }
    }
    ~TARRAY() {
        delete[] arr;
    }
    T& operator [](size_t index) {
        if(index >= size_) {
            throw out_of_range("Index out of range");
        }
        return arr[index];
    }
    TARRAY& operator =(const TARRAY& other) {
        if (this != &other) {
            delete[] arr;
            this->size_ = other.size_;
            arr = new T[size_];
            for (size_t i = 0; i < size_; ++i) {
                arr[i] = other.arr[i];
            }
        }
        return *this;
    }
    size_t size() const {
        return size_;
    } 
    friend istream& operator >>(istream& is, TARRAY& arr) {
        for (size_t i = 0; i < arr.size_; ++i) {
            is >> arr.arr[i];
        }
        return is;
    }

    friend ostream& operator <<(ostream& os, TARRAY& arr) {
        os << "[";
        for (size_t i = 0; i < arr.size_; ++i) {
            os << arr.arr[i];
            if (i < arr.size_ - 1) os << " ";
        }   
        os << "]";
        return os;
    }
};

int main() {
    TARRAY<int> intArray(4);
    TARRAY<string> wordArray(3), wordArray2(2);

    cout << "Enter 4 integers: ";
    cin >> intArray;
    cout << "Enter 3 words: ";
    cin >> wordArray;

    TARRAY<int> intArray2 = intArray;
    wordArray2 = wordArray;

    cout << "intArray2: " << intArray2 << endl; 
    cout << "wordArray2: " << wordArray2 << endl; 
    
    return 0;
}
