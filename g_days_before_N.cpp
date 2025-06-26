/*
Given two integers d and n. Where d is the day, out of 7 days of the week, d varies from 0 to 6 as shown below.
0 - Sunday
1 - Monday
2 - Tuesday
3 - Wednesday
4 - Thursday
5 - Friday
6 - Saturday

You have to return the index for the day which is n days before the given day d.

Examples:
Input: d = 4, n = 3
Output: 1
Explanation: 3 days before the 4th is 1.

Input: d = 2, n = 19
Output: 4
Explanation: 19 days before the 2nd is 4.
*/

//solution
int nthDay(int d, int n) {
    return (d - n % 7 + 7) % 7;
}

/*
To find the day that is n days before a given day d (where days are numbered 0 to 6), we use the formula (d - n % 7 + 7) % 7. 
We take n % 7 because the week repeats every 7 days, so going 10 or 17 days back is like going 3 days back. 
Subtracting this from d gives the previous day index, but this could be negative. 
So, we add 7 to ensure the result is non-negative. Finally, we take % 7 again to bring the result within the 0–6 range. 
*/
  This formula ensures correct results even when n is large or d - n is negative.
