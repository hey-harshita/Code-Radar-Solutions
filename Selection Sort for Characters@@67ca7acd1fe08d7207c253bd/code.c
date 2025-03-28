void selectionSort(char arr[], int n) {
    for (int i=0; i<n-1; i++) {
        int min_idx = i;
        for (int j=i+1; j<n; n++) {
            if (arr[i] < arr[min_idx]) {
                min_idx=j;
            }
        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
        }
    }
}

void printArray(char arr[], int n) {
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}