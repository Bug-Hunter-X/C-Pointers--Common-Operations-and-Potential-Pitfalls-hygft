int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; // Modifies the value of x
  int y = *ptr; // y now holds the value 20

  int arr[5] = {1, 2, 3, 4, 5};
  int *arrPtr = arr; // arrPtr points to the first element of arr
  *arrPtr = 100; // Modifies the first element of arr

  // Example of using pointers to swap two values
  int a = 5, b = 10;
  int *ptrA = &a, *ptrB = &b;
  int temp = *ptrA; 
  *ptrA = *ptrB;
  *ptrB = temp;

  return 0;
}