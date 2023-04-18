#include <iostream>
using namespace std;

// Hàm s?p x?p b?ng phuong pháp ch?n tr?c ti?p
void selection_sort(int arr[], int n)
{
    int min_idx;
    for (int i = 0; i < n-1; i++)
    {
        // Tìm ph?n t? nh? nh?t trong do?n [i+1, n-1]
        min_idx = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        
        if (min_idx != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

int main()
{

    int arr[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    
    selection_sort(arr, n);

    
    cout << "Mang da sap xep: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
