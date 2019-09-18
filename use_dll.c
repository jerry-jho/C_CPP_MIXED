#include "dllmain.h"
#include <stdio.h>

int main(int argc,char ** argv) {
    handle h = create();
    printf("%d",sum(h,1,2));
    destroy(h);
}