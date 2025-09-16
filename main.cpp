#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(NULL));
    clock_t tg;
    int n;
    do {
        cout << "Please enter a number in range 1 .. 100,000,000: ";
        cin >> n;
    }
    while (n <= 0);
    cout << endl;
    int a[n];
    for (int i = 0;i < n;i++) {
        a[i] = -10000 + rand() % 20001;
    }
    cout << "New initial array: ";
    for (int i = 0;i < n;i++) {
        cout << a[i] << " ";
    }
    cout << "**********MENU*********" << endl;
    cout << "1. Selection Sort" << endl;
    cout << "2. Interchange Sort" << endl;
    cout << "3. Insertion Sort" << endl;
    cout << "4. Binary Insertion Sort" << endl;
    cout << "5. Bubble Sort" << endl;
    cout << "6. Shake/Shaker Sort" << endl;
    cout << "7. Counting Sort" << endl;
    cout << "8. Quick Sort" << endl;
    cout << "9. Merge Sort" << endl;
    cout << "10. Heap Sort" << endl;
    cout << "11. Shell Sort" << endl;
    cout << "12. Radix Sort" << endl;
    cout << "13. Exit" << endl;
    cout << "Please choose an algorithm (Enter an interger): ";
    int m;
    cin >> m;
    cout << endl;
    switch (m) {
        case 1:
            tg = clock();
            Seletion_Sort(a);
            tg = (clock() - tg)/CLOCKS_PER_SEC*1000;
            cout << "Time of Selection Sort: " << tg << " s" << endl;
            cout << "Sorted array: ";
            for (int i = 0;i < n;i++) {
                cout << a[i] << " ";
            }
            cout << endl;
            break;
        case 2:
            Interchange_Sort(a);
            break;
        case 3:
            Insertion_Sort(a);
            break;
        case 4:
            Binary_Insertion_Sort(a);
            break;
        case 5:
            Bubble_Sort(a);
            break;
        case 6:
            Shake/Shaker_Sort(a);
            break;
        case 7:
            Counting_Sort(a);
            break;
        case 8:
            Quick_Sort(a);
            break;
        case 9:
            Merge_Sort(a);
            break;
        case 10:
            Heap_Sort(a);
            break;
        case 11:
            Shell_Sort(a);
            break;
        case 12:
            Radix_Sort(a);
            break;
        default:
            cout << "See you again";
            return 0;
    }
}
