#include <iostream>
#include <stdio.h>

using namespace std;

void bubbleSort(int[], int);
int binSearch(int[], int, int);

int x = 10;

int main()
{
    const int SIZE = 10;

    int values[SIZE] = {2, 5, 7, 9, 1, 3, 4, 6, 8, 10};

    bubbleSort(values, SIZE);

    int n = sizeof(values)/ sizeof(values[0]);

    int result = binSearch(values, 0, n-1);

    (result == -1)? printf("Element is not present in array")
                  : printf("Element is present at index %d",
                          result);

    return 0;
}

void bubbleSort(int array[], int size)
{
    int  temp;
    bool swap;

    do
    {	swap = false;
        for (int count = 0; count < (size - 1); count++)
        {
            if (array[count] > array[count + 1])
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}

int binSearch(int arr[], int l, int r)
{
    while (l <= r)
    {
        int m = l + (r-l)/2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }

    return -1;
}
