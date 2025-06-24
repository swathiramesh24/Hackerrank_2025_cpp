/*
Input: a = 1 b = 2
Output: 2 1
Explanation: Initially a = 1 and b = 2, now a = 2 and b = 1.
*/

//solution
void swap(int &a, int &b) {
   
    a=a^b;
    b=a^b;
    a=a^b;
}
