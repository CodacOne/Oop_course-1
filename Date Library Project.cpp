
#include<iostream>
#include<vector>
#include<string>

#include"clsDate.h"


using namespace std;


int main()

{
	clsDate Date1;
	cout << "\nPrint current Date     : ";
	Date1.print();
	
	/////
	clsDate Date2("30/12/2020");
	/*Date2.Day = 22;
	Date2.Month = 3;
	Date2.Year = 1999;*/
	cout << "\nConvert String To Date  8 / 12 / 2024 : ";
	Date2.print();

	/////
	clsDate Date3(8,12, 2024);
	cout << "\nPrint This Date        : ";
	Date3.print();


	/////
	clsDate Date4(250, 2024);
	cout << "\nConvert Number To Date : ";
	Date4.print();

	/////
	cout << "\nprint Month Calender   : \n";
	Date1.printMonthCalender();
	cout << "\nprint Month Calender   : \n";
	Date4.printMonthCalender();

	/////
	cout << "\nprint Year Calender    : \n";
	Date4.printYearCalender();


	/////
	cout << "\nDate Is validate 1 ? 0 : ";
	Date3.print();
	cout <<"  :"<< Date3.ValidateThisDate();

	/////
	cout << "\nNumber Of Days In Year : ";
	cout << Date3.NumberOfDaysInYear();

	/////
	cout << "\nNumber Of Hour In Year : ";
	cout << Date3.NumberOfHourInYear();

	/////
	cout << "\nNumber Of Minute In Year : ";
	cout << Date3.NumberOfMinuteInYear();

	/////
	cout << "\nNumber Of Seconds In Year : ";
	cout << Date3.NumberOfSecondsInYear();
	  ////////////////////////*****************//////////////////////////


	/////
	cout << "\nNumber Of Days In Month : ";
	cout << Date3.CalculateNumberOfDaysInMonth();

	/////
	cout << "\nNumber Of Hours In Month : ";
	cout << Date3.NumberHoursOfMonth();

	/////
	cout << "\nNumber Of Minutes In Month : ";
	cout << Date3.NumberMinutesOfMonth();

	/////
	cout << "\nNumber Of Seconds In Month : ";
	cout << Date3.NumberSecondesOfMonth();

	////////////////////////*****************//////////////////////////

	/////
	cout << "\nDay Order In Week : ";
	cout << Date3.DayOrderInWeek();

	/////
	cout << "\nDay Name In Week : ";
	cout << Date3.DayName();

	/////
	cout << "\nMonth Name In Year : ";
	cout << Date3.MonthNameInYear();

	/////
	cout << "\nNumber Of Days For Begining Of The Year : ";
	cout << Date3.NumberOfDaysForBeginingOfTheYear();

	/////
	/*cout << "\nIncrease Days To Date : ";
	 Date3.AddDays(32);
	 Date3.print();*/

	 /////
	 cout << "\nDate3 :"; Date3.print();
	 cout << "Date4 :"; Date4.print();
	 cout << "Date3 Before Date4  : ";
	 cout << Date3.ChcekIfDate1LessThanDate2(Date4);
	 cout << "\n";
	 
	 /////
	 cout << "\nDate3 :"; Date3.print();
	 cout << "Date4 :"; Date4.print();
	 cout << "Date3 Equal Date4  : ";
	 cout << Date3.ChcekIfDate1EqualThanDate2(Date4);
	 cout << "\n";

	 /////
	 cout << "\nIs Last Day In Month  : ";
	 cout << Date3.IsLastDayInMonth();
	 cout << "\n";

	 /////
	 cout << "\nDate3 :";  Date3.print();
	 cout << "Increase Date By One Day : ";
	 Date3.IncreaseDateByOneDay();
	 Date3.print();

	 /////
	/* cout << "\nBefore Swap :"; 
	 Date3.print();  Date4.print();
	 Date3.SwapDates(Date3, Date4);
	 cout << "After Swap :";
	 Date3.print();  Date4.print();*/
	 

	 /////
	 cout << "\nCalculate Difference IN Days : ";
	 cout << Date3.CalculateDifferenceINDays(Date4);


	// /////
	// cout << "\nCalculate Difference IN Days  : ";
	//// cout << Date3.CalculateMyAgeINDays(Date4);
	// clsDate::CalculateMyAgeINDays(Date4);

	 /////
	 cout << "\nIncrease Date By One Week  : ";
	  Date3=Date3.IncreaseDateByOneWeek();
	  Date3.print();

	  /////
	  cout << "\nIncrease Date By One Month : ";
	  Date3 = Date3.IncreaseDateByOneMonth();
	  Date3.print();

	  /////
	  cout << "\nIncrease Date By One Year  : ";
	  Date3 = Date3.IncreaseDateByOneYear();
	  Date3.print();

	  /////
	  cout << "\nDecrease Date By One Day   : ";
	  Date3 = Date3.DecreaseDateByOneDay();
	  Date3.print();

	  /////
	  cout << "\nDecrease Date By One Week  : ";
	  Date3 = Date3.DecreaseDateByOneWeek();
	  Date3.print();

	  /////
	  cout << "\nDecrease Date By One Month : ";
	  Date3 = Date3.DecreaseDateByOneMonth();
	  Date3.print();

	  /////
	  cout << "\nDecrease Date By One Year  : ";
	  Date3 = Date3.DecreaseDateByOneYear();
	  Date3.print();

	  /////
	  cout << "\nIs End Of Week             : ";
	  cout << Date3.IsEndOfWeek();
	
	  /////
	  cout << "\nIs it Week end             : ";
	  cout << Date3.IsItWeekend();

	  /////
	  cout << "\nDays Until End Week        : ";
	  cout << Date3.DaysUntilEndWeek();

	  /////
	  cout << "\nDays Until End Week        : ";
	  cout << Date3.DaysUntilEndWeek();

	  /////
	  cout << "\nDays Until End Month        : ";
	  cout << Date3.DaysUntilEndMonth();

	  /////
	  cout << "\nDays Until End Year        : ";
	  cout << Date3.DaysUntilEndYear();


	 
	

	return 0;

}