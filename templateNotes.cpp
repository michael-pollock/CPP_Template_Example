#include <iostream>

using namespace std;
template <class T>
T myMax(T a, T b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

template <class T>
T linearSearch(T arr[], T target, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == target) {
			return i;
		}
	}
	return -1;
}

template <class T>
T binarySearch(T arr[], T target, int begin, int end) {
	if (begin > end)
		return -1;
	int middle = (begin + end) / 2;
	if (target == arr[middle])
		return middle;
	if (target < arr[middle])
		return binarySearch(arr, target, begin, middle - 1);
	else 
		return binarySearch(arr, target, middle - 1, end);
}


/*
template <class T>
T treasureChest(T booty) {
	T treasure
}
*/

int main() {
	int x = 12;
	int y = 11;
	cout << "comparing " << x << " and " << y << endl;
	cout << myMax(x, y);
	return 0;
}