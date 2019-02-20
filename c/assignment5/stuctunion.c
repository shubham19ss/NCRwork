#include<stdio.h>
#include<string.h>
struct s
{
	int num;
	char c;
};
union u
{
	int num;
	char c;
};
int main()
{
	struct s struct_reference;
	union u u_reference;
	printf("size of structure in bytes is %d\nsize of union in bytes is %d",sizeof(struct_reference),sizeof(u_reference));
	return 0;
}
