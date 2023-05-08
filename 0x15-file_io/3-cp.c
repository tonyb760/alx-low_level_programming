#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFSIZE 1024

/* Function prototypes */
void close_fd(int fd);
void error_exit(char *message, char *filename, int fd1, int fd2, int exit_code);
int copy_file(char *src_filename, char *dest_filename);

/* Main function */
int main(int argc, char **argv)
{
int status;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

status = copy_file(argv[1], argv[2]);

return status;
}

/* Function to close a file descriptor */
void close_fd(int fd)
{
int close_status;

close_status = close(fd);

if (close_status == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/* Function to print an error message and exit with a specified exit code */
void error_exit(char *message, char *filename, int fd1, int fd2, int exit_code)
{
if (filename != NULL)
{
dprintf(STDERR_FILENO, message, filename);
}
else
{
dprintf(STDERR_FILENO, message);
}

if (fd1 != -1)
{
close_fd(fd1);
}

if (fd2 != -1)
{
close_fd(fd2);
}

exit(exit_code);
}

/* Function to copy a file */
int copy_file(char *src_filename, char *dest_filename)
{
int src_fd, dest_fd, read_count, write_count;
char buf[BUFSIZE];

/* Open source file */
src_fd = open(src_filename, O_RDONLY);
if (src_fd == -1)
{
error_exit("Error: Can't read from file %s\n", src_filename, -1, -1, 98);
}

/* Open destination file */
dest_fd = open(dest_filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (dest_fd == -1)
{
error_exit("Error: Can't write to %s\n", dest_filename, src_fd, -1, 99);
}

/* Copy data */
while ((read_count = read(src_fd, buf, BUFSIZE)) > 0)
{
write_count = write(dest_fd, buf, read_count);

if (write_count != read_count)
{
error_exit("Error: Can't write to %s\n", dest_filename, src_fd, dest_fd, 99);
}
}

if (read_count == -1)
{
error_exit("Error: Can't read from file %s\n", src_filename, src_fd, dest_fd, 98);
}

/* Close file descriptors */
close_fd(src_fd);
close_fd(dest_fd);

return 0;
}
