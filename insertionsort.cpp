#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int a[], int n) {
    for (int i = 0;i < n;i++) {
        int x = a[i];
        int j = i - 1;
        for (j = i - 1;j >= 0 && x < a[j];j--) {
                a[j+1] = a[j];
        }
        a[j+1] = x;
    }
}

int main() {
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    InsertionSort(a,n);
    for (int i = 0;i < n;i++) {
        cout << a[i] << " ";
    }
}
