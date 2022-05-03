#include <sys/cdefs.h>
#include "namespace.h"
#include <lib.h>
#include <minix/rs.h>

#include <string.h>
#include <unistd.h>

pid_t getlcapid(pid_t pid_1, pid_t pid_2) // TODOXD
{
    message m;
//    endpoint_t pm_ep;
//    minix_rs_lookup("pm", &pm_ep);
    memset(&m, 0, sizeof(m));
    m.m1_i1 = pid_1;
    m.m1_i2 = pid_2;
//    m.m1_i1 = getpid();
//    m.m1_i2 = getpid();
//    return(_syscall(PM_PROC_NR, PM_GETLCAPID, &m));
    return(_syscall(PM_PROC_NR, PM_GETLCAPID, &m));
}
