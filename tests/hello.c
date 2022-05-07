#include "stdio.h"
#include <unistd.h>
#include <errno.h>

int main(){
//    printf("Hello from synced test! pid: %d\n", getlcapid(125, 250));
    errno = 0;
    printf("getlcapid(%d, %d): %d, errno: %d\n", getpid(), getppid(), getlcapid(getpid(), getppid()), errno);
    errno = 0;
    printf("getlcapid(%d, %d): %d, errno: %d\n", getpid(), getpid(), getlcapid(getpid(), getpid()), errno);
    errno = 0;
    printf("getlcapid(%d, %d): %d, errno: %d\n", getppid(), getppid(), getlcapid(getppid(), getppid()), errno);
    errno = 0;
    printf("getlcapid(2137, 476): %d, errno: %d\n", getlcapid(2137, 476), errno);
    errno = 0;
    printf("getlcapid(-1, -1): %d, errno: %d\n", getlcapid(-1, -1), errno);
    errno = 0;
    printf("getlcapid(1, 1): %d, errno: %d\n", getlcapid(1, 1), errno);

    return 0;
}
