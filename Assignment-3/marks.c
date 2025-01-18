#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of students: ");
    scanf("%d", &n);
    float marks[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }
    printf("\nMarks of students:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d: %.2f\n", i + 1, marks[i]);
    }
    return 0;
}