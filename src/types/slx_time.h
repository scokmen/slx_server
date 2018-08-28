#ifndef SERVER_SLX_TIME_H
#define SERVER_SLX_TIME_H

#include <time.h>

typedef const time_t slx_timestamp;

typedef const struct slx_datetime {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
} slx_datetime;

slx_timestamp slx_timestamp_now();
slx_datetime  slx_datetime_from(slx_timestamp timestamp);
slx_datetime  slx_datetime_now();

#endif //SERVER_SLX_TIME_H
