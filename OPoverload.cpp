// Program to show the use insertor(<<) operator overloading.

// Including the required header files.
#include <iostream>
#include <string>
// Creating a struct 'Student'
struct Student
{
    // Making two variables to hold the name and age of a student.
    std::string name;
    int age;
    // Creating a constructor of the struct to initialize the variables.
    Student(std::string n, int a)
    {
        name = n;
        age = a;
    }
};
// Creating a struct 'Student2'
struct Student2
{
    // Making two variables to hold the name and age of a student.
    std::string name;
    int age;
    // Creating a constructor of the struct to initialize the variables.
    Student2(std::string n, int a)
    {
        name = n;
        age = a;
    }
};
// Method to overload the '<<' operator.
void operator<<(std::ostream &print, Student &st)
{
    print << "Name : " << st.name << std::endl;
    print << "Age  : " << st.age << std::endl;
}
// Method to overload the '<<' operator.
void operator<<(std::ostream &print, Student2 &st)
{
    print << "Name : " << st.name << std::endl;
    print << "Age  : " << st.age << std::endl;
}
// Creating the main method.
int main()
{
    // Creating instances for the respective structs.
    Student s("Ram", 18);
    Student2 s2("Shyam", 20);
    // Using the overloaded operator to print the data directly through the instance name.
    std::cout << s2;
    std::cout << s;
    return 0;
}
