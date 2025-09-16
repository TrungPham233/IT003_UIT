#include <bits/stdc++.h>
using namespace std;

void ShellSort(int a[], int n) {
    for (int i = n / 2;i > 0;i = i/2) {   //dieu chinh khoang cach
        for (int j = i;j <n;j++) {        //thuat toan insertion sort
            int x = a[j];
            int nho;
            for (nho = j;nho >= i &&  a[nho - i] > x;nho = nho - i) {    //xet phan tu j voi phan tu dung truoc no i khoang cac
                a[nho] = a[nho - i];                                     //da co dieu kien xet do lon trong dieu kien vong for
            }
            a[nho] = x;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    ShellSort(a,n);
    for (int i = 0;i < n;i++) {
        cout << a[i] << " ";
    }
}
