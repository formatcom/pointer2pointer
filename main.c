#include <stdio.h>

int main()
{
	int var = 35;

	int var2;

	// pointer for var
	int *ptr1;

	// double pointer for ptr2
	int **ptr2;

	// storing address of var in ptr1
	ptr1 = &var;

	// Storing address of ptr1 in ptr2
	ptr2 = &ptr1;

	var2 = *ptr1;

	// Displaying value of var using
	// both single and double pointers
	printf("Value of [%p]var  = %d\n", &var,  var  );
	printf("Value of [%p]var2 = %d\n", &var2, var2 );
	printf("Value of [%p]ptr1 = %p\n", &ptr1, ptr1 );
	printf("Value of [%p]ptr2 = %p\n", &ptr2, ptr2 );
	printf("Value of [%p]ptr1 using single pointer = %d\n", ptr1, *ptr1 );
	printf("Value of [%p]ptr2 using double pointer = %d\n", ptr2, **ptr2);

	return 0;
}
