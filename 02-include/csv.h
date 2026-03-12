#ifndef CSV_MODULE_H
#define CSV_MODULE_H

int field_len(char *line, char sep, int field_index);
int find_start(char *line, char sep, int field_index);
char *my_subs (char *line, int start, int len);
char *csv_get_field(char *line, char sep, int field_index);

#endif
