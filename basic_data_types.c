#include <stdio.h>
int main()
{
    int a=4,b=17;
    float c = 72.435;
    char letter = 'F';
    //notice the single quotes for char
    int d = a+b;
    printf("%d \n",d);
    printf("%f \n",c);
    printf("%c \n",letter);

    //note the format specifiers such as %f for the different output types
    return 0;
}
