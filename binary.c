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
    int lb=0,ub=n-1,flag=0;
    while (lb<=ub)
    {
       int mid=(lb+ub)/2;
       if(arr[mid]==num){
        printf("Found at location %d",mid+1);
            flag=1;
            break;
       }
       else if (arr[mid]>num){
        ub=mid-1;
       }
       else
       {
        lb=mid+1;
       }
    }
    if(flag==0){
         printf("Element not found");
    }
        printf("\n -------------------\n AVINAV JOHARI \n 2300320130073");
}

    
    
    
   
    