//Given a number n, find the first digit of the number.

//solution
int firstDigit(int n) {
    
    if(n<0)
    {
        n= -n;
    }
    while(n>=10)
    {
        n /= 10;
    }
    return n;
}

