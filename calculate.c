/* 2. WRITTE A FUCNTION THAT RECEIVES MARKS RECEIVED BY A STUDENT IN 3 SUBJECTS AND RETURNS THE AVERAGE AND PERCENTAGE  OF THESE MARKS.
CALL THIS FUNCTION FROM main() AND PRINT THE RESULTS IN main()
*/

#include <stdio.h>
#include <stdlib.h>
 
// Function to calculate and return average and percentage of the marks
float* calculate(float mark[], int n)
{
    float *calc;
    // Dynamically allocating the memory based on the requirement
    calc = (float*) malloc(sizeof(int) * 2);
    float received_total = mark[0]+mark[1]+mark[2];  
    float total = n * 100;  //Assuming that the total marks per subject is 100
    *calc = received_total/n; 
    *(calc + 1) = (received_total/total)*100;    
    free(calc);   
    return calc;
}

int main(void)
{

    float marks[3];
    int n = 3;
 	printf("Enter the marks \n");
    for (int i=0; i<n; i++){
        printf("Mark %d: ", i+1);
        scanf("%f", &marks[i]);
    }
    float *arr = calculate(marks, n);
    float avg, pctg;
    avg = arr[0];
    pctg = arr[1];
 
    printf("The average is %.2f \n", avg);
    printf("The percentage is %.f", pctg);
 
    return 0;
}
