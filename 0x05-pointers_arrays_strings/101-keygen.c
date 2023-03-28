#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 8

char* generate_password() {
    char* password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));
    static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    srand(time(NULL));
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int index = rand() % strlen(charset);
        password[i] = charset[index];
    }
    password[PASSWORD_LENGTH] = '\0';
    return password;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s password\n", argv[0]);
        return 1;
    }

    char* password = generate_password();
    printf("%s\n", password);

    free(password);
    return 0;
}
