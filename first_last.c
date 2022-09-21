/* Write the finction first_last(), defned as follows, that:
void first_last(char *s[], int n, char *first, char *last)
a) Given an array s of n strings, find the first and last string in the array according to alphabetical order.
b) The function should work with the main() function

*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void first_last(char *s[], int n, char *first, char *last)
{
    int i = 0;
    strcpy(first ,s[i]);  
    strcpy(last ,s[i]);
    
    for (i = 0; i < n; i++)
    {
        if (strcmp(s[i], first) < 0)
        {
            strcpy(first, s[i]);         // Copy the value from s[i] to first if the strcmp returns vale > 0
        }
        else if (strcmp(s[i], last) > 0)
        {
            strcpy(last, s[i]);
        }
    }
}

int main(){
    char *array[] = {"hello", "world", "today", "is", "a", "very", "nice", "day"};
    int size = 8;

    char minS[20];
    char maxS[20];

    first_last(array, size, minS, maxS);

    printf("The first word is '%s' and the last is '%s' \n", minS, maxS);
    return 0;
}