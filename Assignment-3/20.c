#include <stdio.h>
typedef struct {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float marks;
} Student;
void displayStudentDetails(Student students[], int count) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < count; i++) {
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
        printf("-----------------------------\n");
    }
}

int main() {
    Student students[12];
    int count = 12;
    for (int i = 0; i < count; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Address: ");
        scanf(" %[^\n]s", students[i].address);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("-----------------------------\n");
    }
    displayStudentDetails(students, count);

    return 0;
}
