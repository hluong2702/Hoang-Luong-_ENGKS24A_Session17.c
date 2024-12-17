#include<stdio.h>
#include<stdlib.h>

void enterArr(int arr[],int size);
void showArr(int arr[],int size);
void sizeArr(int arr[],int size);
void sumArr(int arr[],int size);
void maxArr(int arr[],int size);

int main(){
    int choice;
    int arr[100];
    int size;
    do{
    printf("\n__________________________________________\n");
    printf("                  MENU                    \n");
    printf("1.Nhập vào số phần tử và từng phần tử\n");
    printf("2.Hiển thị các phần tử trong mảng\n");
    printf("3.Tính độ dài mảng\n");
    printf("4.Tính tổng các phần tử trong mảng\n");
    printf("5.Hiển thị phần tử lớn nhất\n");
    printf("6.Thoát\n");
    printf("Hay dua ra lua chon cua minh\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
    printf("Moi ban nhap vao so phan tu ");
    scanf("%d",&size);
    enterArr(arr,size);
    break;

    case 2:
    showArr(arr,size);
    break;

    case 3:
    sizeArr(arr,size);
    break;

    case 4:
    sumArr(arr,size);
    break;

    case 5:
    maxArr(arr,size);
    break;

    case 6:
    printf("gút bai se you again ");
    exit(0);
    break;

    default:
    printf("Nhap khong hop le!");
    break;

   }
    }while(choice !=6);
   
   
} 
void enterArr(int arr[],int size){
   int *ptrArr = arr;
    for (int i = 0; i < size; i++){
        printf("arr[%d] = ",i);
        scanf("%d",ptrArr + i);
    }
}
void showArr(int arr[],int size){
    int *ptrArr = arr;
    for(int i =0;i < size;i++){
        printf(" arr[%d] = %d\n",i,*(ptrArr + i)); 
    }
}
void sizeArr(int arr[], int size){
    int *ptrSize = &size;
    printf("do dai cua mang la %d\n",*ptrSize);
}
void sumArr(int arr[],int size){
    int *ptrSum = arr;
    int sum =0;
    for(int i = 0; i<size;i++){
        sum += *(ptrSum +i);
    }
    printf("Tong cac phan tu trong mang la %d ",sum);
}
void maxArr(int arr[],int size){
    int *ptrMax = arr;
    int max = arr[0];
    for(int i = 0;i<size;i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }
    printf("Max %d ",max);
}