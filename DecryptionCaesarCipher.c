#include<stdio.h>
void main()
{
    int i, key;
    char message[100], ch;
    printf("Enter the message you want to decrypt: ");
    gets(message);
    printf("Enter the key: ");
    scanf("%d", &key);
    for(i = 0; message[i] != '\0'; ++i)
    {
    ch = message[i];
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - key;
    if(ch>'z')
    {
        ch = ch + 'z' - 'a' + 1;
    }
    message[i] = ch;
    } else if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch - key;
    if(ch> 'Z')
    {
        ch = ch + 'Z' - 'A' + 1;
    }
    message[i] = ch;
    }
    }
    printf("Your decrypted message is: %s", message);
}