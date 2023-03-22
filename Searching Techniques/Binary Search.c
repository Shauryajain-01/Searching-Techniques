#include <stdio.h>
int binarySearch(int a[], int low, int high, int x)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (a[mid] == x)
            return mid;
        if (a[mid] > x)
            return binarySearch(a, low, mid - 1, x);
        return binarySearch(a, mid + 1, high, x);
    }
  return -1;
}
void main()
{
    int a[20],n,i,result,x;
    printf("Enter number of elements \n");
    scanf("%d",&n);
    printf("Enter elements \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter search element \n");
    scanf("%d",&x);
    result = binarySearch(a,0, n, x);
    if(result == -1)
        printf("Element is not present in array");
    printf("Element is present at index %d", result);
}