#include <stdio.h>
#include <dirent.h>
int main()
{
printf("**Program to List All Files and Sub-directories in a Directory**\n");
printf("Name: Koustav Barman, Class: MCA1A, Roll: 28\n");
 char dirname[100];
 struct dirent *de;
 printf("Enter the directory name: ");
 scanf("%s", dirname);
 DIR *dr = opendir(dirname);
 if (dr == NULL) {
 printf("Could not open directory.\n");
 return 1;
 }
 printf("Contents of directory '%s':\n", dirname);
 while ((de = readdir(dr)) != NULL) {
 printf("%s\n", de->d_name);
 }
 closedir(dr);
 return 0;
}