#include <iostream>
#include "clsDate.h"
#include"clsPeriod.h"
using namespace std;

int main() {

    clsPeriod Period1(clsDate(1, 1, 2022), clsDate(20, 1, 2022));
    Period1.Print();
    cout << "Period Length is: " << Period1.PeriodLength() << endl;

    cout << "\n";

    clsPeriod Period2(clsDate(5, 1, 2022), clsDate(15, 1, 2022));
    Period2.Print();
    cout << "Period Length is: " << Period2.PeriodLength() << endl;

    cout << "\n";

    //You can check like this
    cout << Period1.IsOverlapPeriods(Period2) << endl;

    cout << Period1.CountOverlapDays(Period2) << endl;

    cout << Period1.IsDateInPeriod(clsDate(3, 1, 2022)) << endl;
    cout << Period2.IsDateInPeriod(clsDate(16, 8, 2022)) << endl;

    cout << "\n"; 

    //Also you can call the static method and send period 1 and period 2
    cout << clsPeriod::IsOverlapPeriods(Period1, Period2) << endl;


    system("pause>0");
    return 0;
}
