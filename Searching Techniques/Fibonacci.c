#include <stdio.h>
int min(int x, int y) { return (x <= y) ? x : y; }

int fibonacciSearch(int arr[], int n, int x) {
  int fib2 = 0;
  int fib1 = 1;
  int fib = fib2 + fib1;

  while (fib < n) {
    fib2 = fib1;
    fib1 = fib;
    fib = fib2 + fib1;
  }
  int offset = -1;
  while (fib > 1)
    {  int i= min(offset + fib2, n - 1);
  if (arr[i] < x) {
    fib = fib1;
    fib1 = fib2;
    fib2 = fib - fib1;
    offset = i;
  }

  else if (arr[i] > x) {
    fib = fib2;
    fib1 = fib1 - fib2;
    fib2 = fib - fib1;
  }
  else
    return i;
      }
if (fib1 && arr[offset + 1] == x)
  return offset + 1;
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
    result =fibonacciSearch(a, n, x);
    if(result == -1)
        printf("Element is not present in array");
  else
    printf("Element is present at index %d", result);
}