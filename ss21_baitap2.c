#include <stdio.h>

int main() {
    FILE *file = fopen("bt01.txt", "r");
    
    if (file == NULL) {
        printf("khong tim thay file!\n");
        return 1; 
    }
 	  char ch = fgetc(file);
    if (ch != EOF) {
        printf("Ky tu dau tien trong file: %c\n", ch);
    } else {
        printf("File rong.\n");
    }

    fclose(file);

    return 0;
}
