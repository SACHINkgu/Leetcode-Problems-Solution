
#include<stack>

void immediateSmaller(vector<int>& a)
{
    int n = a.size();

    stack<int> s;
    s.push(a[0]);

    for (int i = 1; i < n; i++)
    {
        if (s.top() > a[i])
        {
            a[i - 1] = a[i];
        }
        else
        {
            a[i - 1] = -1;
        }

        s.push(a[i]);
    }

    a[n - 1] = -1;
}
