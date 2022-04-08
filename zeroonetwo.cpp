#include<iostream>
using namespace std;
int moveZeroOneTwo(int arr[],int n){
    int low = 0;
    int high = n-1;
    int mid = 0;

    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0: swap(arr[low++],arr[mid++]);
            break;

        case 1: mid++;
            break;

        case 2: swap(arr[high--],arr[mid]);
            break;
        }
    }
}
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
}
int main()
{
    int arr[] = {2,0,2,1,1,0} , n = 6;
    cout<<"before sorting"<<endl;
    printArray(arr,n);
    cout<<endl;
    cout<<"after sorting "<<endl;
    moveZeroOneTwo(arr,n);
    printArray(arr,n);
    return 0;
}