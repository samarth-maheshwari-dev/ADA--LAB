#include<iostream>
using namespace std;

void putarray(int a[], int n ){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}

void displayarray(int a[], int n ){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

int search(int a[], int n, int key){
    int i;
    for(int i=0; i<n; i++){
        if(a[i]==key){
            return i  + 1;
        }
    }
    return -1;
    
}

int main(){
    int n;
    cout<<"Array size:"; 
    cin >>n;
    int a[n];
    cout<<"Enter array elements: ";
    putarray(a,n);
    cout<<"Array elements are: "<< endl;
    displayarray(a,n);
    int key;
    cout<<"\nEnter key to search: ";
    cin>>key;
    int r=search(a,n,key);
    if(r==-1){
        cout<<"Key not found in the array.";
    }
        else{
            cout<<"Key found at index: "<<r;
        }
        return 0;
    }