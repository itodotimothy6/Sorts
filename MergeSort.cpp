//
//  main.cpp
//  MergeSort
//
//  Created by Timothy Itodo on 10/18/18.
//  Copyright © 2018 Timothy Itodo. All rights reserved.
//

#include <iostream>
using namespace std;

void merge(int l[], int nL, int r[], int nR, int arr[], int n){
    int i, j, k;
    i = j = k = 0; // i -- move through l;  j -- move through r; k -- move through arr
    
    while (i < nL && j < nR){
        if (l[i] < r[j]){
            arr[k] = l[i];
            i++;
        }
        else{
            arr[k] = r[j];
            j++;
        }
        k++;
    }
    while (i < nL){
        arr[k] = l[i];
        k++;
        i++;
    }
    while (j < nR){
        arr[k] = r[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int n){
    if (n < 2)
        return;
    int mid = n/2;
    int left[mid];
    int right[n-mid];
    for (int i = 0; i < mid; i++){
        left[i] = arr[i];
    }
    int a = mid;
    for (int i = 0; i < n-mid; i++){
        right[i] = arr[a];
        a++;
    }
    mergeSort(left, mid);
    mergeSort(right, n-mid);
    merge(left, mid, right, n-mid, arr, n);
}



int main(int argc, const char * argv[]) {
    int a[] = {2,4,12,-129,2342,45,4};
    mergeSort(a, 7);
    
    for (int i = 0; i < 7; i++){
        cout << a[i] << " ";
    }
}
