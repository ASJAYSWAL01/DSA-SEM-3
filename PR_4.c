#include<stdio.h>
int main()
{ 
    int array[10],i=0,search,n=10,first,last,middle;
    for(i=0;i<10;i++)
    {
        printf("enter element:");
        scanf("%d",&array[i]);


    }
printf("enter the element which you find: ");
scanf("%d",&search);

first = 0;
last = n-1;
middle = (first+last)/2;

while (first <= last)
{
    if ( array[middle] < search)
    first= middle + 1;
    else if ( array[middle] == search )
{
    printf("%d found at location %d. \n", search,middle );
    break;

}
else 
last = middle - 1;
middle=(first + last)/2;

}
if(first > last )
printf("Not found! %d isn't present in the list.\n", search);
return 0;
}

