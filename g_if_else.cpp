/*
Example 1:
Input:
N = 8
Output:
Greater than 5
 
Example 2:
Input:
N = 4
Output:
Less than 5
*/

//solution
class Solution {
  public:
    string compareFive(int n) {
        if(n>5) 
            return "Greater than 5";
        else if(n<5)
            return "Less than 5";
        else
            return "Equal to 5";
        
    }
};
