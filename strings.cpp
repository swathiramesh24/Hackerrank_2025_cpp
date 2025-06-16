/*
Input Format
You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format
In the first line print two space-separated integers, representing the length of a and b respectively.
In the second line print the string produced by concatenating a and b (a+b).
In the third line print two strings separated by a space, a dash and b dash. a dash and b dash are the same as a and b, respectively, except that their first characters are swapped.

Sample Input
abcd
ef

Sample Output
4 2
abcdef
ebcd af
*/

//CODE
#include <iostream>
#include <string>
using namespace std;

int main() {
	std::string a;
    std::cin >> a;
    std::string b;
    std::cin >> b;
    
    int a_size = a.size();
    int b_size = b.size();
    
    std::cout << a_size << "\t" << b_size << "\n";
    
    std::string c= a+b;
    std::cout << c << "\n";
    
    std::string a_dash = b[0] + a.substr(1);
    std::string b_dash = a[0] + b.substr(1); 
    
    std::cout << a_dash << "\t" << b_dash ;
  
    return 0;
}
