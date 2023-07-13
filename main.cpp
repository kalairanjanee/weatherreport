/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

#include <iostream>
#include <string>

using namespace std;

/*M.Kalairanjanee
 vivekanandha college of engineering for women
 switch statement
 looping statement*/

class Weather {
private:
    string location;
    string Today;
    string Yesterday;
    string Tomorrow;
    string WeekReport[7];
    string MonthWeather[12];
public:

    void printHeading(const string& heading) {
        cout << "\n\n";
        cout << "==============================" << endl;
        cout << heading << endl;
        cout << "==============================" << endl;
    }

    void printLocation() {
        printHeading("Location");
        cout << "City: " << location << endl;
    }

    void printToday() {
        printHeading("Today");
        cout <<"it is sunny"<<endl;
    }

    void printYesterday() {
        printHeading("Yesterday");
         cout <<"it is cloudy"<<endl;
    }

    void printTomorrow() {
        printHeading("Tomorrow");
         cout <<"it is rainy"<<endl;
    }

    void printWeekReport() {
        printHeading("Week Report");
        for (int i = 0; i < 7; i++) {
            cout << "Day " << i+1 << ": " << WeekReport[i] << endl;
        }
    }

    void printMonthWeather() {
        printHeading("Month Weather");
        for (int i = 0; i < 12; i++) {
            cout << "Month " << i+1 << ": " << MonthWeather[i] << endl;
        }
    }
};

int main() {
    string loc;
    string todayWeather;
    string yesterdayWeather;
    string tomorrowWeather;
    int choice;
    Weather app;
    string weekReport[7] = { "Cloudy", "Sunny", "Rainy", "Cloudy", "Sunny", "Sunny", "Rainy" };
    string monthWeather[12] = { "Sunny", "Cloudy", "Rainy", "Sunny", "Sunny", "Cloudy", "Rainy", "Sunny", "Sunny", "Cloudy", "Rainy", "Sunny" };

    cout<<"enter a location:"<<endl;
    cin>>loc;
    cout<<"OPTIONS"<<endl;
    cout<<"1.today"<<endl;
    cout<<"2.yesterday"<<endl;
    cout<<"3.tomorrow"<<endl;
    cout<<"4.week"<<endl;
    cout<<"5.month"<<endl;
    cout<<"enter your choice(1-5):"<<endl;
    cin>>choice;
    
    switch(choice)
    {
        case 1:
            app.printToday();
            break;
        case 2:
            app.printYesterday();
            break;
        case 3:
            app.printTomorrow();
            break;
        case 4:
            app.printWeekReport();
            break;
        case 5:
            app.printMonthWeather();
            break;
    }

    return 0;
}