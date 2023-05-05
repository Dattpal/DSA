#include <iostream>
#include <string.h>
using namespace std;

void computeLPSArray(char pat[], int M, int lps[])
{
    int len = 0;

    lps[0] = 0;

    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {

            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    cout << " Pattern is : " << endl;
    for (int i = 0; i < M; i++)
    {
        cout << pat[i] << "  ";
    }
    cout << "\n Pie Table is : " << endl;
    for (int i = 0; i < M; i++)
    {
        cout << lps[i] << "  ";
    }
}

void KMPSearch(char *pat, char *txt)
{
    int M = strlen(pat);
    int N = strlen(txt);
    int lps[M];
    bool flag = 0;
    computeLPSArray(pat, M, lps);

    int i = 0;
    int j = 0;
    while ((N - i) >= (M - j))
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }

        if (j == M)
        {
            flag = 1;
            cout << "\nFound pattern at index :" << i - j;
            j = lps[j - 1];
        }
        else if (i < N && pat[j] != txt[i])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    if (flag == 0)
    {
        cout << "\npattern not found";
    }
}

// Driver code
int main()
{
    char txt[] = "ABABDABACDABABCABAB";
    char pat[] = "ABABDA";

    KMPSearch(pat, txt);
    return 0;
}