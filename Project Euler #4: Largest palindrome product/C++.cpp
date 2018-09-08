#include <iostream>
using namespace std;
int larrgestPalindrome(int n1)
{
    int upper_limit = 999;
    int lower_limit = 100;
    int max_product = 0;
    for (int i = upper_limit;i >= lower_limit;i--)
    {
        for (int j = upper_limit; j >= lower_limit; j--)
        {
            int product = i * j;
            if (product > n1)
                continue;
            if (product < max_product)
                break;
            int number = product;
            int reverse = 0;
            while (number != 0)
            {
                reverse = reverse * 10 +
                          number % 10;
                number /= 10;
            }

            if (product == reverse && product > max_product)
                {

                  max_product = product;
                }
        }
    }
    return max_product;
}

// Driver code
int main()
{
  int t,inp;
  cin>>t;
  while(t--){
    cin>>inp;
  cout << larrgestPalindrome(inp)<<endl;

  }
  return 0;
}
