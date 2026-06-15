#include <stdio.h>


int main(){
    
    // User Input
    
    int a;
    
    printf("\nEnter the value of a :- ");
    scanf("%d",&a);
    printf("\nValue of a :- %d",a);
    
    float b;
    
    printf("\nEnter the value of b :- ");
    scanf("%f",&b);
    printf("\nValue of b :- %f",b);
    
    printf("\nAddition of %d and %f is %f",a,b,a+b);
    printf("\nSubtraction of %d and %f is %f",a,b,a-b);
    printf("\nMultiplication of %d and %f is %f",a,b,a*b);
    printf("\nDivision of %d and %f is %f",a,b,a/b);
     
    
}
