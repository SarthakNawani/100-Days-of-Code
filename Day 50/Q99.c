//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main()
{
    int dd, mm, yyyy;

    printf("Enter date: ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    printf("%02d-Apr-%d", dd, yyyy);

    return 0;
}
