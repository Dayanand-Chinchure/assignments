#include <stdlib.h>
#include <stdio.h>

struct hash
{
	int key;
	int data;
}

struct hash_map
{
	int key;
	struct hash *node;
}

int main()
{

	return 0;
}

