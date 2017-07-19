#include <iostream>
#include <algorithm>
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
  vec.push_back(3);
  vec.push_back(2);
  vec.push_back(6);
  vec.push_back(4);
  vec.push_back(9);
  vec.push_back(1);
  vec.push_back(3);

  std::sort(vec.begin(),vec.end());

  std::cout << "My vector: ";
  for (int i=0; i<vec.size(); ++i) {
    std::cout << vec[i] << " ";
  }

  int val = 5;

  int search = binarySearch(vec,val,0,vec.size()-1);

  std::cout << "\nValue to find: " <<  val << std::endl;

  std::cout << "Search index: "<< search << std::endl;

  return 0;
}
