#include <bits/stdc++.h>
using namespace std;

void maxheap(int a[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest]) {
        largest = left;
    }
    if (right < n && a[right] > a[largest]) {
        largest = right;
    }
    if (largest != i) {
        swap(a[i], a[largest]);
        maxheap(a, n, largest);
    }
}

void heapSort(int a[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        maxheap(a, n, i);
    for (int i = n - 1; i >= 0; i--) {
        swap(a[0], a[i]);
        maxheap(a, i, 0);
    }
}

int main() {
    int n;
    cin >> n;
    int *a = new int[n];
    srand(time(NULL));
    for (int i = 0;i < n;i++) {
        a[i] = -10000 + rand() % 20001;
    }
    clock_t tg;
    tg = clock();
    heapSort(a, n);
    tg = (clock() - tg)/CLOCKS_PER_SEC*1000;
    cout << "Thoi gian chay: " << tg << "ms";
}
