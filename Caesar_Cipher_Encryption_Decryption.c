#include<stdio.h>
void main()
{
    int i, key;
    char message[100], ch;
    int a;
    printf("Please enter your choice:\nFor encryption enter 1:\nFor decryption enter 2:\n");
    scanf("%d", &a);
    if (a==1)
    {
    printf("Enter the message you want to encrypt: ");
    scanf("%s", &message);
    printf("Enter the key: ");
    scanf("%d", &key);
    for(i = 0; message[i] != '\0'; ++i)
    {
    ch = message[i];
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch + key;
    if(ch>'z')
    {
        ch = ch - 'z' + 'a' - 1;
    }
    message[i] = ch;
    } else if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + key;
    if(ch> 'Z')
    {
        ch = ch - 'Z' + 'A' - 1;
    }
    message[i] = ch;
    }
    }
    printf("Your encrypted message is: %s", message);
    }
    else if (a==2)
    {
    printf("Enter the message you want to decrypt: ");
    scanf("%s", &message);
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
    else {
        printf("Enter correct input");
    }
    
}