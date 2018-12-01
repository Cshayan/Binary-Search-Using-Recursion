#include <stdio.h>
#include <stdlib.h>

int binary_search(int arr[], int low, int high, int item)
{
    int mid;
    if(low <= high)
    {
        mid= (low+high)/2;
          if(arr[mid] == item)
          {
              return mid;
          }
          else if(item < arr[mid])
          {
              binary_search(arr, low, mid-1, item);
          }
          else
          {
              binary_search(arr, mid+1, high, item);
          }
    }

}
int main()
{
    int *arr;
    int n;
    printf("\nEnter the size of the array:- ");
    scanf("%d",&n);
    int i, low, high, item;
    arr=(int *)malloc(n*sizeof(int));
    printf("\nEnter the (sorted)array:- \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the item to be searched:- ");
    scanf("%d", &item);
    low=0; high=n-1;

    int val= binary_search(arr, low, high, item);
    if( val!= -1)
        printf("\nValue found at index %d\n", val);
    else
        printf("\nValue not found\n");

   return 0;
}
