#include <iostream>
using namespace std;

int Partition(int a[], int start, int end){
    int pivot = a[end];
    int pIndex = start;
    for(int i = start; i<end; i++){ // from start to end-1 because the last element is the pivot
        if (a[pIndex] < pivot) {
            swap(a[i], a[pIndex]);
            pIndex++;
        }
    }
    swap(a[pIndex], a[end]);
    return pIndex;
}

void quickSort(int a[], int start, int end){
    if(start >= end)
        return;
    int pIndex = Partition(a, start, end);
    quickSort(a, start, pIndex-1);
    quickSort(a, pIndex+1, end);
}

int main(int argc, const char * argv[]) {
    
    int a[] = {0,-4,290000,234,345,432,56,2453543};
    quickSort(a, 0, 7);
    
    for(int i=0; i<8; i++){
        cout << a[i] << " ";
    }
    return 0;
}
