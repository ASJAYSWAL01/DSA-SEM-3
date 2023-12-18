#include <stdio.h>

int main() {
    char str1[10];
    char str2[10];
    char str_con[100];
    int i, length = 0;

    printf("enter string 1 :");
    scanf("%s", str1);

    printf("enter string 2 :");
    scanf("%s", str2);

    while (str1[length] != '\0') {
        str_con[length] = str1[length];
        length++;
    }
	str_con[length] = ' ';
    length++;

    for (i = 0; str2[i] != '\0'; i++) {
        str_con[length] = str2[i];
        length++;
    }

str_con[length] = '\0';

    printf("Concated string: %s", str_con);

    return 0;
}
