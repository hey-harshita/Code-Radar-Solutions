void selectionSort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        int min_idx = i;
        for (int j=1; j<n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        min_idx != i;
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
        }
    }
}
printArray(int arr[], int n) {
    for (i=0; i<n; i++) {
        printf("%d ", arr[i])
    }
}