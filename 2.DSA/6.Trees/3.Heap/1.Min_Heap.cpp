#include<iostream>
using namespace std;

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void maxHeap(int arr[], int i, int size){
    int L = 2 * i  + 1;
    int R = 2 * i + 2;
    int largest = i;

    if(L < size && arr[L] > arr[largest]){
        largest = L;
    }
    if(R < size && arr[R] > arr[largest]){
        largest = R;
    }

    if(largest != i){
        Swap(arr[i], arr[largest]);
        maxHeap(arr, largest, size);
    }
}
void minHeap(int arr[], int i, int size){
    int L = 2 * i  + 1;
    int R = 2 * i + 2;
    int smallest = i;

    if(L < size && arr[L] < smallest){
        smallest = L;
    }
    if(R < size && arr[R] < arr[smallest]){
        smallest = R;
    }
    if(smallest != i){
        Swap(arr[i], arr[smallest]);
        minHeap(arr, smallest, size);
    }
}

int Extract_min(int arr[], int &size){
    if(size < 1){
        return -1;
    }

    int minVal = arr[0];
    arr[0] = arr[size-1];
    size--;
    minHeap(arr, 0, size);
    
    return minVal;
}
int Extract_max(int arr[], int &size){
    if(size < 1){
        return -1;
    }
    
    int maxVal = arr[0];
    arr[0] = arr[size-1];
    size-- ;
    maxHeap(arr, 0, size);

    return maxVal;
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    const int size = 15;
    int max_arr[size] = {15, 12, 9, 3, 5, 1, 11, 2, 6, 14, 13, 10, 7, 8, 4};
    int min_arr[size] = {15, 12, 9, 3, 5, 1, 11, 2, 6, 14, 13, 10, 7, 8, 4};

    cout<<"MaxHeap:\n";
    for(int i = size/2-1; i >= 0; i--){
    maxHeap(max_arr, i, size);
    }
    printArray(max_arr, size);

    cout<<"\nMinHeap:\n";
    for(int i = size/2-1; i >= 0; i--){
    minHeap(min_arr, i, size);
    }
    printArray(min_arr, size);

    int max_size; int min_size;

    max_size =  min_size = 0;

    int maxx = Extract_max(max_arr, max_size);
    cout<<"\n\nMax Extracted "<<maxx<<" :\n";
    
    int minn = Extract_min(min_arr, min_size);
    cout<<"\n\nMax Extracted "<<minn<<" :\n";

    printArray(min_arr, size);
    printArray(max_arr, size);
    
    return 0;
}