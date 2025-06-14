#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

int main() {
    const char * message = "Hello, World!\n";

    // Using syscall to write to stdout, deprecated in macOS 10.12 :(
    // syscall(SYS_write, 1, message, 20); 

    write(1, message, 20); // POSIX-compliant and supported on macOS.

    return 0;
}
