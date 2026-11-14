#include<stdio.h>
int main(){
    int arr[5];
    int i;
    printf("enter 5 no.\n");
    for (i=0;i<5;i++)
    scanf("%d",&arr[i]);
    
printf("the five no. are  ");
       for(i=0;i<5;i++){
        printf("%d",arr[i]);
       }
        return 0;

    }