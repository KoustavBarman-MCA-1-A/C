#include <stdio.h>
int main()
{
printf("**Program to count the number of lines in a File**\n");
printf("Name: Koustav Barman, Class: MCA1A, Roll: 28\n");
 FILE *file;
 char filename[100];
 char ch;
 int lines = 1;
 printf("Enter the file name: ");
 scanf("%s", filename);
 file = fopen(filename, "r");
 if (file == NULL) {
 printf("Could not open file.\n");
 return 1;
 }
 while ((ch = fgetc(file)) != EOF) {
 if (ch == '\n') {
 lines++;
 }
 }
 fclose(file);
 printf("Total number of lines: %d\n", lines);
 return 0;
}
