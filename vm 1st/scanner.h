#ifndef clox_scanner_h
#define clox_scanner_h
#include "compiler.h"
#include "compiler.c"
void initScanner(const char* source);
Token scanToken();
#endif