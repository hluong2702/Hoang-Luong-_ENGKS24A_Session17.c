
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void addString(char *string);
void reverseString(char *string);
int countLetter(char *string);
void compareString(char *string, char *string2);
void toUpperString(char *string);
void connectString(char *string,char *string3);
int main() {
    int choice;
    char string[100];  
    char string2[100];      
    char string3[100];
    do {
        printf("______________________________________________\n");
        printf("                Menu                          \n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. Nhap vao 1 chuoi va so sanh\n");
        printf("5. In hoa tat ca cac chu cai\n");
        printf("6. Nhap vao 1 chuoi va them vao chuoi ban dau\n");
        printf("7. Thoat\n");
        printf("______________________________________________\n");
        printf("Nhap lua chon cua ban : ");
        scanf("%d", &choice);
        fflush(stdin);
        switch (choice) {
        case 1:
            addString(string);
            break;
        case 2:
            printf("Chuoi dao nguoc: ");
            reverseString(string);
            break;
        case 3:
            printf("So luong tu trong chuoi la: %d\n", countLetter(string));
            break;
        case 4:
            compareString(string, string2);
            break;
        case 5:
            toUpperString(string);
            break;
        case 6:
            connectString(string,string3);
            break;
        case 7:
            printf("Tam biet!!\n");
            break;
        default:
            printf("Nhap khong hop le!");
            break;
        }
    } while (choice != 7);
}

void addString(char *string) {
    printf("Nhap chuoi: ");
    fgets(string, 100, stdin);
    int size = strlen(string);
    string[size-1] = '\0';
}

void reverseString(char *string) {
    char *end = string + strlen(string) - 1; 
    while (end >= string) {
        printf("%c", *end);
        end--;
    }
    printf("\n");
}

int countLetter(char *string) {
    int count = 0;
    while (*string) { 
        if (*string == ' ') {
            continue;
        } else {
            count++;
        }
        string++;
    }
    return count;
}

void compareString(char *string, char *string2) {
    printf("Nhap chuoi thu 2: ");
    fgets(string2, 100, stdin);
    int size = strlen(string2);
    string[size-1] = '\0';
    int compare = strcmp(string, string2);
    if (compare > 0) {
        printf("Chuoi ban dau lon hon chuoi thu hai.\n");
    } else if (compare < 0) {
        printf("Chuoi ban dau nho hon chuoi thu hai.\n");
    } else {
        printf("Hai chuoi bang nhau.\n");
    }
}

void toUpperString(char *string) {
    char *ptr = string;
    while (*ptr) {
        *ptr = toupper(*ptr);
        ptr++;
    }
    printf("Chuoi viet hoa: %s\n", string);
}

void connectString(char *string,char *string3){
    printf("nhap chuoi de noi : ");
    fgets(string3,100,stdin);
    strcat(string,string3);
    printf("%s\n",string);
}
