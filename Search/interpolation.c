#include <stdio.h>

int interpolation_search(int ar[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right && key >= ar[left] && key <= ar[right]) {
        if (left == right) {
            if (ar[left] == key) return left;
            return -1;
        }
        int pos = left + (((double)(right - left) / (ar[right] - ar[left])) * (key - ar[left]));
        if (ar[pos] == key)
            return pos;
        if (ar[pos] < key)
            left = pos + 1;
        else
            right = pos - 1;
    }
    return -1;
}

void main() {
    int i, n, key, pos;
    printf("Enter the limit of the array: ");
    scanf("%d", &n);
    int ar[n];
    printf("Enter the elements of the array (sorted): \n");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    printf("Enter the element to search for: ");
    scanf("%d", &key);
    pos = interpolation_search(ar, n, key);
    if (pos == -1)
        printf("\nThere is no such element in the array.\n");
    else    
        printf("\nThe element is present at position %d\n", pos);
}
