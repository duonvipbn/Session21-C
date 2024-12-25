#include <stdio.h>

int main() {
    char str[100];  

    FILE *file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("file khong ton tai\n");
        return 1; 
    }

    printf("nhap vai chuoi: ");
    fgets(str, sizeof(str), stdin); 

    fprintf(file, "%s", str);

    fclose(file);

    return 0;
}
