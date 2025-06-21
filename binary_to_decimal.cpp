/*
Input : b = 111
Output : 7
Explanation : The decimal equivalent of the binary number 111 is 22 + 21 + 20 = 7.

Input : b = 1010
Output : 10
Explanation : The decimal equivalent of the binary number 1010 is 23 + 21 = 10.

Input: b = 100001
Output: 33
Explanation : The decimal equivalent of the binary number 100001 is 25 + 20 = 33.
*/

//solution
class Solution {
  public:
    int binaryToDecimal(string &b) {
        int decimal = 0;
        int power = 0;

        
        for (int i = b.length() - 1; i >= 0; i--) {
            if (b[i] == '1') {
                decimal += pow(2, power); 
            }
            power++;
        }

        return decimal;
    }
};

//since b is a string we use the following method. we store the answer in value called decimal. we traverse from last through the string. if the value of the string is 1 then we multiply with the 2 power of it.
//and every time the if loop is exited, the power is incremented whether if it is 0 or 1.
