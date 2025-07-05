/*
Given a number n find the prime factorization of the number.
Note: Print the prime factors in non-decreasing order.

Examples:
Input: n = 100
Output: 2 2 5 5
Explanation: 100 = 2 * 2 * 5 * 5
*/

//solution
void printPrimeFactorization(int n) {
    int factor;
    
    int a = abs(n);
    while(a%2==0)
    {
        cout << "2 ";
        a /= 2;
    }
    
    for(int i=3; i*i <=a; i +=2)
    {
        while(a%i==0)
        {
            cout << i << " ";
            a /= i;
        }
    }
    
    if(a>2)
    {
        cout << a;
    }
}

/*first we are checking if the number is divisible by 2, as long as it is divisible by 2 we print 2 and divide it. if the loop exits then we check from 3, while the number  is divisible by 3,
  we print 3 and divide it by 3, once it is false we increment the number and continue the same, till it becomes one. if it is not 1 then we return the number.
  */
