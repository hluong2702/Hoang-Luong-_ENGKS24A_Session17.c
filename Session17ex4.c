
#include<stdio.h>
#include<math.h>
void addArray(int *array, int size);
void evenNumber(int *array, int size);
void primeNumber(int *array, int size);
void reverseArray(int *array, int size);
void ascendingSort(int *array, int size);
void descendingSort(int *array, int size);
void searchItem(int *array, int size,int item);

int main(){
    int choice,size,item;
    int array[100];
    do
    {
        printf("______________________________________________\n");
        printf("                Menu                    \n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Nhap vao mot phan tu va tim kiem trong mang\n");
        printf("7. Thoat\n");
        printf("______________________________________________\n");
        printf("Nhap lua chon cua ban : ");
        scanf("%d",&choice);
        fflush(stdin);
        switch (choice)
        {
        case 1:
            printf("Nhap so phan tu ban muon nhap : ");
            scanf("%d",&size);
            addArray(array,size);
            break;
        case 2:
            printf("Cac phan tu la so chan la : \n");
            evenNumber(array,size);
            break;
        case 3:
            printf("Cac phan tu la so nguyen to trong mang : \n");
            primeNumber(array,size);
            break;
        case 4:
            reverseArray(array,size);
            break;
        case 5:
            printf("1, Tang dan\n");
            printf("2, Giam dan\n");
            printf("Nhap lua chon cua ban : ");
            scanf("%d",&choice);
            switch (choice)
            {
            case 1:
                ascendingSort(array,size);
                break;
            case 2:
                descendingSort(array,size);
                break;
            default:
                printf("Khong hop le!!Nhap lai!!");
                break;
            }
            break;
        case 6:
            printf("Nhap phan tu ban muon tim : ");
            scanf("%d",&item);
            searchItem(array,size,item);
            break;
        case 7:
            printf("Tam biet!!\n");
            break;
        default:
            printf("Khong hop le!\n");
            break;
        }
    } while (choice != 7);
}

void addArray(int *array, int size){
    for (int i = 0; i < size; i++)
    {
        printf("Nhap array[%d] = ",i);
        scanf("%d",&array[i]);
    }
}

void evenNumber(int *array, int size){
    int *ptrArray = array;
    for (int i = 0; i < size; i++)
    {
        if (*(ptrArray+i) % 2 == 0)
        {
            printf("array[%d] = %d\n",i,*(ptrArray+i));
        }
    }
}

void primeNumber(int *array, int size){
    int *ptrArray = array;
    int prime;
    for (int i = 0; i < size; i++)
    {
        prime = 1;
        if (*(ptrArray+i) < 2)
        {
            prime = 0;
        }
        else{
            for (int j = 2; j <= sqrt(*(ptrArray+i)); j++)
            {
                if (*(ptrArray+i) % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }
        if (prime != 0)
        {
            printf("array[%d] = %d\n",i,*(ptrArray+i));
        }
    }
}

void reverseArray(int *array, int size) {
    int *start = array;
    int *end = array + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
}

void ascendingSort(int *array, int size){
    int *ptrArray = array;
    for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (*ptrArray > *(ptrArray+i))
                    {
                        int temp = *ptrArray;
                        *ptrArray = *(ptrArray+j);
                        *(ptrArray+j) = temp;
                    }
            }
        }
    for (int i = 0; i < size; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
}


void descendingSort(int *array, int size){
    int *ptrArray = array;
    for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (*ptrArray < *(ptrArray+i))
                    {
                        int temp = *ptrArray;
                        *ptrArray = *(ptrArray+j);
                        *(ptrArray+j) = temp;
                    }
            }
        }
    for (int i = 0; i < size; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
}

void searchItem(int *array, int size,int item){
    int *ptrArray = array;
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(ptrArray+i) == item)
        {
            flag = 1;
        }
        if(flag ==1){
             printf("array[%d] = %d\n",i,*(ptrArray+i));
    }else{
        printf("Khong ton tai phan tu ");
    }

    
}
