#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int x;
   vector <int> tab;

   while (cin>>x)
   {
       tab.push_back(x);
   }
   for (int i=tab.size()-1; i>=0; i--)
   {
       cout<<tab[i]<<" ";
   }
}

/*#include <iostream>
using namespace std;
int i, buffer, tab[100];
int main()
{
    cin>>tab[i];
    for (int i=0; i<sizeof(tab)/2; i++)
    {
        buffer = tab[i];
        tab[i] = tab[sizeof(tab[i]) - 1 -i];
        tab[sizeof(tab[i]) - 1 -i] = buffer;
    }
    cout<<tab;
    return 0;
}
*/
