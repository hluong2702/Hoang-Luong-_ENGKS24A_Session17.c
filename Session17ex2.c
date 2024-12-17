#include<stdio.h>
#include<string.h>
void addString(char *string);
void displayString(char *string);
int characterString(char *string);
int numberString(char *string);
int specialCharacterString(char *string);
int main(){
    int choice;
    char string[100];
    do
    {
        printf("______________________________________________\n");
        printf("                Menu                    \n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi va in ra\n");
        printf("4. Dem so luong chu so trong chuoi va in ra\n");
        printf("5. Dem so luong ki tu dac biet va in ra\n");
        printf("6. Thoat\n");
        printf("______________________________________________\n");
        printf("Nhap lua chon cua ban : ");
        scanf("%d",&choice);
        fflush(stdin);
        switch (choice)
        {
        case 1:
            addString(string);
            break;
        case 2:
            printf("Chuoi hien tai : ");
            displayString(string);
            break;
        case 3:
            printf("So luong chu cai trong chuoi : %d\n",characterString(string));
            break;
        case 4:
            printf("So luong chu so trong chuoi : %d\n",numberString(string));
            break;
        case 5:
            printf("So luong ki tu dac biet trong chuoi : %d\n",specialCharacterString(string));        
            break;
        case 6:
            printf("Tam biet!!\n");
            break;
        default:
            printf("Khong hop le!! Nhap lai!!\n");
            break;
        }
    } while (choice != 6);
}
void addString(char *string){
    printf("Nhap chuoi : ");
    fgets(string,100,stdin);
    int size = strlen(string);
    string[size-1] = '\0';
}
void displayString(char *string){
   printf("%s\n",string);
}
int characterString(char *string){
    char *ptrString = string;
    int count = 0;
    while (*string) { 
        if (*string >= 'a' && *string <= 'z') {
            count++;
        } else if (*string >= 'A' && *string <= 'Z')
        {
            count++;
        }
        string++;
    }
    return count;
}
int numberString(char *string){
    char *ptrString = string;
    int count = 0;
    while (*string) { 
        if (*string >= '0' && *string <= '9') {
            count++;
        }
        string++;
    }
    return count;
}
int specialCharacterString(char *string){
    char *ptrString = string;
    int count = 0;
    while (*string) { 
        if (*string >= '!' && *string <= '/')
        {
            count++;
        }
        else if (*string >= ':' && *string <= '@')
        {
            count++;
        }
        else if (*string >= '[' && *string <= '`')
        {
            count++;
        }
        else if (*string >= '{' && *string <= '~')
        {
            count++;
        }
        string++;
    }
    return count;
}