#include <iostream>
using namespace std;


int binary_search(int arr[], int n, int x)
{
    
    int left = 0;
    int right = n - 1;

    
    while (left <= right)
    {
        int mid = (left + right) / 2;
        int mid_value = arr[mid];

        if (mid_value == x)
            return mid;
        else if (mid_value < x)
            left = mid + 1;
        else
            right = mid - 1;
    }

    
    return -1;
}

int main()
{
    
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);

    
    int x = 10;

    
    int result = binary_search(arr, n, x);

    
    if (result == -1)
        cout << "Khong tim thay gia tri";
    else
        cout << "Tim thay gia tri tai vi tri " << result;

    return 0;
}
