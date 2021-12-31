#include "Fibonacci.h"
#include <gmp-x86_64.h>
#include <stdlib.h>
size_t fibonacci_inner(mpz_t a, mpz_t b, size_t num);

size_t fibonnaci_noob_method(size_t num)
{
    if(num == 0) 
        return 0;
    else if (num == 1)
        return 1;
    return fibonnaci_noob_method(num - 1) + fibonnaci_noob_method(num - 2);
}

size_t print_fibonacci_pro(size_t num){
    mpz_t a,b;
    mpz_init_set_d(a, 0);
    mpz_init_set_d(b, 1);
    fibonacci_inner(a, b, num);
    gmp_printf("%Zd\n", b);
    return 0;
}

size_t fibonacci_inner(mpz_t a, mpz_t b, size_t num){
    /*gmp_printf("%Zd\n", a);*/
    /*gmp_printf("%Zd\n", b);*/
    if(num == 0 || num == 1) {
        return 0;
    }
    mpz_add(a , a, b);
    mpz_add(b, a, b);
    num -= 2;
    return fibonacci_inner(a , b, num);
}

