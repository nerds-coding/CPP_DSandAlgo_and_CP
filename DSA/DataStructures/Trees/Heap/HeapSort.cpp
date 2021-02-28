#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;// left child of tree
    int right = 2 * i + 2;// right child of tree

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);// recursively calling because left value will be overriden by right
        // thus we have check that same node again 
    }

    // if there all the node of the 
    //subset tree is max-heap then we'll be automatically exit the function b'coz it is void in return
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);// we are calling heapify funtion for half of the arr
        // in which we'll cover the all element 

    for (int i = n - 1; i >= 0; i--)// here are swaping the top node to the last value of the array
    {
        swap(arr[0], arr[i]);

        
        heapify(arr, i, 0);// passing i as limit b'coz last value is already sorted 
        // and i value will not be iterated in heapify function 
        // b'coz value will be < then n not =< to n;

        
    }
}


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    int arr[] = {1, 12, 9, 5, 6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, n);

    cout << "Sorted array is \n";
    printArray(arr, n);
}