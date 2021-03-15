#include <stdio.h>
 

#if 0 
int do_evil_things(context_t *ctx)
{
         int go_drink;
 
         /* set student mode ON :) */
 
         ctx->go_drink = NO;
}
#endif

#define DEBUG      1
 
#ifdef DEBUG
 /* afisare mesaje debug */
#endif

#define show_var(a) printf("Variable %s has value %d\n", #a, a)

int main(void) 
{
    printf("SO, ... hello world!\n");
    int tac_pac = 69;
    show_var(tac_pac);

    return 0;
}