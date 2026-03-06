
//Insertion Sorting Program in C
#include <stdio.h>

void insertionsort(int arr[], int n) 
{
    int i, key, j;
    // Loop from the second element (index 1) to the end of the array
    for (i = 1; i < n; i++) 
	{
        key = arr[i]; // Store the current element to be inserted
        j = i - 1;    // Start comparing with the element just before it
        while (j>=0 && arr[j] > key) 
		{
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; // Insert the key at the correct position
    }
}

void printarray(int arr[], int n) 
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() 
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printarray(arr, n);

    insertionsort(arr, n);

    printf("Sorted array in ascending order: \n");
    printarray(arr, n);

    return 0;
}


