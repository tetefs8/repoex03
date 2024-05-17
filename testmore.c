#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int* b){
	int sub ;
	sub = *a;
	*a = *b;
	*b = sub;


}

int main(){
	int * n1,n2;
	n1 = 10;
	n2 = 30;

	ft_swap(n1,n2);

	printf("Now n1 :%d ,and n2 :%d .",n1,n2);
}
