#include <stdio.h>

// Function without parameter and without return type

void codewithabhi(){
    printf("codewithabhi");
}

// Function with parameter and without return type

void add(int a,int b){
    printf("\nAddition of %d and %d is %d ",a,b,a+b);
}

// Function with parameter and without return type

int data(){
    return 6;
}

// Function with parameter amd with return type

int sum(int a,int b,int c){
    return a+b+c;
}

// Main Function
int main(){

    codewithabhi();
    codewithabhi();
    codewithabhi();

    add(5,6);
    add(15,16);

    int result = sum(5,6,7);
    printf("\nResult of sum(5,6,7) is %d", result);

    // example using data()
    int value = data();
    printf("\nValue returned by data() is %d", value);

    return 0;
}