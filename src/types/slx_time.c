#include <time.h>
#include "slx_time.h"

slx_timestamp slx_timestamp_now() {
    slx_timestamp now;
    time((time_t *) &now);
    return now;
}

slx_datetime slx_datetime_from(slx_timestamp timestamp) {
    struct tm *timeinfo;
    timeinfo = localtime(&timestamp);
    slx_datetime datetime = {
            .year = timeinfo->tm_year + 1900,
            .month = timeinfo->tm_mon + 1,
            .day = timeinfo->tm_mday,
            .hour = timeinfo->tm_hour,
            .minute = timeinfo->tm_min,
            .second = timeinfo->tm_sec
    };
    return datetime;
}

slx_datetime slx_datetime_now() {
    return slx_datetime_from(slx_timestamp_now());
}
