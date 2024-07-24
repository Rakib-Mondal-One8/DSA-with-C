#include<stdio.h>
void display_a(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insertion(int arr[],int size,int index,int val){
    if((size+1)>100){
        printf("Size overflow\n");
        return;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1] = arr[i];
    }
    arr[index] = val;
}
int main ()
{
    int arr[100] = {1,7,10,86,92};
    int size = 5;
    int index;
    scanf("%d",&index);
    insertion(arr,size,index,4);
    size+=1;
    display_a(arr,size);
    // printf("%d",arr[index]);
    return 0;
}
