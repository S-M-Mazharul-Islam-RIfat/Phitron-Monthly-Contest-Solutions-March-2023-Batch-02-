/**
* author: mj_riffu
* created: 2023-03-04 20:15:30
**/
#include <bits/stdc++.h>
using namespace std;
// 7
// 1 9
// 1 2
// 2
// 2
// 1 3
// 1 1
// 2
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0;i < s.size();i++)
    {
        if (st.size() <= 0)
            st.push(s[i]);
        else
        {
            if (st.top() == '{' && s[i] == '}')
                st.pop();
            else
                st.push(s[i]);
        }
    }
    if (st.size() <= 0)
        cout << s.size() << '\n';
    else
        cout << 0 << '\n';
    return 0;
}

// {}{}{}{{}}