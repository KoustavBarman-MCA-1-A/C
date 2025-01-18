#include <stdio.h>
int main()
{
printf("**Program to print the contents of a File**\n");
printf("Name: Koustav Barman, Class: MCA1A, Roll: 28\n");
 FILE *file;
 char filename[100];
 char ch;
 printf("Enter the file name: ");
 scanf("%s", filename);
 file = fopen(filename, "r");
 if (file == NULL) {
 printf("Could not open file.\n");
 return 1;
 }
 printf("Contents of the file:\n");
 while ((ch = fgetc(file)) != EOF) {
 putchar(ch);
 }
 fclose(file);
 return 0;
}
