#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Array must contain at least two elements.\n");
        return 1; 
    }
    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int highest = INT_MIN; 
    int secondHighest = INT_MIN; 
    for (int i = 0; i < n; i++) {
        if (arr[i] > highest) {
            secondHighest = highest;
            highest = arr[i];
        } else if (arr[i] > secondHighest && arr[i] < highest) {
            secondHighest = arr[i];  
        }
    }
    if (secondHighest == INT_MIN) {
        printf("There is no second highest number in the array.\n");
    } else {
        printf("The second highest number is: %d\n", secondHighest);
    }
    return 0;
}
