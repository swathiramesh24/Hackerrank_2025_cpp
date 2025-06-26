/*
Given a natural number n. You have to find the number of digits in it and return it.

Examples:
Input: n = 5534
Output: 4 
Explanation: 5534 has 4 digits
*/

//solution
nt countDigits(int n) {
    int count=0;
    while(n>0)
    {
        count += 1;
        n=n/10;
    }
    return count;
}
