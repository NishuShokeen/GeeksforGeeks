#include <bits/stdc++.h>
using namespace std;
void middle(stack<int> &s, int n, int cur)
{
    if (!s.size() || cur > n / 2)
        return;

    int head = s.top();

    s.pop();

    middle(s, n, cur + 1);

    if (cur != n / 2)
        s.push(head);
}

void print(stack<int> &s)
{
    if (s.size())
    {
        cout << endl;

        return;
    }

    cout << s.top() << " ";

    int head = s.top();

    s.pop();

    print(s);

    s.push(head);
}

int main()
{
    stack<int> s;

    s.push(5);
    s.push(8);
    s.push(4);
    s.push(3);
    s.push(6);

    print(s);

    middle(s, s.size(), 0);

    print(s);

    return 0;
}