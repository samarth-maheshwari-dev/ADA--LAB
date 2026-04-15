#include <iostream>
using namespace std;

void putArray(int a[], int n) 
{
    for (int i = 0; i < n ; i++)
        cin >> a[i];
}

void displayArray(int a[], int n) 
{
    for (int i = 0; i < n ; i++)
        cout << a[i] << " ";
}


int search(int a[], int f, int l, int key)
{
    while (f <= l) 
    {
        int mid = (f + l) / 2; 
        if (key == a[mid])
            return mid + 1; 
        else if (key < a[mid])
            l = mid - 1; 
        else
            f = mid + 1; 
    }
    return -1; 
}

int main()
{
    int n;
    cout << "Array Size: ";
    cin >> n;

    int a[n];
    cout << "\nEnter Array Elements: ";
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
