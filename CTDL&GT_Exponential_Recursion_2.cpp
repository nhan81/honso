//https://freetuts.net/de-quy-da-tuyen-exponential-recursion-2958.html
using namespace std;
void dayNhiPhan(int i, int n, int *X)
{
    int val;    
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
 
int main()
{
    int n;
    cout<<"Nh?p n : ";    
    cin>>n;
  
    int X[n];    
    cout<<"D�y nhi ph�n c� do d�i "<<n<<" l�:\n";
    dayNhiPhan(0, n, X);  
  
}
