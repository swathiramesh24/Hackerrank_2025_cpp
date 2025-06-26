//You are given a String S, you need to print its characters at even indices(index starts at 0).

//solution
void utility(string s) {
    for(int i=0; i<s.size(); i +=2)
    {
        cout << s[i];
    }
    
}
