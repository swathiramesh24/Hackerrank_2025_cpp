/*
Example 1:
Input:
n = 1
Output:No
Explanation: it is already said that 1 is not a prime number.

Example 2:
Input:
n = 2
Output:Yes
Explanation: 2 is a prime number because it is only divisible by itself and 1.
*/

//method 1
class Solution {
  public:
    string isPrime(int n) {

        if(n<=1)
        {
            return "No";
        }

        for (int i = 2; i <= sqrt(n); i++) {
            if(n%i == 0)
            {
                return "No";
            }
        }
        
        return "Yes";
    }
};


//method 2 ~ preferred
class Solution {
  public:
    string isPrime(int n) {
        
         if(n==2)
       {
           return "Yes";
       }
       

        if(n<=1 || n%2==0)
        {
            return "No";
        }
       
       
        for (int i = 3; i <= sqrt(n); i += 2) {
            if(n%i == 0)
            {
                return "No";
            }
        }
        
        return "Yes";
    }
};
