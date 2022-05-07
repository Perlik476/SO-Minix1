#include "stdio.h"
#include <unistd.h>

int main(){
//    printf("Hello from synced test! pid: %d\n", getlcapid(125, 250));
    printf("getlcapid(%d, %d): %d\n", getpid(), getppid(), getlcapid(getpid(), getppid()));
    printf("getlcapid(%d, %d): %d\n", getpid(), getpid(), getlcapid(getpid(), getpid()));
    printf("getlcapid(%d, %d): %d\n", getppid(), getppid(), getlcapid(getppid(), getppid()));
    printf("getlcapid(2137, 476): %d\n", getlcapid(2137, 476));
    printf("getlcapid(-1, -1): %d\n", getlcapid(-1, -1));
    printf("getlcapid(1, 1): %d\n", getlcapid(1, 1));
    return 0;
}
