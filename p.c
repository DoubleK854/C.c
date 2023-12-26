#include <stdio.h>
#include <stdlib.h>

int main() {
  int size, smallest, largest;

  // Input size array
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  // Allocate memory for the array
  int *arr = malloc(size * sizeof(int));

  // loop through the elements
  for (int i = 0; i < size; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  // Set smallest & largest in arr
  smallest = largest = arr[0];

  // Loop through the rem elements
  for (int i = 1; i < size; i++) {
    // Check if current element is < than smallest
    if (arr[i] < smallest) {
      smallest = arr[i];
    }

    // Check if current element Is > than largeSt
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }

  // Print the smallest & largest
  printf("Smallest element: %d\n", smallest);
  printf("Largest element: %d\n", largest);

  // Free allocated memory
  free(arr);
  //end the program
return 0;
}