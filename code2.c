// 2. WRITE A FUNCTION THAT OUTPUTS A SIDEWAYS TRIANGLE OF HEIGHT 2n-1 AND WIDTH n.

#include<stdio.h>
int main(){
    int  n;
    printf(" *** SIDEWAYS TRIANGLE *** \n");
    printf("Please enter a value for N: ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        printf("\n");
        for(int j = 0; j < i; j++)
        {
            printf("*");
        }
    }
    for(int i = n-1; i > 0; i--)
    {
        printf("\n");
        for(int j = i; j > 0; j--)
        {
            printf("*");
        }
    }
    return 0;
}