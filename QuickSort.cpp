#include <iostream>
#include <vector>
using namespace std;


int partition(vector<int>& A, int left, int right, int who) {
  for (int i=left; i<right; ++i) {
    if (A[i] <= who) {
      swap(A[i], A[left]);
      left ++;
    }
  }
  return left - 1;
}


void quicksort(vector<int>& A, int left, int right) {
  if (left >= right) return;
  
  int middle = left + (right - left) / 2;

  swap(A[middle], A[left]);

  int who = A[left];
  int left_temp = left + 1;

    for (int i=left_temp; i<right; ++i) {
    if (A[i] <= who) {
      swap(A[i], A[left_temp]);
      left_temp ++;
    }
  }
  int midpoint = left_temp - 1;

  static int iter = 0;

  cout << "Iteration " << iter << ": ";

  for (int i=0; i<A.size(); ++i) {
		cout << A[i] << " ";
	}

  cout << endl;
  iter++;

  swap(A[left], A[midpoint]);
  quicksort(A, left, midpoint);
  quicksort(A, midpoint + 1, right);
}

int main ()
{
	int elements[] = {1, 12, 2, 2, 2, 6, 20, 22};
	vector<int> A(elements, elements + 8);
	quicksort(A, 0, A.size());
	for (int i=0; i<A.size(); ++i) {
		cout << A[i] << " ";
	}
	cout << endl;
	
	system("pause");
	
	return 0;
}
 
