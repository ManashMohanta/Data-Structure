#include <stdio.h>
int main(){
    int arr[2][2]={{4,5},{3,6}};
    int i,j;
    
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    printf("%d",arr[i][j]);
{
     printf("\n");
    }
    arr[0][0]=9;
    arr[1][1]=1;
     arr[0][1]=9;
    arr[1][0]=1;
     
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    printf("%d",arr[i][j]);{
  
    }

    return 0;
}