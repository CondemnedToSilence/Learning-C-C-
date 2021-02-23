#include <stdio.h>
int main()
{
    int x,y;
    char b[15];

    scanf("%3d %d %*f %5s",&x,&y,b);
    //the numbers indicate maximum no. of character sto assign to variable
    //the * indicates that the input should be ignored
    //eg. for input 1234 0.876 lostworld
    printf("%d %d %s",x,y,b);
    // the output is 123 4 lostw
    return 0;
    //also note that strings don't need & address operator
}
