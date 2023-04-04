//https://sinhvientot.net/giai-thuat-tim-kiem-tuyen-tinh/
#include<stdio.h>
#define max 100
int linearsearch(int a[],  int x)
{
    int i;
    for (int i = 0; i < max;i++)
    {

        if (a[i] == x)
        {
                return 1;
        }
    }
    return 0;
} 
int main()
{
    int a[]={ 1,2,3,4,5,6,7,8 };
    int x = 9;
    if (linearsearch(a, x))
    {
        printf("%d ton tai trong mang",x);
    }
    else
    {
        printf("%d khong ton tai trong mang",x);
    }
    return 0;
}

