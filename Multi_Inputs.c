#include <stdio.h>

int main()
{
    int rollNumber;
    float marks, percentage;

    printf("Enter roll number:\n");
    scanf("%d", &rollNumber);
    printf("Enter your marks: \n");
    scanf(" %f", &marks);
    printf("Enter your percentage: \n");
    scanf(" %f", &percentage);


    printf("\n--- Student Information ---\n");
    printf("Roll Number: %d\n", rollNumber);
    printf("Marks: %.2f\n", marks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}