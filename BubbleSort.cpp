#include <iostream>
#include <algorithm>

using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-1-i; j++){// n-1 because you cant swap the last element with anything and -1 becuase the last i are already sorted
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}

//you can make this more efficient by putting a flag to indicate the array is sorted to avoid redundant passes

int main() {
    int arr[] = {10,-3,0,23456,7,8,100};
    bubbleSort(arr, 7);
    
    for(int i = 0; i<7; i++){
        cout << arr[i] << " ";
    }
}
