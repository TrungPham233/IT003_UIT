#include <bits/stdc++.h>
#include <ctime>
using namespace std;

// Hàm sắp xếp mảng theo thuật toán Bubble Sort
void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    srand(time(NULL));
    for (int i = 0;i < n;i++) {
        a[i] = -10000 + rand() % 20001;
    }
    clock_t tg;
    tg = clock();
    bubbleSort(a, n);
    tg = (clock() - tg)/CLOCKS_PER_SEC*1000;
    cout << "Thoi gian chay: " << tg << " miligiay" << endl;

    return 0;
}
