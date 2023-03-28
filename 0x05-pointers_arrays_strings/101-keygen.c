#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

char *generate_password(void) {
    char *password = malloc(sizeof(char) * (PASSWORD_LENGTH + 1));
    if (password == NULL) {
        fprintf(stderr, "Failed to allocate memory for password\n");
        exit(1);
    }

    const char charset[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const int charset_length = sizeof(charset) - 1;
    srand(time(NULL));
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % charset_length];
    }
    password[PASSWORD_LENGTH] = '\0';

    return password;
}

int main(void) {
    char *password = generate_password();
    printf("Generated password: %s\n", password);
    free(password);
    return 0;
}
