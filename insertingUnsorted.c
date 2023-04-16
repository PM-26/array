#include <stdio.h>
int main(){
//creating
    int len,pos,x;
    printf("Enter length of array: \n");
    scanf("%d",&len);
    int arr[len+1];
    for(int i=0;i<len;i++){
    printf("Enter value for %d:\n",i);
    scanf("%d",&arr[i]);
    }
//printing
    for(int i=0;i<len;i++){
    printf("%d\t",arr[i]);
    }
    printf("\n");
//inserting
    printf("Enter position at which you want to insert.");
    scanf("%d",&pos);
    printf("Enter VALUE which you want to insert.");
    scanf("%d",&x);
    
    for (int i=len;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=x;
//printing
    for(int i=0;i<len+1;i++){
    printf("%d\t",arr[i]);
    }
printf("\n");
    return 0;
}
    