#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint16_t sign_extend(uint16_t x, int bit_count)
{
	if ((x >> (bit_count - 1)) & 1) {
		x |= (0xFFFF << bit_count);
	}
	return x;
}

int main()
{
	printf("%u", sign_extend(-12, 5));
	//printf("%u", 0xFFFF);
}
