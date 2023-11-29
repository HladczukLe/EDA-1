#include <stdio.h>

int binarySearch(int array[], int start, int end, int key){
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (array[mid] < key) {
            start = mid + 1;
        } else if (array[mid] > key) {
            end = mid - 1;
        } else {
            return mid;
        }
    }

    return start;
}

int main(){
    int n,m;
    scanf("%d %d",&n, &m);

    int dataset[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &dataset[i]);
    }

    for (int i = 0; i < m; i++) {
        int query;
        scanf("%d", &query);

        int index = binarySearch(dataset, 0, n - 1, query);
        printf("%d\n", index);
    }

    return 0;
}