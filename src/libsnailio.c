/**
 *  Copyright © 2014 Ain Tohvri. Licensed under GPL.
 *  v0.0.1
 */

#define SLEEP_TIMESPEC {0, 50000000} // 50ms
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <sys/syscall.h>

ssize_t
read(int fildes, void *buf, size_t nbyte) {
  struct timespec s = SLEEP_TIMESPEC;
  (void) nanosleep(&s, NULL);
  return (ssize_t) syscall(SYS_read, fildes, buf, nbyte);
}

ssize_t
pread(int d, void *buf, size_t nbyte, off_t offset) {
  struct timespec s = SLEEP_TIMESPEC;
  (void) nanosleep(&s, NULL);
  return (ssize_t) syscall(SYS_pread, d, buf, nbyte, offset);
}