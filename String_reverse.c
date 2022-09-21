// 1. Write a C program that prompts the user for a string(Pick a maximum length), and print its reverse.

#include <stdio.h>
#include <string.h>

int main(){
	char NewString[100];
	printf("*** STRING REVERSE *** \n");
	printf("Enter a string value: ");
	scanf("%s", NewString);
	// printf("%s \n", NewString);
	int i, len, temp; 
	len = strlen(NewString);
	len = len-1;

	for (i=0; i<len; i++)
	{
		// printf("%c \n", NewString[i]);
		// printf("%c \n", NewString[len]);
		temp = NewString[i];
		NewString[i] = NewString[len];
		NewString[len] = temp;
		len--;
		// printf("%c \n", NewString[i]);
	}
	printf("%s \n", NewString);

return 0;


}