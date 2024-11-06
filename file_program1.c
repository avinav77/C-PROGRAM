// LINEAR SEARCH ARRAY
#include<stdio.h>
void main(){
    int arr[100],n,num;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);
    printf("Enter the elements of an array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to search:");
    scanf("%d",&num);
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            printf("Found at location %d",i+1);
            flag=1;
            break;
        }
        
    }
    if(flag==0){
        printf("Element not found");
    }
    printf("\n -------------------\n AVINAV JOHARI \n 2300320130073");
}