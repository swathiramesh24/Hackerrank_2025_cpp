/*
Given a number x, the task is to print the numbers from x to 0 in decreasing order in a single line.

Example:
Input: x = 3
Output: 3 2 1 0
Explanation: Numbers in decreasing order from 3 are 3 2 1 0.
*/

//code
void utility(int x) {
    // code here
    for(int i=x; i>=0; i--)
    {
        cout << i << " ";
    }
}
