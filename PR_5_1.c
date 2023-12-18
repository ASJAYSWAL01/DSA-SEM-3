#include<stdio.h>

int main ()
{
char input[100];

printf("enter the string :");
gets(input);

int length = 0;

while (input[length] != '\0')
{
length++;
}

printf("length of the string : %d\n" , length);

return 0;
}