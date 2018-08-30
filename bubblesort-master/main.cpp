#include <iostream>

using namespace std;

int bubbleSort(int [], int);
void showBubble(const int [], int);

int counter = 0;

int main()
{
	const int SIZE = 10;

	int values[SIZE] = {2, 5, 7, 9, 1, 3, 4, 6, 8, 10};

	cout << "The unsorted values are:\n";
	showBubble(values, SIZE);

	bubbleSort(values, SIZE);

	cout << "The sorted values are:\n";
	showBubble(values, SIZE);

	cout << "The loop ran " << counter << " times.";

	return 0;
}

int bubbleSort(int array[], int size)
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
				counter++;
			}
		}
   } while (swap);
	return counter;
}

void showBubble(const int array[], int size)
{
	for (int count = 0; count < size; count++)
		cout << array[count] << " ";
	cout << endl;
}