#include <limits.h>
#include <stdio.h>
#include <stdlib.h>


void change(char * number) {

    * number = 129;

}


int main() {

    /*
    size_t is an unsigned integer type of at least 16 bit
    1111 1111 1111 1111 = 2 bytes
    void * calloc(size_t number_of_items, size_t memory_size);
    */
    char * number = (char *)calloc(1, sizeof(size_t));    

    printf("\n");
    printf("%d\n", * number);
    change(number);
    printf("%d\n", * number);
    printf("\n");

    free(number);
    number = NULL;
 
    printf("sizeof(void)          = %d byte \n", sizeof(void          ));
    printf("sizeof(bool)          = %d byte \n", sizeof(bool          ));
    printf("sizeof(char)          = %d byte \n", sizeof(char          ));
    printf("sizeof(short)         = %d bytes\n", sizeof(short         ));
    printf("sizeof(int)           = %d bytes\n", sizeof(int           ));
    printf("sizeof(float)         = %d bytes\n", sizeof(float         ));
    printf("sizeof(double)        = %d bytes\n", sizeof(double        ));
    printf("sizeof(long)          = %d bytes\n", sizeof(long          ));
    printf("sizeof(size_t)        = %d bytes\n", sizeof(size_t        ));
    printf("sizeof(long long int) =  %d bytes\n", sizeof(long long int));
    printf("sizeof(long double)   = %d bytes\n", sizeof(long double   ));
    printf("\n");

    /*https://www.tutorialspoint.com/cprogramming/c_data_types.htm*/
    printf("CHAR_BIT = %d\n", CHAR_BIT);
    printf("INT_MIN  = %d\n", INT_MIN );
    printf("\n");

    for (long double sixteen_bytes = 1.00f; sixteen_bytes < 10 ; sixteen_bytes++) {

        printf("%f\n", sixteen_bytes);

    }

    for (int i = 0; i <= 1000000000000; i++) {
        long double x = i * 0.1L;
        printf("%.2Lf\n", x);
    }

    return 0;

}
