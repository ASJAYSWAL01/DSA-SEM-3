#include<stdio.h>
int main(){
	int var=10, *ptr;
	
	printf("address of var:%d",&var);
	printf("\nvalue of var:%d",var);
	
	ptr=&var;
	printf("\naddress of var:%d",ptr);
	printf("\nvalue of var:%d",*ptr);
	
	var=400;
	printf("\naddress of var:%d",ptr);
	printf("\nvalue of var:%d",*ptr);
	
	*ptr=30;
	printf("\naddress of var:%d",ptr);
	printf("\nvalue of var:%d",*ptr);
	
return 0;
}


//output
//address of var:6487572
//value of var:10
//address of var:6487572
//value of var:10
//address of var:6487572
//value of var:400
//address of var:6487572
//value of var:30