#include <iostream>
#include <vector>

// binary search
// returns position of searched value, -1 if absent
// left is index of left boundary, right is index of right boundary
int binarySearch(std::vector<int> &num, int value, int left, int right) {
      while (left <= right) {
            int middle = (left + right) / 2;
            if (num[middle] == value)
                  return middle;
            else if (num[middle] > value)
                  right = middle - 1;
            else
                  left = middle + 1;
      }
      return -1;
}

int main()
{
	//practice vector
	std::vector<int> vec;
	vec.push_back(0);
	vec.push_back(5);
	vec.push_back(1);
	vec.push_back(8);
	vec.push_back(2);
	vec.push_back(6);
	vec.push_back(4);
	vec.push_back(9);
	vec.push_back(7);
	vec.push_back(3);

	int search = binarySearch(vec,5,0,vec.size()-1);

	if (search != -1)
	{
		std::cout << vec[search];
	}
	std::cout << std::endl;


	return 0;
}
