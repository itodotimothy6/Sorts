#include <iostream>
#include <algorithm>

using namespace std;

void selectionSort(int arr[], int n){
    int smallest;
    int indexMin; // index of min element
    
    for (int i = 0; i < n-1; i++){// n-1 because no need to do the last one
        smallest = arr[i];
        indexMin = i;
        for (int j = i+1; j < n; j++){
            if (smallest > arr[j]){
                smallest = arr[j];
                indexMin = j;
            }
        }
        swap(arr[indexMin], arr[i]);
    }
}



int main() {
    
    int arr[] = {4,5,2,0,100,23,50,-6};
    selectionSort(arr, 8);
    
    for(int i = 0; i < 8; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
