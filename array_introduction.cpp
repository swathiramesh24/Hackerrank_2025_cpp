/*
Input Format
The first line of the input contains ,where  is the number of integers.The next line contains  space-separated integers.

Output Format
Print the  integers of the array in the reverse order, space-separated on a single line.

Sample Input
4
1 4 3 2

Sample Output
2 3 4 1
*/

//CODE
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    std::cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        std::cin>>arr[i];
    }
    
    for(int i=n-1;i>=0;i--)
    {
        std::cout<<arr[i] << " ";
    }
    return 0;
}
