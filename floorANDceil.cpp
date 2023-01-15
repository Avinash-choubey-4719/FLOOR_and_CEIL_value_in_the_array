#include<bits/stdc++.h>
using namespace std;

int floor(int arr[], int start, int end, float key){
    if(start > end){
        return -1;
    }

    int mid = start + (end - start)/2;

    if(arr[mid] == key){
        return mid;
    }

    else if(arr[mid] < key && arr[mid + 1] > key){
        return mid;
    }

    else if(arr[mid] > key && arr[mid - 1] < key){
        return mid - 1;
    }

    else if(arr[mid] > key){
        return floor(arr, start, mid - 1, key);
    }

    else if(arr[mid] < key){
        return floor(arr, mid + 1, end, key);
    }
}

int ceil(int arr[], int start, int end, float key){
    if(start > end){
        return -1;
    }

    int mid = start + (end - start)/2;

    if(arr[mid] == key){
        return mid;
    }

    else if(arr[mid] < key && arr[mid + 1] > key){
        return mid + 1;
    }

    else if(arr[mid] > key && arr[mid - 1] < key){
        return mid;
    }

    else if(arr[mid] > key){
        return ceil(arr, start, mid - 1, key);
    }

    else if(arr[mid] < key){
        return ceil(arr, mid + 1, end, key);
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int start = 0;
    int end = 4;
    float key = 2.5;

    int floorIndex = floor(arr, start, end, key);
    int ceilIndex = ceil(arr, start, end, key);

    cout<<"The floor value is "<<arr[floorIndex]<<endl;
    cout<<"The ceil value is "<<arr[ceilIndex]<<endl;

    return 0;
}