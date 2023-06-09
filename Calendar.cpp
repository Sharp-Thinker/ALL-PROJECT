#include <iostream>
#include <stdlib.h>
using namespace std;


int first_day_of_year(int y, int m, int d) // find first day of given year....
{
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    int day = (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
    
    return day;
}


int main()
{    
    int year,month = 1, day = 1;
    cout << "Enter Your Favourite Year For See CALENDAR : ";
    cin >> year;
    cout << endl << endl;
    cout << "                    CALENDAR - " << year << endl << endl;
    int date = first_day_of_year(year,month,day);
    string month_in_year[12] = {"January", "February", "March", "April", "MAY", "June", "July", "August", "Septempber", "October", "November", "December"};
    string week_in_month[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int day_in_month[12] = {31, 28, 30, 31, 30, 31, 30, 31, 30, 31, 30, 31};
    int j = 0, space = date;
    if (year % 4 == 0 && year % 100 != 0)
    {
        day_in_month[1] = {29};
    }

    for (int i = 0; i < 12; i++)
    {
        cout << "------------------------------------------------------" << endl;
        cout << "                       " << month_in_year[i] << endl;
        cout << "------------------------------------------------------" << endl;
        for (int i = 0; i < 7; i++) // print every week name..
        {
            cout << week_in_month[i] << "     ";
        }
        cout << endl;
        for (int i = 0; i < space; i++)
        {
            cout << "        ";
        }
        for (int i = 1; i <= day_in_month[j]; i++) // print day...
        {
            if (i < 10)
            {
                cout << "  " << i << "     ";
                space++;
            }
            if (i >= 10)
            {
                cout << " " << i << "     ";
                space++;
            }
            if (space % 7 == 0) // new line after complete day in week.. 
            {
                cout << endl;
                space = 0;
            }
        }
        cout << endl << endl;
        j++;
    }


    cout << "................. T H A N K  Y O U ................." << endl << endl;
    system("pause");
}