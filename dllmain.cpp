#include "dllmain_int.h"
#include "dllmain.h"

H::H() {
    
}

int H::sum(int x,int y) {
    return x+y;
}

handle create() {
    H* pH = new H;
    return static_cast<handle>(pH);
}

int sum(handle h,int a,int b) {
    H* pH=static_cast<H*>(h);
    return pH->sum(a,b);
}

void destroy(handle h) {
    H* pH=static_cast<H*>(h);
    delete pH;
}

