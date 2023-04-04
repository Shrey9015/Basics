//
// Pointers
//
// & - used for the address.
// * - used for the value.
// -> - used to refer a member variable of a structure.
//
#include <iostream>
using namespace std;

struct CandidateInfo
{
    string Name;
    int Age = 20;
    string Salary = "250k";
};

int main()
{
    CandidateInfo info;
    CandidateInfo *infoPtr = &info;
    infoPtr->Name = "Patel Shrey.";
    cout << "Name: " << (*infoPtr).Name << endl;
    cout << "Age: " << infoPtr->Age << endl;
    cout << "Salary: " << &info.Salary << endl;

    return 0;
}
