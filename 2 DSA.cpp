#include <iostream>

using namespace std;

// 2. Show how the insertion sort algorithm will sort the list: 5, 12, 25, 31, 15, 6, 8, 21.
// A. How many comparisons will be required?
int insertionSort (int nums[], int len) {
    int key;
    int counter = 0;
    for (int i=1; i<len; i++) {
        key = nums[i];
        for (int j=i-1; j>=0; j--) {
            if (nums[j] > key) {
                nums[j+1] = nums[j];
                counter++;
            }
            else {
                j++;
                nums[j] = key;
                counter++;
                break;
            }
        }
    }
    return counter;
}

// 3. Show how the selection sort algorithm will sort the list: 5, 12, 25, 31, 15, 6, 8, 21.
// A. How many comparisons will be required?
int selectionSort (int nums[], int len) {
    int counter = 0;

    for (int i=0; i<len-1; i++) {
        int minIndex = i;
        for (int j=i+1; j<len; j++) {
            if (nums[j] < nums[minIndex]) {
                minIndex = j;
            }
            counter++;
        }
        int temp = nums[minIndex];
        nums[minIndex] = nums[i];
        nums[i] = temp;
    }
    return counter;
}

// B. How many comparisons will be required in case of bubble sort?
int bubbleSort (int nums[], int len) {
    int counter = 0;
    for (int i=0; i<len; i++) {
        for (int j=0; j<len-i; j++) {
            if (nums[j] > nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
                counter++;
            }
        }
    }
    return counter++;
}

// 4. Write three programs in C++ to find out the minimum and maximum value from the given array using?
// A. Insertion sort (2 functions: insertion_max and insertion_min)
int insertion_max (int nums[], int len) {
    insertionSort(nums, len);
    int MAX = nums[len-1];
    return MAX;
}
int insertion_min (int nums[], int len) {
    insertionSort(nums, len);
    int MIN = nums[0];
    return MIN;
}

// B. Selection sort (2 functions: selection_max and selection_min)
int selection_max (int nums[], int len) {
    selectionSort(nums, len);
    int MAX = nums[len-1];
    return MAX;
}
int selection_min (int nums[], int len) {
    selectionSort(nums, len);
    int MIN = nums[0];
    return MIN;
}

// C. Bubble sort (2 functions: bubble_max and bubble_min)
int bubble_max (int nums[], int len) {
    bubbleSort(nums, len);
    int MAX = nums[len-1];
    return MAX;
}
int bubble_min (int nums[], int len) {
    bubbleSort(nums, len);
    int MIN = nums[0];
    return MIN;
}

int main () {
    int numSelection[] = {5, 12, 25, 31, 15, 6, 8, 21};
    int numInsertion[] = {5, 12, 25, 31, 15, 6, 8, 21};
    int numBubble[] = {5, 12, 25, 31, 15, 6, 8, 21};
    int len = 8;

    cout << "Original Array: ";
    for (int i=0; i<len; i++) {
        cout << numSelection[i] << " ";
    }

    int selectionCounter = selectionSort (numSelection, len);
    int insertionCounter = insertionSort (numInsertion, len);
    int bubbleCounter = bubbleSort (numBubble, len);

    cout << endl << "Sorted Array: ";
    for (int i=0; i<len; i++) {
        cout << numSelection[i] << " ";
    }
    cout << endl;


    cout << "\t\tComparisons" << endl;
    cout << "\tSorting Algorithm" << "\tNo of Comparisons" << endl;
    cout << "\tInsertion Sort:   \t" << insertionCounter << endl;
    cout << "\tSelection Sort:   \t" << selectionCounter << endl;
    cout << "\tBubble Sort:      \t" << bubbleCounter << endl;
    return 0;
}
