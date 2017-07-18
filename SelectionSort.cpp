#include <iostream>
#include <vector>

void selection_sort(std::vector<int> &num)
{
	int i, j, t;
	int numLength = num.size();

	for(i=0; i<numLength; i++)
	{
		for(j=i+1; j<numLength; j++)
		{
			if(num[j]<num[i]) // for descending order use a[j] > a[i]
			{
				t=num[i];
				num[i]=num[j];
				num[j]=t;
			}
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

	selection_sort(vec);

	std::cout << "After sorting: " << std::endl;
	for (int i=0; i<vec.size(); i++) {
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
}
