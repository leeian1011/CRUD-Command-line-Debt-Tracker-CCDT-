#ifndef HASHTABLE_H
#define HASHTABLE_H

#define MAX 10
#define CSVFILE "file/test.csv"

typedef struct node{
    float amount_paid;
    char *date;
    struct node *next_node;
}
node;

void file_read(FILE *csv);
int file_columncount(FILE *csv);
int file_rowcount(FILE *csv);
#endif