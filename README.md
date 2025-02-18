# C Pointers: Common Operations and Potential Pitfalls

This example demonstrates some basic pointer operations in C.  Pointers, while powerful, can introduce subtle errors if not used correctly.  Understanding pointer arithmetic, dereferencing, and memory management is critical to writing safe and robust C code.

**Key Concepts**

* **Pointer Declaration:**  `int *ptr;` declares a pointer `ptr` that can hold the address of an integer.
* **Address-of Operator:** `&` retrieves the memory address of a variable.
* **Dereference Operator:** `*` accesses the value stored at the memory address pointed to by a pointer.
* **Pointer Arithmetic:**  Pointers can be incremented or decremented to point to the next or previous element in an array (assuming appropriate data type).

**Potential Issues**

* **Dangling Pointers:** Pointers that point to memory that has been freed.
* **Memory Leaks:** Failure to free dynamically allocated memory.
* **Segmentation Faults:** Accessing memory that the program is not allowed to access.

This example aims to illustrate safe pointer usage, but more complex scenarios require careful error handling.