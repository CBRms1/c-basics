#include <stdio.h>
#include <string.h>

int main()
{
    char phone_num[15];
    char converted_phone_num[12] = "";

    size_t i = 0, n = 0;

    printf("Phone number format (XX)XXXXX-XXXX");
    scanf("%s", phone_num);

    for (i = 0; i < strlen(phone_num); i++)
    {
        if (phone_num[i] == '(' || phone_num[i] == ')' || phone_num[i] == '-')
        {
            continue;
        }
        else
        {
            converted_phone_num[n] = phone_num[i];
            n++;
        }
    }

    printf("\nconverted phone number: %s\n", converted_phone_num);

    return 0;
}