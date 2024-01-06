#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    int min;
    for(int i =0; i < n-1; i++){
        min = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min]= temp;
    }
}

void printArray(int arr[], int n){
    for(int i =0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[]= {10,30,20,56,14};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}