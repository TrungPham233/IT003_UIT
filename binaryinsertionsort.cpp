#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int a[], int n) {
    for (int i = 0;i < n;i++) {
        int x = a[i];
        int l = 0;
        int r = i - 1;
        while (l <= r) {
            int m = (l+r)/2;
            if (x < a[m]) {
                r = m - 1;
            }
            else l = m + 1;
        }
        for (int j = i - 1;j >= l;j--) {
            a[j+1] = a[j];
        }
        a[l] = x;
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
