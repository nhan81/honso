//https://freetuts.net/de-quy-tuyen-tinh-2946.html
#include <iostream>
using namespace std;
 
int factorial(int n){
  if(n == 0) return 1; 
  return n * factorial(n-1);
}
//h�m main
int main() {
  int n;
  cout<<"Nhap v�o so giai thua ban muon t�nh: ";
  cin>>n;
  int kq = factorial(n);
  cout<<"\nKet qua \n"<<n<<"! = "<<kq;
}

