#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cout << "Enter total numbers of stone: ";
    cin >> n;
    cout << "\n___Computer system will play first___\n"
         << endl;
    if (n <= 3)
    {
        cout << "remaining stone :" << 0 << endl;
        cout << "Computer has won" << endl;
        return 1;
    }
    while (n >= 0)
    {
        if (n == 5)
        {
            cout << "computer takes :" << 1 << "stones" << endl;
            n = n - 1;
        }
        else if (n == 6)
        {
            cout << "Computer takes " << 2 << " stones\n";
            n = n - 2;
        }
        else if (n == 7)
          
            {
                cout << "Computer takes " << 3 << " stones \n";
                n = n - 3;
            }
        else if ((n == 8) || (n == 9) || (n == 10))
        {
            cout << "Computer takes " << 1 << " stones \n";
            n = n - 1;
        }
        else
        {
            cout << "Computer takes " << 3 << " stones \n";
            n = n - 3;
        }
        cout << "\nRemaining stones : " << n << "\n";
        if (n <= 3)
        {
            cout << "You won !!!!\n";
            cout << "\nCongratulations!\n\n\n";
            break;
        }
        else
        {
            cout << "\n It's your turn Take stones(max 3) : ";
            cin >> t;
            n = n - t;
            cout << "\nRemaining stones : " << n << "\n";
        }
        if (n <= 3)
        {
            cout << "\nComputer win!\n";
            break;
        }
    }
    return 0;
}
