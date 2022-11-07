// C++ program to remove the
// duplicate elements from the array
// using STL in C++

#include <bits/stdc++.h>
using namespace std;

// Function to remove duplicate elements
void removeDuplicates(int arr[], int n)
{

	int i;

	// Initialise a set
	// to store the array values
	set<int> s;

	// Insert the array elements
	// into the set
	for (i = 0; i < n; i++) {

		// insert into set
		s.insert(arr[i]);
	}

	set<int>::iterator it;
	for (it = s.begin(); it != s.end(); ++it)
		cout << *it << " ";
}

// Driver code
int main()
{
	int m;
	cin >> m;
	int arr[m];
	for(int i=0;i<m;i++){
	    cin >> arr[i];
	}

	int n = sizeof(arr) / sizeof(arr[0]);
	removeDuplicates(arr, n);

	return 0;
}
