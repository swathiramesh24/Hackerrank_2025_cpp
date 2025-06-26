/*
Input:
a = 5.43
b = 2.653
Output:
2.04674 2.047
Explanation:
Value of a/b is printed with and without decimal precision.
*/

//solution
void precise(float a, float b) {
    float c=a/b;

    cout << c << " " << setprecision(3)
         << fixed << setprecision(3) << c << endl;
}
