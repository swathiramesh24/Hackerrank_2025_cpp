/*
Given a number, represents number of apples in a bag. You and your friend are playing a game. Both of you are picking one apple turn wise from the bag. It is given that first attempt is always by you. The person picking the last apple will be the winner. Find out the winner if the quantity of apples is given to you as a number.
If you will win: return "You" (without quotes)
If your friend will win: return "Friend" (without quotes)
*/

//solution
string utility(int n) {

    int N=abs(n);
    
    return N%2==0 ? "Friend"  : "You";
    
}
