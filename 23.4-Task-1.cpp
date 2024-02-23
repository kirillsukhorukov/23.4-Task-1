#include <iostream>

#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6
#define SUN 7
#define DAY(dayName) dayName ## DAY
#define MONDAY std::cout << "Monday" << std::endl;
#define TUESDAY std::cout << "Tuesday" << std::endl;
#define WEDNESDAY std::cout << "Wednesday" << std::endl;
#define THURSDAY std::cout << "Thursday" << std::endl;
#define FRIDAY std::cout << "Friday" << std::endl;
#define SATURDAY std::cout << "Saturday" << std::endl;
#define SUNDAY std::cout << "Sunday" << std::endl;
#define REQUEST std::cout << "Enter the serial number of the day of the week: ";
#define ERROR std::cout << "Input error!" << std::endl;


int main ()
{
    int dayNumber;
    REQUEST
    std::cin >> dayNumber;

    switch (dayNumber)
    {
    case MON:
        DAY(MON) 
        break;
    
    case TUE:
        DAY(TUES)
        break;

    case WED:
        DAY(WEDNES)
        break;

    case THU:
        DAY(THURS)
        break;

    case FRI:
        DAY(FRI)
        break;

    case SAT:
        DAY(SATUR)
        break;

    case SUN:
        DAY(SUN)
        break;

    default:
        ERROR
        break;
    }
}