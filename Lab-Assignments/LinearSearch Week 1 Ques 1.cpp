#include <iostream>
using namespace std;

int main()
{
    int t;
    cout << "Total Test Cases : ";
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        cout << "Test Case NO : " << j + 1 << endl
             << "------------------" << endl;

        int n;
        cout << "Size of array : ";
        cin >> n;

        int A[n];

        cout << "Enter Elements : ";
        for (int i = 0; i < n; i++)
            cin >> A[i];

        int key, comp = 0, flag = 0;
        cout << "Enter Key : ";
        cin >> key;
        for (int i = 0; i < n; i++)
        {
            comp++;
            if (key == A[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "Key Found " << endl;
        }
        else
            cout << "key Not found bro" << endl;

        cout << "Comparisons : " << comp << endl;
    }
}
