/*
Given a number, you have to use the if statement to print "Big" (without quotes) if the given number is greater than 100, and use the else statement to print "Number" (without quotes) when the number is smaller than or equal to 100.
Note: You should print the newline after printing"Number" or"Big".

Examples:
Input: Number = 10
Output: Number
Explanation: 10 is definitely smaller thanor equal to 100, so our else statementworks and we print Number.
*/

//code
void utility(int number) {

    if(number>100)
    {
        cout << "Big" << "\n";
    }
    else
    {
        cout << "Number" << "\n";
    }
}
