#include <iostream>
using namespace std;

int main ()
{
int a, x, c;
cout << "Vremya budil`nika, kotoroe postavil Issledovatel`(1-12):  ";
cin >> a;
cout << "Vremya kogda on leg spat`(1-12):  ";
cin >> x;

c = a - x;
if (c > 12)
c -= 12;
cout << c << endl;

return 0;

}
