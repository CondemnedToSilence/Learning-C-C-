#include <stdio.h>
int main()
{
    int a;
    char b[15];
    scanf("%d\n",&a);
    //the & sign is the address operator,gives location in memory to save value
    scanf("%s",&b);
    //note that the scanf stops taking input after a white space
    //so sentences cant be taken with it.....for that use fgets
    //or the format specifier %[^\n] can also be used where ^\n means except \n, ^ is negation
    printf("%d\n",a+7);
    printf("%s",b);
    return 0;
}
