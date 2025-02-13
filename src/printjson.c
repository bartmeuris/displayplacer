#include <ApplicationServices/ApplicationServices.h>
#include <stdio.h>

bool print_json = false;

void print_json_start(char type, const char *name) {
    if (!print_json) {
        return;
    }
    if (name) {
        printf("\"%s\": ", name);
    }
    printf("%c\n", type);
}

void print_plain_nl() {
    if (!print_json) {
        printf("\n");
    }
}
void print_json_end(char type, bool addcomma) {
    if (print_json) {
        printf("%c", type);
        if (addcomma) {
            printf(",");
        }
        printf("\n");
    }
}

void print_str_val(const char *name, const char *json_name, const char *valfmt, const char *val, bool addcomma) {
    if (print_json) {
        printf("\"%s\": \"", json_name);
    } else {
        printf("%s: ", name);
    }
    printf(valfmt, val);
    if (print_json) {
        printf("\"");
        if (addcomma) {
            printf(",");
        }
    }
    printf("\n");
}

void print_int_val(const char *name, const char *json_name, const char *valfmt, int val, bool addcomma) {
    if (print_json) {
        printf("\"%s\": \"", json_name);
    } else {
        printf("%s: ", name);
    }
    printf(valfmt, val);
    if (print_json) {
        printf("\"");
        if (addcomma) {
            printf(",");
        }
    }
    printf("\n");
}