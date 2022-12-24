#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};
int Delete(struct Array *arr,int index)
{
    int x=0;
    if(index>=0 & index<arr->length-1)
    {
        x=arr->A[index];
        for(int i=index;i<arr->length-1;i++)
            arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;    
    }

    return 0;
}
void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++)
    printf("%d",arr.A[i]);
}

int main(){
    struct Array arr={{2,3,4,5,6,7},10,6};
    printf("%d\n",Delete(&arr,4));
    Display(arr);
    
}