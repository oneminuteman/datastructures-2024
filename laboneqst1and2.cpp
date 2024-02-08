#include <iostream>
#include <vector>

// Function to calculate the sum of integers in the array
int summation(const std::vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return sum;
}

// Function to find the maximum integer in the array
int maximum(const std::vector<int>& arr) {
    int maxNum = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }
    return maxNum;
}

int main() {
    int n;
    std::cout << "Enter the length of the array: ";
    std::cin >> n;

    // Declare an array of length n
    std::vector<int> arr(n);

    // Input n integers from the user
    std::cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Call the summation function and display its output
    int sum = summation(arr);
    std::cout << "Sum of the integers: " << sum << std::endl;

    // Call the maximum function and display its output
    int maxNum = maximum(arr);
    std::cout << "Maximum integer: " << maxNum << std::endl;

    return 0;
}
