#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!");
    }
    if (score2 > score1)
    {
        printf("Player 2 wins!");
    }
    if (score1 == score2)
    {
        printf("Tie!");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int score = 0;
    int i, n;
    n = strlen(word);

    for (i = 0; i < n; i++)
    {
        // for loop for going over each character in string
        int pos_u, pos_l;
        pos_u = 0;
        pos_l = 0;
        if ((word[i] >= 65) && (word[i] <= 122))
        {
            //printf("Works till here\n");

            if (isupper(word[i]))
            {
                // As ASCII A starts from 65 and goes till 90


                pos_u = (int) word[i];


                pos_u = pos_u - 65; //calibrating with POINTS array

                score = score + POINTS[pos_u];


            }
            if (islower(word[i]))
            {
                //As ASCII a starts from 97

                pos_l = (int) word[i];

                pos_l = pos_l - 97; //Calibrating with Points Array

                score = score + POINTS[pos_l];

            }

        }

        else
        {
            score += 0;
        }
    }
    return score;

}
