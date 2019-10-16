#include <stdio.h>


int binarySearch(int A[], int low, int high, int x)
{
	if (low > high)
		return -1;
	int mid = (low + high)/2;
	if (x == A[mid])
		return mid;

	else if (x < A[mid])
		return binarySearch(A, low,  mid - 1, x);

	else
		return binarySearch(A, mid + 1,  high, x);
}

int main(void)
{
	int A[] = { 2, 5, 6, 8, 9, 10 };
	int target = 8;

	int n = sizeof(A)/sizeof(A[0]);

	int low = 0, high = n - 1;
	int index = binarySearch(A, low, high, target);

	if (index != -1)
		printf("Element found at index %d", index);
	else
		printf("Element not found in the array");

	return 0;
}
