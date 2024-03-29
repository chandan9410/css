#include <bits/stdc++.h>
using namespace std;
char s[5][3];
int main()
{
  for (int i = 0; i < 4; i++)
  {
    cout << "enter the string : ";
    cin >> s[i];
    int l = (int)strlen(s[i]);
    int sum = 0;
    for (int j = 0; j < l; j++)
    {
      sum = sum + s[i][j] - '0';
    }
    cout << sum << endl;
  }

  return 0;
}