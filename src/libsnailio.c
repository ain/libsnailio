/**
 *  Copyright © 2014 Ain Tohvri. Licensed under GPL.
 *  v0.0.1
 */

#define SLEEP_TIMESPEC {0, 5000000} // nanoseconds
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/syscall.h>

ssize_t
read(int d, void *buf, size_t nbyte) {
  struct timespec s = SLEEP_TIMESPEC;
  int r = rand() % 20;
  if (r > 10) {
    (void) nanosleep(&s, NULL);
  }
  return (ssize_t) syscall(SYS_read, d, buf, nbyte);
}

ssize_t
pread(int d, void *buf, size_t nbyte, off_t offset) {
  struct timespec s = SLEEP_TIMESPEC;
  (void) nanosleep(&s, NULL);
  return (ssize_t) syscall(SYS_pread, d, buf, nbyte, offset);
}