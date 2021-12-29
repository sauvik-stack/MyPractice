#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
int id;
char name[50];
float marks;
};

int main()
{
char n[]="Sauvik";
struct student sauvik;
sauvik.id=1205;
sauvik.marks=88.6;
strcpy(sauvik.name, "Sauvik Chakraborty");
puts(sauvik.name);
return 0;
}