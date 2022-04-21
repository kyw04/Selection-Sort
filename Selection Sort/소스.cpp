#include <iostream>
#define MAX 10
using namespace std;

void selection_sort(int arr[], int n)
{
	int i, j;
	int min, min_index; 
	for (i = 0; i < n - 1; i++)
	{
		min = arr[i];
		min_index = i;
		for (j = i + 1; j < n; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				min_index = j;
			}
		}
		int t = arr[i];
		arr[i] = min;
		arr[min_index] = t;
	}
}
int main()
{
	int arr[MAX] = { 10, 2, 6, 4, 3, 1, 7, 5, 9, 8 };

	for (int i = 0; i < MAX; i++)
		cout << arr[i] << ' ';
	cout << endl;

	selection_sort(arr, MAX);

	for (int i = 0; i < MAX; i++)
		cout << arr[i] << ' ';
	cout << endl;

	return 0;
}