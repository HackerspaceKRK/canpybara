#ifndef _LOGGER_H
#define _LOGGER_H

#include <inttypes.h>

#define __LOG__(format, loglevel, ...) printf("%-10"PRIu32" [%s:%d] " format "\n", HAL_GetTick(), __FILE__, __LINE__, ## __VA_ARGS__)
#define __LOG(format, ...) __LOG__(format, "DEBUG", ## __VA_ARGS__)
#define LOG __LOG
// #define LOG (void)
#define LOG_BOOT() __LOG("BOOT, build: " __DATE__ " " __TIME__)

#endif