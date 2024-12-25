#include <stdio.h>

int main() {
    char line[100];  

    FILE *file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("file khong ton tai\n");
        return 1;  
    }

    if (fgets(line, sizeof(line), file) != NULL) {
      
        printf("dong dau tien trong file la: %s\n", line);
    } else {
        printf("dong dau tien khong co\n");
    }

    fclose(file);

    return 0;
}
