#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>



int count_letters(string word);
int count_words(string word);
int count_sentences(string word);

int main(void)
{
double answer;

string str_in = get_string("Text: ");

//printf("%s\n",str_in);

int letters = count_letters(str_in);

//gives number of letters

int words = count_words(str_in);

// gives number of words

int sentences = count_sentences(str_in);

//gives number of sentences

answer = round(((0.0588 * (letters/(words/100.0))) - (0.296 * (sentences/(words/100.0))) - 15.8));

if ((answer >= 1) && answer < 16)
{
    printf("Grade %d\n",(int) answer);
}

if (answer >= 16)
{
    printf("Grade 16+\n");
}

if (answer < 1)
{
    printf("Before Grade 1\n");
}



}

int count_letters(string word)
{
    // Counts the number of letters in the string.
    int i, n, nu_l = 0;
    n = strlen(word);
    for (i = 0; i < n; i++)
    {
        if (((word[i] >= 65) && (word[i] <= 90)) || ((word[i] >= 97) && (word[i] <= 122)))
        {
            nu_l += 1;
        }
        else
        {
            nu_l += 0;
        }
    }

    return nu_l;
}

int count_words(string word)
{
    // Counts the number of words in the string assuming atleast one, starts counting from 1 instead of zero.
    int i, n = 0;
    int nu_w = 1;
    n = strlen(word);
    for (i=0; i < n; i++)
    {
        if (word[i] == ' ')
        {
            nu_w += 1;

        }
        else
        {
            nu_w +=0;
        }
    }

    return nu_w;

}

int count_sentences(string word)
{
    //counts the number of sentences in the input.
    int i, n = 0;
    int nu_s = 0;
    n = strlen(word);
    for(i = 0; i < n; i++ )
    {
        if ((word[i] == '.') || (word[i] == '!') || (word[i] == '?'))
        {
            nu_s += 1;
        }
        else
        {
            nu_s += 0;

        }
    }
    return nu_s;
}
