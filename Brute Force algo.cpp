#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "abababcabd";
    string str1 = "bca";
    bool index;
    int lt = str.length();
    int lp = str1.length();
    int m = lt - lp + 1;

    for (int i = 0; i < m; i++)
    {
        int cou = 0;
        while (cou <= lp && str[i + cou] == str1[cou])
        {
            cou += 1;
        }
        if (cou >= lp)
        {
            index = true;
            break;
        }
        else
        {
            index = false;
        }
    }
    if (index == true)
    {
        cout << "The pattern is present";
    }
    else
    {
        cout << "The pattern is not present";
    }

    return 0;
}