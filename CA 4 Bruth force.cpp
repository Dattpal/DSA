// BRUTH FORCE ALGO ,display only even occurrences
#include <iostream>
using namespace std;
int oc = 0;
int main()
{
    string str = "ABCBBABCBDDABCDABC";
    string str1 = "BC";
    bool index;
    int i = 0;
    int lt = str.length();
    int lp = str1.length();
    int m = lt - lp + 1;

    for (i = 0; i < m; i++)
    {
        int count = 0;
        while (count <= lp && str[i + count] == str1[count])
        {
            count += 1;
        }
        if (count >= lp)
        {
            index = true;
            if (oc % 2 == 0)
                cout << "Matched" << i << endl;
        }
        else
        {
            index = false;
        }
    }

    return 0;
}