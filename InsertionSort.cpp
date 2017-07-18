#include <iostream>
#include <vector>

void insertion_sort(std::vector<int> &num)
{
	int i, j, tmp;
	int numLength = num.size();

	for(i = 1; i < numLength; i++)
	{
		j = i;
		while(j > 0 && num[j-1] > num[j]) // for descending order use num[j-1] < num[j]
		{
			tmp = num[j];
			num[j] = num[j - 1];
			num[j - 1] = tmp;
			j--;
		}
	}

	return; // arrays are passed to functions by address; nothing is returned
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

	std::cout << "Before sorting: " << std::endl;
	for (int i=0; i<vec.size(); i++) {
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
  
	insertion_sort(vec);

	std::cout << "After sorting: " << std::endl;
	for (int i=0; i<vec.size(); i++) {
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
}
