#include <stdio.h>

void linearSearch(int a[], int n, int value)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (a[i] == value)
        {
            printf("\nLinear Search: Value found at position %d",
                   i + 1);
            return;
        }
    }

    printf("\nLinear Search: Value not found");
}


void binarySearch(int a[], int n, int value)
{
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == value)
        {
            printf("\nBinary Search: Value found at position %d",
                   mid + 1);
            return;
        }
        else if (value < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("\nBinary Search: Value not found");
}


int main()
{
    int a[100];
    int n, i;
    int value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &value);

    linearSearch(a, n, value);

    binarySearch(a, n, value);

    return 0;
}