/*
Input: number = 10
Output: Number 
Explanation: 10 is less than 100, so we don't print Big and Number will be printed by default.
Input: number = 101
Output:
Big
Number
Explanation: 101 is greater than 100,so we print Big.
*/

//solution
void utility(int number) {
    if(number>100)
    {
        cout << "Big" << endl;
    }
    cout << "Number" << endl;
}
