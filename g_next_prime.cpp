/*
Given an integer n. Write a program to find the first prime number greater than n.

Examples:
Input: n = 15
Output: 17
Explanation: 17 is next prime number.
*/

//code
// User function Template for C++

bool isPrime(int n)
{
    if(n<=1)
    {
      return false;  
    }
        
    for(int i=2; i*i <=n ; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int nextPrime(int num)
{
    int value = num+1;
    
    while(true)
    {
        if(isPrime(value))
        {
            return value;
        }
        value++;
    }
}
