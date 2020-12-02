#ifndef __LOGGER_H__
#define __LOGGER_H__

enum LOG_LEVEL
{
	LOG_DEBUG,
	LOG_INFO,
	LOG_WARNING,
	LOG_ERROR,
	LOG_FATAL
};

void log_init();
void log_close();

void log_print(enum LOG_LEVEL level, const char* msg, ...);
#define log_debug(msg, ...) log_print(LOG_DEBUG, ##__VA_ARGS__)
#define log_info(msg, ...) log_print(LOG_INFO, ##__VA_ARGS__)
#define log_warn(msg, ...) log_print(LOG_WARNING, ##__VA_ARGS__)
#define log_error(msg, ...) log_print(LOG_ERROR, ##__VA_ARGS__)
#define log_fatal(msg, ...) log_print(LOG_FATAL, ##__VA_ARGS__)

#endif
