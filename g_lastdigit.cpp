/*
Input: n = 10
Output: 0
*/

//code
class Solution {
  public:
    int lastDigit(int n) {
        // Code here
        return abs(n % 10);
    }
};
