//
//  main.c
//  caesar
//
//  Created by Tsunghan Hsieh on 2018/09/05.
//  Copyright © 2018 Tsunghan Hsieh. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

//Enter a number, which is a key to allow you to change your plaintext to encrypted messages
//For example, if you enter 2, then key = 2. "a" will be changed to "c"
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Nope\n");
        return 1;
    }
    //get the key and check the key
    int k = atoi(argv[1]);
    if (k < 0)
    {
        printf("Nope\n");
        return 1;
    }
    //get string from the third position of array
    string s = get_string("plaintext: ");
    //printf("Input:%s Shift digit:%d\n", s, k);
    //check whether the input is in correct postion
    if (argc == 2)
    {
        printf("ciphertext: ");
    }
    {
        int shift = k % 26;
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            //convert upper case to crypto
            int ascii = s[i];
            if (isupper(s[i]))
            {
                int newascii = ((ascii - 65) % 26 + shift) % 26 + 65;
                char message = (char)((int) newascii);
                printf("%c", message);
            }
            //convert lower case to crypto
            else if (islower(s[i]))
            {
                int newascii = ((ascii - 97) % 26 + shift) % 26 + 97;
                char message = (char)((int) newascii);
                printf("%c", message);
            }
            //do not convert number
            else if (ascii >= 48 && ascii <= 57)
            {
                printf("%c", s[i]);
            }
            //do not convert any punctuations
            else if (ascii >= 32 && ascii <= 47)
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
}
