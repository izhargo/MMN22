#define FOREVER for(;;)
#define MAX_INPUT 100;
typedef struct complex* ptr;
typedef struct complex{
	double real;
	double img;
};

typedef struct tnode{
	char first_num;
	char second_num;
	double real;	
	double img;
}params;

void read_comp(void);
void print_comp(void);
void add_comp(void);
void sub_comp(void);
void mult_comp_real(void);
void mult_comp_img(void);
void print_comp_comp(void);
void abs_comp(void);
void halt(void);



