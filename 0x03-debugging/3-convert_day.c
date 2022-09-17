#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day)
{
    switch (month)
    {
        case 2: /* February: 28 days */
            day = 31 + day;
            break;
        case 3: /* March: 31 days */
            day = 59 + day;
            break;
        case 4: /* April: 30 days */
            day = 90 + day;
            break;
        case 5: /* May: 31 days */
            day = 120 + day;
            break;
        case 6: /* June: 30 days */
            day = 151 + day;
            break;
        case 7: /* July: 31 days */
            day = 181 + day;
            break;
        case 8: /* August: 31 days */
            day = 212 + day;
            break;
        case 9: /* September: 30 days */
            day = 243 + day;
            break;
        case 10: /* October: 31 days */
            day = 273 + day;
            break;
        case 11: /* November: 30 days */
            day = 304 + day;
            break;
        case 12: /* December: 31 days */
            day = 334 + day;
            break;
        default:
            break;
    }
    return (day);
}
