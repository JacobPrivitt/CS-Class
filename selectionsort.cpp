#include <iostream>

using namespace std;

int selectSort(int [], int);
void selectShow(const int [], int);

int counter = 0;

int main() {

    const int SIZE = 10;

    int values[SIZE] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};

    cout << "This is the unsorted arry:" << endl;
    selectShow(values, SIZE);

    selectSort(values, SIZE);

    cout << "This is the sorted array:" << endl;
    selectShow(values, SIZE);

    cout << "The loop ran " << counter << " times.";

    return 0;
}

int selectSort(int array[], int SIZE) {

    int startScan, minIdex, minValue;

    for (startScan = 0; startScan < (SIZE - 1); ++startScan) {

        minIdex = startScan;
        minValue = array[startScan];
        for(int index = startScan + 1; index < SIZE; index++) {
            if (array[index] < minValue) {
                minValue = array[index];
                minIdex = index;
            }counter++;
        }
        array[minIdex] = array[startScan];
        array[startScan] = minValue;
        return counter;
    }

}

void selectShow(const int array[], int size)
{
    for (int count = 0; count < size; count++)
        cout << array[count] << " ";
    cout << endl;
}