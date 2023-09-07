#include <iostream>
using namespace std;
int main()
{
    int a = 20;
    int b = 10;
 // Assignment Operator
    cout << "Result of Assignment and Compound Assignment Operators are " << endl;
    int marks = 10;
    cout << "The marks are " << marks << endl;
    // Compound Assignment or Additional Assignment Operators
    marks += 10;
    marks -= 2;
    marks *= 2;
    marks /= 2;
    marks %= 2;
    // Comparison Operatos
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;
    cout << (a != b) << endl;
    cout << (a == b) << endl;
    return 0;
}
