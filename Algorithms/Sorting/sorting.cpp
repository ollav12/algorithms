#include <iostream>

using namespace std;

void swap(int numbers[], int i, int j) {
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

/*
Bubble sort is a simple sorting algorithm that repeatedly steps through the list,
compares adjacent elements and swaps them if they are in the wrong order.
*/
void bubbleSort(int numbers[], int size) {
    for (int i = 0; i < size; i++) { 
        for (int j = 1; j < size; j++) {
            if (numbers[j] < numbers[j - 1]) {
                swap(numbers, j, j -1);
            }
        }
    }
}

int main() {
    // Testing
    int numbers[] = {2, 5, 3, 1};
    bubbleSort(numbers, size(numbers));
    for (int number: numbers) {
        cout << number << endl;
    }

    return 0;
}
