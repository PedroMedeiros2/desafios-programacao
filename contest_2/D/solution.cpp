#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

void resolver_problema_D()
{
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    int movimentos_torre;
    if (r1 == r2 || c1 == c2)
    {
        movimentos_torre = 1;
    }
    else
    {
        movimentos_torre = 2;
    }

    int movimentos_bispo;
    if ((r1 + c1) % 2 != (r2 + c2) % 2)
    {
        movimentos_bispo = 0;
    }
    else if (abs(r1 - r2) == abs(c1 - c2))
    {
        movimentos_bispo = 1;
    }
    else
    {
        movimentos_bispo = 2;
    }

    int movimentos_rei = max(abs(r1 - r2), abs(c1 - c2));

    cout << movimentos_torre << " " << movimentos_bispo << " " << movimentos_rei << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    resolver_problema_D();
    return 0;
}
