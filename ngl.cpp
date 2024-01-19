// Brute force

#include <iostream>
using namespace std;

void printNGE(int arr[], int n)
{
	int next, i, j;
	for (i = 0; i < n; i++) {
		next = arr[i];
		for (j = i - 1; j >=0; j--) {
			if (arr[i] < arr[j]) {
				arr[i] = arr[j];
				next=arr[j];
			}
		}
		cout << arr[i] << " --> " << next << endl;
	}
}

// Driver Code
int main()
{
	int arr[] = { 3,0,0,2,0,4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printNGE(arr, n);
	return 0;
}





