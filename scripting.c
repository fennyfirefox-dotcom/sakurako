#include <unistd.h>

#include "scripting.h"




int parse_file(char* pathname) {
    char buffer[4096];

    int fd = open(pathname, O_RDONLY);
    if (fd == -1)
        return FILE_OPENING_ERROR;

    int bytes_read;
    do {
        bytes_read = read(fd, buffer, 4096);


    } while (bytes_read != 0);



    close(fd);
    return 0;
}

int add_rule(char* funcname, void (*funcptr)(void)) {

    return 0;
}

