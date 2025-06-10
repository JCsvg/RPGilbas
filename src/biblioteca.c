#include "biblioteca.h"

void setup() {
    setlocale(LC_ALL, "pt_PT.UTF-8");
}


void vprint_custom(const str fmt, va_list args, int add_newline) {
    char new_fmt[1024];
    int j = 0;

    for (int i = 0; fmt[i] != '\0'; i++) {
        if (fmt[i] == '_' && fmt[i + 1] != '\0') {
            switch (fmt[i + 1]) {
                case 'i': new_fmt[j++] = '%'; new_fmt[j++] = 'd'; i++; break;
                case 'f': new_fmt[j++] = '%'; new_fmt[j++] = 'f'; i++; break;
                case 's': new_fmt[j++] = '%'; new_fmt[j++] = 's'; i++; break;
                case 'c': new_fmt[j++] = '%'; new_fmt[j++] = 'c'; i++; break;
                default: new_fmt[j++] = fmt[i]; break;
            }
        } else {
            new_fmt[j++] = fmt[i];
        }
    }
    new_fmt[j] = '\0';

    vprintf(new_fmt, args);
    if (add_newline) printf("\n");
}

void print(const str fmt, ...) {
    va_list args;
    va_start(args, fmt);
    vprint_custom(fmt, args, 0); // sem nova linha
    va_end(args);
}

void println(const str fmt, ...) {
    printf("\n");
    va_list args;
    va_start(args, fmt);
    vprint_custom(fmt, args, 0); // com nova linha
    va_end(args);
}