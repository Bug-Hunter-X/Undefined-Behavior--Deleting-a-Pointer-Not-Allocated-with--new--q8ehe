int main() {
  int a = 10;
  int* ptr = &a; // ptr points to a stack allocated variable 
  *ptr = 20; 
  int b = *ptr; 
  std::cout << b << std::endl; // Output: 20
  // delete ptr; //This is not needed and incorrect
  return 0; 
}

//Example of correct dynamic memory allocation and deallocation:
int main() {
    int *dynamicPtr = new int(10); 
    *dynamicPtr = 20; 
    std::cout << *dynamicPtr << std::endl; // Output 20
    delete dynamicPtr; 
    dynamicPtr = nullptr; //Good practice to set pointer to null after deletion 
    return 0;
}