#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatePassword(char *password, int length)
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    srand((unsigned int)time(NULL));
    for (i = 0; i < length - 1; ++i)
    {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[length - 1] = '\0';
}

int main()
{
    int passwordLength = 12;
    char password[passwordLength];

    generatePassword(password, passwordLength);
    printf("Generated Password: %s\n", password);

    return 0;
}
