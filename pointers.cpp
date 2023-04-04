//
// Pointers
//
// & - used for the refrence.
// * - used for the value.
// -> - used to refer a member variable of a structure
#include <iostream>
using namespace std;

struct shrey
{
    string Name;
    int Age = 20;
    string Salary = "250k";
};

int main()
{
    shrey info;
    shrey *infoPtr = &info;
    infoPtr->Name = "Patel Shrey Kamleshbhai.";
    cout << "Name: " << (*infoPtr).Name << endl;
    cout << "Age: " << infoPtr->Age << endl;
    cout << "Salary: " << &info.Salary << endl;

    return 0;
}