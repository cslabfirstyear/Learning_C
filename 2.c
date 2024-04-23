#include <stdio.h>

int main() {
	int x = 42;

     //Print address using %u (unsigned decimal)
	printf("Address using %%u: %u\n", &x);

     // Print address using %p (pointer address)
     	printf("Address using %%p: %p\n",  &x);

     // Print address using %x (hexadecimal)
   	printf("Address using %%x: %x\n",&x);

     	return 0;
}

