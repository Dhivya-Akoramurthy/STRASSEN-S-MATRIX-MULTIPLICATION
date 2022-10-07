/* C Program for 2 cross 2 matrix multiplication using Strassen's algorithm */ 
#include<stdio.h> 
int main() 
{ 
 int a[2][2], b[2][2], c[2][2], i, j; /* initializing first matrix and second matrix variable */  int d1, d2, d3, d4 , d5, d6, d7; /* initializing sub Matrix formula variable */ 
 printf("Enter the 4 elements of first matrix: ");  
/* for loop to get the first matrix elements from the user */ 
 for(i = 0;i < 2; i++) 
 for(j = 0;j < 2; j++) 
 scanf("%d", &a[i][j]); 
 printf("\nThe first matrix is\n");  
/* for loop to print the first matrix elements */ 
 for(i = 0; i < 2; i++) 
{ 
 printf("\n"); 
 for(j = 0; j < 2; j++) 
 printf("%d\t", a[i][j]); 
 } 
printf("\nEnter the 4 elements of second matrix: ");  
/* for loop to get the second matrix elements from the user */ 
 for(i = 0; i < 2; i++) 
 for(j = 0;j < 2; j++) 
 scanf("%d", &b[i][j]); 
  
 printf("\nThe second matrix is\n");  
/* for loop to print the second matrix elements */ 
 for(i = 0;i < 2; i++) 
{ 
 printf("\n"); 
 for(j = 0;j < 2; j++) 
 printf("%d\t", b[i][j]); 
} 
/* Strassen's Matrix Multipication formula to calculate the matrix multiplication */ /* Strassen's Matrix Multipication formula for sub matrix*/ 
 d1= (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]); 
 d2= (a[1][0] + a[1][1]) * b[0][0]; 
 d3= a[0][0] * (b[0][1] - b[1][1]); 
 d4= a[1][1] * (b[1][0] - b[0][0]); 
 d5= (a[0][0] + a[0][1]) * b[1][1];
 d6= (a[1][0] - a[0][0]) * (b[0][0]+b[0][1]); 
 d7= (a[0][1] - a[1][1]) * (b[1][0]+b[1][1]); 
/* Strassen's Matrix Multipication formula for final matrix*/  c[0][0] = d1 + d4- d5 + d7; 
 c[0][1] = d3 + d5; 
 c[1][0] = d2 + d4; 
 c[1][1] = d1 - d2 + d3 + d6; 
 printf("\nAfter multiplication using Strassen's algorithm \n");  /* for loop to print the final matrix elements using Stressen's Matrix*/  for(i = 0; i < 2 ; i++) 
 { 
 printf("\n"); 
 for(j = 0;j < 2; j++) 
 printf("%d\t", c[i][j]); 
 } 
 return 0; 
}