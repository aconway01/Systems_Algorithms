#include <fstream>
#include <iostream>
#include <vector>


using namespace std;

int bubblesort(vector<int>& a, int size) {
	int intermediate;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}

	}

	return 0;

}

int main() {
	vector<int> numbers;
	ifstream infile;
	infile.open("numbers.txt");

	int i;
	while(infile >> i)
	{
		numbers.push_back(i);
	}
	
	infile.close();

	bubblesort(numbers,numbers.size());

	for (int i=0; i < numbers.size(); i++) {
		cout << numbers[i] << endl;

	}

	system("pause");

	return 0;

}
