#include<iostream>
#include<string>
using namespace std;
int main()
{
  int t,size,k;
  cin>>t;
  while(t--)
  {
    cin>>size>>k;
    const int sz = size;
    string arr;
    cin>>arr;
    int prod=1;
    int max=-1;
    //cout<<"value of size :"<<size<<"  value of k:"<<k<<endl;
    for(int i=size-k;i>=0;i--)
    {
      prod=1;
      //cout<<"value of i : "<<i<<endl;
      for(int j=i,l=0;l<k;j++,l++)
      {
        //cout<<"value of j :"<<j<<endl;
        //cout<<"value of a[j]"<<arr[j]<<endl;

        prod = prod * stoi(arr.substr(j,1));
      }
      if(prod>max)
        max=prod;
      //cout<<"product:"<<prod<<endl<<endl<<endl;
    }
    cout<<max<<endl;
  }
  return 0;
}
