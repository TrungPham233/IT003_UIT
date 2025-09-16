#include <bits/stdc++.h>
#include <ctime>
using namespace std;

int ph(int a[], int left, int right, int& dem) {
    int mid = (left + right)/2;
    int chot = a[mid];
    int i = left;
    int j = right;
    while (true) {
        while (a[i] > chot) {
            i++;
        }
        while (a[j] < chot) {
            j--;
        }
        if (i < j) {
            swap(a[i],a[j]);
            dem++;
            cout << dem << endl;
            i++;
            j--;
        }
        else {
            if (i == j) {
                dem++;
                cout << dem << endl;
            }
            return j;
        }
    }
}
void quicksort(int a[], int left, int right, int& dem) {
    if (left < right) {
        int k = ph(a,left,right,dem);
        quicksort(a,left,k,dem);
        quicksort(a,k+1,right,dem);
    }
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int dem = 0;
    quicksort(a,0,n-1,dem);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Number of times to swap 2 numbers: " << dem;
    return 0;
}
