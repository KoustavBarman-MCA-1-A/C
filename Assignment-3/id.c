#include <stdio.h>
 
int main ()
{
	int a[10][10];
	int i = 0, j = 0, row = 0, col = 0;
 	printf ("Enter number of rows: ");
    scanf ("%d", &row);
	printf ("Enter number of columns: ");
	scanf ("%d",&col);
	int flag = 0;
	printf ("Enter the elements of the matrix\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf ("%d", &a[i][j]);
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j && a[i][j] != 1)
			{
				flag = -1;
				break;
			}
			else if (i != j && a[i][j] != 0)
			{
				flag = -1;
				break;
			}
		}
	}
 
	if (flag == 0)
	{
		printf ("It is a IDENTITY MATRIX\n");
	}
	else
	{
		printf ("It is NOT an identity matrix\n");
	}
 
	return 0;
}