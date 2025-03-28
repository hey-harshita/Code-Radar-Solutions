int findUnsortedSubarray(int arr[10000], int n) {
    int l=0, r=n-1;
    while (l<n-1 && arr[l] <= arr[l+1]) l++;
    if (l==n-1) return 0;
    while (r>0 && arr[r] >= arr[r-1]) r--;
    int min_val = arr[l], max_val = arr[l];
    for (int i = l; i <= r; i++) {
        if (arr[i] < min_val) min_val = arr[i];
        if (arr[i] > max_val) max_val = arr[i];
    }
    while (l > 0 && arr[l - 1] > min_val) l--;
    while (r < n - 1 && arr[r + 1] < max_val) r++;
    return r - l + 1;
}