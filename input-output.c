#include <stdio.h>


/*x = getchar() will get a character input proceeding the line and store it into the variable x.
puthcar(x) will print the character.
EOF means 'end of file' from the standerd library, a symbolic constant, the value of EOF is -1.
the reason why c is an int is to hold any value getchar returns and to have space for the EOF. */

int main()
{
	int c;

	while((c = getchar())!= EOF)
	{
		putchar(c);
		printf("%d", EOF);
	}
}
