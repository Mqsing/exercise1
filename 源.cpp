/*two_func.c*/	
#include<stdio.h>
void butler(void);/*ANCI C function model*/
int main(void)
{
	printf("I will summon the butler function.\n");		
	butler();
	printf("yes.Bring me some tea and writeable DVDs.\n");

	return 0;
			
}
void butler(void)/*function definition start*/
{
	printf("you are rang,sir?\n");

}