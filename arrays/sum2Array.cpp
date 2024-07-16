#include <iostream>
#include <vector>
using namespace std;

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int num1 = 0, num2 = 0, num3r = 0, num3;
    for (int i = 0; i < n; i++)
    {
        num1 = num1 * 10 + a[i];
    }
    for (int i = 0; i < m; i++)
    {
        num2 = num2 * 10 + b[i];
    }

    num3 = num1 + num2;

    cout << "Sum is:  " << num3 << endl;
    vector<int> ans;

    while (num3 != 0)
    {
        int d = num3 % 10;
        ans.push_back(d);
        num3 = num3 / 10;
    }

    cout << "Answer is : " ;
    printVector(ans);
    int step = 1;

    for (int i = 0; i < ans.size() / 2; i++)
    {
        swap(ans[i], ans[ans.size() - i - 1]);
        cout << "Step of Swapping: " << step++ << "  ";
        printVector(ans);
    }
    return ans;
}