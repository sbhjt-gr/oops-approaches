/* Write a program which uses three command-line arguments to initialize an array. When the program executes, if args.length is not 3, the program prints an error message and terminates, otherwise, it initializes and displays the array based on the values of the command-line arguments. The args[ 0 ] specifies the array size, args[ 1 ] and args[ 2 ] are initial value and increment respectively. Calculate the value for each array element */

 #include <iostream>
 using namespace std;

 int main(int argc, char* argv[]) {
    
    if(argc == 4) {
        int size = stoi(argv[1]);
        int initial = stoi(argv[2]);
        int increment = stoi(argv[3]);
        int *arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = initial + (i * increment);
        }
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "Provide command line argument first." << endl;
    }
    return 0;
 }
