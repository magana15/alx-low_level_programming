#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocate 1024 bytes for a buffer.
 * @file: name of file buffer is storing chars for.
 *
 * Return: A pointer to the new-allocated buffer.
 */
char *create_buffer(char *file)
{
        char *buffer;

        buffer = malloc(sizeof(char) * 1024);

        if (buffer == NULL)
        {
                dprintf(STDERR_FILENO,
                        "Error: Can't write to %s\n", file);
                exit(99);
        }

        return (buffer);
}

/**
 * close_file - Close file descriptors.
 */
void close_file(int fd)
{
        int c;

        c = close(fd);

        if (c == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
                exit(100);
        }
}
