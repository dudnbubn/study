#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[1000000] = { 0, };

bool compare(int a, int b) {
	return a > b;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	for (int i = 0; i < n; i++)	cin >> arr[i];
	sort(arr, arr + n, compare);
	for (int i = 0; i < n; i++)	cout << arr[i] << "\n";
	return 0;
}