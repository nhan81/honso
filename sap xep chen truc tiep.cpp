#include <iostream>
using namespace std;

// Hàm s?p x?p b?ng phuong pháp chèn tr?c ti?p
void insertion_sort(int arr[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        // Di chuy?n các ph?n t? l?n hon key d?n v? trí sau c?a chúng
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }

        // Chèn key vào v? trí dúng c?a nó trong do?n [0, i-1]
        arr[j+1] = key;
    }
}

int main()
{
    // M?ng dã cho
    int arr[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // S?p x?p m?ng
    insertion_sort(arr, n);

    // In m?ng dã s?p x?p
    cout << "Mang da sap xep: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
