/*
You are given a number  and you have to print your answer according to the following:
If the number is divisible by 3, you print "Fizz" (without quotes)
If the number is divisible by 5, you print "Buzz" (without quotes)
If the number is divisible by both 3 and 5, you print "FizzBuzz" (without quotes)
In any other case, you print the number itself
*/

//solution

void fizzBuzz(int number) {
    string result ="";
    
    if(number%3==0)
        result += "Fizz";
    if(number%5==0)
        result += "Buzz";
        
    if(result=="")
        cout << number;
    
    else
        cout << result;
    
    cout << endl;
}
