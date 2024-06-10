# Object-Oriented Programming (OOP) Summary

## Introduction
In OOP, you are focused on creating an object and basing things around it. For example, if you have a car, a car is an object but it has certain specifications like year and make. In C++, you can define this by using a class and then you name your class. For example, `class car` and then inside this class, you can create member variables that are part of this class, for example, `make`, and `year`.
```cpp
// Class and Objects
class Car {
    public:
        string make;
        int year;
};

Car car1;
car1.make = "BMW";
car1.year = 2020;

## Access Specifiers
In C++, when you create a class, you have something called access specifiers. These are basically telling C++ if you can access that certain type of information outside of that specified class. This is important to keep certain information secure.
```cpp
// Member Functions
class Car {
    public:
        string make;
        int year;
        void print() {
            cout << "This is a " << make << " from " << year << endl;
        }
};

## Objects
Now that a class is defined in our example "car", objects are individual instances of classes. For example, we defined our class as "car" and members as "make" and "year". Now we can create an object like so `car car1;` now we can access the members by doing so `car1.make= "BMW";` now we accessed a member variable and assigned the value of BMW to it. We can create as many objects as we want, you can picture it as a house being built from a blueprint.

## Member Functions
Now that we have defined that we can create as many objects from our class as we want, we can simplify this and create something called member functions. For example, instead of typing out `cout << "This is a" << car1.year << car1.year << endl;`, you can make a function like `void print () { << "This is a" << year << year << endl;} };` these eliminate repetition and help clean out code, you can create any type of function that you may need it does not need to be a print function. Another way to refer to functions in OOP is methods.

## Constructors
There is a special type of member function in OOP and they are called constructors. These are called when an object is created. These will do the setup work of an object and will initialize the member variables.
```cpp
// Constructors
class Car {
    public:
        string make;
        int year;
        Car(string x, int y) {
            make = x;
            year = y;
        }
};

## Encapsulation
In OOP, there is something called encapsulation. This is basically where you manipulate private and public access specifiers to have better control of your data. Let's say you run a company and you create a class called employee. You can set the salary to private and create specific public functions to get and display the salary. This better controls your data, because you (or others) can change one part of the code without affecting other parts.
```cpp
// Encapsulation
class Employee {
    private:
        double salary;
    public:
        Employee(double s) {
            salary = s;
        }
        double getSalary() {
            return salary;
        }
};

Employee emp1(50000);
cout << emp1.getSalary() << endl;
## Inheritance
In OOP, there is a concept called inheritance. Inheritance allows one class to inherit the variables and member functions from another class. Inheritance prevents code duplication. This leads to more maintainable software. C++ also allows multi-level inheritance. This means a derived class can be a base class.
```cpp
// Inheritance
class Vehicle {
    public:
        string make;
        int year;
};

class Car : public Vehicle {
    public:
        int doors;
};

Car car1;
car1.make = "BMW";
car1.year = 2020;
car1.doors = 4;

## Polymorphism
With inheritance comes a concept called polymorphism. This allows you to use your derived class anywhere in your code that we can use your base class.
```cpp
// Polymorphism
class Vehicle {
    public:
        virtual void honk() {
            cout << "Beep!" << endl;
        }
};

class Car : public Vehicle {
    public:
        void honk() override {
            cout << "Honk!" << endl;
        }
};

Vehicle* vehicle1 = new Car();
vehicle1->honk();