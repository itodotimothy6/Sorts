//
//  main.cpp
//  InsertionSort
//
//  Created by Timothy Itodo on 10/18/18.
//  Copyright © 2018 Timothy Itodo. All rights reserved.
//

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    int value, hole;
    for(int i=1; i < n; i++){
        value = arr[i];
        hole = i;
        while(hole > 0 && value < arr[hole-1]){
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
    }
}

int main() {
    int arr[] = {2,45,-2,100,12};
    insertionSort(arr, 5);
    
    for(int i = 0; i <5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
