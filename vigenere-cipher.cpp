#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char e[100],d[100];
int encryption(char pt[],char key[])
{
    int i;
    for(i=0;pt[i]!='\0';i++)
    {
        if(pt[i]!=' ')
           e[i]=((pt[i]+key[i])%26)+'A';
           else
           e[i]=pt[i];
    }
    }
    int decryption(char e[],char key[])
    {
        int i;
        for(i=0;e[i]!='\0';i++)
        {
            if(e[i]!=' ')
            d[i]=(((e[i]-key[i])+26)%26)+'A';
            else
            d[i]=e[i];
                    }
    }
    char upperkey(char arr[])
    {
        int c=0;
        while (arr[c] !='\0'){
            if (arr[c] >= 'a' && arr[c] <= 'z')
            {
                arr[c] = arr[c] - 32;

            }
            c++;
        }
    }
    int main()
    {
        char pt[100],key[100];
        printf("enter plain text \n");
        gets(pt);
        printf("enter the key\n");
        gets(key);
        upperkey(pt);
        upperkey(key);
        encryption(pt,key);
        printf("encrypted text is %s",e);
        decryption(e,key);
        printf("\ndecrypted text is\t%s",d);
            }

