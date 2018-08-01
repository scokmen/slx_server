#ifndef SERVER_SLX_TIME_H
#define SERVER_SLX_TIME_H

#include <time.h>

typedef time_t slx_timestamp;

typedef struct slx_datetime {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
} slx_datetime;

slx_timestamp slx_get_timestamp();
slx_datetime  slx_get_datetime(slx_timestamp* timestamp);

#endif //SERVER_SLX_TIME_H
