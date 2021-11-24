#include <stdio.h>

int n = 0;

int fibonacci(int n){
	if (!n) return 0; 
	if (n == 1) return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}

int main(void) {
	printf("Practica 6\n");
	printf("Ingresa el valor\n");
	scanf("%d", &n);
	printf("El resultado usando la fucion de Fibonacci es: %d\n", fibonacci(n));
	return 0;
}
