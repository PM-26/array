#include<stdio.h>

int linearSearch(int arr[],int n,int x){
    
    for (int i=0;i<n;i++){
        if (arr[i]==x){
            return i;
        }
    }
}

int main(){
    int ch,x,n;
    
    printf("Enter size of array.");
    scanf("%d",&n);
    int arr[n];

    for (int i=0;i<n;i++){
        printf("Enter value for %d",i);
        scanf("%d",&arr[i]);
    }
    
    printf("\t M\t E \t N\t U\n");
    printf("1. To search in an array.(Linear Seach)\n");
    scanf("%d",&ch);
    if (ch==1){
        printf("Enter the value which you want to search.\n");
        scanf("%d",&x);
        int value=linearSearch(arr,n,x);
        if (value!=0){
            printf("Found at index %d",value);
        }
        else{
            printf("Unable to find.\n");
        }
        }
    return 0;
}