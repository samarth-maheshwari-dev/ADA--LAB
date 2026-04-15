#include <iostream>
using namespace std;

void putArray(int a[], int n) 
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void displayArray(int a[], int n) 
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int search(int a[], int f, int l, int key)
{
    if (f <= l) 
    {
        int mid = (f + l) / 2; 
        if (key == a[mid])
            return mid + 1; // successful search
        else if (key < a[mid])
            return search(a, f, mid - 1, key); 
        else
            return search(a, mid + 1, l, key);
    }
    return -1; 
}

int main()
{
    int n;
    cout << "Array Size: ";
    cin >> n;

    int a[n];
    cout << "Enter Array Elements: ";
    putArray(a, n);

    cout << "\nThe Array Elements are:\t";
    displayArray(a, n);

    int key;
    cout << "\nEnter key to search: ";
    cin >> key;

    int r = search(a, 0, n - 1, key);

    if (r == -1)
        cout << "\nKey not found";
    else
        cout << "\nKey found at pos " << r;

    return 0;
}
