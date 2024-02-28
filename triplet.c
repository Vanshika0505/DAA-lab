#include<stdio.h>
void main() {
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = n - 1; i >= 2; i--) 
    {
        int j = 0;
        int k = i - 1;
        while (j < k) {
            if (arr[j] + arr[k] == arr[i]) 
            {
                printf("Indices i, j, k: %d, %d, %d\n", j, k, i);
                printf("Values: %d, %d, %d\n", arr[j], arr[k], arr[i]);
                return;
            }
            else if (arr[j] + arr[k] < arr[i]) 
            {
                j++;
            }
            else 
            {
                k--;
            }
        }
    }
    printf("No such triplet found.\n");
}
