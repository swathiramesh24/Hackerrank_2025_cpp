/*
Input: a = "Hello", b = "World", separator = "@"
Output: Hello@World
Explanation: a and b are printed with the separator symbol in between.
*/

//solution
void utility() {
    string a, b, separator;
    cin >> a >> b >> separator;
    
    cout << a << separator << b <<'\n';
}
