/*
You have to declare 4 variables of a, b, c, d of int, float, double, long long datatype respectively in the main function.

Examples :
Input: None
Output: Verified
Explanation: All 4 variables are declared with proper data type.
*/

//solution

#include <iostream>
#include <typeinfo> //must include to use typeid
using namespace std;

int main() {
    int a;
    float b;
    double c;
    long long d;
    
    if ((typeid(a) == typeid(int)) and (typeid(b) == typeid(float)) and
        (typeid(c) == typeid(double)) and (typeid(d) == typeid(long long)))
        cout << "verified\n";

    return 0;
}

//typeid checks the actual runtime type of each variable (a, b, c, d) and compares it with the expected type using the typeid operator.
//it only compares the exact same type and not the compatible types. int is different from const int
