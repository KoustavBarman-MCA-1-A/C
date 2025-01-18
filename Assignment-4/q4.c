#include <stdio.h>
int main()
{
printf("**Program to Copy the Contents of One File to Another File**\n");
printf("Name: Koustav Barman, Class: MCA1A, Roll: 28\n");
 FILE *scr, *tgt;
 char sf[100], tf[100];
 char ch;
 printf("Enter the source file name: ");
 scanf("%s", sf);
 printf("Enter the target file name: ");
 scanf("%s", tf);
 scr = fopen(sf, "r");
 if (scr == NULL) {
 printf("Could not open source file.\n");
 return 1;
 }
 tgt = fopen(tf, "w");
 if (tgt == NULL) {
 printf("Could not open target file.\n");
 fclose(scr);
 return 1; }
 while ((ch = fgetc(scr)) != EOF)
 fputc(ch, tgt);
 printf("File copied successfully.\n");
 fclose(scr);
 fclose(tgt);
 return 0;
}
