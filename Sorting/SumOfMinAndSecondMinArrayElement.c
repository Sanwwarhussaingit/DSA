#include <stdio.h>
//simple swap of tow element
void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}
//take a number of single digit and convert in an array of element all the digit
void DigitToArray(int number, int arr[], int *size){
    int temp = number;
    *size = 0;
    while (temp != 0){
        temp /= 10;
        (*size)++;
    }
    for (int i = *size - 1; i >= 0; i--){
        arr[i] = number % 10;
        number /= 10;
    }
}
// insertion Sort 
void Sorting(int arr[], int *size){
    for (int i = 1; i < *size; i++){
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1]){
            swap(&arr[j], &arr[j - 1]);
            j--;
        }
    }
}
void main(){
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    int size;
    int arr[30];
    DigitToArray(number, arr, &size);
    int firstmin = 0;
    int secondmin = 0;
    printf("Orginal number: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    // sorting
    Sorting(arr, &size);
    for (int i = 0; i < size; i++){
        firstmin = firstmin * 10 + arr[i];
    }
    printf("\nfisrt minimum: %d\n", firstmin);
    for (int i = size - 1; i >= 0; i--){
        if (arr[i] != arr[i - 1])
        {
            swap(&arr[i], &arr[i - 1]);
            break;
        }
    }
    for (int i = 0; i < size; i++){
        secondmin = secondmin * 10 + arr[i];
    }
    printf("Second minimum: %d\n", secondmin);
    printf("\nSum of min and second min of an Array element: %d\n",firstmin+secondmin);
}
