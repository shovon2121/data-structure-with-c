#include<stdio.h>
int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int pindex = start;
    int tmp;
    for(int i = start; i < end; i++){
        if(arr[i] <= pivot){
            tmp = arr[i];
            arr[i] = arr[pindex];
            arr[pindex] = tmp;
            pindex++;
        }
    }
    tmp = arr[pindex];
    arr[pindex] = arr[end];
    arr[end] = tmp;
    return pindex;
}
void sort(int arr[], int start, int end)
{
    if(start < end){
        int index = partition(arr, start, end);
        sort(arr, start, index-1);
        sort(arr, index+1, end);
    }
}
int main()
{
    int arr[] = {3,8,7,4,1,6};
    int n = strlen(arr);
    sort(arr, 0, 5);
    for(int i = 0; i < 6; i++){
        printf("%d \t", arr[i]);
    }
}
