#include <iostream>
using namespace std;

bool checkSorted(int[], int);
void sortArray(int[], int);
void search(int[], int, int, int);

int main()
{
    int t;
    cout << "Enter Test Cases : ";
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        cout << endl
             << "Test Case No. : " << k + 1 << endl;
        int n;
        cout << "Enter NO of Elements : ";
        cin >> n;
        int Array[n];
        cout << "Enter Array : ";
        for (int i = 0; i < n; i++)
            cin >> Array[i];

        bool check = checkSorted(Array, n);

        if (check == true)
            cout << "Array Sorted" << endl;
        else
        {
            cout << "Array Not Sorted" << endl;
            sortArray(Array, n);
        }

        int key;
        cout << "Enter Key to Find : ";
        cin >> key;
        search(Array, 0, n - 1, key);
    }
}

bool checkSorted(int Array[], int n)
{
    bool condition = true;
    for (int i = 0; i < n - 1; i++)
        if (Array[i] > Array[i + 1])
            condition = false;
    return condition;
}

void sortArray(int Array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
            if (Array[i] > Array[j])
            {
                int temp = Array[i];
                Array[i] = Array[j];
                Array[j] = temp;
            }
    }
}

void search(int Array[], int i, int n, int key)
{
    while (n >= i)
    {
        int mid = i + (n - i) / 2;

        if (Array[mid] == key)
        {
            cout << "Element found";
            break;
        }

        if (key > Array[mid])
            i = mid + 1;
        else
            n = mid - 1;
    }
}
