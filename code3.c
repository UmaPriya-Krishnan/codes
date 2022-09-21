// 3. WRITE A FUNCTION THAT OUTPUTS A RIGHT SIDE UP TRIANGLE OF HEIGHT n AND WIDTH 2n-1.

#include<stdio.h>
int main(){
    int  n;
    printf("*** RIGHT SIDE UP TRIANGLE *** \n");
    printf("Please enter a value for N: ");
    scanf("%d",&n);
    // n = 2*n;
    for(int i = 1; i <= 2*n; i++)
    {
        printf("\n");
        for(int j = 0; j < i; j++)
        {
            printf("*");
        }
        i++;
    }
    return 0;

}