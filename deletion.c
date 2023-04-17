#include<stdio.h>
//function1
void deleting1(int arr[],int len,int pos){
    for (int i=pos;i<len;i++){
        arr[i]=arr[i+1];
    }
    len=len-1;
    printing(arr,len);
    printf("\n");
}
//printing function
void printing(int arr[],int len){
    for (int i=0;i<len;i++){
        printf("%d \t",arr[i]);
    }
}
//deleting function 2
void deleting2(int arr[], int len) {
    int pos = -1;
    printf("Enter value to delete.\n");
    int value;
    scanf("%d", &value);
    for (int i = 0; i < len; i++) {
        if (arr[i] == value) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        printf("Value not found.\n");
    } else {
        for (int i = pos; i < len - 1; i++) {
            arr[i] = arr[i + 1];
        }
        for (int i = 0; i < len - 1; i++) {
            printf("%d\t", arr[i]);
        }
    }
    printf("\n");
}
//main starts
int main(){
    int choice,len=1; //variables
    int ch=1;

    printf("Enter length of array.\n");
    scanf("%d",&len);
    int arr[len];
    for (int i=0;i<len;i++){
        printf("Enter value for %d\t",i);
        scanf("%d",&arr[i]);
    }
    printing(arr,len);
    printf("\n");
//menu
    while(ch){
        printf("1. Delete from array(unsorted)?\n");
        printf("2. Delete from array(sorted)?\n");
        printf("Enter your choice.\n");
        scanf("%d",&choice);
        //unsorted
        if (choice==1){
            printf("Enter position to delete.\n");
            int pos;
            scanf("%d",&pos);
            deleting1(arr,len,pos);
        }
        //sorted
        else if (choice==2){
            deleting2(arr,len);
            // printing();
        }
    //continue-yes/no?
    printf("Do you want to continue(0,1)?\n");
    // scanf("%d",&ch);
    }
    return 0;
}