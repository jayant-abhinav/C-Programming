// passing array to function with pointers
#include<stdio.h> 
void printArray(int *ptr, int n){
    for (int i = 0; i < n; i++) {
        printf("The value of element %d is %d \n", i+1, *(ptr+i));
    }    
}         
int main(){
    int arr[] = {19,34,66,665,69,96,6090};
    printArray(arr,7);
    return 0;
}