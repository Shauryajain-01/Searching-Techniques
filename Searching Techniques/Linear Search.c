//LINEAR_SEARCH
#include <stdio.h>

int search(int a[], int n, int x) {
  int i;
  for (i = 0; i < n; i++)
    if (a[i] == x)
      return i;
  return -1;
}

void main() {
  int a[20], n, result, i, x;
  printf("Enter number of elements \n");
  scanf("%d", &n);
  printf("Enter elements \n");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("Enter search element \n");
  scanf("%d", &x);
  result = search(a, n, x);
  if (result == -1)
    printf("Element is not present in array");
  else
  printf("Element is present at index %d", result);
}