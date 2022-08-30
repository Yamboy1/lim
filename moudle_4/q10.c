#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

typedef enum {
    MONDAY=1, 
    TUESDAY, 
    WEDNESDAY, 
    THURSDAY, 
    FRIDAY, 
    SATURDAY, 
    SUNDAY
} Weekday_t;


typedef struct {
    Weekday_t day_day;
    int32_t day_date;
    int32_t month;
    int32_t year;
} Date_t;


Date_t setDate(Weekday_t weekday, uint8_t day, uint8_t month, uint16_t year)
{
    Date_t i;
    i.day_day=weekday;
    i.day_date=day;
    i.month=month;
    i.year=year;
    return i;
}

void printDate(const Date_t* date)
{
    switch(date->day_day){
        case 1:
        printf("Monday %d/%d/%d\n", date->day_date, date->month, date->year);
        break;
        case 2:
        printf("Tuesday %d/%d/%d\n", date->day_date, date->month, date->year);
        break;
        case 3:
        printf("Wednesday %d/%d/%d\n", date->day_date, date->month, date->year);
        break;
        case 4:
        printf("Thursday %d/%d/%d\n", date->day_date, date->month, date->year);
        break;
        case 5:
        printf("Friday %d/%d/%d\n", date->day_date, date->month, date->year);
        break;
        case 6:
        printf("Saturday %d/%d/%d\n", date->day_date, date->month, date->year);
        break;
        default:
        printf("Sunday %d/%d/%d\n", date->day_date, date->month, date->year);
        break;
    }
    
}

int main(void)
{
    Date_t date = setDate(SUNDAY, 20, 7, 1969);
    printDate(&date);
}
