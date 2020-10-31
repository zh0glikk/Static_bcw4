#include "Date.h"

void Date::validate(int day, int month, int year) {
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dayDefault = 1;
    int monthDefault = 1;
    int yearDefault = 1970;

    if ( day < 1 || day > 31 ) {
        this->day = dayDefault;
        this->month = monthDefault;
        this->year = yearDefault;
        throw InvalidDate("Invalid day. Changed for default.");
    } else {
        if ( month < 1 || month > 12 ) {
            this->day = dayDefault;
            this->month = monthDefault;
            this->year = yearDefault;
            throw InvalidDate("Invalid month. Changed for default.");
        } else {
            if ( ( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 ) {
                daysInMonth[1] = 29;
            }

            if ( day > daysInMonth[month-1] ) {
                this->day = dayDefault;
                this->month = monthDefault;
                this->year = yearDefault;
                throw InvalidDate("Invalid date. Changed for default.");
            }
        }
    }
}

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;

    try {
        validate(this->day, this->month, this->year);
    } catch (InvalidDate e) {
        std::cout << e.text << std::endl;
    }
}

Date::~Date() {

}

int Date::getDay() const {
    return this->day;
}

int Date::getMonth() const {
    return this->month;
}

int Date::getYear() const {
    return this->year;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    if ( date.getDay() < 10 ) {
        out << "0";
    }
    out << date.getDay() << ".";
    if ( date.getMonth() < 10 ) {
        out << "0";
    }
    out << date.getMonth() << ".";
    out << date.getYear();

    return out;
}

