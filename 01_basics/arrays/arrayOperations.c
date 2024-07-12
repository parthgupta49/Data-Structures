// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int length;
    int size;
    int *arr;
} myArr1;

void insert(struct Array *something)
{
    int i, j, temp;
    int index, value;
    scanf("%d %d", &index, &value);

    if (index > something->size - 1)
    {
        return;
    }
    if (index > something->length)
    {
        myArr1.arr[index] = value;
    }

    for (i = something->length - 1; i >= index; i--)
    {
        something->arr[i + 1] = something->arr[i];
    }
    something->arr[index] = value;
    something->length++;
}

void delete(struct Array *something, int index)
{
    int i;
    if (index > something->size - 1 || index > something->length)
    {
        return;
    }
    if (index == something->length - 1)
    {
        something->length--;
        return;
    }

    for (i = index; i < something->length; i++)
    {
        something->arr[i] = something->arr[i + 1];
        printf("hello");
    }
    something->length--;
}

int linearSearch(struct Array *something, int element)
{
    int i;
    printf("%d", something->length);
    for (i = 0; i < something->length; i++)
    {
        if (something->arr[i] == element)
            return i;
    }
    return -1;
}

int binarySearch(struct Array *something, int element)
{
    int low = 0, high = something->length - 1, mid, i;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (something->arr[mid] == element)
        {
            return mid;
        }
        else if (something->arr[mid] < element)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
}

int recursiveBinarySearch(struct Array *something,int low,int high, int element){
    
    int mid = low + (high-low)/2;
    if(low<=high)
    {
        if (something->arr[mid] == element)
            return mid;
        else if (something->arr[mid] < element)
        {   
            return recursiveBinarySearch(something,mid+1,high,element);
        }
        else
            return recursiveBinarySearch(something,low,mid-1,element);
        
    }
    
    return -1;
}   


int max (struct Array *something) {
    int max = something->arr[0];
    for (int i = 0; i < something->length; i++)
    {
        if (something->arr[i] > max){
            max = something->arr[i];
        }
    }

    return max;
}
int min (struct Array *something) {
    int min = something->arr[0];
    for (int i = 0; i < something->length; i++)
    {
        if (something->arr[i] < min){
            min = something->arr[i];
        }
    }

    return min;
}
int sum (struct Array *something) {
    int sum = 0;
    for (int i = 0; i < something->length; i++)
    {
        sum+=something->arr[i];
    }
    return sum;
}
int avg (struct Array *something) {
    return sum(something) / something->length;
}

int recursiveSum (int *arr,int n){
    if (n==0)
        return arr[n];
    return recursiveSum(arr,n-1) + arr[n];
}

int main()
{
    myArr1.length = 0;
    // printf("Give the size : ");
    // scanf("%d",&myArr1.size);
    myArr1.size = 10;
    myArr1.arr = (int *)malloc(sizeof(int) * myArr1.size);

    for (int i = 0; i < 10; i++)
    {
        myArr1.arr[i] = i + 1;
        myArr1.length++;
    }
    for (int i = 0; i < myArr1.length; i++)
        printf("%d ", myArr1.arr[i]);

    // insert(&myArr1);
    // for(int i = 0 ; i < myArr1.length ; i++)
    //     printf("%d ",myArr1.arr[i]);

    // delete(&myArr1,4);

    // printf("\n%d", linearSearch(&myArr1, 4));
    // printf("\n%d", binarySearch(&myArr1, 4));
    // printf("\n%d", recursiveBinarySearch(&myArr1, 0,myArr1.length-1,14));
    // printf("\n%d", max(&myArr1));
    // printf("\n%d", min(&myArr1));
    // printf("\n%d", sum(&myArr1));
    // printf("\n%d", avg(&myArr1));
    
    printf("%d",recursiveSum(myArr1.arr,myArr1.length-1));


    // for (int i = 0; i < myArr1.length; i++)
    // {
    //     printf("%d ", myArr1.arr[i]);
    // }

    return 0;
}