#ifndef _MAIN_H_
#define _MAIN_H_

/* open */
#include <fcntl.h>
/* read */
#include <sys/types.h>
#include <sys/uio.h>
/* read & write & close */
#include <unistd.h>


ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

#endif
