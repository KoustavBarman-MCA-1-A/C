#include<stdio.h>
#include<stdlib.h>
int main(){
   int row,col,i,j,a[10][10],count = 0;
   printf("Enter row:");
   scanf("%d",&row);
   printf("Enter Column:");
   scanf("%d",&col);
   printf("Enter Element of Matrix:");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         scanf("%d",&a[i][j]);
      }
   }
   printf("Elements are:\n");
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         printf("%d ",a[i][j]);
      }
      printf(" ");
   }
   for(i = 0; i < row; i++){
      for(j = 0; j < col; j++){
         if(a[i][j] == 0)
            count++;
      }
   }
   if(count > ((row * col)/2))
      printf("\nMatrix is a sparse matrix ");
   else
      printf("\nMatrix is not sparse matrix");
}