/*
Given a number, you have to use a switch statement to return "One" if the given number is equal to 1, "Two" if the number is 2 and so on till 9 ("Nine") else return "Unknown"(without quotes). 
  */

//solution
// User function Template for C++

string utility(int number) {

    switch(number)
    {
        case 1:
        return "One";

        case 2:
        return "Two";

        case 3:
        return "Three";

        case 4:
        return "Four";

        case 5:
        return "Five";

        case 6:
        return "Six";

        case 7:
        return "Seven";

        case 8:
        return "Eight";

        case 9:
        return "Nine";

        default:
        return "Unknown";
    }
    
}



//using arrays
string utility(int number) {
    string words[] = {
        "Unknown",  // index 0 — not used
        "One", "Two", "Three", "Four", "Five",
        "Six", "Seven", "Eight", "Nine"
    };

    if (number >= 1 && number <= 9)
        return words[number];
    else
        return "Unknown";
}
