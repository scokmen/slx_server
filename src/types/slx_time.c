#include <time.h>
#include "slx_time.h"

slx_timestamp slx_get_timestamp() {
    slx_timestamp now;
    time(&now);
    return now;
}

slx_datetime slx_get_datetime(slx_timestamp* timestamp) {
    struct tm* timeinfo;
    slx_timestamp current_timestamp = timestamp == NULL ? slx_get_timestamp() : *timestamp;
    timeinfo = localtime(&current_timestamp);
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