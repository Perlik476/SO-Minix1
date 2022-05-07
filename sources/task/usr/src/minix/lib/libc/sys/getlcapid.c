#include <sys/cdefs.h>
#include "namespace.h"
#include <lib.h>
#include <minix/rs.h>

#include <string.h>
#include <unistd.h>

pid_t getlcapid(pid_t pid_1, pid_t pid_2) // TODOXD
{
    message m;
    memset(&m, 0, sizeof(m));
    m.m1_i1 = pid_1;
    m.m1_i2 = pid_2;
    return(_syscall(PM_PROC_NR, PM_GETLCAPID, &m));
}
