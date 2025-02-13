#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec;
  vec.push_back(true);
  vec.push_back(false);

  size_t size = vec.size(); // Correct size in elements
  size_t sizeInBytes = vec.capacity() * sizeof(bool); //More Reliable size in bytes, using capacity
                                                      // Actual memory usage might be different
  std::cout << "Size in elements: " << size << std::endl;
  std::cout << "Estimated size in bytes: " << sizeInBytes << std::endl;

  // Accessing elements safely
  for (size_t i = 0; i < vec.size(); ++i) {
    std::cout << "Element at index " << i << ": " << vec[i] << std::endl;
  }

  //Alternative to avoid direct indexing and size calculation if performance is critical
  for(bool b : vec){
      std::cout<<b<<std::endl;
  }

  return 0;
}
