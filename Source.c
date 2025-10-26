#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int year = 1;

    puts("Чтобы выйти из программы введите \"0\"");
    while (year != 0)
    {
        printf("Введите год XXI века: ");
        scanf("%d", &year);

        int pastYear = year - 2000;
        int yearCode = ((pastYear / 4) + pastYear) % 7;
        int monthCode = 5;
        int centuryCode = 6;
        int dayCode = 1;
        int leapYear = 0;
        int sum = yearCode + monthCode + centuryCode + dayCode;

        switch (sum % 7)
        {
            case 0:
                puts("Воскресенье");
                break;
            case 1:
                puts("Понедельник");
                break;
            case 2:
                puts("Вторник");
                break;
            case 3:
                puts("Среда");
                break;
            case 4:
                puts("Четверг");
                break;
            case 5:
                puts("Пятница");
                break;
            case 6:
                puts("Суббота");
                break;
        }
    }
    
    return 0;
}