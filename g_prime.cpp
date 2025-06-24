/*
Input: n = 17
Output: True 
Explanation: 17 is  divisible by only 1 and 17. So it's a prime number.
*/

//solution


bool prime(int n) {

    if(n==2)
    {
        return true;
    }
    
    if(n<=1 || n%2==0)
    {
        return false;
    }
    
    for(int i=3; i <= sqrt(n); i +=2)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
