//Q98: Print initials of a name with the surname displayed in full.


#include <stdio.h>
int main()
{
    char name[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("%c.", name[0]);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            int j = i + 1;

            if (name[j] != '\0')
            {
                while (name[j] != ' ' && name[j] != '\n' && name[j] != '\0')
                {
                    if (name[j + 1] == '\0' || name[j + 1] == '\n')
                    {
                        printf("%c.", name[j]);
                    }
                    else
                    {
                        printf("%c.", name[j]);
                    }
                    break;
                }
            }
        }
    }

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            int j = i + 1;

            while (name[j] != ' ' && name[j] != '\n' && name[j] != '\0')
            {
                j++;
            }

            if (name[j] == '\n' || name[j] == '\0')
            {
                printf(" %s", &name[i + 1]);
                break;
            }
        }
    }

    return 0;
}
