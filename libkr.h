#ifndef LIBKR_H
#define LIBKR_H

#define NUMBER '0' /*signal that number found */
#define TOOBIG '9' /*signal that string is too big*/
#define NAMESIZE 20
#define ADRSIZE 100

#define LETTER 'a'
#define DIGIT '0'

//used for countkeys [pg125]
#define MAXWORD 20

struct date {
	int day;
	int month;
	int year;
	int yearday;
	char mon_name[4];
};

struct person {
	char name[NAMESIZE];
	char address[ADRSIZE];
	long zipcode;
	long ss_number;
	double salary;
	struct date birthdate;
	struct date hiredate;
};

struct key {
	char *keyword;
	int keycount;
}; 

struct tnode {
	char *word;
	int count;
	struct tnode *left;
	struct tnode *right;
};

struct nlist { /*basic table entry*/
	char *name;
	char *def;
	struct nlist *next; /*next entry in chain*/
};

struct flags { /* page 137*/
    unsigned int is_keyword : 1; /* one bit for each flag*/
    unsigned int is_extern  : 1;
    unsigned int is_static  : 1;
};

int kr_power(int x, int n);
int kr_getline(char s[], int lim);
void kr_copy(char s1[], char s2[]);
int kr_strlen(char s[]);
int kr_atoi(char s[]);
char kr_lower(char c);
void kr_squeeze(char s[], int c);
void kr_strcat(char s[], char t[]);
unsigned kr_getbits(unsigned x, unsigned p, unsigned n);
int kr_bitcount(unsigned n);
int kr_binary(int x, int v[], int n); //binary search/find
void kr_digitcount(char c, int ndigit[10], int* nwhite, int* nother);
void kr_shell(int v[], int n);
void kr_reverse(char s[]);
void kr_itoa(int n, char s[]);
void kr_trim(char line[]);
int kr_index(char s[], char t[]);
double kr_atof(char s[]);
void kr_clear();
double kr_push(double f);
double kr_pop();
char kr_getch();
void kr_ungetch(char c);
char kr_getop(char s[], int lim);
void kr_printd(int n); //print number as base10 string
void kr_swap(int *px, int *py);
int kr_getint(int *pn);
char* kr_alloc(int n);
void kr_free(char *p);
void kr_strcpy(char s[], char t[]);
int kr_strcmp(char s[], char t[]);
char* kr_strsave(char *s);
int kr_dayofyear(int year, int month, int day);
void kr_monthday(int year, int yearday, int* pmonth, int* pday);
int kr_readlines(char* lineptr[], int maxlines);
void kr_writelines(char* lineptr[], int nlines);
void kr_sort(char* v[], int n);
char* kr_monthname(int n);
void kr_echo(int argc, char *argv[]);
void kr_find(char *argv[]);
void kr_grep(int argc, char *argv[]);
void kr_swapstr(char *px[], char *py[]);
int kr_numcmp(char *s1, char *s2);
void kr_sortby(char *v[], int n, int (*comp)(char *a, char *b), void (*exch)(char *a[], char *b[]));
void kr_typesort(int argc, char *argv[]);
int kr_dayofyearpd(struct date *pd);
void kr_monthdaypd(struct date *pd);
int kr_binarykey(char *word, struct key tab[], int n);
char kr_type(int c);
char kr_getword(char *w, int lim);
void kr_countkeys();
struct key *kr_binarykeyptr(char *word, struct key tab[], int n);
void kr_countkeysptr();
struct tnode *kr_talloc();
void kr_treeprint(struct tnode *p);
struct tnode *kr_tree(struct tnode *p, char* w);
void kr_countwords();
int kr_hash(char *s);
struct nlist *kr_lookup(char *s);
struct nlist *kr_install(char *name, char *def);
void kr_hashprint();
void kr_flagsprint(struct flags *p);

#endif
