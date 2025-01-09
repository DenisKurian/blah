//program to the occurance of an element in an array
#include <stdio.h>
void count(int e, int arr[], int n) 
{
    int ecount=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==e)
        {
            ecount+=1;
        }
        
    }
    printf("The element %d occurs %d times in the array", e, ecount);
}
void main()
{
    int e, n, i;
    printf("\nEnter array length: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter the element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the element to be counted: ");
    scanf("%d", &e);
    count(e, arr, n);
}