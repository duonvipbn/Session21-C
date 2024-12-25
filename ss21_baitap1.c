#include <stdio.h>

int main() {
    char str[100]; 
    FILE *file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("khong tim thay file!\n");
        return 1; 
    }

    printf("nhap chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    fprintf(file, "%s", str);

    fclose(file);

    return 0;
}
