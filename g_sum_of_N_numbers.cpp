/*
Given an integer n find the sum of the first n natural number.

Examples:
Input: n = 10
Output: 55
Explanation: 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
*/

//solution
int nSum(int n) {
    int ans = (n*(n+1))/2;
    return ans;
}
