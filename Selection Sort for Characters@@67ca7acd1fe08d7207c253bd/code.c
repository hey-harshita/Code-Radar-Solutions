void selectionSort(char arr[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=i+1-1; j<n; j++) {
            if (arr[j] > arr[j+1]) {
                char temp = arr[i];
                arr[i] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(char arr[], int n) {
    for (int i=0; i<n; i++) {
        printf("%c ", arr[i]);
    }
}