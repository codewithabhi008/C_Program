#include <stdio.h>

int main(){

    // User Input

    int start;

    printf("\nEnter the value of start :-");
    scanf("%d", &start);

    int end;

    printf("\nEnter the value of end :-");
    scanf("%d", &end);

    for(int i=start;i<end;i++){
        if(i% 2 == 0){
            printf("%d ",i);
        }
    }
    return 0;
}