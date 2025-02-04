int main() {
  int a = 10;
  int* ptr = &a;
  *ptr = 20; 
  int b = *ptr; 
  std::cout << b << std::endl; // Output: 20
  delete ptr; //ERROR: This is undefined behavior. 
                 // ptr is not allocated using new, so delete is invalid.
  return 0; 
}