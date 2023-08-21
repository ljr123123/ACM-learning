#include <iostream>
#include <string>
using namespace std;
int times = 0;
int first = 0;
void test(string a, string b, int i)
{
    int j;
    if(a[i - 1] != ' ' && i != 0)return;
    for (j = 0; j < b.length(); j++)
    {
        if (a[i + j] != b[j]) return;
    }
    if(a[i + j] != ' ' && i + j != a.length())return;
    times++;
}
int main()
{
    string word, s;
    getline(cin, word);
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == word[0]) test(s, word, i);
    }
    if(times) cout << times << endl;
    else cout << -1 << endl;
    return 0;
}