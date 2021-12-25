#include <iostream>
using namespace std;
int main()
{
cout << "Belah Ketupat berongga" << endl;
      for (i = 0; i < n; i++)
      {
            for (j = 0; j < n - i; j++)
            {
                  cout << " ";
            }
            for (j = 0; j < n; j++)
            {
                  if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                        cout << "*";
                  else
                        cout << " ";
            }
            cout << "\n";
      
      return 0;
}
