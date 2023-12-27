#include <iostream>
#include <string> //string library
#include <cmath>  // math library
#include <fstream> // file handling
using namespace std;

string fullName(string firstName, string lastName)
{
    return firstName + " " + lastName;
}

class Car {
    public:
        int numWheels;
        string color;
        bool electric;

        Car()
        {

        }

        Car (int numWheels, string color, bool electric) {
            numWheels = numWheels;
            color = color;
            electric = electric;
        }

        void setNumWheels(int w) {
            numWheels = w;
        }

        void setColor(string c) {
            cout << "original color = " << color;
            color = c;
            cout << ", new color = " << color;
        }

        void setElectric(bool e) {
            electric = e;
        }
     
        int getNumWheels() {
            return numWheels;
        }

        string getColor() {
            return color;
        }

        bool getElectric() {
            return electric;
        }
};

int main()
{
    cout << "LearnC++.cpp\n"; // Comments

    // Variables --> "<<" is used as a "+" in cout statements
    int i = 1;
    double d = 1.0;
    string s = "s";
    char c = 'c';
    bool b = true;
    cout << i << " " << d << " " << s << " " << c << " " << b << "\n";

    // User Input
    int num1;
    cout << "Input num1: ";
    cin >> num1;
    cout << "num1 = " << num1 << "\n";

    // Operators
    int num2;
    cout << "Input num2: ";
    cin >> num2;
    cout << "num2 = " << num2 << "\n";
    int sum = num1 + num2;
    cout << "sum = " << sum << "\n";
    
    // string length
    cout << "s.length = " << s.length() << "\n";

    // Math
    cout << "max(num1, num2) = " << max(num1, num2) << "\n";
    cout << "min(num1, num2) = " << min(num1, num2) << "\n";
    cout << "sqrt(64) = " << sqrt(64) << "\n";
    cout << "round(2.6) = " << round(2.6) << "\n";
    cout << "log(2) = " << log(2) << "\n";

    // If else
    if (num1 > num2)
        cout << "num1 > num2\n";
    else if (num1 < num2)
        cout << "num1 < num2\n";
    else if (num1 == num2)
        cout << "num1 = num2\n";
    else
        cout << "ERROR\n";

    // Switch
    int randomDay = (rand() % 7) + 1;
    switch (randomDay) {
        case 1:
            cout << "Monday - " << randomDay << "\n";
            break;
        case 2:
            cout << "Tuesday - " << randomDay << "\n";
            break;
        case 3:
            cout << "Wednesday - " << randomDay << "\n";
            break;
        case 4:
            cout << "Thursday - " << randomDay << "\n";
            break;
        case 5:
            cout << "Friday - " << randomDay << "\n";
            break;
        case 6:
            cout << "Saturday - " << randomDay << "\n";
            break;
        case 7:
            cout << "Sunday - " << randomDay << "\n";
            break;
        default:
            cout << "Unknown day\n";
            break;
    }

    // While loop
    int x = 0;
    cout << "While loop: ";
    while (x < 5) {
        cout << x << " ";
        x++;
    }

    // Do while loop
    x = 0;
    cout << "\nDo while loop: ";
    do {
        cout << x << " ";
        x++;
    } while (x < 5);

    // For loop
    cout << "\nFor loop: ";
    for (int i = 0; i < 5; i++)
        cout << i << " ";

    //Arrays
    string fruits[5] = { "apple", "orange", "strawberry", "banana", "blueberry" };
    cout << "\nsizeof(fruits) = " << sizeof(fruits) << " bytes\n"; // sizeof(E val) returns amount of bytes
    cout << "size(fruits) = " << size(fruits) << " elements\n";
    for (int i = 0; i < size(fruits); i++)
        cout << fruits[i] << " ";

    // Struct - way to create a small inner class for an object
    struct book {
        string title;
        string author;
        int numPages;
        int numChapters;
        bool fiction;
    } book1;

    book1.title = "Harry Potter & the Deathly Hallows";
    book1.author = "J.K. Rowling";
    book1.numPages = 978;
    book1.numChapters = 27;
    book1.fiction = true;

    cout << "\nbook1 data = " << book1.title << ", " << book1.author << ", " << book1.numPages << ", " << book1.numChapters << ", " << book1.fiction << "\n";

    // References & Memory Address
    string favFood = "pizza";
    string &reference = favFood;
    cout << "Reference = " << reference << "\n";
    cout << "Memory Address = " << &favFood << "\n";

    // Pointers - is a variable that stores the memory address as its value
    string* pointer = &favFood;
    cout << "Pointer = " << pointer << "\n";
    cout << "Deference = " << *pointer << "\n"; // dereferencing outputs value of favFood with respect ot the pointer

    // Methods
    cout << "fullName(firstName, lastName) = " << fullName("Om", "Janamanchi") << "\n";

    // Classes
    Car tesla;
    tesla.numWheels = 4;
    tesla.color = "white";
    tesla.electric = true;
    cout << "Tesla = " << tesla.numWheels << ", " << tesla.color << ", " << tesla.electric << "\n";
    tesla.setColor("red");
    Car mclaren(4, "blue", true);

    // Files
    ofstream MyFile("filename.txt"); // create and open txt file
    MyFile << "writing to filename.txt"; // write to file
    MyFile.close(); // close file
}