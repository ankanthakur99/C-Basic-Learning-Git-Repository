#include <stdio.h>
// void printArray(int *ptr, int n){
void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        // printf("The value of the element %d is %d\n",i+1, *(ptr+i));//ptr  er moddhe adrress ache i er modhhe 1 and baki address ad hocche
        printf("The value of the element %d is %d\n", i + 1, ptr[i]);
    }

    ptr[2] = 555;//it can change will be main as well
}
int main()
{
    int arr[] = {1, 8, 3, 4, 5, 6, 7};
    printArray(arr, 7);
    printf("%d", arr[2]);
    return 0;
}