#ifndef SCRIPTING_H
#define SCRIPTING_H

#define FILE_OPENING_ERROR -100

enum {
    INT,
    FLOAT
} vartype_e;


int parse_file(char* filename);
int add_rule(char* funcname, void (*funcptr)(void));

#endif // SCRIPTING_H

