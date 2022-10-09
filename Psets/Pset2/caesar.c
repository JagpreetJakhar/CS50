#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

char rotate(char c, int k);
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        //checks for the proper number of command line arguments are provided or not.

        printf("Usage: ./caesar key\n");
        return 1;
    }
    int i, n = 0;
    n = strlen(argv[1]); //length of input cli argument
    for (i = 0; i < n; i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            //check if all inputs are digit or not
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    //only after all requirements are met, does the program proceeds
    int key = 0;
    for (i = 0; i < n; i++)
    {
        key = (key * 10) + (argv[1][i] - '0'); // converting char to int as 0 starts from 48 in ASCII table


    }
    string plain = get_string("plaintext:  ");
    //gets input plaintext from user
    int cycle, len_plain = 0;
    len_plain = strlen(plain);
    printf("ciphertext: ");
    for (cycle = 0; cycle < len_plain; cycle++)
    {

        char tem =  rotate(plain[cycle], key);
        printf("%c", tem);
    }
    printf("\n");
    return 0;
}
char rotate(char c, int k)
{
    //function to encrypt
    char ans;
    int temp;
    if (islower(c))
    {

        ans = (int) c - 97; // using ASCII table a as 0
        temp = (k % 26); //wrapping around as all multiples of 26 will produce plaintext
        ans = (ans + temp) % 26; //wrapping around so as to keep output from outflowing to other ascii charcacters
        ans = ans + 97;

        return (char) ans;
    }
    if (isupper(c))
    {
        ans = (int) c - 65; // using ASCII to make A = 0
        temp = k % 26; //wrap around
        ans = (ans + temp) % 26;
        ans = ans + 65;
        return (char) ans;
    }
    else
    {
        // for non alphabetic input
        ans = c;
        return ans;
    }
}
