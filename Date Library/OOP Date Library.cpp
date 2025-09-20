#include <iostream>
#include"clsDate.h"
using namespace std;

int main() {

    clsDate Date1;
    Date1.Print();
    Date1.PrintMonthCalendar();

    clsDate Date2(250, 2025);
    Date2.Print();

    Date2.AddDays(20);
    Date2.Print();

    clsDate Date3("2/8/2025");
    Date3.Print();
    cout << Date3.IsDateBeforeDate2(Date2) << endl;

    Date3.IncreaseOneDay();
    Date3.Print();

    cout << Date3.GetDifferenceInDays(Date2) << endl;

    Date3.IncreaseByXDay(10);
    Date3.Print();

    Date3.IncreaseOneMonth();
    Date3.Print();

    Date3.IncreaseOneWeek();
    Date3.Print();

    Date3.IncreaseOneMillennium();
    Date3.Print();

    cout << "\n";

    //without object
    clsDate::IncreaseDateByXDay(clsDate(), 10);
    cout << clsDate::CalculateMyAgeInDays(clsDate(1, 1, 2001)) << endl;
    cout << clsDate::isLeapYear(2019) << endl;
    cout << clsDate::IsDate1AfterDate2(clsDate(10, 7, 2001), clsDate(1, 3, 2001)) << endl;
    cout << clsDate::IsValidDate(clsDate(30, 2, 2015)) << endl;
    clsDate::PrintMonthCalendar(2023, 10);

    //You can try any method at your own..


    system("pause>0");
    return 0;
}
