/*
Input:
c = 'a'
Output:
YES
Explanation:
'a' is a vowel.
*/

//solution 1
class Solution {
  public:
    string isVowel(char c) {
        
        char l = tolower(c);
        
        if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u')
        {
            return "YES";
        }
        
        return "NO";
    }
};

//solution 2 ~ using string find 
bool isVowel(char ch) {
    string vowels = "aeiouAEIOU";
    return vowels.find(ch) != string::npos;
}
