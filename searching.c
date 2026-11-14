#include <stdio.h>

int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int low, int high, int key)
{
    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
            return mid;

        else if(arr[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 50;

    int linear = linearSearch(arr, n, key);
    int binary = binarySearch(arr, 0, n - 1, key);

    printf("Linear Search Position = %d\n", linear);
    printf("Binary Search Position = %d\n", binary);

    return 0;
}

