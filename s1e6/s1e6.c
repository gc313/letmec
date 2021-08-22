#include <stdio.h>

int main()
{
    int i;
    char j;
    float k;


    short a;
    unsigned short b;

    

    i = 123;
    j = 'C';
    k = 3.14;

    a = -5;
    b = 8;

    //sizeof后面是类型的话就压加括号，是对象就可加可不加

    printf("size of int is %ld\n", sizeof(int));
    printf("size of i is %ld\n", sizeof(i));
    printf("size of char is %ld\n", sizeof(char));
    printf("size of j is %ld\n", sizeof j);
    printf("size of float is %ld\n", sizeof(float));
    printf("size of k is %ld\n", sizeof k);

    printf("int = %ld\n", sizeof(int));
    printf("short int = %ld\n", sizeof(short));
    printf("long int = %ld\n", sizeof(long));
    printf("long long int = %ld\n", sizeof(long long));
    printf("char = %ld\n", sizeof(char));
    printf("_Bool = %ld\n", sizeof(_Bool));
    printf("float = %ld\n", sizeof(float));
    printf("double = %ld\n", sizeof(double));
    printf("long double = %ld\n", sizeof(long double));

    printf("%d\n", a);
    printf("%d\n", b);



    return 0;
}