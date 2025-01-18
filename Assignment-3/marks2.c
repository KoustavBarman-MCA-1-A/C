#include <stdio.h>
int main()
{
    int n; 
    printf("Enter the number of students: ");
    scanf("%d", &n);
    float mathMarks[n];
    float englishMarks[n];
    float totalMarks[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter marks for student %d:\n", i + 1);
        printf("Mathematics: ");
        scanf("%f", &mathMarks[i]);
        printf("English: ");
        scanf("%f", &englishMarks[i]);
        totalMarks[i] = mathMarks[i] + englishMarks[i];
    }
    printf("\nTotal marks of students:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d: Total Marks = %.2f\n", i + 1, totalMarks[i]);
    }
    return 0;
}