/**
Jacob Privitt
CS-150-101
Lab 02
8/30/18
Pointers Lab
**/

/*
1.  Lab- Program challenge Assignment Chapter 10 (30 pts.) -  How many social media posts do students
make when perhaps they should be doing studying in one month? Ha! Ha!  This program should calculate
and print out the following:  ask number for number of students and how many posts they made, sort
those entries, average, median, and mode-(if no mode it should print out that there is no mode) of
the values entered.  The program should ask the user how many students were surveyed and dynamically
allocate an array of that size. The program should then allow the user to enter the number of social
media posts each student has made. Use  separate functions and name them: median, mode, getMovieData,
sort, average, and getNumber.  Create functions that pass pointers.  Use numerous documentation
comments to explain your code.

2. Chapter 10 Review Questions and Exercises: #2-38, even numbered items only (30 pts.)

*/

#include <iostream>
#include <iomanip>

using namespace std;

void getData(int *, int);
void selectSort(int *, int);
double average(int *, int);
double median(int *, int);
int mode(int *, int);

int main()
{
    int SIZE, MOD;
    double AVG, MED;
    int *students;

    cout << "How many students were surveyed?" << endl;
    cin >> SIZE;

    students = new int[SIZE];



    getData(students, SIZE);

    selectSort(students, SIZE);

    AVG = average(students, SIZE);

    MED = median(students, SIZE);

    MOD = mode(students, SIZE);

    cout << "Here are some social media stats:" << endl;

    cout << fixed << showpoint << setprecision(2);

    cout << "Average: " << AVG << endl;
    cout << "Median: " << MED << endl;
    cout << "Mode: " << MOD << endl;

    delete [] students;
    students = 0;

    return 0;

}

void getData(int *array, int size) {
    for(int i = 0; i < size; i++) {
        cout << "How many posts did student " << ( i + 1) << " make in a month?" << endl;
        cin >> *(array + i);
    }
}

void selectSort(int *array, int size)
{
	int startScan, minIndex, minValue;

	for (startScan =0; startScan< (size -1); startScan++)
	{
		minIndex = startScan;
		minValue = *(array + startScan);
		for(int index = startScan + 1; index < size; index++)
		{
			if (*(array + index) < minValue)
			{
				minValue = *(array + index);
				minIndex = index;
			}
		}
        *(array + minIndex) = *(array + startScan);
		*(array + startScan) = minValue;
	}
}

double average(int *array, int size) {

    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(array + i);
    }
    return sum / size;
}

double median(int *array, int size) {

    int Mid = (size - 1) / 2;
	double Med;

	if (size % 2 == 0)
	{
		Med = (*(array + Mid) + *(array + (Mid + 1))) / 2;
	}
	else
		Med = *(array + Mid);

	return Med;
}

int mode(int *array, int size) {

	int Mode, Most, Count;
	Count = Most = 0;

	for (int i = 0; i < size; i++)
	{
		Count++;
		if (*(array + i) < *(array + i + 1))
		{
			if (Count > Most)
			{
				Mode = *(array + i);
				Most = Count;
			}
			Count = 0;
		}
	}
	return Mode;

}
