/*
Input: Geeks for Geeks
Output: Geeks
        for
        Geeks
Explanation: First word of the statment is in first line, next word is in next line, and last is in last line.
*/


//method 1
void printNewLine() {

    cout << "Geeks" << '\n' << "for" << '\n' << "Geeks" << '\n';
    
}

//method 2
void printNewLine() {

    string newLine[] = { "Geeks", "for", "Geeks"};
    
    for(int i=0;i<3;i++)
    {
        cout << newLine[i] << '\n';
    }
    
}
