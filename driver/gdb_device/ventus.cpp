#define VENTUS_DRIVER_BACKEND_NAME "gdb device"
#define VENTUS_DRIVER_WAVEFORM_FILENAME "waveform.gdb.fst"
#define VENTUS_DRIVER_VMEM_ERROR_NAME "GDB_device"
#define VENTUS_DRIVER_DEFER_GDB_ATTACH 1
#define VENTUS_DRIVER_WAIT_GDB_ON_FIRST_KERNEL 1

// Reuse the rtlsim implementation so GDB-specific behavior stays in sync with
// ongoing RTLSIM driver changes.
#include "../rtlsim_device/ventus.cpp"
