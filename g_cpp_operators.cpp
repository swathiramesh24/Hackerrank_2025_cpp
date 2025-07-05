/*
Given two numbers A and B. Perform addition,multiplication, subtraction and division on these two numbers.

Example 1:
Input: A = 1,  B = 2

Output: 3 2 1 2
Explanation:
A + B = 3
A * B = 2
Since B>A, therefore the result of
subtraction and division are
B - A = 1 and B / A = 2 respectively.
*/

//solution
class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        vector<int>result; 
        
        result.push_back(A+B);
        
        result.push_back(A*B);
        
        result.push_back(A>B ? A-B : B-A );
        
        
        if(B !=0 && A>=B)
            result.push_back(A/B);
        else if(B != 0 && B>A)
            result.push_back(B/A);
        else
            result.push_back(0);
            
            
        return result;
    }
};
//since it uses vector function we cannot return multiple values. inorder to get the values we use push_back function to store the value and return them.
