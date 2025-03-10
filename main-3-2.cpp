# include <iostream>

extern int median_array(int array[], int n);

int main() {
    // Example array
    int arr[] = {3, 5, 2, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Get the median of the array
    int median = median_array(arr, n);

    // Print the median
    if (median != 0)
        std::cout << "The median is: " << median << std::endl;
    else
        std::cout << "Invalid array size or even number of elements." << std::endl;

    return 0;
}
