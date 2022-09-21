/* 
1. Write a function named removeCharacter() that:
(a) Takes 4 inputs: an integer num, a string tr, a string s and a character c, but does not return anything.
(b) Finds the number of all the occurrences of c in s (both capital and lower case) and saves it in num.
(c) Copies the trimmed string in tr.
(d) Write in the same file a main() function containing a series of tests to showcase the correct behavior of
removeCharacter(). Note: you can print only from the main function.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void removeCharacter(int *num, char tr[], char s[], char c){
    int len = strlen(s);

    char C = c;
    // printf("char before conversion %c\n", C);
    //To compare the string in both upper and lower case
    if((!isdigit(c))  && (c>96)){
        C = c-32;
    }else if((!isdigit(c))  && (c<96)){
        C = c+32;
    }
    // printf("char ftr conversion %c \n", C);

    for(int i = 0; i < len; i++)
	{
		if(s[i] == c || s[i] == C)
        // *num = *num+1;
		{
            *num = *num+1;
			for(int j = i; j < len; j++)
			{
				s[j] = s[j + 1];
			}
			len--;
			i--;	
		} 
	}	

    // copying the trimmed string from s to tr
    strcpy(tr, s);
}


int main(){
    int num = 0;
    char tr[100] ;

    // Example 1
    char c = 'm';
    char s[100] = "CIS 340 Systems Programming SYSTEMS PROGRAMMING";

    // Example 2
    // char c = '3';
    // char s[30] = "CIS 340 Systems Programming";

    removeCharacter(&num, tr, s, c);
    printf("String  after trimming the character '%c': %s \n" ,c, tr);
    printf("Number of occurence of the charactr '%c' is %d\n", c, num);
    return 0;
}