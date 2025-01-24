/*Input Format

You will be given two positive integers, a and b (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If 1<=n<=9 , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".

Sample Input
8
11

Sample Output
eight
nine
even
odd*/

//CODE:

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    int a, b;
    string numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin >> a;
    cin >> b;

    for (int i = a; i <= b; i++) {
        if (i <= 9) {
            cout << numbers[i] << std::endl;
        } 
        else if (i % 2 == 0) {
                cout << "even" << std::endl;
         } 
        else {
                cout << "odd" << std::endl;
            }
    }
    return 0;
}
