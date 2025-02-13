#pragma once

extern bool print_json;

void print_plain_nl();
void print_json_start(char type, const char *name);
void print_json_end(char type, bool addcomma);
void print_str_val(const char *name, const char *json_name, const char *valfmt, const char *val, bool addcomma);
void print_int_val(const char *name, const char *json_name, const char *valfmt, int val, bool addcomma);
void print_bool_val(const char *name, const char *json_name, bool val, bool addcomma);
