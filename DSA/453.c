#include <stdio.h>

void main()
{
    char n[50];
    int i, c = 0;

    printf("\n Enter your number:  ");
    scanf("%s", n);
    for (i = 0; n[i] != '\0'; i++)
        ;

    for (c = i, i = 0; n[i] != '\0'; i++, c--)
    {
        if (c % 2 != 0 && c >= 5 || c == 2)
        {
            switch (n[i])
            {
            case '0':
                break;
            case '1':
                switch (n[i + 1])
                {
                case '0':
                    printf(" ten ");
                    c--;
                    i++;
                    break;
                case '1':
                    printf(" eleven ");
                    c--;
                    i++;
                    break;
                case '2':
                    printf(" twelve ");
                    c--;
                    i++;
                    break;
                case '3':
                    printf(" thirteen ");
                    c--;
                    i++;
                    break;
                case '4':
                    printf(" fourteen ");
                    c--;
                    i++;
                    break;
                case '5':
                    printf(" fifteen ");
                    c--;
                    i++;
                    break;
                case '6':
                    printf(" sixteen ");
                    c--;
                    i++;
                    break;
                case '7':
                    printf(" seventeen ");
                    c--;
                    i++;
                    break;
                case '8':
                    printf(" eighteen ");
                    c--;
                    i++;
                    break;
                case '9':
                    printf(" nineteen ");
                    c--;
                    i++;
                    break;
                default:
                    break;
                }
                break;
            case '2':
                printf(" twenty ");
                break;
            case '3':
                printf(" thirty ");
                break;
            case '4':
                printf(" forty ");
                break;
            case '5':
                printf(" fifty ");
                break;
            case '6':
                printf(" sixty ");
                break;
            case '7':
                printf(" seventy ");
                break;
            case '8':
                printf(" eighty ");
                break;
            case '9':
                printf(" ninty ");
                break;
            default:
                printf("\n not a number");
            }
        }
        else
        {
            switch (n[i])
            {
            case '0':
                break;
            case '1':
                printf(" one ");
                break;
            case '2':
                printf(" two ");
                break;
            case '3':
                printf(" three ");
                break;
            case '4':
                printf(" four ");
                break;
            case '5':
                printf(" five ");
                break;
            case '6':
                printf(" six ");
                break;
            case '7':
                printf(" seven ");
                break;
            case '8':
                printf(" eight ");
                break;
            case '9':
                printf(" nine ");
                break;
            default:
                printf("\n not a number");
            }
        }
        if (n[i - 1] == '0' && n[i] == '0' && n[i + 1] == '0')
        {
            c--;
            i++;
        }
        else
        {
            switch (c) /* c ek iniger hai*/
            {
            case 3:
                printf(" hundred ");
                break;
            case 4:
                printf(" thousent ");
                break;
            case 6:
                printf(" lakh ");
                break;
            case 8:
                printf(" cror ");
                break;
            case 10:
                printf(" Arab ");
                break;
            case 12:
                printf(" Kharab ");
                break;
            case 14:
                printf(" Neel ");
                break;
            case 16:
                printf(" Padam ");
                break;
            case 18:
                printf(" shankh ");
                break;
            default:
                break;
            }
        }
    }
}