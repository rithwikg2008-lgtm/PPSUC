// Lower Triangular Matrix
#include<stdio.h>
int main() 
{ 
 int r, i, j; 
 

 scanf("%d", &r); 
 
 int a[r][r]; 
 
 printf("Enter the elements of the matrix:\n"); 
 for(i = 0; i < r; i++) 
 {
 for(j = 0; j < r; j++) 
 {
 scanf("%d", &a[i][j]); 
 }
 }
 
 int is_lower_triangular = 1; 
 
 // Check elements above the diagonal
 for(i = 0; i < r; i++) 
 { 
 for(j = 0; j < r; j++) 
 { 
 if(j > i && a[i][j] != 0) // Above diagonal must be 

 { 
 is_lower_triangular = 0; 
 break; 
 } 
 }
 if(is_lower_triangular == 0)
 break;
 } 
 
 if(is_lower_triangular) 
 printf("Given Matrix is a Lower Triangular Matrix\n"); 
 else 
 
 
 return 0;
}
