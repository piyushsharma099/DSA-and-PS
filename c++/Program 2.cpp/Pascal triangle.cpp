#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c = 1;

    cout << "Enter number of r: ";
    cin >> r;

    for(int i = 0; i < r; i++)
    {
        for(int k = 1; k <= r-i; k++)
            cout <<"  ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                c = 1;
            else
                c = c*(i-j+1)/j;

            cout << c << "   ";
        }
        cout << endl;
    }

    return 0;
}