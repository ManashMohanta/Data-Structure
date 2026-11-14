#include <stdio.h>
void selectionsort(int a[], int n  ){
int i, j, temp, min;
    for(i = 0; i < n-1;  i++){
min = i;
        for(j = i+1; j < n; j++){
            if(a[min] < a[j]){
                min = j;
            }
        }
        
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }


int main(){
    int a[100],n ,i;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    selectionsort(a, n);
    printf("Sorted array: \n");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}