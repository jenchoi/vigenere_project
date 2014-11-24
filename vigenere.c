#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (int argc, string argv[])

{
    if (argc != 2)
    {
        printf("Try again. Please enter a keyword.\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    if (!isalpha(argv[1][i]))
    {
        printf("Try again. Please enter only letters.\n");
        return 1;
    }
    string plaintext;
    plaintext = GetString();
    string k=argv[1];
    int keylen = strlen(argv[1]);
    for (int i = 0, j =0, n = strlen(plaintext); i < n; i++, j++)
    {
    if (j>=keylen)
    {
        j = 0;
    }
    if (!isalpha(plaintext[i]))
    {
        j = (j-1);
    }
    if (isupper(k[j]))
    {
        k[j] = k[j]-'A';
    }
    else if (islower(k[j]))
    {
        k[j] = k[j]-'a';
    }

    if (!isalpha(plaintext[i]))
    {
        printf("%c", plaintext[i]);
    }
    if (isalpha(plaintext[i]))
    {
        if(isupper(plaintext[i]))
        {
            int ciphertext = ((plaintext[i]-'A'+(k[j]))%26)+'A';
            printf("%c", ciphertext);
        }
        else if (islower(plaintext[i]))
        {
            int ciphertext = ((plaintext[i]-'a'+(k[j]))%26)+'a';
            printf("%c", ciphertext);
        }
    else
    {
    printf("%c", plaintext[i]);
    }
    }
    }
    printf("\n");
}

