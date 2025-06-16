/*
Input Format
Input will contain four integers -  , one per line.

Output Format
Return the greatest of the four integers.
PS: I/O will be automatically handled.

Sample Input
3
4
6
5

Sample Output
6
*/

//CODE

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int x, int y, int z, int v)
{
    int max=x;
    
    if(y>max)
    {
        max=y;
    }
    
    if(z>max)
    {
        max=z;
    }
    
    if(v>max)
    {
        max=v;
    }
    
    return max;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
