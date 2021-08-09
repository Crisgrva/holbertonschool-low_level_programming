#ifndef MAIN_H
#define MAIN_H

/* STD LIBRARIES */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/* PROTOTYPES */
ssize_t read_textfile(const char *filename, size_t letters);

#endif
