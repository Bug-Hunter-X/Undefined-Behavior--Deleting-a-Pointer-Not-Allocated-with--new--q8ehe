# C++ Undefined Behavior: Deleting a Pointer Not Allocated with 'new'

This example showcases a common error in C++: attempting to deallocate memory using `delete` for a pointer that was not allocated using `new`.  This leads to undefined behavior, potentially resulting in crashes or subtle errors that are difficult to track down.

The `bug.cpp` file contains the erroneous code.  The `bugSolution.cpp` file demonstrates the correct way to handle memory allocation and deallocation when using pointers.