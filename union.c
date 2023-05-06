#include<stdio.h>


union demo
{
int i;
float f;
double d;
};

int main()
{
union  demo dobj;
printf("size of structure is %d\n",sizeof(dobj));


    return 0;
}