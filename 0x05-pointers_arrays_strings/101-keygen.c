#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

int main(int argc, char **argv)
{
    char *password = generate_password();

    printf("Generated password: %s\n", password);

    free(password);
    return 0;
}

char *generate_password(void)
{
    char *password = malloc(PASSWORD_LENGTH + 1);

    if (password == NULL) {
        fprintf(stderr, "Failed to allocate memory for password\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = rand() % 26 + 'a';
    }

    password[PASSWORD_LENGTH] = '\0';

    return password;
}
