#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "complex.h"

char *line[MAX_INPUT];
char *token;
params temp_params;

struct {
	char *name;
	void (*func)(void);
}cmd[] = {
	{"read_comp", read_comp},
	{"print_comp",print_comp},
	{"add_comp", add_comp},
	{"sub_comp", sub_comp},
	{"mult_comp_real", mult_comp_real},
	{"mult_comp_img", mult_comp_img},
	{"print_comp_comp", print_comp_comp},
	{"abs_comp", abs_comp},
	{"halt", halt},
	{"Invalid Command", NULL}
}
enum status {NO,YES};
int main(){
	int i;
	int state;
	while (gets(line) != NULL){ /*stops at EOF*/
		int count_param;		
		state = YES;		
		token = strtok(line," "); /*command to execute*/
		for (i=0;cmd[i].func!=NULL;i++){ /*loop checks which command trhe user picked*/
			if (strcmp(token, cmd[i].name)==0){
				break;			
			}
		}
		if (cmd[i].func == NULL){
			printf("Invalid Command\n");
			state = NO;
		} else{
			switch (cmd[i].name){
				case "halt":
					printf("Thank You and Goodbye\n");
					return 0;
					break;			
				case "read_comp":
					token = (NULL,",");
					
					if (token_is_complex(token)){
						temp_params.first_num = token;
					}else {
						printf("Invalid complex varaible\n");
						break;
					}
					token = (NULL,",");
					if (token_is_double(token)){
						temp_params.real = token;
					}else {
						printf("Invalid parameter as real number\n");
						break;
					}
					token = (NULL,",");
					if (token_is_double(token)){
						temp_params.real = token;
					}else {
						printf("Invalid parameter as real number\n");
						break;
					}
				
	}
}		


