#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
    printf("Hello Userspace, Group %s!\n", argv[1]);
    helloworld(argv[1]);
    return 0;
}