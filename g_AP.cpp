/*
Given three integers a, d and n. Where a is the first term, d is the common difference of an A.P.  Calculate the nth term of A.P. 
The nth term is given by an = a + (n-1)d

Examples: 

Input: a = 5, d = 2, n = 5
Output: 13
Explanation: anth = a + (n-1)d = 5 + (5-1)*2 = 5 + 8 = 13
*/

//code
int apTerm(int a, int d, int n) {
    // code here
    
    int ans = a + ((n-1) * d);

        return ans;
}
