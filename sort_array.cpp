#include<bits\stdc++.h>
using namespace std;
int main (){
int n;
cin >> n;
int a[n];
for ( int i = 0; i < n; i++)
{
  cin >> a[i];
}
// assnding order 
// sort(a, a+n);
// dessingding order 

sort(a, a+n, greater<int>());

for (int i = 0; i < n; i++)
{
   cout << a[i] << endl;
}

    return 0;
}