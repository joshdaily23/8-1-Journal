/*Josh Daily
  1/23/25
  Project One
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor to initialize the time
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Method to display time in 12-hour format
    void display12Hour() {
        int displayHour = hours % 12; // Convert 24-hour to 12-hour format
        if (displayHour == 0) displayHour = 12; // Handle 12 o'clock case
        string ampm = (hours < 12) ? "AM" : "PM";
        cout << "12-Hour Format: " << setw(2) << setfill('0') << displayHour << ":"
            << setw(2) << setfill('0') << minutes << ":"
            << setw(2) << setfill('0') << seconds << " " << ampm << endl;
    }

    // Method to display time in 24-hour format
    void display24Hour() {
        cout << "24-Hour Format: " << setw(2) << setfill('0') << hours << ":"
            << setw(2) << setfill('0') << minutes << ":"
            << setw(2) << setfill('0') << seconds << endl;
    }

    // Method to set the time
    void setTime(int h, int m, int s) {
        if (h >= 0 && h < 24) hours = h;
        if (m >= 0 && m < 60) minutes = m;
        if (s >= 0 && s < 60) seconds = s;
    }
};

int main() {
    int hours, minutes, seconds;

    // Ask for user input
    cout << "Enter time (24-hour format):" << endl;
    cout << "Hours: ";
    cin >> hours;
    cout << "Minutes: ";
    cin >> minutes;
    cout << "Seconds: ";
    cin >> seconds;

    // Create Time object
    Time currentTime(hours, minutes, seconds);

    // Display both clock formats
    currentTime.display12Hour();
    currentTime.display24Hour();

    return 0;
}
