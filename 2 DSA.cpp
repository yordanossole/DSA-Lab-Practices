/*
2.	Show how the insertion sort algorithm will sort the list: 5, 12, 25, 31, 15, 6, 8, 21.
A.	How many comparisons will be required?
B.	How many comparisons will be required in case of bubble sort?
*/
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
} // 19 comparisons

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
} // 12 comparisons
