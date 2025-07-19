/*
Given an input num as a string. You need to typecast into an integer and double it. 

Examples:
Input: num = "5"
Output: 10
Explanation: Typecast "5" to int and then double it 5 * 2 = 10
*/

//code
#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    getline(cin, num);
    
    int result = stoi(num);
    cout << result * 2;

    return 0;
}
