void selectionSort(char arr[], int n) {
    for (int i=0; i<n-1; i++) {
        int swapped=0;
        for (int j=i+1-1; j<n; j++) {
            if (arr[j] > arr[j+1]) {
                char temp = arr[i];
                arr[i] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if (swapped=0) break;
    }
}

void printArray(char arr[], int n) {
    for (int i=0; i<n; i++) {
        printf("%c ", arr[i]);
    }
}