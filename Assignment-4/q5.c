#include <stdio.h>
int main()
{
printf("**Program to Merge the Contents of Two Files into a Third File**\n");
printf("Name: Koustav Barman, Class: MCA1A, Roll: 28\n");
 FILE *file1, *file2, *mergedFile;
 char file1Name[100], file2Name[100], mergedFileName[100];
 char ch;
 printf("Enter the first file name: ");
 scanf("%s", file1Name);
 printf("Enter the second file name: ");
 scanf("%s", file2Name);
 printf("Enter the merged file name: ");
 scanf("%s", mergedFileName);
 file1 = fopen(file1Name, "r");
 file2 = fopen(file2Name, "r");
 mergedFile = fopen(mergedFileName, "w");
 if (file1 == NULL || file2 == NULL || mergedFile == NULL) {
 printf("Error opening files.\n");
 return 1;
 }
 while ((ch = fgetc(file1)) != EOF) {
 fputc(ch, mergedFile);
 }
 while ((ch = fgetc(file2)) != EOF) {
 fputc(ch, mergedFile);
 }
 printf("Files merged successfully.\n");
 fclose(file1);
 fclose(file2);
 fclose(mergedFile);
 return 0;
}