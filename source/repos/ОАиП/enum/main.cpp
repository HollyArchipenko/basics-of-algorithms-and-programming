#include <iostream>
using namespace std;

enum days
{
    Monday=1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

int main()
{
    days day1 = Monday, day2 = Saturday;
    int day, hour, minute;
    cout << "Enter a day ";
    cin >> day;
    switch (day)
    {
    case Monday: 
        cout << "Enter a hour "; 
        cin >> hour; 
        switch (hour)
        {
        case 16: 
            cout << "Enter a minute ";
            cin >> minute;
            switch (minute)
            {
            case 0: cout << "Break at the room"; break;
            case 30: cout << "Base of Engeneering"; break;
            default: cout << "Wrong minite";
            }
            break;
        case 18: cout << "Bace of Algorithms"; break;
        default: cout << "Time is free";
        }
        break;
    case Tuesday: 
        cout << "Enter a hour ";
        cin >> hour;
        switch (hour)
        {
        case 16: cout << "Base of Engeneering"; break;
        case 18: cout << "Bace of Algorithms"; break;
        default: cout << "Time is free";
        }
        break;
    case Wednesday: 
        cout << "Enter a hour ";
        cin >> hour;
        switch (hour)
        {
        case 16: cout << "Base of Engeneering"; break;
        case 18: cout << "Bace of Algorithms"; break;
        default: cout << "Time is free";
        }
        break;
    case Thursday: 
        cout << "Enter a hour ";
        cin >> hour;
        switch (hour)
        {
        case 16: cout << "Base of Engeneering"; break;
        case 18: cout << "Bace of Algorithms"; break;
        default: cout << "Time is free";
        }
        break;
    case Friday: 
        cout << "Enter a hour ";
        cin >> hour;
        switch (hour)
        {
        case 16: cout << "Base of Engeneering"; break;
        case 18: cout << "Bace of Algorithms"; break;
        default: cout << "Time is free";
        }
        break;
    case Saturday: 
        cout << "Enter a hour ";
        cin >> hour;
        switch (hour)
        {
        case 16: cout << "Base of Engeneering"; break;
        case 18: cout << "Bace of Algorithms"; break;
        default: cout << "Time is free";
        }
        break;
    case Sunday: 
        cout << "Enter a hour ";
        cin >> hour;
        switch (hour)
        {
        case 16: cout << "Base of Engeneering"; break;
        case 18: cout << "Bace of Algorithms"; break;
        default: cout << "Time is free";
        }
        break;
    default: cout << "Not a day";
    }

}