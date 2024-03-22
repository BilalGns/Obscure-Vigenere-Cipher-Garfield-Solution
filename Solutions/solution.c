#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char ascii_uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char numbers[] = "07271978";

int main() {
    FILE *file;
    char c;
    char flag[1000]; // Önceden sabit bir boyuta sahip bir dizi oluşturduk
    int counter = 0;
    
    file = fopen("message.txt", "r"); // Dosyayı okumak için aç

    if (file == NULL) {
        printf("Dosya açılamadı!");
        exit(1);
    }

    int i = 0;
    while ((c = fgetc(file)) != EOF) { // Dosyanın sonuna kadar karakterleri oku
        c = toupper(c); // Karakteri büyük harfe dönüştür

        if (isalpha(c)) { // Eğer karakter bir harf ise
            int index;
            for (int j = 0; j < 26; j++) {
                if (ascii_uppercase[j] == c) {
                    index = j;
                    break;
                }
            }
            int offset = numbers[counter % 8] - '0'; // ASCII karakterini integer'a dönüştür
            char new_char = ascii_uppercase[(index - offset + 26) % 26]; // Modulus işlemi yapılırken 26 eklenir
            flag[i] = new_char;
            counter++;
        } else {
            flag[i] = c; // Eğer karakter bir harf değilse, orijinal karakteri ekle
        }
        i++;
    }

    flag[i] = '\0'; // Diziyi null-terminated olarak bitir

    printf("%s", flag); // Sonucu yazdır
    fclose(file); // Dosyayı kapat
    return 0;
}
