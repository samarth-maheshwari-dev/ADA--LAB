#include <iostream>
using namespace std;

void putArray(int a[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        cin >> a[i];
    }
}


void displayArray(int a[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        cout << a[i] << " ";
    }
}


void search(int a[], int n, int key) {
    int i;
    for (i = 0; i <= n - 1; i++) {
        if (a[i] == key) {
            cout << "\nKey found at pos " << i + 1;
            break;
        }
    }

    if (i == n) {
        cout << "\nKey not found";
    }
}

int main() {
    int n;
    cout << "Array Size: ";
    cin >> n;

    int a[n];

    cout << "\nEnter Array Elements: ";
    putArray(a, n);   

    cout << "\nThe Array Elements are: ";
    displayArray(a, n); // function call

    int key;
    cout << "\nEnter key to search: ";
    cin >> key;

    search(a, n, key); 

    return 0;
}