//https://freetuts.net/de-quy-da-tuyen-exponential-recursion-2958.html
using namespace std;
void dayNhiPhan(int i, int n, int *X)
{
    int val;    /
    for (val = 0; val < 2; val++)      
    {
        X[i] = val;
  
        if (i == (n-1))      
        {
            int j;
            for(j = 0; j < n; j ++)       
            {
                cout<<X[j];
            }
            cout<<"\n";
        }
  
        else              
        {
            dayNhiPhan(i+1, n, X); 
        }
    }
}
