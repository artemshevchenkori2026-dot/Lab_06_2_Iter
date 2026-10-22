#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate an array with random values in range [Low, High]
void Create(int* a, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

// Function to print the array with formatted output
void Print(const int* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

// Function to find the index of the maximum element
int MaxIndex(const int* a, const int size) {
    int maxIdx = 0;
    for (int i = 1; i < size; i++) {
        if (a[i] > a[maxIdx]) {
            maxIdx = i;
        }
    }
    return maxIdx;
}

// Function to find the index of the minimum element
int MinIndex(const int* a, const int size) {
    int minIdx = 0;
    for (int i = 1; i < size; i++) {
        if (a[i] < a[minIdx]) {
            minIdx = i;
        }
    }
    return minIdx;
}

// Function to swap elements at two given indices
void Swap(int* a, const int i, const int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int main() {
    srand((unsigned)time(0));

    const int SIZE = 10;
    const int LOW = -20;
    const int HIGH = 50;

    int a[SIZE];

    Create(a, SIZE, LOW, HIGH);

    cout << "Initial array:" << endl;
    Print(a, SIZE);

    int maxIdx = MaxIndex(a, SIZE);
    int minIdx = MinIndex(a, SIZE);

    cout << endl;
    cout << "Max element: " << a[maxIdx] << " at index [" << maxIdx << "]" << endl;
    cout << "Min element: " << a[minIdx] << " at index [" << minIdx << "]" << endl;

    Swap(a, maxIdx, minIdx);

    cout << endl;
    cout << "Modified array:" << endl;
    Print(a, SIZE);

    return 0;
}