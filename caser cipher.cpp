#include <stdio.h>
void encryptCeasarCipher(char message[], int shift) {
    int i;
    for (i = 0; message[i] != '\0'; i++) {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = ((message[i] - 'A' + shift) % 26) + 'A';
        } else if (message[i] >= 'a' && message[i] <= 'z') {
            message[i] = ((message[i] - 'a' + shift) % 26) + 'a';
        }
    }
}
void decryptCeasarCipher(char message[], int shift) {
    encryptCeasarCipher(message, 26 - shift); 
}
int main() {
    char message[100];
    int shift;
    printf("Enter a message: ");
    gets(message);
    printf("Enter the shift value: ");
    scanf("%d", &shift);
    encryptCeasarCipher(message, shift);
    printf("Encrypted message: %s\n", message);
    decryptCeasarCipher(message, shift);
    printf("Decrypted message: %s\n", message);
    return 0;
}
