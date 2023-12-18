#include<stdio.h>


int main(){
	
	int i;
	char str[20];
	
	printf("Enter String : ");
	gets(str);
	
	for(i = 0; str[i] != '\0'; i++){
		
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i] + 32;
		}
		
	}
	printf("Lower case String : %s", str);
	
	return 0;
}