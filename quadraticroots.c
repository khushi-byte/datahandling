#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
float a, b, c, root1, root2, real, img;
printf("Enter the value of coefficients a, b, and c in the equation ax2+bx+c: \n");
scanf("%f %f %f", &a, &b, &c);
float discriminant;
discriminant = b*b-4*a*c;
if(discriminant>0){
    root1 = (-b+sqrt(discriminant))/(2*a);
    root2 = (-b-sqrt(discriminant))/(2*a);
    printf("\nThe roots of the equation are %.3f and %.3f. \n", root1, root2);
}
else if(discriminant==0){
    root1= (-b +sqrt(discriminant))/(2*a);
    root2=root1;
    printf("\nThe root of the equation is %.3f. \n", root1);
}
else {
    real= -b/(2*a);
    img = sqrt(-discriminant)/(2*a);
    printf("\nThe roots of the equation are %.3f + %.3fi and %.3f - %.3fi. \n", real, img, real, img);
}
printf("\nThe program ends. Thank You!\n");
return 0;
}