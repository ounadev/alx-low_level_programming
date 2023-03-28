#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 8
char* generate_password() {
    char* password = malloc(sizeof(char) * PASSWORD_LENGTH + 1);
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789,.-#'?!";
    srand(time(NULL));
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % sizeof(charset)];
    }
    password[PASSWORD_LENGTH] = '\0';
    return password;
}

int main(void) {
    char* password = generate_password();
    printf("%s\n", password);
    free(password);
    return (0);
}

