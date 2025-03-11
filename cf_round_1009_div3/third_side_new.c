#include <stdio.h>
#include <stdlib.h>

// Max-heap functions
void heapify_down(int *heap, int n, int i) {
    int largest = i;
    int left = 2 * i + 1, right = 2 * i + 2;

    if (left < n && heap[left] > heap[largest])
        largest = left;
    if (right < n && heap[right] > heap[largest])
        largest = right;

    if (largest != i) {
        int temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;
        heapify_down(heap, n, largest);
    }
}

void heapify_up(int *heap, int i) {
    while (i > 0 && heap[i] > heap[(i - 1) / 2]) {
        int temp = heap[i];
        heap[i] = heap[(i - 1) / 2];
        heap[(i - 1) / 2] = temp;
        i = (i - 1) / 2;
    }
}

// Extract max element from heap
int extract_max(int *heap, int *n) {
    if (*n == 0) return -1;
    int max_val = heap[0];
    heap[0] = heap[*n - 1];
    (*n)--;
    heapify_down(heap, *n, 0);
    return max_val;
}

// Insert element into heap
void insert_heap(int *heap, int *n, int value) {
    heap[*n] = value;
    (*n)++;
    heapify_up(heap, *n - 1);
}

// Function to get the max last element
int max_last_element(int *arr, int n) {
    int heap[n], heap_size = 0;

    // Build max-heap
    for (int i = 0; i < n; i++)
        insert_heap(heap, &heap_size, arr[i]);

    // Process elements until 1 remains
    while (heap_size > 1) {
        int a = extract_max(heap, &heap_size);
        int b = extract_max(heap, &heap_size);
        int x = a + b - 1;
        insert_heap(heap, &heap_size, x);
    }

    return heap[0];
}

int main() {
    int t;
    scanf("%d", &t);

    int res[t]; 
    int original_t = t;

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        
        int arr[n];
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[j]);

        res[i] = max_last_element(arr, n); 
    }

    for (int i = 0; i < original_t; i++) { // Use the original value of t
        printf("%d\n", res[i]); 
    }

    return 0;
}

