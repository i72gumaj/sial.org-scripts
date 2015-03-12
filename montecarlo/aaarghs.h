/* Argument handling utility routine headers and to hide the boilerplate
 * include and other such spam somewhere out of the way. */

#include <err.h>
#include <errno.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sysexits.h>
#include <unistd.h>

// usually associated with the -c trialcount option
#define TRIALS 1000000UL

void emit_help(void);
float flagtof(const int flag, const char *flagarg,
              const float min, const float max);
unsigned long flagtoul(const int flag, const char *flagarg,
                       const unsigned long min, const unsigned long max);
