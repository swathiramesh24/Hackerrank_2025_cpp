/*
Given two numbers A and B. The task is to find the GCD of  A and B.
The GCD of two numbers is the largest number that can divide both A and B perfectly.

Examples:

Input: A = 6, B = 9
Output: 3
Explanation: After 3 there is no number that can divide both 6 and 9 perfectly.
*/

//code
int gcd(int a, int b) {
    while(b != 0)
    {
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
