// Function & Recursion	Write a program to find mean and median of five numbers using function
#include<stdio.h>
int mean(int arr[5],int sum){
    
       for (int i = 0; i < 5; i++)
       {
          sum=sum+i;
       }
       
}
 

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}


float calculateMedian(int arra[], int size) {
   
    qsort(arra, size, sizeof(int), compare);

    if (size % 2 == 0) {
       
        return (arra[size / 2 - 1] + arra[size / 2]) / 2.0;
    } else {
        
        return arra[size / 2];
    }
}


void main(){
    int arr[5],sum=0;
    printf("Enter the numbers in array");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",arr[i]);
    }
    int l=mean(arr[5],sum);
    printf("%d",l);
     int arra[] = {12, 3, 5, 7, 19};
    int size = sizeof(arra) / sizeof(arra[0]);

    float median = calculateMedian(arra, size);
    printf("The median is: %.2f\n", median);
    
}
