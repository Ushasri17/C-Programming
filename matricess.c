#include<stdio.h>
int main()
{
int m, n, i, j, matrix[10][10], transpose[10][10];
printf("Enter the number of rows and columns of matrix\n");
scanf("%d%d", &m, &n);
printf("Enter elements of the matrix\n");
for (i = 0; i < m; i++)
for(j = 0; j < n; j++)
scanf("%d", &matrix[i][j]);
for (i = 0; i < m; i++)
for(j = 0; j < n; j++)
transpose[j][i] = matrix[i][j];
if (m == n) /* check if order is same */
{
for (i = 0; i < m; i++)
{
for (j = 0; j < m; j++)
{  
if(matrix[i][j] != transpose[i][j])
break;
}  
if (j != m)
break;
} 
if (j == m)
printf("The matrix is symmetric.\n");
else
printf("The matrix isn't symmetric.\n");
}
else
printf("The matrix isn't symmetric.\n");

	int m, n, i, j, matrix[10][10], transpose[10][10];
printf("Enter the number of rows and columns of matrix\n");
scanf("%d%d", &m, &n);
printf("Enter elements of the matrix\n");
for (i = 0; i < m; i++){
for(j = 0; j < n; j++)
scanf("%d", &matrix[i][j]);}
for (i = 0; i < n; i++){
for(j = 0; j < m; j++)
transpose[i][j] = matrix[j][i];}
printf("Transpose of the matrix:\n");
for (i = 0; i < m; i++){
for(j = 0; j < n; j++)
printf("%d\t", transpose[i][j]);
printf("\n");
}

return 0;
}
