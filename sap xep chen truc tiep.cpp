#include <iostream>
using namespace std;

// H�m s?p x?p b?ng phuong ph�p ch�n tr?c ti?p
void insertion_sort(int arr[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        // Di chuy?n c�c ph?n t? l?n hon key d?n v? tr� sau c?a ch�ng
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }

        // Ch�n key v�o v? tr� d�ng c?a n� trong do?n [0, i-1]
        arr[j+1] = key;
    }
}

int main()
{
    // M?ng d� cho
    int arr[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // S?p x?p m?ng
    insertion_sort(arr, n);

    // In m?ng d� s?p x?p
    cout << "Mang da sap xep: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
