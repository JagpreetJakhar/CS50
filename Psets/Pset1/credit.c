//#include <cs50.h>
#include <stdio.h>
#include<math.h>
int main(void)
{
    long long number = 000000000000;
    long long power = 0;
    long long temp;
    int first_set = 0;
    int second_set = 0;
    int sum = 0;
    int flag = 0; //top check if a condition is satisfied

    while (number == 0) //take input
    {
        printf("Number: ");
        scanf("%lld", &number);
    }

    for (temp = number; temp != 0; temp = temp / 100)
    {
        //taking two digits at a time from the end and taking left-side of the two

        first_set = temp % 100;

        first_set = (first_set / 10) * 2;


        if ((first_set / 10) > 0)
        {
            sum = sum + (first_set % 10);

            first_set = first_set / 10;

        }
        sum = sum + first_set;


    }
    for (power = number; power != 0; power = power / 100)
    {
        //taking two digits and taking right side of the two
        second_set = power % 100;
        second_set = second_set % 10;

        sum = sum + second_set;

    }



    if ((sum % 10) == 0)//if checksum is correct
    {
        int length = 0;
        for (temp = number; temp != 0; length++)
        {
            temp = temp / 10;
        }

        double one_digit;
        double two_digit;
        int first_digit;
        int first_two_digits;
        one_digit = pow(10, (length - 1));
        two_digit = pow(10, (length - 2));
        first_digit = number / one_digit;
        first_two_digits = number / two_digit;
        if ((length == 13) || (length == 16) || (length == 15))
        {

            if (first_digit == 4)
            {
                flag = 1;
                printf("VISA\n"); //Visa Card
            }
            if ((first_two_digits >= 51) && (first_two_digits <= 55))
            {
                flag = 1;
                printf("MASTERCARD\n"); //Mastercard
            }

            if ((first_two_digits == 34) || (first_two_digits == 37))
            {
                flag = 1;
                printf("AMEX\n"); //Amex Card
            }

        }
    }
    if (flag == 0) //checksum is correct but card does not belong to any company
    {
        printf("INVALID\n");
    }

}
