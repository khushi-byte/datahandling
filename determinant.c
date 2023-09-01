#include <stdio.h>
#include <math.h>
#include <conio.h>
int det(int A[3][3], int n, int m);
int main()
{
printf("enter no of row and columns\n");
int n, m, i, j, d;
scanf("%d %d", &n, &m);
int arr[n][m];
printf("\nEnter the matrix elements\n");
for(i=0; i<n; i++){
    for(j=0; j<m; j++){
printf("enter element (%d,%d)\n", i+1, j+1);
scanf("%d", &arr[i][j]);
}
}
for(i=0; i<n; i++){
    printf("\n");
    for(j=0; j<m; j++){
printf("%d ", arr[i][j]);

}
}
d = det(arr,n,m);

}

int det(int A[3][3], int n, int m)

{
int determinant;
if (n==2 && m==2){
determinant = (A[0][0])*(A[1][1]) - (A[1][0])*(A[0][1]);
printf ("%d", determinant);
return (determinant);
}
else{
    printf("\nCannot find determinant\n");
}
}