#ifndef MAIN_H
#define MAIN_H

#define MAX_SLEEP_TIME 10
#define MSG_SIZE (sizeof(struct timeval) + sizeof(int))

// MPI message tags
#define TAG_OK 1
#define TAG_ASK 2
const char *critical_file = "critical.txt";
char buff[MSG_SIZE];
#endif
