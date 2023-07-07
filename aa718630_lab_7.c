#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n, int swaps[])
{
    int i, j, temp, swapCount = 0;
    for(i = 0; i < n ; i++){
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps[i]++;
                swapCount++;
            }
            
        }
    }
    printf("swaps: %d\n", swapCount);
        
}

int main() {
    int numArr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(numArr) / sizeof(numArr[0]);
    int* swaps = (int*)malloc(n * sizeof(int));
    if (swaps == NULL)
    {
        return 1;
    }
    for(int i = 0; i < n; i++)
    {
        swaps[i] = 0;
    }
    
    printf("Original: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", numArr[i]);
    }
    printf("\n");

    printf("after sort: \n");
    bubbleSort(numArr, n, swaps);
    
    for (int i = 0; i < n; i++)
    {
        printf("%d,", swaps[i]);
    }
     


    
}