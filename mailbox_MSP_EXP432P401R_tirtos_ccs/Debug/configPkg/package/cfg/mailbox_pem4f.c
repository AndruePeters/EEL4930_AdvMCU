/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-E10
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *
 *     MODULE INCLUDES
 *
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/family/arm/msp432/ClockFreqs.h>
#include <ti/sysbios/family/arm/msp432/Timer.h>
#include <ti/sysbios/family/arm/msp432/init/Boot.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Mailbox.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>

/* suppress 'type qualifier is meaningless on cast type' warning */
#ifdef __ti__
#pragma diag_suppress 193
#endif
#ifdef __IAR_SYSTEMS_ICC__
#pragma diag_suppress=Pe191
#endif

/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__ *__fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    xdc_UInt8 priority;
    xdc_Int16 intNum;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.msp432.ClockFreqs INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.msp432.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_msp432_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_msp432_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_msp432_Timer_Module__ ti_sysbios_family_arm_msp432_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_msp432_Timer_Object__ {
    const ti_sysbios_family_arm_msp432_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    xdc_UInt16 controlRegInit;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz frequency;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
    xdc_UInt16 prevThreshold;
    xdc_UInt16 savedCurrCount;
    xdc_UInt32 rollovers;
    xdc_Bool synchronous;
    xdc_UInt inputDivider;
    xdc_UInt inputDividerExp;
} ti_sysbios_family_arm_msp432_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_msp432_Timer_Object__ obj;
} ti_sysbios_family_arm_msp432_Timer_Object2__;


/*
 * ======== ti.sysbios.family.arm.msp432.init.Boot INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_msp432_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_msp432_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Mailbox_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Mailbox_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Mailbox_Module__ ti_sysbios_knl_Mailbox_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* <-- ti_sysbios_knl_Semaphore_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Mailbox_Object__ {
    xdc_runtime_IHeap_Handle heap;
    xdc_SizeT msgSize;
    xdc_UInt numMsgs;
    xdc_Ptr buf;
    xdc_UInt numFreeMsgs;
    __TA_ti_sysbios_knl_Mailbox_Instance_State__allocBuf allocBuf;
    ti_sysbios_knl_Queue_Object__ Object_field_dataQue;
    ti_sysbios_knl_Queue_Object__ Object_field_freeQue;
    ti_sysbios_knl_Semaphore_Object__ Object_field_dataSem;
    ti_sysbios_knl_Semaphore_Object__ Object_field_freeSem;
} ti_sysbios_knl_Mailbox_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Mailbox_Object__ obj;
} ti_sysbios_knl_Mailbox_Object2__;


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
    xdc_Bool privileged;
    xdc_Ptr domain;
    xdc_UInt32 checkValue;
    xdc_Ptr tls;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C");
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    &ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* __base */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8025, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x802a, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x802b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    &xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8028, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    &xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Char *taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_Ptr isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    xdc_Ptr dispatchTable;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinity intAffinity;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinityMasks intAffinityMasks;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> __TI_STACK_SIZE */
extern void* __TI_STACK_SIZE;

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.msp432.ClockFreqs DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_msp432_ClockFreqs_Module_State__ {
    xdc_UInt32 ACLK;
    xdc_UInt32 SMCLK;
    xdc_UInt32 HSMCLK;
} ti_sysbios_family_arm_msp432_ClockFreqs_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_msp432_ClockFreqs_Module_State__ ti_sysbios_family_arm_msp432_ClockFreqs_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.msp432.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_msp432_Timer_Object__ ti_sysbios_family_arm_msp432_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_msp432_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_arm_msp432_Timer_Module_State__device device;
    __TA_ti_sysbios_family_arm_msp432_Timer_Module_State__handles handles;
} ti_sysbios_family_arm_msp432_Timer_Module_State__;

/* --> ti_sysbios_family_arm_msp432_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_msp432_Timer_Module_State__device ti_sysbios_family_arm_msp432_Timer_Module_State_0_device__A[4];

/* --> ti_sysbios_family_arm_msp432_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_msp432_Timer_Module_State__handles ti_sysbios_family_arm_msp432_Timer_Module_State_0_handles__A[4];

/* Module__state__V */
ti_sysbios_family_arm_msp432_Timer_Module_State__ ti_sysbios_family_arm_msp432_Timer_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.msp432.init.Boot DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];

/* --> __primary_heap_start__ */
extern xdc_Char* __primary_heap_start__;

/* --> __primary_heap_end__ */
extern xdc_Char* __primary_heap_end__;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    volatile xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> Power_idleFunc */
extern xdc_Void Power_idleFunc(xdc_Void);

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */

/* --> ti_sysbios_knl_Event_post__E */
extern xdc_Void ti_sysbios_knl_Event_post__E(ti_sysbios_knl_Event_Handle,xdc_UInt);

/* --> ti_sysbios_knl_Event_sync__E */
extern xdc_Void ti_sysbios_knl_Event_sync__E(ti_sysbios_knl_Event_Handle,xdc_UInt,xdc_UInt);


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    volatile xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    xdc_Bool curTaskPrivileged;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Mailbox_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Mailbox_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_msp432_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_msp432_Timer_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[9];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[9];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[2];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_CPtr charBase;
    xdc_CPtr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[6535];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[46];


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__,Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__,Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_dataQue__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_dataQue__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_dataQue__O = offsetof(ti_sysbios_knl_Mailbox_Object__,Object_field_dataQue);
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_freeQue__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_freeQue__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_freeQue__O = offsetof(ti_sysbios_knl_Mailbox_Object__,Object_field_freeQue);
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_dataSem__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_dataSem__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_dataSem__O = offsetof(ti_sysbios_knl_Mailbox_Object__,Object_field_dataSem);
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Instance_State_freeSem__O, ".const:ti_sysbios_knl_Mailbox_Instance_State_freeSem__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Mailbox_Instance_State_freeSem__O = offsetof(ti_sysbios_knl_Mailbox_Object__,Object_field_freeSem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = /Users/druepeters/Documents/Development/EEL4930_AdvMCU/mailbox_MSP_EXP432P401R_tirtos_ccs/Debug/configPkg/package/cfg/mailbox_pem4f");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M4");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.msp432");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.M4F");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== ti.platforms.msp432.Platform TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Error TEMPLATE ========
 */

xdc_runtime_Error_Block xdc_runtime_Error_IgnoreBlock = {
    ~0, /* unused */
    {
        {0, 0} /* data */
    },
    0,  /* id */
    0,  /* msg */
    {
        0,  /* mod */
        0,  /* file */
        0   /* line */
    }
};

/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_knl_Mailbox_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Mailbox_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_family_arm_msp432_Timer_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_msp432_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}


/*
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
#ifdef __llvm__
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((used));
#else
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[9];
    xdc_runtime_Startup_startModsFxn__C(state, 9);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/*
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
#ifdef __llvm__
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((used));
#else
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif
#endif

extern xdc_Void ti_sysbios_family_arm_msp432_init_Boot_init(void);  /* user defined reset function */

/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
    ti_sysbios_family_arm_msp432_init_Boot_init();
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt, 
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_CString fmt = *pfmt;
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                                       (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (xdc_Int) va_arg(va, xdc_IArg) : 
                                       (xdc_Int) va_arg(va, xdc_Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int, const char *, unsigned);
#elif (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int _write(int, char *, int);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
xdc_Void xdc_runtime_SysMin_output__I(xdc_Char *buf, xdc_UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    xdc_Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || ((xdc_UInt)printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_CString stack[7];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */




/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();
extern Void ti_sysbios_family_arm_msp432_Timer_startup__E();

Void ti_sysbios_BIOS_startFunc__I()
{
    /*
     *  Check if XDC runtime startup functions have been called. If not, then
     *  call BIOS_linkedWithIncorrectBootLibrary() function. This function
     *  will spin forever.
     */
    if (xdc_runtime_Startup_rtsDone() != TRUE) {
        ti_sysbios_BIOS_linkedWithIncorrectBootLibrary();
    }

    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_family_arm_msp432_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#include <_lock.h>

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
}


/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock()
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock()
{
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I()
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();

    /* force thread type to 'Main' */
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }

    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.family.arm.msp432.init.Boot TEMPLATE ========
 */

#include <stdbool.h>

#define CSCTL0_DCO48    0x00050000   /* DCO at 48 MHz */
#define CSCTL0_DCO12    0x00030000   /* DCO at 12 MHz */
#define CSCTL0_DCO3     0x00010000   /* DCO at 3 MHz */

/* ==== SpeedOpt_High ==== */

/* High speed clock from DCO, low speed from REFO
 * DIVS=4, DIVA=1, DIVHS=2, DIVM=1
 * SELB=REFO, SELA=LFXT/REFO, SELS=DCO, SELM=DCO */
#define CSCTL1_H_DCO    0x20101033

/* High speed clock from DCO, low speed from LFXT
 * DIVS=4, DIVA=1, DIVHS=2, DIVM=1
 * SELB=LFXT, SELA=LFXT/REFO, SELS=DCO, SELM=DCO */
#define CSCTL1_H_HF0LF1 0x20100033

/* High speed clock from HFXT, low speed from REFO
 * DIVS=4, DIVA=1, DIVHS=2, DIVM=1
 * SELB=REFO, SELA=LFXT/REFO, SELS=HFXT/DCO, SELM=HFXT/DCO */
#define CSCTL1_H_HF1LF0 0x20101055

/* High speed clock from HFXT, low speed from LFXT
 * DIVS=4, DIVA=1, DIVHS=2, DIVM=1
 * SELB=LFXT, SELA=LFXT/REFO, SELS=HFXT/DCO, SELM=HFXT/DCO */
#define CSCTL1_H_HF1LF1 0x20100055

/* ==== SpeedOpt_Medium ==== */

/* High speed clock from DCO, low speed from REFO
 * DIVS=8, DIVA=1, DIVHS=8, DIVM=2
 * SELB=REFO, SELA=LFXT/REFO, SELS=DCO, SELM=DCO */
#define CSCTL1_M_DCO    0x30311033

/* High speed clock from DCO, low speed from LFXT
 * DIVS=8, DIVA=1, DIVHS=8, DIVM=2
 * SELB=LFXT, SELA=LFXT/REFO, SELS=DCO, SELM=DCO */
#define CSCTL1_M_HF0LF1 0x30310033

/* High speed clock from HFXT, low speed from REFO
 * DIVS=8, DIVA=1, DIVHS=8, DIVM=2
 * SELB=REFO, SELA=LFXT/REFO, SELS=HFXT/DCO, SELM=HFXT/DCO */
#define CSCTL1_M_HF1LF0 0x30311055

/* High speed clock from HFXT, low speed from LFXT
 * DIVS=8, DIVA=1, DIVHS=8, DIVM=2
 * SELB=LFXT, SELA=LFXT/REFO, SELS=HFXT/DCO, SELM=HFXT/DCO */
#define CSCTL1_M_HF1LF1 0x30310055

/* ==== SpeedOpt_Low ==== */

/* High speed clock from DCO, low speed from REFO
 * DIVS=4, DIVA=1, DIVHS=4, DIVM=2
 * SELB=REFO, SELA=LFXT/REFO, SELS=DCO, SELM=DCO */
#define CSCTL1_L_DCO    0x20201033

/* High speed clock from DCO, low speed from LFXT
 * DIVS=4, DIVA=1, DIVHS=4, DIVM=2
 * SELB=LFXT, SELA=LFXT/REFO, SELS=DCO, SELM=DCO */
#define CSCTL1_L_HF0LF1 0x20200033

/* High speed clock from HFXT, low speed from REFO
 * DIVS=16, DIVA=1, DIVHS=16, DIVM=4
 * SELB=REFO, SELA=LFXT/REFO, SELS=HFXT/DCO, SELM=HFXT/DCO */
#define CSCTL1_L_HF1LF0 0x40421055

/* High speed clock from HFXT, low speed from LFXT
 * DIVS=16, DIVA=1, DIVHS=16, DIVM=4
 * SELB=LFXT, SELA=LFXT/REFO, SELS=HFXT/DCO, SELM=HFXT/DCO */
#define CSCTL1_L_HF1LF1 0x40420055

extern Void ti_sysbios_family_arm_msp432_init_Boot_configureClocksHigh(UInt32 CTL0, UInt32 CTL1);
extern Void ti_sysbios_family_arm_msp432_init_Boot_configureClocksMed(UInt32 CTL0, UInt32 CTL1);
extern Void ti_sysbios_family_arm_msp432_init_Boot_configureClocksLow(UInt32 CTL0, UInt32 CTL1);
extern Void ti_sysbios_family_arm_msp432_init_Boot_disableWatchdog(Void);

#if defined(__ti__)
#pragma CODE_SECTION(ti_sysbios_family_arm_msp432_init_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_sysbios_family_arm_msp432_init_Boot_init ========
 */
Void ti_sysbios_family_arm_msp432_init_Boot_init()
{
    ti_sysbios_family_arm_msp432_init_Boot_disableWatchdog();

    ti_sysbios_family_arm_msp432_init_Boot_configureClocksHigh(CSCTL0_DCO48,
        CSCTL1_H_DCO);
}

/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();


#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_resetVectors, ".resetVecs");

/* const because it is meant to be placed in ROM */
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
};

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ramVectors, ".vecs");

/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[80];

UInt32 ti_sysbios_family_arm_m3_Hwi_dispatchTable[80];

#if defined(__IAR_SYSTEMS_ICC__)
Void ti_sysbios_family_arm_m3_Hwi_initIsrStackSize()
{
    #pragma section = "CSTACK"
    ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackBase = (Void *)__section_begin("CSTACK");
    size_t size = (uint8_t *)__section_end("CSTACK") - (uint8_t *)__section_begin("CSTACK");
    ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackSize = (Void *)size;
}
#endif

/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */



#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif


/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;



/*
 *  ======== ti_sysbios_rts_MemAlloc_alloc ========
 */
static Void *ti_sysbios_rts_MemAlloc_alloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    if (size == 0) {
        return (NULL);
    }

    xdc_runtime_Error_init(&eb);

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    return (ti_sysbios_rts_MemAlloc_alloc(size));
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    /*
     * return NULL if size is 0, or alignment is not a power of 2
     */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    xdc_runtime_Error_init(&eb);

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = ti_sysbios_rts_MemAlloc_alloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.family.arm.msp432.ClockFreqs TEMPLATE ========
 */




/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data:ti_sysbios_BIOS_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x2dc6c00,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* mpeEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_mpeEnabled__C, ".const:ti_sysbios_BIOS_mpeEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_mpeEnabled ti_sysbios_BIOS_mpeEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x2dc6c00,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* defaultKernelHeapInstance__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_defaultKernelHeapInstance__C, ".const:ti_sysbios_BIOS_defaultKernelHeapInstance__C");
__FAR__ const CT__ti_sysbios_BIOS_defaultKernelHeapInstance ti_sysbios_BIOS_defaultKernelHeapInstance__C = 0;

/* kernelHeapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_kernelHeapSize__C, ".const:ti_sysbios_BIOS_kernelHeapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_kernelHeapSize ti_sysbios_BIOS_kernelHeapSize__C = (xdc_SizeT)0x1000;

/* kernelHeapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_kernelHeapSection__C, ".const:ti_sysbios_BIOS_kernelHeapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_kernelHeapSection ti_sysbios_BIOS_kernelHeapSection__C = ".kernel_heap";

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_periodicStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x18,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)0),  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    ((xdc_Char*)0),  /* taskSP */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
    ((xdc_Ptr)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    ((xdc_Ptr)((void*)&__TI_STACK_SIZE)),  /* isrStackSize */
    ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
    (xdc_UInt)0x101,  /* swiTaskKeys */
    ((xdc_Ptr)((void*)&ti_sysbios_family_arm_m3_Hwi_dispatchTable[0])),  /* dispatchTable */
    0,  /* vnvicFlushRequired */
    ((void*)0),  /* intAffinity */
    ((void*)0),  /* intAffinityMasks */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A");
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0x50;

/* NUM_PRIORITIES__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_m3_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)6098) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_m3_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)6168) << 16 | 512);

/* A_unsupportedMaskingOption__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)1995) << 16 | 16);

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)4232) << 16 | 0);

/* E_hwiLimitExceeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C = (((xdc_runtime_Error_Id)4280) << 16 | 0);

/* E_exception__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_exception__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_exception__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)4328) << 16 | 0);

/* E_noIsr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_noIsr__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_noIsr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)4533) << 16 | 0);

/* E_NMI__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_NMI__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_NMI__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)4561) << 16 | 0);

/* E_hardFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hardFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hardFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)4571) << 16 | 0);

/* E_memFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_memFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_memFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)4587) << 16 | 0);

/* E_busFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_busFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_busFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)4617) << 16 | 0);

/* E_usageFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_usageFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_usageFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)4647) << 16 | 0);

/* E_svCall__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_svCall__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_svCall__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)4664) << 16 | 0);

/* E_debugMon__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_debugMon__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_debugMon__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)4685) << 16 | 0);

/* E_reserved__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_reserved__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_reserved__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)4700) << 16 | 0);

/* nullIsrFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I));

/* excHandlerFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerMax__I));

/* excHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)0);

/* excHookFuncs__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A);

/* disablePriority__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_disablePriority__C, ".const:ti_sysbios_family_arm_m3_Hwi_disablePriority__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* priGroup__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priGroup__C, ".const:ti_sysbios_family_arm_m3_Hwi_priGroup__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x0;

/* numSparseInterrupts__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C, ".const:ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C = (xdc_UInt)0x0;

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ccr__C, ".const:ti_sysbios_family_arm_m3_Hwi_ccr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x200;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_hooks__C, ".const:ti_sysbios_family_arm_m3_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.family.arm.msp432.ClockFreqs INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_msp432_ClockFreqs_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_family_arm_msp432_ClockFreqs_Module_State__ ti_sysbios_family_arm_msp432_ClockFreqs_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_msp432_ClockFreqs_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_msp432_ClockFreqs_Module_State__ ti_sysbios_family_arm_msp432_ClockFreqs_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_msp432_ClockFreqs_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_msp432_ClockFreqs_Module_State__ ti_sysbios_family_arm_msp432_ClockFreqs_Module__state__V = {
    (xdc_UInt32)0x8000,  /* ACLK */
    (xdc_UInt32)0xb71b00,  /* SMCLK */
    (xdc_UInt32)0x16e3600,  /* HSMCLK */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsEnabled ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsIncluded ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsMask__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsMask ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__gateObj__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__gateObj ti_sysbios_family_arm_msp432_ClockFreqs_Module__gateObj__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__gatePrms__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__gatePrms ti_sysbios_family_arm_msp432_ClockFreqs_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__id__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__id ti_sysbios_family_arm_msp432_ClockFreqs_Module__id__C = (xdc_Bits16)0x802d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerDefined ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerObj__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerObj ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn0 ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn1 ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn2 ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn4 ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn8 ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Object__count__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Object__count ti_sysbios_family_arm_msp432_ClockFreqs_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Object__heap__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Object__heap ti_sysbios_family_arm_msp432_ClockFreqs_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Object__sizeof__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Object__sizeof ti_sysbios_family_arm_msp432_ClockFreqs_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Object__table__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Object__table ti_sysbios_family_arm_msp432_ClockFreqs_Object__table__C = 0;

/* ACLK__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_ACLK__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_ACLK__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_ACLK ti_sysbios_family_arm_msp432_ClockFreqs_ACLK__C = (xdc_UInt32)0x8000;

/* SMCLK__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_SMCLK__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_SMCLK__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_SMCLK ti_sysbios_family_arm_msp432_ClockFreqs_SMCLK__C = (xdc_UInt32)0xb71b00;

/* HSMCLK__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_HSMCLK__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_HSMCLK__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_HSMCLK ti_sysbios_family_arm_msp432_ClockFreqs_HSMCLK__C = (xdc_UInt32)0x16e3600;


/*
 * ======== ti.sysbios.family.arm.msp432.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_msp432_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_msp432_Timer_Params ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_msp432_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)0),  /* hwiParams */
    ti_sysbios_family_arm_msp432_Timer_Source_ACLK,  /* clockSource */
    0,  /* synchronous */
    ti_sysbios_family_arm_msp432_Timer_ID_1,  /* inputDivider */
    ti_sysbios_family_arm_msp432_Timer_IDEX_1,  /* inputDividerExp */
    0,  /* nesting */
    (xdc_UInt)0x0,  /* prevThreshold */
    (xdc_UInt)0x100,  /* controlRegInit */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_msp432_Timer_Module__ ti_sysbios_family_arm_msp432_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_msp432_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_msp432_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_msp432_Timer_Object__ ti_sysbios_family_arm_msp432_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        (xdc_UInt16)0x100,  /* controlRegInit */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x20,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x18,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x8000,  /* lo */
        },  /* frequency */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt16)0x0,  /* prevThreshold */
        (xdc_UInt16)0x0,  /* savedCurrCount */
        (xdc_UInt32)0x0,  /* rollovers */
        0,  /* synchronous */
        (xdc_UInt)0x0,  /* inputDivider */
        (xdc_UInt)0x0,  /* inputDividerExp */
    },
};

/* --> ti_sysbios_family_arm_msp432_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_msp432_Timer_Module_State__device ti_sysbios_family_arm_msp432_Timer_Module_State_0_device__A[4] = {
    {
        (xdc_UInt)0x18,  /* intNum */
        ((xdc_Ptr)(0x40000000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x1a,  /* intNum */
        ((xdc_Ptr)(0x40000400)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x1c,  /* intNum */
        ((xdc_Ptr)(0x40000800)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x1e,  /* intNum */
        ((xdc_Ptr)(0x40000c00)),  /* baseAddr */
    },  /* [3] */
};

/* --> ti_sysbios_family_arm_msp432_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_msp432_Timer_Module_State__handles ti_sysbios_family_arm_msp432_Timer_Module_State_0_handles__A[4] = {
    (ti_sysbios_family_arm_msp432_Timer_Handle)&ti_sysbios_family_arm_msp432_Timer_Object__table__V[0],  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_msp432_Timer_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_family_arm_msp432_Timer_Module_State__ ti_sysbios_family_arm_msp432_Timer_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_msp432_Timer_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_msp432_Timer_Module_State__ ti_sysbios_family_arm_msp432_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_msp432_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_msp432_Timer_Module_State__ ti_sysbios_family_arm_msp432_Timer_Module__state__V = {
    (xdc_UInt)0xe,  /* availMask */
    ((void*)ti_sysbios_family_arm_msp432_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_arm_msp432_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__diagsMask ti_sysbios_family_arm_msp432_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__gateObj ti_sysbios_family_arm_msp432_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__gatePrms ti_sysbios_family_arm_msp432_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__id__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__id ti_sysbios_family_arm_msp432_Timer_Module__id__C = (xdc_Bits16)0x802c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerObj ti_sysbios_family_arm_msp432_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__count__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Object__count ti_sysbios_family_arm_msp432_Timer_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Object__heap ti_sysbios_family_arm_msp432_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Object__sizeof ti_sysbios_family_arm_msp432_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_msp432_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__table__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Object__table ti_sysbios_family_arm_msp432_Timer_Object__table__C = ti_sysbios_family_arm_msp432_Timer_Object__table__V;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_msp432_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_E_invalidTimer ti_sysbios_family_arm_msp432_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4718) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_msp432_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_E_notAvailable ti_sysbios_family_arm_msp432_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4754) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_msp432_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_E_cannotSupport ti_sysbios_family_arm_msp432_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4793) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_anyMask__C, ".const:ti_sysbios_family_arm_msp432_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_anyMask ti_sysbios_family_arm_msp432_Timer_anyMask__C = (xdc_UInt)0xf;

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_msp432_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_startupNeeded ti_sysbios_family_arm_msp432_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_numTimerDevices__C, ".const:ti_sysbios_family_arm_msp432_Timer_numTimerDevices__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_numTimerDevices ti_sysbios_family_arm_msp432_Timer_numTimerDevices__C = (xdc_Int)0x4;


/*
 * ======== ti.sysbios.family.arm.msp432.init.Boot INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__diagsEnabled ti_sysbios_family_arm_msp432_init_Boot_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__diagsIncluded ti_sysbios_family_arm_msp432_init_Boot_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__diagsMask__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__diagsMask ti_sysbios_family_arm_msp432_init_Boot_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__gateObj__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__gateObj ti_sysbios_family_arm_msp432_init_Boot_Module__gateObj__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__gatePrms__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__gatePrms ti_sysbios_family_arm_msp432_init_Boot_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__id__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__id ti_sysbios_family_arm_msp432_init_Boot_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerDefined ti_sysbios_family_arm_msp432_init_Boot_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerObj__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerObj ti_sysbios_family_arm_msp432_init_Boot_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn0 ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn1 ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn2 ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn4 ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn8 ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Object__count__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Object__count ti_sysbios_family_arm_msp432_init_Boot_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Object__heap__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Object__heap ti_sysbios_family_arm_msp432_init_Boot_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Object__sizeof__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Object__sizeof ti_sysbios_family_arm_msp432_init_Boot_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Object__table__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Object__table ti_sysbios_family_arm_msp432_init_Boot_Object__table__C = 0;

/* enableLFXT__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_enableLFXT__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_enableLFXT__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_enableLFXT ti_sysbios_family_arm_msp432_init_Boot_enableLFXT__C = 0;

/* bypassLFXT__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_bypassLFXT__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_bypassLFXT__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_bypassLFXT ti_sysbios_family_arm_msp432_init_Boot_bypassLFXT__C = 0;

/* enableHFXT__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_enableHFXT__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_enableHFXT__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_enableHFXT ti_sysbios_family_arm_msp432_init_Boot_enableHFXT__C = 0;

/* bypassHFXT__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_bypassHFXT__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_bypassHFXT__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_bypassHFXT ti_sysbios_family_arm_msp432_init_Boot_bypassHFXT__C = 0;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x802a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x802b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)3238) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = 0;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4195) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)0),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x0)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((const void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8028;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2535) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)2571) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)2616) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4899) << 16 | 0);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2507) << 16 | 16);

/* primaryHeapBaseAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C = ((CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr)((void*)&__primary_heap_start__));

/* primaryHeapEndAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C = ((CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr)((void*)&__primary_heap_end__));

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Clock_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_arm_msp432_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x8012;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)5153) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)5175) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)5193) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)615) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)696) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((CT__ti_sysbios_knl_Clock_doTickFunc)((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_triggerClock__C, ".const:ti_sysbios_knl_Clock_triggerClock__C");
__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = 0;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((CT__ti_sysbios_knl_Event_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((CT__ti_sysbios_knl_Event_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((CT__ti_sysbios_knl_Event_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x8015;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((CT__ti_sysbios_knl_Event_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)5225) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)5279) << 16 | 768);

/* A_nullEventMasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)766) << 16 | 16);

/* A_nullEventId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)813) << 16 | 16);

/* A_eventInUse__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)852) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)895) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)958) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)Power_idleFunc)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [1] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2] = {
    (xdc_UInt)0x0,  /* [0] */
    (xdc_UInt)0x0,  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x8013;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {2, ((__T1_ti_sysbios_knl_Idle_funcList *)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {2, ((__T1_ti_sysbios_knl_Idle_coreList *)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x8014;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Mailbox INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Mailbox_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__PARAMS__C, ".const:ti_sysbios_knl_Mailbox_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Mailbox_Params ti_sysbios_knl_Mailbox_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Mailbox_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Mailbox_Object__PARAMS__C.__iprms, /* instance */
    0,  /* heap */
    0,  /* readerEvent */
    (xdc_UInt)0x1,  /* readerEventId */
    0,  /* writerEvent */
    (xdc_UInt)0x1,  /* writerEventId */
    ((xdc_Ptr)0),  /* buf */
    (xdc_UInt)0x0,  /* bufSize */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Mailbox_Module__ ti_sysbios_knl_Mailbox_Module__root__V = {
    {&ti_sysbios_knl_Mailbox_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Mailbox_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Mailbox_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsEnabled ti_sysbios_knl_Mailbox_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Mailbox_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsIncluded ti_sysbios_knl_Mailbox_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__diagsMask__C, ".const:ti_sysbios_knl_Mailbox_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__diagsMask ti_sysbios_knl_Mailbox_Module__diagsMask__C = ((CT__ti_sysbios_knl_Mailbox_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__gateObj__C, ".const:ti_sysbios_knl_Mailbox_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__gateObj ti_sysbios_knl_Mailbox_Module__gateObj__C = ((CT__ti_sysbios_knl_Mailbox_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__gatePrms__C, ".const:ti_sysbios_knl_Mailbox_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__gatePrms ti_sysbios_knl_Mailbox_Module__gatePrms__C = ((CT__ti_sysbios_knl_Mailbox_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__id__C, ".const:ti_sysbios_knl_Mailbox_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__id ti_sysbios_knl_Mailbox_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerDefined__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerDefined ti_sysbios_knl_Mailbox_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerObj__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerObj ti_sysbios_knl_Mailbox_Module__loggerObj__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn0 ti_sysbios_knl_Mailbox_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn1 ti_sysbios_knl_Mailbox_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn2 ti_sysbios_knl_Mailbox_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn4 ti_sysbios_knl_Mailbox_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Mailbox_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Module__loggerFxn8 ti_sysbios_knl_Mailbox_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__count__C, ".const:ti_sysbios_knl_Mailbox_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__count ti_sysbios_knl_Mailbox_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__heap__C, ".const:ti_sysbios_knl_Mailbox_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__heap ti_sysbios_knl_Mailbox_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__sizeof__C, ".const:ti_sysbios_knl_Mailbox_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__sizeof ti_sysbios_knl_Mailbox_Object__sizeof__C = sizeof(ti_sysbios_knl_Mailbox_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__table__C, ".const:ti_sysbios_knl_Mailbox_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_Object__table ti_sysbios_knl_Mailbox_Object__table__C = 0;

/* A_invalidBufSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_A_invalidBufSize__C, ".const:ti_sysbios_knl_Mailbox_A_invalidBufSize__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_A_invalidBufSize ti_sysbios_knl_Mailbox_A_invalidBufSize__C = (((xdc_runtime_Assert_Id)1048) << 16 | 16);

/* maxTypeAlign__C */
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_maxTypeAlign__C, ".const:ti_sysbios_knl_Mailbox_maxTypeAlign__C");
__FAR__ const CT__ti_sysbios_knl_Mailbox_maxTypeAlign ti_sysbios_knl_Mailbox_maxTypeAlign__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x8017;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)5360) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5390) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)1106) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1161) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)895) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1226) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1280) << 16 | 16);

/* E_objectNotInKernelSpace__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C, ".const:ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace ti_sysbios_knl_Semaphore_E_objectNotInKernelSpace__C = (((xdc_runtime_Error_Id)3777) << 16 | 0);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 1;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 0;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)((xdc_Fxn)ti_sysbios_knl_Event_post__E));

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)((xdc_Fxn)ti_sysbios_knl_Event_sync__E));


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Swi_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Swi_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)5433) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)5480) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)5498) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1374) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1431) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    1,  /* privileged */
    ((xdc_Ptr)0),  /* domain */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
        1,  /* privileged */
        ((xdc_Ptr)0),  /* domain */
        (xdc_UInt32)0x0,  /* checkValue */
        ((xdc_Ptr)0),  /* tls */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Task_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    1,  /* curTaskPrivileged */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5538) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5606) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5651) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5692) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5724) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5772) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)5828) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)5859) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)5942) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)6028) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)3856) << 16 | 0);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)3899) << 16 | 0);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)3950) << 16 | 0);

/* E_moduleStateCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_moduleStateCheckFailed__C, ".const:ti_sysbios_knl_Task_E_moduleStateCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C = (((xdc_runtime_Error_Id)3981) << 16 | 0);

/* E_objectCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_objectCheckFailed__C, ".const:ti_sysbios_knl_Task_E_objectCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C = (((xdc_runtime_Error_Id)4054) << 16 | 0);

/* E_objectNotInKernelSpace__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_objectNotInKernelSpace__C, ".const:ti_sysbios_knl_Task_E_objectNotInKernelSpace__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_objectNotInKernelSpace ti_sysbios_knl_Task_E_objectNotInKernelSpace__C = (((xdc_runtime_Error_Id)4121) << 16 | 0);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1480) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1549) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1603) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1657) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1720) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1770) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1805) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1838) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)1922) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x200;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {0, 0};

/* moduleStateCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C = ((CT__ti_sysbios_knl_Task_moduleStateCheckFxn)((xdc_Fxn)ti_sysbios_knl_Task_moduleStateCheck__I));

/* moduleStateCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckValueFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C = ((CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn)((xdc_Fxn)ti_sysbios_knl_Task_getModuleStateCheckValue__I));

/* moduleStateCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFlag__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C = 0;

/* objectCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFxn__C, ".const:ti_sysbios_knl_Task_objectCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C = ((CT__ti_sysbios_knl_Task_objectCheckFxn)((xdc_Fxn)ti_sysbios_knl_Task_objectCheck__I));

/* objectCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckValueFxn__C, ".const:ti_sysbios_knl_Task_objectCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C = ((CT__ti_sysbios_knl_Task_objectCheckValueFxn)((xdc_Fxn)ti_sysbios_knl_Task_getObjectCheckValue__I));

/* objectCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFlag__C, ".const:ti_sysbios_knl_Task_objectCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C = 0;

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3537) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)0);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data:xdc_runtime_Error_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((CT__xdc_runtime_Error_policyFxn)((xdc_Fxn)xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3559) << 16 | 0);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3563) << 16 | 0);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3597) << 16 | 0);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x2;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)4977) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)5001) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)5022) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)5041) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)5058) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)5072) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)5088) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)5095) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)5106) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)5116) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)5135) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((const void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data:xdc_runtime_Memory_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data:xdc_runtime_Registry_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data:xdc_runtime_Startup_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_initPrimary__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [2] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[9] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Mailbox_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Module_startup__E)),  /* [8] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[9] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {3, ((__T1_xdc_runtime_Startup_firstFxns *)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {0, 0};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_SysMin_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data:xdc_runtime_SysMin_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data_xdc_runtime_SysMin_Module__state__V")));
#endif
#endif
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x200;

/* flushAtExit__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[2] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data:xdc_runtime_System_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((const void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x2;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((CT__xdc_runtime_System_abortFxn)((xdc_Fxn)xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((CT__xdc_runtime_System_exitFxn)((xdc_Fxn)xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined(__llvm__) && defined(__ti__)
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data:xdc_runtime_Text_Module__state__V")));
#elif defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_CPtr)(&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_CPtr)(&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[6535] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x6e,  /* [402] */
    (xdc_Char)0x75,  /* [403] */
    (xdc_Char)0x6c,  /* [404] */
    (xdc_Char)0x6c,  /* [405] */
    (xdc_Char)0x50,  /* [406] */
    (xdc_Char)0x6f,  /* [407] */
    (xdc_Char)0x69,  /* [408] */
    (xdc_Char)0x6e,  /* [409] */
    (xdc_Char)0x74,  /* [410] */
    (xdc_Char)0x65,  /* [411] */
    (xdc_Char)0x72,  /* [412] */
    (xdc_Char)0x3a,  /* [413] */
    (xdc_Char)0x20,  /* [414] */
    (xdc_Char)0x50,  /* [415] */
    (xdc_Char)0x6f,  /* [416] */
    (xdc_Char)0x69,  /* [417] */
    (xdc_Char)0x6e,  /* [418] */
    (xdc_Char)0x74,  /* [419] */
    (xdc_Char)0x65,  /* [420] */
    (xdc_Char)0x72,  /* [421] */
    (xdc_Char)0x20,  /* [422] */
    (xdc_Char)0x69,  /* [423] */
    (xdc_Char)0x73,  /* [424] */
    (xdc_Char)0x20,  /* [425] */
    (xdc_Char)0x6e,  /* [426] */
    (xdc_Char)0x75,  /* [427] */
    (xdc_Char)0x6c,  /* [428] */
    (xdc_Char)0x6c,  /* [429] */
    (xdc_Char)0x0,  /* [430] */
    (xdc_Char)0x41,  /* [431] */
    (xdc_Char)0x5f,  /* [432] */
    (xdc_Char)0x69,  /* [433] */
    (xdc_Char)0x6e,  /* [434] */
    (xdc_Char)0x76,  /* [435] */
    (xdc_Char)0x61,  /* [436] */
    (xdc_Char)0x6c,  /* [437] */
    (xdc_Char)0x69,  /* [438] */
    (xdc_Char)0x64,  /* [439] */
    (xdc_Char)0x52,  /* [440] */
    (xdc_Char)0x65,  /* [441] */
    (xdc_Char)0x67,  /* [442] */
    (xdc_Char)0x69,  /* [443] */
    (xdc_Char)0x6f,  /* [444] */
    (xdc_Char)0x6e,  /* [445] */
    (xdc_Char)0x49,  /* [446] */
    (xdc_Char)0x64,  /* [447] */
    (xdc_Char)0x3a,  /* [448] */
    (xdc_Char)0x20,  /* [449] */
    (xdc_Char)0x4d,  /* [450] */
    (xdc_Char)0x50,  /* [451] */
    (xdc_Char)0x55,  /* [452] */
    (xdc_Char)0x20,  /* [453] */
    (xdc_Char)0x52,  /* [454] */
    (xdc_Char)0x65,  /* [455] */
    (xdc_Char)0x67,  /* [456] */
    (xdc_Char)0x69,  /* [457] */
    (xdc_Char)0x6f,  /* [458] */
    (xdc_Char)0x6e,  /* [459] */
    (xdc_Char)0x20,  /* [460] */
    (xdc_Char)0x6e,  /* [461] */
    (xdc_Char)0x75,  /* [462] */
    (xdc_Char)0x6d,  /* [463] */
    (xdc_Char)0x62,  /* [464] */
    (xdc_Char)0x65,  /* [465] */
    (xdc_Char)0x72,  /* [466] */
    (xdc_Char)0x20,  /* [467] */
    (xdc_Char)0x70,  /* [468] */
    (xdc_Char)0x61,  /* [469] */
    (xdc_Char)0x73,  /* [470] */
    (xdc_Char)0x73,  /* [471] */
    (xdc_Char)0x65,  /* [472] */
    (xdc_Char)0x64,  /* [473] */
    (xdc_Char)0x20,  /* [474] */
    (xdc_Char)0x69,  /* [475] */
    (xdc_Char)0x73,  /* [476] */
    (xdc_Char)0x20,  /* [477] */
    (xdc_Char)0x69,  /* [478] */
    (xdc_Char)0x6e,  /* [479] */
    (xdc_Char)0x76,  /* [480] */
    (xdc_Char)0x61,  /* [481] */
    (xdc_Char)0x6c,  /* [482] */
    (xdc_Char)0x69,  /* [483] */
    (xdc_Char)0x64,  /* [484] */
    (xdc_Char)0x2e,  /* [485] */
    (xdc_Char)0x0,  /* [486] */
    (xdc_Char)0x41,  /* [487] */
    (xdc_Char)0x5f,  /* [488] */
    (xdc_Char)0x75,  /* [489] */
    (xdc_Char)0x6e,  /* [490] */
    (xdc_Char)0x61,  /* [491] */
    (xdc_Char)0x6c,  /* [492] */
    (xdc_Char)0x69,  /* [493] */
    (xdc_Char)0x67,  /* [494] */
    (xdc_Char)0x6e,  /* [495] */
    (xdc_Char)0x65,  /* [496] */
    (xdc_Char)0x64,  /* [497] */
    (xdc_Char)0x42,  /* [498] */
    (xdc_Char)0x61,  /* [499] */
    (xdc_Char)0x73,  /* [500] */
    (xdc_Char)0x65,  /* [501] */
    (xdc_Char)0x41,  /* [502] */
    (xdc_Char)0x64,  /* [503] */
    (xdc_Char)0x64,  /* [504] */
    (xdc_Char)0x72,  /* [505] */
    (xdc_Char)0x3a,  /* [506] */
    (xdc_Char)0x20,  /* [507] */
    (xdc_Char)0x4d,  /* [508] */
    (xdc_Char)0x50,  /* [509] */
    (xdc_Char)0x55,  /* [510] */
    (xdc_Char)0x20,  /* [511] */
    (xdc_Char)0x72,  /* [512] */
    (xdc_Char)0x65,  /* [513] */
    (xdc_Char)0x67,  /* [514] */
    (xdc_Char)0x69,  /* [515] */
    (xdc_Char)0x6f,  /* [516] */
    (xdc_Char)0x6e,  /* [517] */
    (xdc_Char)0x20,  /* [518] */
    (xdc_Char)0x62,  /* [519] */
    (xdc_Char)0x61,  /* [520] */
    (xdc_Char)0x73,  /* [521] */
    (xdc_Char)0x65,  /* [522] */
    (xdc_Char)0x20,  /* [523] */
    (xdc_Char)0x61,  /* [524] */
    (xdc_Char)0x64,  /* [525] */
    (xdc_Char)0x64,  /* [526] */
    (xdc_Char)0x72,  /* [527] */
    (xdc_Char)0x65,  /* [528] */
    (xdc_Char)0x73,  /* [529] */
    (xdc_Char)0x73,  /* [530] */
    (xdc_Char)0x20,  /* [531] */
    (xdc_Char)0x6e,  /* [532] */
    (xdc_Char)0x6f,  /* [533] */
    (xdc_Char)0x74,  /* [534] */
    (xdc_Char)0x20,  /* [535] */
    (xdc_Char)0x61,  /* [536] */
    (xdc_Char)0x6c,  /* [537] */
    (xdc_Char)0x69,  /* [538] */
    (xdc_Char)0x67,  /* [539] */
    (xdc_Char)0x6e,  /* [540] */
    (xdc_Char)0x65,  /* [541] */
    (xdc_Char)0x64,  /* [542] */
    (xdc_Char)0x20,  /* [543] */
    (xdc_Char)0x74,  /* [544] */
    (xdc_Char)0x6f,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x73,  /* [547] */
    (xdc_Char)0x69,  /* [548] */
    (xdc_Char)0x7a,  /* [549] */
    (xdc_Char)0x65,  /* [550] */
    (xdc_Char)0x2e,  /* [551] */
    (xdc_Char)0x0,  /* [552] */
    (xdc_Char)0x41,  /* [553] */
    (xdc_Char)0x5f,  /* [554] */
    (xdc_Char)0x72,  /* [555] */
    (xdc_Char)0x65,  /* [556] */
    (xdc_Char)0x73,  /* [557] */
    (xdc_Char)0x65,  /* [558] */
    (xdc_Char)0x72,  /* [559] */
    (xdc_Char)0x76,  /* [560] */
    (xdc_Char)0x65,  /* [561] */
    (xdc_Char)0x64,  /* [562] */
    (xdc_Char)0x41,  /* [563] */
    (xdc_Char)0x74,  /* [564] */
    (xdc_Char)0x74,  /* [565] */
    (xdc_Char)0x72,  /* [566] */
    (xdc_Char)0x73,  /* [567] */
    (xdc_Char)0x3a,  /* [568] */
    (xdc_Char)0x20,  /* [569] */
    (xdc_Char)0x4d,  /* [570] */
    (xdc_Char)0x50,  /* [571] */
    (xdc_Char)0x55,  /* [572] */
    (xdc_Char)0x20,  /* [573] */
    (xdc_Char)0x72,  /* [574] */
    (xdc_Char)0x65,  /* [575] */
    (xdc_Char)0x67,  /* [576] */
    (xdc_Char)0x69,  /* [577] */
    (xdc_Char)0x6f,  /* [578] */
    (xdc_Char)0x6e,  /* [579] */
    (xdc_Char)0x20,  /* [580] */
    (xdc_Char)0x61,  /* [581] */
    (xdc_Char)0x74,  /* [582] */
    (xdc_Char)0x74,  /* [583] */
    (xdc_Char)0x72,  /* [584] */
    (xdc_Char)0x69,  /* [585] */
    (xdc_Char)0x62,  /* [586] */
    (xdc_Char)0x75,  /* [587] */
    (xdc_Char)0x74,  /* [588] */
    (xdc_Char)0x65,  /* [589] */
    (xdc_Char)0x73,  /* [590] */
    (xdc_Char)0x20,  /* [591] */
    (xdc_Char)0x73,  /* [592] */
    (xdc_Char)0x65,  /* [593] */
    (xdc_Char)0x74,  /* [594] */
    (xdc_Char)0x20,  /* [595] */
    (xdc_Char)0x74,  /* [596] */
    (xdc_Char)0x6f,  /* [597] */
    (xdc_Char)0x20,  /* [598] */
    (xdc_Char)0x72,  /* [599] */
    (xdc_Char)0x65,  /* [600] */
    (xdc_Char)0x73,  /* [601] */
    (xdc_Char)0x65,  /* [602] */
    (xdc_Char)0x72,  /* [603] */
    (xdc_Char)0x76,  /* [604] */
    (xdc_Char)0x65,  /* [605] */
    (xdc_Char)0x64,  /* [606] */
    (xdc_Char)0x20,  /* [607] */
    (xdc_Char)0x76,  /* [608] */
    (xdc_Char)0x61,  /* [609] */
    (xdc_Char)0x6c,  /* [610] */
    (xdc_Char)0x75,  /* [611] */
    (xdc_Char)0x65,  /* [612] */
    (xdc_Char)0x2e,  /* [613] */
    (xdc_Char)0x0,  /* [614] */
    (xdc_Char)0x41,  /* [615] */
    (xdc_Char)0x5f,  /* [616] */
    (xdc_Char)0x63,  /* [617] */
    (xdc_Char)0x6c,  /* [618] */
    (xdc_Char)0x6f,  /* [619] */
    (xdc_Char)0x63,  /* [620] */
    (xdc_Char)0x6b,  /* [621] */
    (xdc_Char)0x44,  /* [622] */
    (xdc_Char)0x69,  /* [623] */
    (xdc_Char)0x73,  /* [624] */
    (xdc_Char)0x61,  /* [625] */
    (xdc_Char)0x62,  /* [626] */
    (xdc_Char)0x6c,  /* [627] */
    (xdc_Char)0x65,  /* [628] */
    (xdc_Char)0x64,  /* [629] */
    (xdc_Char)0x3a,  /* [630] */
    (xdc_Char)0x20,  /* [631] */
    (xdc_Char)0x43,  /* [632] */
    (xdc_Char)0x61,  /* [633] */
    (xdc_Char)0x6e,  /* [634] */
    (xdc_Char)0x6e,  /* [635] */
    (xdc_Char)0x6f,  /* [636] */
    (xdc_Char)0x74,  /* [637] */
    (xdc_Char)0x20,  /* [638] */
    (xdc_Char)0x63,  /* [639] */
    (xdc_Char)0x72,  /* [640] */
    (xdc_Char)0x65,  /* [641] */
    (xdc_Char)0x61,  /* [642] */
    (xdc_Char)0x74,  /* [643] */
    (xdc_Char)0x65,  /* [644] */
    (xdc_Char)0x20,  /* [645] */
    (xdc_Char)0x61,  /* [646] */
    (xdc_Char)0x20,  /* [647] */
    (xdc_Char)0x63,  /* [648] */
    (xdc_Char)0x6c,  /* [649] */
    (xdc_Char)0x6f,  /* [650] */
    (xdc_Char)0x63,  /* [651] */
    (xdc_Char)0x6b,  /* [652] */
    (xdc_Char)0x20,  /* [653] */
    (xdc_Char)0x69,  /* [654] */
    (xdc_Char)0x6e,  /* [655] */
    (xdc_Char)0x73,  /* [656] */
    (xdc_Char)0x74,  /* [657] */
    (xdc_Char)0x61,  /* [658] */
    (xdc_Char)0x6e,  /* [659] */
    (xdc_Char)0x63,  /* [660] */
    (xdc_Char)0x65,  /* [661] */
    (xdc_Char)0x20,  /* [662] */
    (xdc_Char)0x77,  /* [663] */
    (xdc_Char)0x68,  /* [664] */
    (xdc_Char)0x65,  /* [665] */
    (xdc_Char)0x6e,  /* [666] */
    (xdc_Char)0x20,  /* [667] */
    (xdc_Char)0x42,  /* [668] */
    (xdc_Char)0x49,  /* [669] */
    (xdc_Char)0x4f,  /* [670] */
    (xdc_Char)0x53,  /* [671] */
    (xdc_Char)0x2e,  /* [672] */
    (xdc_Char)0x63,  /* [673] */
    (xdc_Char)0x6c,  /* [674] */
    (xdc_Char)0x6f,  /* [675] */
    (xdc_Char)0x63,  /* [676] */
    (xdc_Char)0x6b,  /* [677] */
    (xdc_Char)0x45,  /* [678] */
    (xdc_Char)0x6e,  /* [679] */
    (xdc_Char)0x61,  /* [680] */
    (xdc_Char)0x62,  /* [681] */
    (xdc_Char)0x6c,  /* [682] */
    (xdc_Char)0x65,  /* [683] */
    (xdc_Char)0x64,  /* [684] */
    (xdc_Char)0x20,  /* [685] */
    (xdc_Char)0x69,  /* [686] */
    (xdc_Char)0x73,  /* [687] */
    (xdc_Char)0x20,  /* [688] */
    (xdc_Char)0x66,  /* [689] */
    (xdc_Char)0x61,  /* [690] */
    (xdc_Char)0x6c,  /* [691] */
    (xdc_Char)0x73,  /* [692] */
    (xdc_Char)0x65,  /* [693] */
    (xdc_Char)0x2e,  /* [694] */
    (xdc_Char)0x0,  /* [695] */
    (xdc_Char)0x41,  /* [696] */
    (xdc_Char)0x5f,  /* [697] */
    (xdc_Char)0x62,  /* [698] */
    (xdc_Char)0x61,  /* [699] */
    (xdc_Char)0x64,  /* [700] */
    (xdc_Char)0x54,  /* [701] */
    (xdc_Char)0x68,  /* [702] */
    (xdc_Char)0x72,  /* [703] */
    (xdc_Char)0x65,  /* [704] */
    (xdc_Char)0x61,  /* [705] */
    (xdc_Char)0x64,  /* [706] */
    (xdc_Char)0x54,  /* [707] */
    (xdc_Char)0x79,  /* [708] */
    (xdc_Char)0x70,  /* [709] */
    (xdc_Char)0x65,  /* [710] */
    (xdc_Char)0x3a,  /* [711] */
    (xdc_Char)0x20,  /* [712] */
    (xdc_Char)0x43,  /* [713] */
    (xdc_Char)0x61,  /* [714] */
    (xdc_Char)0x6e,  /* [715] */
    (xdc_Char)0x6e,  /* [716] */
    (xdc_Char)0x6f,  /* [717] */
    (xdc_Char)0x74,  /* [718] */
    (xdc_Char)0x20,  /* [719] */
    (xdc_Char)0x63,  /* [720] */
    (xdc_Char)0x72,  /* [721] */
    (xdc_Char)0x65,  /* [722] */
    (xdc_Char)0x61,  /* [723] */
    (xdc_Char)0x74,  /* [724] */
    (xdc_Char)0x65,  /* [725] */
    (xdc_Char)0x2f,  /* [726] */
    (xdc_Char)0x64,  /* [727] */
    (xdc_Char)0x65,  /* [728] */
    (xdc_Char)0x6c,  /* [729] */
    (xdc_Char)0x65,  /* [730] */
    (xdc_Char)0x74,  /* [731] */
    (xdc_Char)0x65,  /* [732] */
    (xdc_Char)0x20,  /* [733] */
    (xdc_Char)0x61,  /* [734] */
    (xdc_Char)0x20,  /* [735] */
    (xdc_Char)0x43,  /* [736] */
    (xdc_Char)0x6c,  /* [737] */
    (xdc_Char)0x6f,  /* [738] */
    (xdc_Char)0x63,  /* [739] */
    (xdc_Char)0x6b,  /* [740] */
    (xdc_Char)0x20,  /* [741] */
    (xdc_Char)0x66,  /* [742] */
    (xdc_Char)0x72,  /* [743] */
    (xdc_Char)0x6f,  /* [744] */
    (xdc_Char)0x6d,  /* [745] */
    (xdc_Char)0x20,  /* [746] */
    (xdc_Char)0x48,  /* [747] */
    (xdc_Char)0x77,  /* [748] */
    (xdc_Char)0x69,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x6f,  /* [751] */
    (xdc_Char)0x72,  /* [752] */
    (xdc_Char)0x20,  /* [753] */
    (xdc_Char)0x53,  /* [754] */
    (xdc_Char)0x77,  /* [755] */
    (xdc_Char)0x69,  /* [756] */
    (xdc_Char)0x20,  /* [757] */
    (xdc_Char)0x74,  /* [758] */
    (xdc_Char)0x68,  /* [759] */
    (xdc_Char)0x72,  /* [760] */
    (xdc_Char)0x65,  /* [761] */
    (xdc_Char)0x61,  /* [762] */
    (xdc_Char)0x64,  /* [763] */
    (xdc_Char)0x2e,  /* [764] */
    (xdc_Char)0x0,  /* [765] */
    (xdc_Char)0x41,  /* [766] */
    (xdc_Char)0x5f,  /* [767] */
    (xdc_Char)0x6e,  /* [768] */
    (xdc_Char)0x75,  /* [769] */
    (xdc_Char)0x6c,  /* [770] */
    (xdc_Char)0x6c,  /* [771] */
    (xdc_Char)0x45,  /* [772] */
    (xdc_Char)0x76,  /* [773] */
    (xdc_Char)0x65,  /* [774] */
    (xdc_Char)0x6e,  /* [775] */
    (xdc_Char)0x74,  /* [776] */
    (xdc_Char)0x4d,  /* [777] */
    (xdc_Char)0x61,  /* [778] */
    (xdc_Char)0x73,  /* [779] */
    (xdc_Char)0x6b,  /* [780] */
    (xdc_Char)0x73,  /* [781] */
    (xdc_Char)0x3a,  /* [782] */
    (xdc_Char)0x20,  /* [783] */
    (xdc_Char)0x6f,  /* [784] */
    (xdc_Char)0x72,  /* [785] */
    (xdc_Char)0x4d,  /* [786] */
    (xdc_Char)0x61,  /* [787] */
    (xdc_Char)0x73,  /* [788] */
    (xdc_Char)0x6b,  /* [789] */
    (xdc_Char)0x20,  /* [790] */
    (xdc_Char)0x61,  /* [791] */
    (xdc_Char)0x6e,  /* [792] */
    (xdc_Char)0x64,  /* [793] */
    (xdc_Char)0x20,  /* [794] */
    (xdc_Char)0x61,  /* [795] */
    (xdc_Char)0x6e,  /* [796] */
    (xdc_Char)0x64,  /* [797] */
    (xdc_Char)0x4d,  /* [798] */
    (xdc_Char)0x61,  /* [799] */
    (xdc_Char)0x73,  /* [800] */
    (xdc_Char)0x6b,  /* [801] */
    (xdc_Char)0x20,  /* [802] */
    (xdc_Char)0x61,  /* [803] */
    (xdc_Char)0x72,  /* [804] */
    (xdc_Char)0x65,  /* [805] */
    (xdc_Char)0x20,  /* [806] */
    (xdc_Char)0x6e,  /* [807] */
    (xdc_Char)0x75,  /* [808] */
    (xdc_Char)0x6c,  /* [809] */
    (xdc_Char)0x6c,  /* [810] */
    (xdc_Char)0x2e,  /* [811] */
    (xdc_Char)0x0,  /* [812] */
    (xdc_Char)0x41,  /* [813] */
    (xdc_Char)0x5f,  /* [814] */
    (xdc_Char)0x6e,  /* [815] */
    (xdc_Char)0x75,  /* [816] */
    (xdc_Char)0x6c,  /* [817] */
    (xdc_Char)0x6c,  /* [818] */
    (xdc_Char)0x45,  /* [819] */
    (xdc_Char)0x76,  /* [820] */
    (xdc_Char)0x65,  /* [821] */
    (xdc_Char)0x6e,  /* [822] */
    (xdc_Char)0x74,  /* [823] */
    (xdc_Char)0x49,  /* [824] */
    (xdc_Char)0x64,  /* [825] */
    (xdc_Char)0x3a,  /* [826] */
    (xdc_Char)0x20,  /* [827] */
    (xdc_Char)0x70,  /* [828] */
    (xdc_Char)0x6f,  /* [829] */
    (xdc_Char)0x73,  /* [830] */
    (xdc_Char)0x74,  /* [831] */
    (xdc_Char)0x65,  /* [832] */
    (xdc_Char)0x64,  /* [833] */
    (xdc_Char)0x20,  /* [834] */
    (xdc_Char)0x65,  /* [835] */
    (xdc_Char)0x76,  /* [836] */
    (xdc_Char)0x65,  /* [837] */
    (xdc_Char)0x6e,  /* [838] */
    (xdc_Char)0x74,  /* [839] */
    (xdc_Char)0x49,  /* [840] */
    (xdc_Char)0x64,  /* [841] */
    (xdc_Char)0x20,  /* [842] */
    (xdc_Char)0x69,  /* [843] */
    (xdc_Char)0x73,  /* [844] */
    (xdc_Char)0x20,  /* [845] */
    (xdc_Char)0x6e,  /* [846] */
    (xdc_Char)0x75,  /* [847] */
    (xdc_Char)0x6c,  /* [848] */
    (xdc_Char)0x6c,  /* [849] */
    (xdc_Char)0x2e,  /* [850] */
    (xdc_Char)0x0,  /* [851] */
    (xdc_Char)0x41,  /* [852] */
    (xdc_Char)0x5f,  /* [853] */
    (xdc_Char)0x65,  /* [854] */
    (xdc_Char)0x76,  /* [855] */
    (xdc_Char)0x65,  /* [856] */
    (xdc_Char)0x6e,  /* [857] */
    (xdc_Char)0x74,  /* [858] */
    (xdc_Char)0x49,  /* [859] */
    (xdc_Char)0x6e,  /* [860] */
    (xdc_Char)0x55,  /* [861] */
    (xdc_Char)0x73,  /* [862] */
    (xdc_Char)0x65,  /* [863] */
    (xdc_Char)0x3a,  /* [864] */
    (xdc_Char)0x20,  /* [865] */
    (xdc_Char)0x45,  /* [866] */
    (xdc_Char)0x76,  /* [867] */
    (xdc_Char)0x65,  /* [868] */
    (xdc_Char)0x6e,  /* [869] */
    (xdc_Char)0x74,  /* [870] */
    (xdc_Char)0x20,  /* [871] */
    (xdc_Char)0x6f,  /* [872] */
    (xdc_Char)0x62,  /* [873] */
    (xdc_Char)0x6a,  /* [874] */
    (xdc_Char)0x65,  /* [875] */
    (xdc_Char)0x63,  /* [876] */
    (xdc_Char)0x74,  /* [877] */
    (xdc_Char)0x20,  /* [878] */
    (xdc_Char)0x61,  /* [879] */
    (xdc_Char)0x6c,  /* [880] */
    (xdc_Char)0x72,  /* [881] */
    (xdc_Char)0x65,  /* [882] */
    (xdc_Char)0x61,  /* [883] */
    (xdc_Char)0x64,  /* [884] */
    (xdc_Char)0x79,  /* [885] */
    (xdc_Char)0x20,  /* [886] */
    (xdc_Char)0x69,  /* [887] */
    (xdc_Char)0x6e,  /* [888] */
    (xdc_Char)0x20,  /* [889] */
    (xdc_Char)0x75,  /* [890] */
    (xdc_Char)0x73,  /* [891] */
    (xdc_Char)0x65,  /* [892] */
    (xdc_Char)0x2e,  /* [893] */
    (xdc_Char)0x0,  /* [894] */
    (xdc_Char)0x41,  /* [895] */
    (xdc_Char)0x5f,  /* [896] */
    (xdc_Char)0x62,  /* [897] */
    (xdc_Char)0x61,  /* [898] */
    (xdc_Char)0x64,  /* [899] */
    (xdc_Char)0x43,  /* [900] */
    (xdc_Char)0x6f,  /* [901] */
    (xdc_Char)0x6e,  /* [902] */
    (xdc_Char)0x74,  /* [903] */
    (xdc_Char)0x65,  /* [904] */
    (xdc_Char)0x78,  /* [905] */
    (xdc_Char)0x74,  /* [906] */
    (xdc_Char)0x3a,  /* [907] */
    (xdc_Char)0x20,  /* [908] */
    (xdc_Char)0x62,  /* [909] */
    (xdc_Char)0x61,  /* [910] */
    (xdc_Char)0x64,  /* [911] */
    (xdc_Char)0x20,  /* [912] */
    (xdc_Char)0x63,  /* [913] */
    (xdc_Char)0x61,  /* [914] */
    (xdc_Char)0x6c,  /* [915] */
    (xdc_Char)0x6c,  /* [916] */
    (xdc_Char)0x69,  /* [917] */
    (xdc_Char)0x6e,  /* [918] */
    (xdc_Char)0x67,  /* [919] */
    (xdc_Char)0x20,  /* [920] */
    (xdc_Char)0x63,  /* [921] */
    (xdc_Char)0x6f,  /* [922] */
    (xdc_Char)0x6e,  /* [923] */
    (xdc_Char)0x74,  /* [924] */
    (xdc_Char)0x65,  /* [925] */
    (xdc_Char)0x78,  /* [926] */
    (xdc_Char)0x74,  /* [927] */
    (xdc_Char)0x2e,  /* [928] */
    (xdc_Char)0x20,  /* [929] */
    (xdc_Char)0x4d,  /* [930] */
    (xdc_Char)0x75,  /* [931] */
    (xdc_Char)0x73,  /* [932] */
    (xdc_Char)0x74,  /* [933] */
    (xdc_Char)0x20,  /* [934] */
    (xdc_Char)0x62,  /* [935] */
    (xdc_Char)0x65,  /* [936] */
    (xdc_Char)0x20,  /* [937] */
    (xdc_Char)0x63,  /* [938] */
    (xdc_Char)0x61,  /* [939] */
    (xdc_Char)0x6c,  /* [940] */
    (xdc_Char)0x6c,  /* [941] */
    (xdc_Char)0x65,  /* [942] */
    (xdc_Char)0x64,  /* [943] */
    (xdc_Char)0x20,  /* [944] */
    (xdc_Char)0x66,  /* [945] */
    (xdc_Char)0x72,  /* [946] */
    (xdc_Char)0x6f,  /* [947] */
    (xdc_Char)0x6d,  /* [948] */
    (xdc_Char)0x20,  /* [949] */
    (xdc_Char)0x61,  /* [950] */
    (xdc_Char)0x20,  /* [951] */
    (xdc_Char)0x54,  /* [952] */
    (xdc_Char)0x61,  /* [953] */
    (xdc_Char)0x73,  /* [954] */
    (xdc_Char)0x6b,  /* [955] */
    (xdc_Char)0x2e,  /* [956] */
    (xdc_Char)0x0,  /* [957] */
    (xdc_Char)0x41,  /* [958] */
    (xdc_Char)0x5f,  /* [959] */
    (xdc_Char)0x70,  /* [960] */
    (xdc_Char)0x65,  /* [961] */
    (xdc_Char)0x6e,  /* [962] */
    (xdc_Char)0x64,  /* [963] */
    (xdc_Char)0x54,  /* [964] */
    (xdc_Char)0x61,  /* [965] */
    (xdc_Char)0x73,  /* [966] */
    (xdc_Char)0x6b,  /* [967] */
    (xdc_Char)0x44,  /* [968] */
    (xdc_Char)0x69,  /* [969] */
    (xdc_Char)0x73,  /* [970] */
    (xdc_Char)0x61,  /* [971] */
    (xdc_Char)0x62,  /* [972] */
    (xdc_Char)0x6c,  /* [973] */
    (xdc_Char)0x65,  /* [974] */
    (xdc_Char)0x64,  /* [975] */
    (xdc_Char)0x3a,  /* [976] */
    (xdc_Char)0x20,  /* [977] */
    (xdc_Char)0x43,  /* [978] */
    (xdc_Char)0x61,  /* [979] */
    (xdc_Char)0x6e,  /* [980] */
    (xdc_Char)0x6e,  /* [981] */
    (xdc_Char)0x6f,  /* [982] */
    (xdc_Char)0x74,  /* [983] */
    (xdc_Char)0x20,  /* [984] */
    (xdc_Char)0x63,  /* [985] */
    (xdc_Char)0x61,  /* [986] */
    (xdc_Char)0x6c,  /* [987] */
    (xdc_Char)0x6c,  /* [988] */
    (xdc_Char)0x20,  /* [989] */
    (xdc_Char)0x45,  /* [990] */
    (xdc_Char)0x76,  /* [991] */
    (xdc_Char)0x65,  /* [992] */
    (xdc_Char)0x6e,  /* [993] */
    (xdc_Char)0x74,  /* [994] */
    (xdc_Char)0x5f,  /* [995] */
    (xdc_Char)0x70,  /* [996] */
    (xdc_Char)0x65,  /* [997] */
    (xdc_Char)0x6e,  /* [998] */
    (xdc_Char)0x64,  /* [999] */
    (xdc_Char)0x28,  /* [1000] */
    (xdc_Char)0x29,  /* [1001] */
    (xdc_Char)0x20,  /* [1002] */
    (xdc_Char)0x77,  /* [1003] */
    (xdc_Char)0x68,  /* [1004] */
    (xdc_Char)0x69,  /* [1005] */
    (xdc_Char)0x6c,  /* [1006] */
    (xdc_Char)0x65,  /* [1007] */
    (xdc_Char)0x20,  /* [1008] */
    (xdc_Char)0x74,  /* [1009] */
    (xdc_Char)0x68,  /* [1010] */
    (xdc_Char)0x65,  /* [1011] */
    (xdc_Char)0x20,  /* [1012] */
    (xdc_Char)0x54,  /* [1013] */
    (xdc_Char)0x61,  /* [1014] */
    (xdc_Char)0x73,  /* [1015] */
    (xdc_Char)0x6b,  /* [1016] */
    (xdc_Char)0x20,  /* [1017] */
    (xdc_Char)0x6f,  /* [1018] */
    (xdc_Char)0x72,  /* [1019] */
    (xdc_Char)0x20,  /* [1020] */
    (xdc_Char)0x53,  /* [1021] */
    (xdc_Char)0x77,  /* [1022] */
    (xdc_Char)0x69,  /* [1023] */
    (xdc_Char)0x20,  /* [1024] */
    (xdc_Char)0x73,  /* [1025] */
    (xdc_Char)0x63,  /* [1026] */
    (xdc_Char)0x68,  /* [1027] */
    (xdc_Char)0x65,  /* [1028] */
    (xdc_Char)0x64,  /* [1029] */
    (xdc_Char)0x75,  /* [1030] */
    (xdc_Char)0x6c,  /* [1031] */
    (xdc_Char)0x65,  /* [1032] */
    (xdc_Char)0x72,  /* [1033] */
    (xdc_Char)0x20,  /* [1034] */
    (xdc_Char)0x69,  /* [1035] */
    (xdc_Char)0x73,  /* [1036] */
    (xdc_Char)0x20,  /* [1037] */
    (xdc_Char)0x64,  /* [1038] */
    (xdc_Char)0x69,  /* [1039] */
    (xdc_Char)0x73,  /* [1040] */
    (xdc_Char)0x61,  /* [1041] */
    (xdc_Char)0x62,  /* [1042] */
    (xdc_Char)0x6c,  /* [1043] */
    (xdc_Char)0x65,  /* [1044] */
    (xdc_Char)0x64,  /* [1045] */
    (xdc_Char)0x2e,  /* [1046] */
    (xdc_Char)0x0,  /* [1047] */
    (xdc_Char)0x4d,  /* [1048] */
    (xdc_Char)0x61,  /* [1049] */
    (xdc_Char)0x69,  /* [1050] */
    (xdc_Char)0x6c,  /* [1051] */
    (xdc_Char)0x62,  /* [1052] */
    (xdc_Char)0x6f,  /* [1053] */
    (xdc_Char)0x78,  /* [1054] */
    (xdc_Char)0x5f,  /* [1055] */
    (xdc_Char)0x63,  /* [1056] */
    (xdc_Char)0x72,  /* [1057] */
    (xdc_Char)0x65,  /* [1058] */
    (xdc_Char)0x61,  /* [1059] */
    (xdc_Char)0x74,  /* [1060] */
    (xdc_Char)0x65,  /* [1061] */
    (xdc_Char)0x27,  /* [1062] */
    (xdc_Char)0x73,  /* [1063] */
    (xdc_Char)0x20,  /* [1064] */
    (xdc_Char)0x62,  /* [1065] */
    (xdc_Char)0x75,  /* [1066] */
    (xdc_Char)0x66,  /* [1067] */
    (xdc_Char)0x53,  /* [1068] */
    (xdc_Char)0x69,  /* [1069] */
    (xdc_Char)0x7a,  /* [1070] */
    (xdc_Char)0x65,  /* [1071] */
    (xdc_Char)0x20,  /* [1072] */
    (xdc_Char)0x70,  /* [1073] */
    (xdc_Char)0x61,  /* [1074] */
    (xdc_Char)0x72,  /* [1075] */
    (xdc_Char)0x61,  /* [1076] */
    (xdc_Char)0x6d,  /* [1077] */
    (xdc_Char)0x65,  /* [1078] */
    (xdc_Char)0x74,  /* [1079] */
    (xdc_Char)0x65,  /* [1080] */
    (xdc_Char)0x72,  /* [1081] */
    (xdc_Char)0x20,  /* [1082] */
    (xdc_Char)0x69,  /* [1083] */
    (xdc_Char)0x73,  /* [1084] */
    (xdc_Char)0x20,  /* [1085] */
    (xdc_Char)0x69,  /* [1086] */
    (xdc_Char)0x6e,  /* [1087] */
    (xdc_Char)0x76,  /* [1088] */
    (xdc_Char)0x61,  /* [1089] */
    (xdc_Char)0x6c,  /* [1090] */
    (xdc_Char)0x69,  /* [1091] */
    (xdc_Char)0x64,  /* [1092] */
    (xdc_Char)0x20,  /* [1093] */
    (xdc_Char)0x28,  /* [1094] */
    (xdc_Char)0x74,  /* [1095] */
    (xdc_Char)0x6f,  /* [1096] */
    (xdc_Char)0x6f,  /* [1097] */
    (xdc_Char)0x20,  /* [1098] */
    (xdc_Char)0x73,  /* [1099] */
    (xdc_Char)0x6d,  /* [1100] */
    (xdc_Char)0x61,  /* [1101] */
    (xdc_Char)0x6c,  /* [1102] */
    (xdc_Char)0x6c,  /* [1103] */
    (xdc_Char)0x29,  /* [1104] */
    (xdc_Char)0x0,  /* [1105] */
    (xdc_Char)0x41,  /* [1106] */
    (xdc_Char)0x5f,  /* [1107] */
    (xdc_Char)0x6e,  /* [1108] */
    (xdc_Char)0x6f,  /* [1109] */
    (xdc_Char)0x45,  /* [1110] */
    (xdc_Char)0x76,  /* [1111] */
    (xdc_Char)0x65,  /* [1112] */
    (xdc_Char)0x6e,  /* [1113] */
    (xdc_Char)0x74,  /* [1114] */
    (xdc_Char)0x73,  /* [1115] */
    (xdc_Char)0x3a,  /* [1116] */
    (xdc_Char)0x20,  /* [1117] */
    (xdc_Char)0x54,  /* [1118] */
    (xdc_Char)0x68,  /* [1119] */
    (xdc_Char)0x65,  /* [1120] */
    (xdc_Char)0x20,  /* [1121] */
    (xdc_Char)0x45,  /* [1122] */
    (xdc_Char)0x76,  /* [1123] */
    (xdc_Char)0x65,  /* [1124] */
    (xdc_Char)0x6e,  /* [1125] */
    (xdc_Char)0x74,  /* [1126] */
    (xdc_Char)0x2e,  /* [1127] */
    (xdc_Char)0x73,  /* [1128] */
    (xdc_Char)0x75,  /* [1129] */
    (xdc_Char)0x70,  /* [1130] */
    (xdc_Char)0x70,  /* [1131] */
    (xdc_Char)0x6f,  /* [1132] */
    (xdc_Char)0x72,  /* [1133] */
    (xdc_Char)0x74,  /* [1134] */
    (xdc_Char)0x73,  /* [1135] */
    (xdc_Char)0x45,  /* [1136] */
    (xdc_Char)0x76,  /* [1137] */
    (xdc_Char)0x65,  /* [1138] */
    (xdc_Char)0x6e,  /* [1139] */
    (xdc_Char)0x74,  /* [1140] */
    (xdc_Char)0x73,  /* [1141] */
    (xdc_Char)0x20,  /* [1142] */
    (xdc_Char)0x66,  /* [1143] */
    (xdc_Char)0x6c,  /* [1144] */
    (xdc_Char)0x61,  /* [1145] */
    (xdc_Char)0x67,  /* [1146] */
    (xdc_Char)0x20,  /* [1147] */
    (xdc_Char)0x69,  /* [1148] */
    (xdc_Char)0x73,  /* [1149] */
    (xdc_Char)0x20,  /* [1150] */
    (xdc_Char)0x64,  /* [1151] */
    (xdc_Char)0x69,  /* [1152] */
    (xdc_Char)0x73,  /* [1153] */
    (xdc_Char)0x61,  /* [1154] */
    (xdc_Char)0x62,  /* [1155] */
    (xdc_Char)0x6c,  /* [1156] */
    (xdc_Char)0x65,  /* [1157] */
    (xdc_Char)0x64,  /* [1158] */
    (xdc_Char)0x2e,  /* [1159] */
    (xdc_Char)0x0,  /* [1160] */
    (xdc_Char)0x41,  /* [1161] */
    (xdc_Char)0x5f,  /* [1162] */
    (xdc_Char)0x69,  /* [1163] */
    (xdc_Char)0x6e,  /* [1164] */
    (xdc_Char)0x76,  /* [1165] */
    (xdc_Char)0x54,  /* [1166] */
    (xdc_Char)0x69,  /* [1167] */
    (xdc_Char)0x6d,  /* [1168] */
    (xdc_Char)0x65,  /* [1169] */
    (xdc_Char)0x6f,  /* [1170] */
    (xdc_Char)0x75,  /* [1171] */
    (xdc_Char)0x74,  /* [1172] */
    (xdc_Char)0x3a,  /* [1173] */
    (xdc_Char)0x20,  /* [1174] */
    (xdc_Char)0x43,  /* [1175] */
    (xdc_Char)0x61,  /* [1176] */
    (xdc_Char)0x6e,  /* [1177] */
    (xdc_Char)0x27,  /* [1178] */
    (xdc_Char)0x74,  /* [1179] */
    (xdc_Char)0x20,  /* [1180] */
    (xdc_Char)0x75,  /* [1181] */
    (xdc_Char)0x73,  /* [1182] */
    (xdc_Char)0x65,  /* [1183] */
    (xdc_Char)0x20,  /* [1184] */
    (xdc_Char)0x42,  /* [1185] */
    (xdc_Char)0x49,  /* [1186] */
    (xdc_Char)0x4f,  /* [1187] */
    (xdc_Char)0x53,  /* [1188] */
    (xdc_Char)0x5f,  /* [1189] */
    (xdc_Char)0x45,  /* [1190] */
    (xdc_Char)0x56,  /* [1191] */
    (xdc_Char)0x45,  /* [1192] */
    (xdc_Char)0x4e,  /* [1193] */
    (xdc_Char)0x54,  /* [1194] */
    (xdc_Char)0x5f,  /* [1195] */
    (xdc_Char)0x41,  /* [1196] */
    (xdc_Char)0x43,  /* [1197] */
    (xdc_Char)0x51,  /* [1198] */
    (xdc_Char)0x55,  /* [1199] */
    (xdc_Char)0x49,  /* [1200] */
    (xdc_Char)0x52,  /* [1201] */
    (xdc_Char)0x45,  /* [1202] */
    (xdc_Char)0x44,  /* [1203] */
    (xdc_Char)0x20,  /* [1204] */
    (xdc_Char)0x77,  /* [1205] */
    (xdc_Char)0x69,  /* [1206] */
    (xdc_Char)0x74,  /* [1207] */
    (xdc_Char)0x68,  /* [1208] */
    (xdc_Char)0x20,  /* [1209] */
    (xdc_Char)0x74,  /* [1210] */
    (xdc_Char)0x68,  /* [1211] */
    (xdc_Char)0x69,  /* [1212] */
    (xdc_Char)0x73,  /* [1213] */
    (xdc_Char)0x20,  /* [1214] */
    (xdc_Char)0x53,  /* [1215] */
    (xdc_Char)0x65,  /* [1216] */
    (xdc_Char)0x6d,  /* [1217] */
    (xdc_Char)0x61,  /* [1218] */
    (xdc_Char)0x70,  /* [1219] */
    (xdc_Char)0x68,  /* [1220] */
    (xdc_Char)0x6f,  /* [1221] */
    (xdc_Char)0x72,  /* [1222] */
    (xdc_Char)0x65,  /* [1223] */
    (xdc_Char)0x2e,  /* [1224] */
    (xdc_Char)0x0,  /* [1225] */
    (xdc_Char)0x41,  /* [1226] */
    (xdc_Char)0x5f,  /* [1227] */
    (xdc_Char)0x6f,  /* [1228] */
    (xdc_Char)0x76,  /* [1229] */
    (xdc_Char)0x65,  /* [1230] */
    (xdc_Char)0x72,  /* [1231] */
    (xdc_Char)0x66,  /* [1232] */
    (xdc_Char)0x6c,  /* [1233] */
    (xdc_Char)0x6f,  /* [1234] */
    (xdc_Char)0x77,  /* [1235] */
    (xdc_Char)0x3a,  /* [1236] */
    (xdc_Char)0x20,  /* [1237] */
    (xdc_Char)0x43,  /* [1238] */
    (xdc_Char)0x6f,  /* [1239] */
    (xdc_Char)0x75,  /* [1240] */
    (xdc_Char)0x6e,  /* [1241] */
    (xdc_Char)0x74,  /* [1242] */
    (xdc_Char)0x20,  /* [1243] */
    (xdc_Char)0x68,  /* [1244] */
    (xdc_Char)0x61,  /* [1245] */
    (xdc_Char)0x73,  /* [1246] */
    (xdc_Char)0x20,  /* [1247] */
    (xdc_Char)0x65,  /* [1248] */
    (xdc_Char)0x78,  /* [1249] */
    (xdc_Char)0x63,  /* [1250] */
    (xdc_Char)0x65,  /* [1251] */
    (xdc_Char)0x65,  /* [1252] */
    (xdc_Char)0x64,  /* [1253] */
    (xdc_Char)0x65,  /* [1254] */
    (xdc_Char)0x64,  /* [1255] */
    (xdc_Char)0x20,  /* [1256] */
    (xdc_Char)0x36,  /* [1257] */
    (xdc_Char)0x35,  /* [1258] */
    (xdc_Char)0x35,  /* [1259] */
    (xdc_Char)0x33,  /* [1260] */
    (xdc_Char)0x35,  /* [1261] */
    (xdc_Char)0x20,  /* [1262] */
    (xdc_Char)0x61,  /* [1263] */
    (xdc_Char)0x6e,  /* [1264] */
    (xdc_Char)0x64,  /* [1265] */
    (xdc_Char)0x20,  /* [1266] */
    (xdc_Char)0x72,  /* [1267] */
    (xdc_Char)0x6f,  /* [1268] */
    (xdc_Char)0x6c,  /* [1269] */
    (xdc_Char)0x6c,  /* [1270] */
    (xdc_Char)0x65,  /* [1271] */
    (xdc_Char)0x64,  /* [1272] */
    (xdc_Char)0x20,  /* [1273] */
    (xdc_Char)0x6f,  /* [1274] */
    (xdc_Char)0x76,  /* [1275] */
    (xdc_Char)0x65,  /* [1276] */
    (xdc_Char)0x72,  /* [1277] */
    (xdc_Char)0x2e,  /* [1278] */
    (xdc_Char)0x0,  /* [1279] */
    (xdc_Char)0x41,  /* [1280] */
    (xdc_Char)0x5f,  /* [1281] */
    (xdc_Char)0x70,  /* [1282] */
    (xdc_Char)0x65,  /* [1283] */
    (xdc_Char)0x6e,  /* [1284] */
    (xdc_Char)0x64,  /* [1285] */
    (xdc_Char)0x54,  /* [1286] */
    (xdc_Char)0x61,  /* [1287] */
    (xdc_Char)0x73,  /* [1288] */
    (xdc_Char)0x6b,  /* [1289] */
    (xdc_Char)0x44,  /* [1290] */
    (xdc_Char)0x69,  /* [1291] */
    (xdc_Char)0x73,  /* [1292] */
    (xdc_Char)0x61,  /* [1293] */
    (xdc_Char)0x62,  /* [1294] */
    (xdc_Char)0x6c,  /* [1295] */
    (xdc_Char)0x65,  /* [1296] */
    (xdc_Char)0x64,  /* [1297] */
    (xdc_Char)0x3a,  /* [1298] */
    (xdc_Char)0x20,  /* [1299] */
    (xdc_Char)0x43,  /* [1300] */
    (xdc_Char)0x61,  /* [1301] */
    (xdc_Char)0x6e,  /* [1302] */
    (xdc_Char)0x6e,  /* [1303] */
    (xdc_Char)0x6f,  /* [1304] */
    (xdc_Char)0x74,  /* [1305] */
    (xdc_Char)0x20,  /* [1306] */
    (xdc_Char)0x63,  /* [1307] */
    (xdc_Char)0x61,  /* [1308] */
    (xdc_Char)0x6c,  /* [1309] */
    (xdc_Char)0x6c,  /* [1310] */
    (xdc_Char)0x20,  /* [1311] */
    (xdc_Char)0x53,  /* [1312] */
    (xdc_Char)0x65,  /* [1313] */
    (xdc_Char)0x6d,  /* [1314] */
    (xdc_Char)0x61,  /* [1315] */
    (xdc_Char)0x70,  /* [1316] */
    (xdc_Char)0x68,  /* [1317] */
    (xdc_Char)0x6f,  /* [1318] */
    (xdc_Char)0x72,  /* [1319] */
    (xdc_Char)0x65,  /* [1320] */
    (xdc_Char)0x5f,  /* [1321] */
    (xdc_Char)0x70,  /* [1322] */
    (xdc_Char)0x65,  /* [1323] */
    (xdc_Char)0x6e,  /* [1324] */
    (xdc_Char)0x64,  /* [1325] */
    (xdc_Char)0x28,  /* [1326] */
    (xdc_Char)0x29,  /* [1327] */
    (xdc_Char)0x20,  /* [1328] */
    (xdc_Char)0x77,  /* [1329] */
    (xdc_Char)0x68,  /* [1330] */
    (xdc_Char)0x69,  /* [1331] */
    (xdc_Char)0x6c,  /* [1332] */
    (xdc_Char)0x65,  /* [1333] */
    (xdc_Char)0x20,  /* [1334] */
    (xdc_Char)0x74,  /* [1335] */
    (xdc_Char)0x68,  /* [1336] */
    (xdc_Char)0x65,  /* [1337] */
    (xdc_Char)0x20,  /* [1338] */
    (xdc_Char)0x54,  /* [1339] */
    (xdc_Char)0x61,  /* [1340] */
    (xdc_Char)0x73,  /* [1341] */
    (xdc_Char)0x6b,  /* [1342] */
    (xdc_Char)0x20,  /* [1343] */
    (xdc_Char)0x6f,  /* [1344] */
    (xdc_Char)0x72,  /* [1345] */
    (xdc_Char)0x20,  /* [1346] */
    (xdc_Char)0x53,  /* [1347] */
    (xdc_Char)0x77,  /* [1348] */
    (xdc_Char)0x69,  /* [1349] */
    (xdc_Char)0x20,  /* [1350] */
    (xdc_Char)0x73,  /* [1351] */
    (xdc_Char)0x63,  /* [1352] */
    (xdc_Char)0x68,  /* [1353] */
    (xdc_Char)0x65,  /* [1354] */
    (xdc_Char)0x64,  /* [1355] */
    (xdc_Char)0x75,  /* [1356] */
    (xdc_Char)0x6c,  /* [1357] */
    (xdc_Char)0x65,  /* [1358] */
    (xdc_Char)0x72,  /* [1359] */
    (xdc_Char)0x20,  /* [1360] */
    (xdc_Char)0x69,  /* [1361] */
    (xdc_Char)0x73,  /* [1362] */
    (xdc_Char)0x20,  /* [1363] */
    (xdc_Char)0x64,  /* [1364] */
    (xdc_Char)0x69,  /* [1365] */
    (xdc_Char)0x73,  /* [1366] */
    (xdc_Char)0x61,  /* [1367] */
    (xdc_Char)0x62,  /* [1368] */
    (xdc_Char)0x6c,  /* [1369] */
    (xdc_Char)0x65,  /* [1370] */
    (xdc_Char)0x64,  /* [1371] */
    (xdc_Char)0x2e,  /* [1372] */
    (xdc_Char)0x0,  /* [1373] */
    (xdc_Char)0x41,  /* [1374] */
    (xdc_Char)0x5f,  /* [1375] */
    (xdc_Char)0x73,  /* [1376] */
    (xdc_Char)0x77,  /* [1377] */
    (xdc_Char)0x69,  /* [1378] */
    (xdc_Char)0x44,  /* [1379] */
    (xdc_Char)0x69,  /* [1380] */
    (xdc_Char)0x73,  /* [1381] */
    (xdc_Char)0x61,  /* [1382] */
    (xdc_Char)0x62,  /* [1383] */
    (xdc_Char)0x6c,  /* [1384] */
    (xdc_Char)0x65,  /* [1385] */
    (xdc_Char)0x64,  /* [1386] */
    (xdc_Char)0x3a,  /* [1387] */
    (xdc_Char)0x20,  /* [1388] */
    (xdc_Char)0x43,  /* [1389] */
    (xdc_Char)0x61,  /* [1390] */
    (xdc_Char)0x6e,  /* [1391] */
    (xdc_Char)0x6e,  /* [1392] */
    (xdc_Char)0x6f,  /* [1393] */
    (xdc_Char)0x74,  /* [1394] */
    (xdc_Char)0x20,  /* [1395] */
    (xdc_Char)0x63,  /* [1396] */
    (xdc_Char)0x72,  /* [1397] */
    (xdc_Char)0x65,  /* [1398] */
    (xdc_Char)0x61,  /* [1399] */
    (xdc_Char)0x74,  /* [1400] */
    (xdc_Char)0x65,  /* [1401] */
    (xdc_Char)0x20,  /* [1402] */
    (xdc_Char)0x61,  /* [1403] */
    (xdc_Char)0x20,  /* [1404] */
    (xdc_Char)0x53,  /* [1405] */
    (xdc_Char)0x77,  /* [1406] */
    (xdc_Char)0x69,  /* [1407] */
    (xdc_Char)0x20,  /* [1408] */
    (xdc_Char)0x77,  /* [1409] */
    (xdc_Char)0x68,  /* [1410] */
    (xdc_Char)0x65,  /* [1411] */
    (xdc_Char)0x6e,  /* [1412] */
    (xdc_Char)0x20,  /* [1413] */
    (xdc_Char)0x53,  /* [1414] */
    (xdc_Char)0x77,  /* [1415] */
    (xdc_Char)0x69,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x69,  /* [1418] */
    (xdc_Char)0x73,  /* [1419] */
    (xdc_Char)0x20,  /* [1420] */
    (xdc_Char)0x64,  /* [1421] */
    (xdc_Char)0x69,  /* [1422] */
    (xdc_Char)0x73,  /* [1423] */
    (xdc_Char)0x61,  /* [1424] */
    (xdc_Char)0x62,  /* [1425] */
    (xdc_Char)0x6c,  /* [1426] */
    (xdc_Char)0x65,  /* [1427] */
    (xdc_Char)0x64,  /* [1428] */
    (xdc_Char)0x2e,  /* [1429] */
    (xdc_Char)0x0,  /* [1430] */
    (xdc_Char)0x41,  /* [1431] */
    (xdc_Char)0x5f,  /* [1432] */
    (xdc_Char)0x62,  /* [1433] */
    (xdc_Char)0x61,  /* [1434] */
    (xdc_Char)0x64,  /* [1435] */
    (xdc_Char)0x50,  /* [1436] */
    (xdc_Char)0x72,  /* [1437] */
    (xdc_Char)0x69,  /* [1438] */
    (xdc_Char)0x6f,  /* [1439] */
    (xdc_Char)0x72,  /* [1440] */
    (xdc_Char)0x69,  /* [1441] */
    (xdc_Char)0x74,  /* [1442] */
    (xdc_Char)0x79,  /* [1443] */
    (xdc_Char)0x3a,  /* [1444] */
    (xdc_Char)0x20,  /* [1445] */
    (xdc_Char)0x41,  /* [1446] */
    (xdc_Char)0x6e,  /* [1447] */
    (xdc_Char)0x20,  /* [1448] */
    (xdc_Char)0x69,  /* [1449] */
    (xdc_Char)0x6e,  /* [1450] */
    (xdc_Char)0x76,  /* [1451] */
    (xdc_Char)0x61,  /* [1452] */
    (xdc_Char)0x6c,  /* [1453] */
    (xdc_Char)0x69,  /* [1454] */
    (xdc_Char)0x64,  /* [1455] */
    (xdc_Char)0x20,  /* [1456] */
    (xdc_Char)0x53,  /* [1457] */
    (xdc_Char)0x77,  /* [1458] */
    (xdc_Char)0x69,  /* [1459] */
    (xdc_Char)0x20,  /* [1460] */
    (xdc_Char)0x70,  /* [1461] */
    (xdc_Char)0x72,  /* [1462] */
    (xdc_Char)0x69,  /* [1463] */
    (xdc_Char)0x6f,  /* [1464] */
    (xdc_Char)0x72,  /* [1465] */
    (xdc_Char)0x69,  /* [1466] */
    (xdc_Char)0x74,  /* [1467] */
    (xdc_Char)0x79,  /* [1468] */
    (xdc_Char)0x20,  /* [1469] */
    (xdc_Char)0x77,  /* [1470] */
    (xdc_Char)0x61,  /* [1471] */
    (xdc_Char)0x73,  /* [1472] */
    (xdc_Char)0x20,  /* [1473] */
    (xdc_Char)0x75,  /* [1474] */
    (xdc_Char)0x73,  /* [1475] */
    (xdc_Char)0x65,  /* [1476] */
    (xdc_Char)0x64,  /* [1477] */
    (xdc_Char)0x2e,  /* [1478] */
    (xdc_Char)0x0,  /* [1479] */
    (xdc_Char)0x41,  /* [1480] */
    (xdc_Char)0x5f,  /* [1481] */
    (xdc_Char)0x62,  /* [1482] */
    (xdc_Char)0x61,  /* [1483] */
    (xdc_Char)0x64,  /* [1484] */
    (xdc_Char)0x54,  /* [1485] */
    (xdc_Char)0x68,  /* [1486] */
    (xdc_Char)0x72,  /* [1487] */
    (xdc_Char)0x65,  /* [1488] */
    (xdc_Char)0x61,  /* [1489] */
    (xdc_Char)0x64,  /* [1490] */
    (xdc_Char)0x54,  /* [1491] */
    (xdc_Char)0x79,  /* [1492] */
    (xdc_Char)0x70,  /* [1493] */
    (xdc_Char)0x65,  /* [1494] */
    (xdc_Char)0x3a,  /* [1495] */
    (xdc_Char)0x20,  /* [1496] */
    (xdc_Char)0x43,  /* [1497] */
    (xdc_Char)0x61,  /* [1498] */
    (xdc_Char)0x6e,  /* [1499] */
    (xdc_Char)0x6e,  /* [1500] */
    (xdc_Char)0x6f,  /* [1501] */
    (xdc_Char)0x74,  /* [1502] */
    (xdc_Char)0x20,  /* [1503] */
    (xdc_Char)0x63,  /* [1504] */
    (xdc_Char)0x72,  /* [1505] */
    (xdc_Char)0x65,  /* [1506] */
    (xdc_Char)0x61,  /* [1507] */
    (xdc_Char)0x74,  /* [1508] */
    (xdc_Char)0x65,  /* [1509] */
    (xdc_Char)0x2f,  /* [1510] */
    (xdc_Char)0x64,  /* [1511] */
    (xdc_Char)0x65,  /* [1512] */
    (xdc_Char)0x6c,  /* [1513] */
    (xdc_Char)0x65,  /* [1514] */
    (xdc_Char)0x74,  /* [1515] */
    (xdc_Char)0x65,  /* [1516] */
    (xdc_Char)0x20,  /* [1517] */
    (xdc_Char)0x61,  /* [1518] */
    (xdc_Char)0x20,  /* [1519] */
    (xdc_Char)0x74,  /* [1520] */
    (xdc_Char)0x61,  /* [1521] */
    (xdc_Char)0x73,  /* [1522] */
    (xdc_Char)0x6b,  /* [1523] */
    (xdc_Char)0x20,  /* [1524] */
    (xdc_Char)0x66,  /* [1525] */
    (xdc_Char)0x72,  /* [1526] */
    (xdc_Char)0x6f,  /* [1527] */
    (xdc_Char)0x6d,  /* [1528] */
    (xdc_Char)0x20,  /* [1529] */
    (xdc_Char)0x48,  /* [1530] */
    (xdc_Char)0x77,  /* [1531] */
    (xdc_Char)0x69,  /* [1532] */
    (xdc_Char)0x20,  /* [1533] */
    (xdc_Char)0x6f,  /* [1534] */
    (xdc_Char)0x72,  /* [1535] */
    (xdc_Char)0x20,  /* [1536] */
    (xdc_Char)0x53,  /* [1537] */
    (xdc_Char)0x77,  /* [1538] */
    (xdc_Char)0x69,  /* [1539] */
    (xdc_Char)0x20,  /* [1540] */
    (xdc_Char)0x74,  /* [1541] */
    (xdc_Char)0x68,  /* [1542] */
    (xdc_Char)0x72,  /* [1543] */
    (xdc_Char)0x65,  /* [1544] */
    (xdc_Char)0x61,  /* [1545] */
    (xdc_Char)0x64,  /* [1546] */
    (xdc_Char)0x2e,  /* [1547] */
    (xdc_Char)0x0,  /* [1548] */
    (xdc_Char)0x41,  /* [1549] */
    (xdc_Char)0x5f,  /* [1550] */
    (xdc_Char)0x62,  /* [1551] */
    (xdc_Char)0x61,  /* [1552] */
    (xdc_Char)0x64,  /* [1553] */
    (xdc_Char)0x54,  /* [1554] */
    (xdc_Char)0x61,  /* [1555] */
    (xdc_Char)0x73,  /* [1556] */
    (xdc_Char)0x6b,  /* [1557] */
    (xdc_Char)0x53,  /* [1558] */
    (xdc_Char)0x74,  /* [1559] */
    (xdc_Char)0x61,  /* [1560] */
    (xdc_Char)0x74,  /* [1561] */
    (xdc_Char)0x65,  /* [1562] */
    (xdc_Char)0x3a,  /* [1563] */
    (xdc_Char)0x20,  /* [1564] */
    (xdc_Char)0x43,  /* [1565] */
    (xdc_Char)0x61,  /* [1566] */
    (xdc_Char)0x6e,  /* [1567] */
    (xdc_Char)0x27,  /* [1568] */
    (xdc_Char)0x74,  /* [1569] */
    (xdc_Char)0x20,  /* [1570] */
    (xdc_Char)0x64,  /* [1571] */
    (xdc_Char)0x65,  /* [1572] */
    (xdc_Char)0x6c,  /* [1573] */
    (xdc_Char)0x65,  /* [1574] */
    (xdc_Char)0x74,  /* [1575] */
    (xdc_Char)0x65,  /* [1576] */
    (xdc_Char)0x20,  /* [1577] */
    (xdc_Char)0x61,  /* [1578] */
    (xdc_Char)0x20,  /* [1579] */
    (xdc_Char)0x74,  /* [1580] */
    (xdc_Char)0x61,  /* [1581] */
    (xdc_Char)0x73,  /* [1582] */
    (xdc_Char)0x6b,  /* [1583] */
    (xdc_Char)0x20,  /* [1584] */
    (xdc_Char)0x69,  /* [1585] */
    (xdc_Char)0x6e,  /* [1586] */
    (xdc_Char)0x20,  /* [1587] */
    (xdc_Char)0x52,  /* [1588] */
    (xdc_Char)0x55,  /* [1589] */
    (xdc_Char)0x4e,  /* [1590] */
    (xdc_Char)0x4e,  /* [1591] */
    (xdc_Char)0x49,  /* [1592] */
    (xdc_Char)0x4e,  /* [1593] */
    (xdc_Char)0x47,  /* [1594] */
    (xdc_Char)0x20,  /* [1595] */
    (xdc_Char)0x73,  /* [1596] */
    (xdc_Char)0x74,  /* [1597] */
    (xdc_Char)0x61,  /* [1598] */
    (xdc_Char)0x74,  /* [1599] */
    (xdc_Char)0x65,  /* [1600] */
    (xdc_Char)0x2e,  /* [1601] */
    (xdc_Char)0x0,  /* [1602] */
    (xdc_Char)0x41,  /* [1603] */
    (xdc_Char)0x5f,  /* [1604] */
    (xdc_Char)0x6e,  /* [1605] */
    (xdc_Char)0x6f,  /* [1606] */
    (xdc_Char)0x50,  /* [1607] */
    (xdc_Char)0x65,  /* [1608] */
    (xdc_Char)0x6e,  /* [1609] */
    (xdc_Char)0x64,  /* [1610] */
    (xdc_Char)0x45,  /* [1611] */
    (xdc_Char)0x6c,  /* [1612] */
    (xdc_Char)0x65,  /* [1613] */
    (xdc_Char)0x6d,  /* [1614] */
    (xdc_Char)0x3a,  /* [1615] */
    (xdc_Char)0x20,  /* [1616] */
    (xdc_Char)0x4e,  /* [1617] */
    (xdc_Char)0x6f,  /* [1618] */
    (xdc_Char)0x74,  /* [1619] */
    (xdc_Char)0x20,  /* [1620] */
    (xdc_Char)0x65,  /* [1621] */
    (xdc_Char)0x6e,  /* [1622] */
    (xdc_Char)0x6f,  /* [1623] */
    (xdc_Char)0x75,  /* [1624] */
    (xdc_Char)0x67,  /* [1625] */
    (xdc_Char)0x68,  /* [1626] */
    (xdc_Char)0x20,  /* [1627] */
    (xdc_Char)0x69,  /* [1628] */
    (xdc_Char)0x6e,  /* [1629] */
    (xdc_Char)0x66,  /* [1630] */
    (xdc_Char)0x6f,  /* [1631] */
    (xdc_Char)0x20,  /* [1632] */
    (xdc_Char)0x74,  /* [1633] */
    (xdc_Char)0x6f,  /* [1634] */
    (xdc_Char)0x20,  /* [1635] */
    (xdc_Char)0x64,  /* [1636] */
    (xdc_Char)0x65,  /* [1637] */
    (xdc_Char)0x6c,  /* [1638] */
    (xdc_Char)0x65,  /* [1639] */
    (xdc_Char)0x74,  /* [1640] */
    (xdc_Char)0x65,  /* [1641] */
    (xdc_Char)0x20,  /* [1642] */
    (xdc_Char)0x42,  /* [1643] */
    (xdc_Char)0x4c,  /* [1644] */
    (xdc_Char)0x4f,  /* [1645] */
    (xdc_Char)0x43,  /* [1646] */
    (xdc_Char)0x4b,  /* [1647] */
    (xdc_Char)0x45,  /* [1648] */
    (xdc_Char)0x44,  /* [1649] */
    (xdc_Char)0x20,  /* [1650] */
    (xdc_Char)0x74,  /* [1651] */
    (xdc_Char)0x61,  /* [1652] */
    (xdc_Char)0x73,  /* [1653] */
    (xdc_Char)0x6b,  /* [1654] */
    (xdc_Char)0x2e,  /* [1655] */
    (xdc_Char)0x0,  /* [1656] */
    (xdc_Char)0x41,  /* [1657] */
    (xdc_Char)0x5f,  /* [1658] */
    (xdc_Char)0x74,  /* [1659] */
    (xdc_Char)0x61,  /* [1660] */
    (xdc_Char)0x73,  /* [1661] */
    (xdc_Char)0x6b,  /* [1662] */
    (xdc_Char)0x44,  /* [1663] */
    (xdc_Char)0x69,  /* [1664] */
    (xdc_Char)0x73,  /* [1665] */
    (xdc_Char)0x61,  /* [1666] */
    (xdc_Char)0x62,  /* [1667] */
    (xdc_Char)0x6c,  /* [1668] */
    (xdc_Char)0x65,  /* [1669] */
    (xdc_Char)0x64,  /* [1670] */
    (xdc_Char)0x3a,  /* [1671] */
    (xdc_Char)0x20,  /* [1672] */
    (xdc_Char)0x43,  /* [1673] */
    (xdc_Char)0x61,  /* [1674] */
    (xdc_Char)0x6e,  /* [1675] */
    (xdc_Char)0x6e,  /* [1676] */
    (xdc_Char)0x6f,  /* [1677] */
    (xdc_Char)0x74,  /* [1678] */
    (xdc_Char)0x20,  /* [1679] */
    (xdc_Char)0x63,  /* [1680] */
    (xdc_Char)0x72,  /* [1681] */
    (xdc_Char)0x65,  /* [1682] */
    (xdc_Char)0x61,  /* [1683] */
    (xdc_Char)0x74,  /* [1684] */
    (xdc_Char)0x65,  /* [1685] */
    (xdc_Char)0x20,  /* [1686] */
    (xdc_Char)0x61,  /* [1687] */
    (xdc_Char)0x20,  /* [1688] */
    (xdc_Char)0x74,  /* [1689] */
    (xdc_Char)0x61,  /* [1690] */
    (xdc_Char)0x73,  /* [1691] */
    (xdc_Char)0x6b,  /* [1692] */
    (xdc_Char)0x20,  /* [1693] */
    (xdc_Char)0x77,  /* [1694] */
    (xdc_Char)0x68,  /* [1695] */
    (xdc_Char)0x65,  /* [1696] */
    (xdc_Char)0x6e,  /* [1697] */
    (xdc_Char)0x20,  /* [1698] */
    (xdc_Char)0x74,  /* [1699] */
    (xdc_Char)0x61,  /* [1700] */
    (xdc_Char)0x73,  /* [1701] */
    (xdc_Char)0x6b,  /* [1702] */
    (xdc_Char)0x69,  /* [1703] */
    (xdc_Char)0x6e,  /* [1704] */
    (xdc_Char)0x67,  /* [1705] */
    (xdc_Char)0x20,  /* [1706] */
    (xdc_Char)0x69,  /* [1707] */
    (xdc_Char)0x73,  /* [1708] */
    (xdc_Char)0x20,  /* [1709] */
    (xdc_Char)0x64,  /* [1710] */
    (xdc_Char)0x69,  /* [1711] */
    (xdc_Char)0x73,  /* [1712] */
    (xdc_Char)0x61,  /* [1713] */
    (xdc_Char)0x62,  /* [1714] */
    (xdc_Char)0x6c,  /* [1715] */
    (xdc_Char)0x65,  /* [1716] */
    (xdc_Char)0x64,  /* [1717] */
    (xdc_Char)0x2e,  /* [1718] */
    (xdc_Char)0x0,  /* [1719] */
    (xdc_Char)0x41,  /* [1720] */
    (xdc_Char)0x5f,  /* [1721] */
    (xdc_Char)0x62,  /* [1722] */
    (xdc_Char)0x61,  /* [1723] */
    (xdc_Char)0x64,  /* [1724] */
    (xdc_Char)0x50,  /* [1725] */
    (xdc_Char)0x72,  /* [1726] */
    (xdc_Char)0x69,  /* [1727] */
    (xdc_Char)0x6f,  /* [1728] */
    (xdc_Char)0x72,  /* [1729] */
    (xdc_Char)0x69,  /* [1730] */
    (xdc_Char)0x74,  /* [1731] */
    (xdc_Char)0x79,  /* [1732] */
    (xdc_Char)0x3a,  /* [1733] */
    (xdc_Char)0x20,  /* [1734] */
    (xdc_Char)0x41,  /* [1735] */
    (xdc_Char)0x6e,  /* [1736] */
    (xdc_Char)0x20,  /* [1737] */
    (xdc_Char)0x69,  /* [1738] */
    (xdc_Char)0x6e,  /* [1739] */
    (xdc_Char)0x76,  /* [1740] */
    (xdc_Char)0x61,  /* [1741] */
    (xdc_Char)0x6c,  /* [1742] */
    (xdc_Char)0x69,  /* [1743] */
    (xdc_Char)0x64,  /* [1744] */
    (xdc_Char)0x20,  /* [1745] */
    (xdc_Char)0x74,  /* [1746] */
    (xdc_Char)0x61,  /* [1747] */
    (xdc_Char)0x73,  /* [1748] */
    (xdc_Char)0x6b,  /* [1749] */
    (xdc_Char)0x20,  /* [1750] */
    (xdc_Char)0x70,  /* [1751] */
    (xdc_Char)0x72,  /* [1752] */
    (xdc_Char)0x69,  /* [1753] */
    (xdc_Char)0x6f,  /* [1754] */
    (xdc_Char)0x72,  /* [1755] */
    (xdc_Char)0x69,  /* [1756] */
    (xdc_Char)0x74,  /* [1757] */
    (xdc_Char)0x79,  /* [1758] */
    (xdc_Char)0x20,  /* [1759] */
    (xdc_Char)0x77,  /* [1760] */
    (xdc_Char)0x61,  /* [1761] */
    (xdc_Char)0x73,  /* [1762] */
    (xdc_Char)0x20,  /* [1763] */
    (xdc_Char)0x75,  /* [1764] */
    (xdc_Char)0x73,  /* [1765] */
    (xdc_Char)0x65,  /* [1766] */
    (xdc_Char)0x64,  /* [1767] */
    (xdc_Char)0x2e,  /* [1768] */
    (xdc_Char)0x0,  /* [1769] */
    (xdc_Char)0x41,  /* [1770] */
    (xdc_Char)0x5f,  /* [1771] */
    (xdc_Char)0x62,  /* [1772] */
    (xdc_Char)0x61,  /* [1773] */
    (xdc_Char)0x64,  /* [1774] */
    (xdc_Char)0x54,  /* [1775] */
    (xdc_Char)0x69,  /* [1776] */
    (xdc_Char)0x6d,  /* [1777] */
    (xdc_Char)0x65,  /* [1778] */
    (xdc_Char)0x6f,  /* [1779] */
    (xdc_Char)0x75,  /* [1780] */
    (xdc_Char)0x74,  /* [1781] */
    (xdc_Char)0x3a,  /* [1782] */
    (xdc_Char)0x20,  /* [1783] */
    (xdc_Char)0x43,  /* [1784] */
    (xdc_Char)0x61,  /* [1785] */
    (xdc_Char)0x6e,  /* [1786] */
    (xdc_Char)0x27,  /* [1787] */
    (xdc_Char)0x74,  /* [1788] */
    (xdc_Char)0x20,  /* [1789] */
    (xdc_Char)0x73,  /* [1790] */
    (xdc_Char)0x6c,  /* [1791] */
    (xdc_Char)0x65,  /* [1792] */
    (xdc_Char)0x65,  /* [1793] */
    (xdc_Char)0x70,  /* [1794] */
    (xdc_Char)0x20,  /* [1795] */
    (xdc_Char)0x46,  /* [1796] */
    (xdc_Char)0x4f,  /* [1797] */
    (xdc_Char)0x52,  /* [1798] */
    (xdc_Char)0x45,  /* [1799] */
    (xdc_Char)0x56,  /* [1800] */
    (xdc_Char)0x45,  /* [1801] */
    (xdc_Char)0x52,  /* [1802] */
    (xdc_Char)0x2e,  /* [1803] */
    (xdc_Char)0x0,  /* [1804] */
    (xdc_Char)0x41,  /* [1805] */
    (xdc_Char)0x5f,  /* [1806] */
    (xdc_Char)0x62,  /* [1807] */
    (xdc_Char)0x61,  /* [1808] */
    (xdc_Char)0x64,  /* [1809] */
    (xdc_Char)0x41,  /* [1810] */
    (xdc_Char)0x66,  /* [1811] */
    (xdc_Char)0x66,  /* [1812] */
    (xdc_Char)0x69,  /* [1813] */
    (xdc_Char)0x6e,  /* [1814] */
    (xdc_Char)0x69,  /* [1815] */
    (xdc_Char)0x74,  /* [1816] */
    (xdc_Char)0x79,  /* [1817] */
    (xdc_Char)0x3a,  /* [1818] */
    (xdc_Char)0x20,  /* [1819] */
    (xdc_Char)0x49,  /* [1820] */
    (xdc_Char)0x6e,  /* [1821] */
    (xdc_Char)0x76,  /* [1822] */
    (xdc_Char)0x61,  /* [1823] */
    (xdc_Char)0x6c,  /* [1824] */
    (xdc_Char)0x69,  /* [1825] */
    (xdc_Char)0x64,  /* [1826] */
    (xdc_Char)0x20,  /* [1827] */
    (xdc_Char)0x61,  /* [1828] */
    (xdc_Char)0x66,  /* [1829] */
    (xdc_Char)0x66,  /* [1830] */
    (xdc_Char)0x69,  /* [1831] */
    (xdc_Char)0x6e,  /* [1832] */
    (xdc_Char)0x69,  /* [1833] */
    (xdc_Char)0x74,  /* [1834] */
    (xdc_Char)0x79,  /* [1835] */
    (xdc_Char)0x2e,  /* [1836] */
    (xdc_Char)0x0,  /* [1837] */
    (xdc_Char)0x41,  /* [1838] */
    (xdc_Char)0x5f,  /* [1839] */
    (xdc_Char)0x73,  /* [1840] */
    (xdc_Char)0x6c,  /* [1841] */
    (xdc_Char)0x65,  /* [1842] */
    (xdc_Char)0x65,  /* [1843] */
    (xdc_Char)0x70,  /* [1844] */
    (xdc_Char)0x54,  /* [1845] */
    (xdc_Char)0x61,  /* [1846] */
    (xdc_Char)0x73,  /* [1847] */
    (xdc_Char)0x6b,  /* [1848] */
    (xdc_Char)0x44,  /* [1849] */
    (xdc_Char)0x69,  /* [1850] */
    (xdc_Char)0x73,  /* [1851] */
    (xdc_Char)0x61,  /* [1852] */
    (xdc_Char)0x62,  /* [1853] */
    (xdc_Char)0x6c,  /* [1854] */
    (xdc_Char)0x65,  /* [1855] */
    (xdc_Char)0x64,  /* [1856] */
    (xdc_Char)0x3a,  /* [1857] */
    (xdc_Char)0x20,  /* [1858] */
    (xdc_Char)0x43,  /* [1859] */
    (xdc_Char)0x61,  /* [1860] */
    (xdc_Char)0x6e,  /* [1861] */
    (xdc_Char)0x6e,  /* [1862] */
    (xdc_Char)0x6f,  /* [1863] */
    (xdc_Char)0x74,  /* [1864] */
    (xdc_Char)0x20,  /* [1865] */
    (xdc_Char)0x63,  /* [1866] */
    (xdc_Char)0x61,  /* [1867] */
    (xdc_Char)0x6c,  /* [1868] */
    (xdc_Char)0x6c,  /* [1869] */
    (xdc_Char)0x20,  /* [1870] */
    (xdc_Char)0x54,  /* [1871] */
    (xdc_Char)0x61,  /* [1872] */
    (xdc_Char)0x73,  /* [1873] */
    (xdc_Char)0x6b,  /* [1874] */
    (xdc_Char)0x5f,  /* [1875] */
    (xdc_Char)0x73,  /* [1876] */
    (xdc_Char)0x6c,  /* [1877] */
    (xdc_Char)0x65,  /* [1878] */
    (xdc_Char)0x65,  /* [1879] */
    (xdc_Char)0x70,  /* [1880] */
    (xdc_Char)0x28,  /* [1881] */
    (xdc_Char)0x29,  /* [1882] */
    (xdc_Char)0x20,  /* [1883] */
    (xdc_Char)0x77,  /* [1884] */
    (xdc_Char)0x68,  /* [1885] */
    (xdc_Char)0x69,  /* [1886] */
    (xdc_Char)0x6c,  /* [1887] */
    (xdc_Char)0x65,  /* [1888] */
    (xdc_Char)0x20,  /* [1889] */
    (xdc_Char)0x74,  /* [1890] */
    (xdc_Char)0x68,  /* [1891] */
    (xdc_Char)0x65,  /* [1892] */
    (xdc_Char)0x20,  /* [1893] */
    (xdc_Char)0x54,  /* [1894] */
    (xdc_Char)0x61,  /* [1895] */
    (xdc_Char)0x73,  /* [1896] */
    (xdc_Char)0x6b,  /* [1897] */
    (xdc_Char)0x20,  /* [1898] */
    (xdc_Char)0x73,  /* [1899] */
    (xdc_Char)0x63,  /* [1900] */
    (xdc_Char)0x68,  /* [1901] */
    (xdc_Char)0x65,  /* [1902] */
    (xdc_Char)0x64,  /* [1903] */
    (xdc_Char)0x75,  /* [1904] */
    (xdc_Char)0x6c,  /* [1905] */
    (xdc_Char)0x65,  /* [1906] */
    (xdc_Char)0x72,  /* [1907] */
    (xdc_Char)0x20,  /* [1908] */
    (xdc_Char)0x69,  /* [1909] */
    (xdc_Char)0x73,  /* [1910] */
    (xdc_Char)0x20,  /* [1911] */
    (xdc_Char)0x64,  /* [1912] */
    (xdc_Char)0x69,  /* [1913] */
    (xdc_Char)0x73,  /* [1914] */
    (xdc_Char)0x61,  /* [1915] */
    (xdc_Char)0x62,  /* [1916] */
    (xdc_Char)0x6c,  /* [1917] */
    (xdc_Char)0x65,  /* [1918] */
    (xdc_Char)0x64,  /* [1919] */
    (xdc_Char)0x2e,  /* [1920] */
    (xdc_Char)0x0,  /* [1921] */
    (xdc_Char)0x41,  /* [1922] */
    (xdc_Char)0x5f,  /* [1923] */
    (xdc_Char)0x69,  /* [1924] */
    (xdc_Char)0x6e,  /* [1925] */
    (xdc_Char)0x76,  /* [1926] */
    (xdc_Char)0x61,  /* [1927] */
    (xdc_Char)0x6c,  /* [1928] */
    (xdc_Char)0x69,  /* [1929] */
    (xdc_Char)0x64,  /* [1930] */
    (xdc_Char)0x43,  /* [1931] */
    (xdc_Char)0x6f,  /* [1932] */
    (xdc_Char)0x72,  /* [1933] */
    (xdc_Char)0x65,  /* [1934] */
    (xdc_Char)0x49,  /* [1935] */
    (xdc_Char)0x64,  /* [1936] */
    (xdc_Char)0x3a,  /* [1937] */
    (xdc_Char)0x20,  /* [1938] */
    (xdc_Char)0x43,  /* [1939] */
    (xdc_Char)0x61,  /* [1940] */
    (xdc_Char)0x6e,  /* [1941] */
    (xdc_Char)0x6e,  /* [1942] */
    (xdc_Char)0x6f,  /* [1943] */
    (xdc_Char)0x74,  /* [1944] */
    (xdc_Char)0x20,  /* [1945] */
    (xdc_Char)0x70,  /* [1946] */
    (xdc_Char)0x61,  /* [1947] */
    (xdc_Char)0x73,  /* [1948] */
    (xdc_Char)0x73,  /* [1949] */
    (xdc_Char)0x20,  /* [1950] */
    (xdc_Char)0x61,  /* [1951] */
    (xdc_Char)0x20,  /* [1952] */
    (xdc_Char)0x6e,  /* [1953] */
    (xdc_Char)0x6f,  /* [1954] */
    (xdc_Char)0x6e,  /* [1955] */
    (xdc_Char)0x2d,  /* [1956] */
    (xdc_Char)0x7a,  /* [1957] */
    (xdc_Char)0x65,  /* [1958] */
    (xdc_Char)0x72,  /* [1959] */
    (xdc_Char)0x6f,  /* [1960] */
    (xdc_Char)0x20,  /* [1961] */
    (xdc_Char)0x43,  /* [1962] */
    (xdc_Char)0x6f,  /* [1963] */
    (xdc_Char)0x72,  /* [1964] */
    (xdc_Char)0x65,  /* [1965] */
    (xdc_Char)0x49,  /* [1966] */
    (xdc_Char)0x64,  /* [1967] */
    (xdc_Char)0x20,  /* [1968] */
    (xdc_Char)0x69,  /* [1969] */
    (xdc_Char)0x6e,  /* [1970] */
    (xdc_Char)0x20,  /* [1971] */
    (xdc_Char)0x61,  /* [1972] */
    (xdc_Char)0x20,  /* [1973] */
    (xdc_Char)0x6e,  /* [1974] */
    (xdc_Char)0x6f,  /* [1975] */
    (xdc_Char)0x6e,  /* [1976] */
    (xdc_Char)0x2d,  /* [1977] */
    (xdc_Char)0x53,  /* [1978] */
    (xdc_Char)0x4d,  /* [1979] */
    (xdc_Char)0x50,  /* [1980] */
    (xdc_Char)0x20,  /* [1981] */
    (xdc_Char)0x61,  /* [1982] */
    (xdc_Char)0x70,  /* [1983] */
    (xdc_Char)0x70,  /* [1984] */
    (xdc_Char)0x6c,  /* [1985] */
    (xdc_Char)0x69,  /* [1986] */
    (xdc_Char)0x63,  /* [1987] */
    (xdc_Char)0x61,  /* [1988] */
    (xdc_Char)0x74,  /* [1989] */
    (xdc_Char)0x69,  /* [1990] */
    (xdc_Char)0x6f,  /* [1991] */
    (xdc_Char)0x6e,  /* [1992] */
    (xdc_Char)0x2e,  /* [1993] */
    (xdc_Char)0x0,  /* [1994] */
    (xdc_Char)0x41,  /* [1995] */
    (xdc_Char)0x5f,  /* [1996] */
    (xdc_Char)0x75,  /* [1997] */
    (xdc_Char)0x6e,  /* [1998] */
    (xdc_Char)0x73,  /* [1999] */
    (xdc_Char)0x75,  /* [2000] */
    (xdc_Char)0x70,  /* [2001] */
    (xdc_Char)0x70,  /* [2002] */
    (xdc_Char)0x6f,  /* [2003] */
    (xdc_Char)0x72,  /* [2004] */
    (xdc_Char)0x74,  /* [2005] */
    (xdc_Char)0x65,  /* [2006] */
    (xdc_Char)0x64,  /* [2007] */
    (xdc_Char)0x4d,  /* [2008] */
    (xdc_Char)0x61,  /* [2009] */
    (xdc_Char)0x73,  /* [2010] */
    (xdc_Char)0x6b,  /* [2011] */
    (xdc_Char)0x69,  /* [2012] */
    (xdc_Char)0x6e,  /* [2013] */
    (xdc_Char)0x67,  /* [2014] */
    (xdc_Char)0x4f,  /* [2015] */
    (xdc_Char)0x70,  /* [2016] */
    (xdc_Char)0x74,  /* [2017] */
    (xdc_Char)0x69,  /* [2018] */
    (xdc_Char)0x6f,  /* [2019] */
    (xdc_Char)0x6e,  /* [2020] */
    (xdc_Char)0x3a,  /* [2021] */
    (xdc_Char)0x20,  /* [2022] */
    (xdc_Char)0x75,  /* [2023] */
    (xdc_Char)0x6e,  /* [2024] */
    (xdc_Char)0x73,  /* [2025] */
    (xdc_Char)0x75,  /* [2026] */
    (xdc_Char)0x70,  /* [2027] */
    (xdc_Char)0x70,  /* [2028] */
    (xdc_Char)0x6f,  /* [2029] */
    (xdc_Char)0x72,  /* [2030] */
    (xdc_Char)0x74,  /* [2031] */
    (xdc_Char)0x65,  /* [2032] */
    (xdc_Char)0x64,  /* [2033] */
    (xdc_Char)0x20,  /* [2034] */
    (xdc_Char)0x6d,  /* [2035] */
    (xdc_Char)0x61,  /* [2036] */
    (xdc_Char)0x73,  /* [2037] */
    (xdc_Char)0x6b,  /* [2038] */
    (xdc_Char)0x53,  /* [2039] */
    (xdc_Char)0x65,  /* [2040] */
    (xdc_Char)0x74,  /* [2041] */
    (xdc_Char)0x74,  /* [2042] */
    (xdc_Char)0x69,  /* [2043] */
    (xdc_Char)0x6e,  /* [2044] */
    (xdc_Char)0x67,  /* [2045] */
    (xdc_Char)0x2e,  /* [2046] */
    (xdc_Char)0x0,  /* [2047] */
    (xdc_Char)0x62,  /* [2048] */
    (xdc_Char)0x75,  /* [2049] */
    (xdc_Char)0x66,  /* [2050] */
    (xdc_Char)0x20,  /* [2051] */
    (xdc_Char)0x70,  /* [2052] */
    (xdc_Char)0x61,  /* [2053] */
    (xdc_Char)0x72,  /* [2054] */
    (xdc_Char)0x61,  /* [2055] */
    (xdc_Char)0x6d,  /* [2056] */
    (xdc_Char)0x65,  /* [2057] */
    (xdc_Char)0x74,  /* [2058] */
    (xdc_Char)0x65,  /* [2059] */
    (xdc_Char)0x72,  /* [2060] */
    (xdc_Char)0x20,  /* [2061] */
    (xdc_Char)0x63,  /* [2062] */
    (xdc_Char)0x61,  /* [2063] */
    (xdc_Char)0x6e,  /* [2064] */
    (xdc_Char)0x6e,  /* [2065] */
    (xdc_Char)0x6f,  /* [2066] */
    (xdc_Char)0x74,  /* [2067] */
    (xdc_Char)0x20,  /* [2068] */
    (xdc_Char)0x62,  /* [2069] */
    (xdc_Char)0x65,  /* [2070] */
    (xdc_Char)0x20,  /* [2071] */
    (xdc_Char)0x6e,  /* [2072] */
    (xdc_Char)0x75,  /* [2073] */
    (xdc_Char)0x6c,  /* [2074] */
    (xdc_Char)0x6c,  /* [2075] */
    (xdc_Char)0x0,  /* [2076] */
    (xdc_Char)0x62,  /* [2077] */
    (xdc_Char)0x75,  /* [2078] */
    (xdc_Char)0x66,  /* [2079] */
    (xdc_Char)0x20,  /* [2080] */
    (xdc_Char)0x6e,  /* [2081] */
    (xdc_Char)0x6f,  /* [2082] */
    (xdc_Char)0x74,  /* [2083] */
    (xdc_Char)0x20,  /* [2084] */
    (xdc_Char)0x70,  /* [2085] */
    (xdc_Char)0x72,  /* [2086] */
    (xdc_Char)0x6f,  /* [2087] */
    (xdc_Char)0x70,  /* [2088] */
    (xdc_Char)0x65,  /* [2089] */
    (xdc_Char)0x72,  /* [2090] */
    (xdc_Char)0x6c,  /* [2091] */
    (xdc_Char)0x79,  /* [2092] */
    (xdc_Char)0x20,  /* [2093] */
    (xdc_Char)0x61,  /* [2094] */
    (xdc_Char)0x6c,  /* [2095] */
    (xdc_Char)0x69,  /* [2096] */
    (xdc_Char)0x67,  /* [2097] */
    (xdc_Char)0x6e,  /* [2098] */
    (xdc_Char)0x65,  /* [2099] */
    (xdc_Char)0x64,  /* [2100] */
    (xdc_Char)0x0,  /* [2101] */
    (xdc_Char)0x61,  /* [2102] */
    (xdc_Char)0x6c,  /* [2103] */
    (xdc_Char)0x69,  /* [2104] */
    (xdc_Char)0x67,  /* [2105] */
    (xdc_Char)0x6e,  /* [2106] */
    (xdc_Char)0x20,  /* [2107] */
    (xdc_Char)0x70,  /* [2108] */
    (xdc_Char)0x61,  /* [2109] */
    (xdc_Char)0x72,  /* [2110] */
    (xdc_Char)0x61,  /* [2111] */
    (xdc_Char)0x6d,  /* [2112] */
    (xdc_Char)0x65,  /* [2113] */
    (xdc_Char)0x74,  /* [2114] */
    (xdc_Char)0x65,  /* [2115] */
    (xdc_Char)0x72,  /* [2116] */
    (xdc_Char)0x20,  /* [2117] */
    (xdc_Char)0x6d,  /* [2118] */
    (xdc_Char)0x75,  /* [2119] */
    (xdc_Char)0x73,  /* [2120] */
    (xdc_Char)0x74,  /* [2121] */
    (xdc_Char)0x20,  /* [2122] */
    (xdc_Char)0x62,  /* [2123] */
    (xdc_Char)0x65,  /* [2124] */
    (xdc_Char)0x20,  /* [2125] */
    (xdc_Char)0x30,  /* [2126] */
    (xdc_Char)0x20,  /* [2127] */
    (xdc_Char)0x6f,  /* [2128] */
    (xdc_Char)0x72,  /* [2129] */
    (xdc_Char)0x20,  /* [2130] */
    (xdc_Char)0x61,  /* [2131] */
    (xdc_Char)0x20,  /* [2132] */
    (xdc_Char)0x70,  /* [2133] */
    (xdc_Char)0x6f,  /* [2134] */
    (xdc_Char)0x77,  /* [2135] */
    (xdc_Char)0x65,  /* [2136] */
    (xdc_Char)0x72,  /* [2137] */
    (xdc_Char)0x20,  /* [2138] */
    (xdc_Char)0x6f,  /* [2139] */
    (xdc_Char)0x66,  /* [2140] */
    (xdc_Char)0x20,  /* [2141] */
    (xdc_Char)0x32,  /* [2142] */
    (xdc_Char)0x20,  /* [2143] */
    (xdc_Char)0x3e,  /* [2144] */
    (xdc_Char)0x3d,  /* [2145] */
    (xdc_Char)0x20,  /* [2146] */
    (xdc_Char)0x74,  /* [2147] */
    (xdc_Char)0x68,  /* [2148] */
    (xdc_Char)0x65,  /* [2149] */
    (xdc_Char)0x20,  /* [2150] */
    (xdc_Char)0x76,  /* [2151] */
    (xdc_Char)0x61,  /* [2152] */
    (xdc_Char)0x6c,  /* [2153] */
    (xdc_Char)0x75,  /* [2154] */
    (xdc_Char)0x65,  /* [2155] */
    (xdc_Char)0x20,  /* [2156] */
    (xdc_Char)0x6f,  /* [2157] */
    (xdc_Char)0x66,  /* [2158] */
    (xdc_Char)0x20,  /* [2159] */
    (xdc_Char)0x4d,  /* [2160] */
    (xdc_Char)0x65,  /* [2161] */
    (xdc_Char)0x6d,  /* [2162] */
    (xdc_Char)0x6f,  /* [2163] */
    (xdc_Char)0x72,  /* [2164] */
    (xdc_Char)0x79,  /* [2165] */
    (xdc_Char)0x5f,  /* [2166] */
    (xdc_Char)0x67,  /* [2167] */
    (xdc_Char)0x65,  /* [2168] */
    (xdc_Char)0x74,  /* [2169] */
    (xdc_Char)0x4d,  /* [2170] */
    (xdc_Char)0x61,  /* [2171] */
    (xdc_Char)0x78,  /* [2172] */
    (xdc_Char)0x44,  /* [2173] */
    (xdc_Char)0x65,  /* [2174] */
    (xdc_Char)0x66,  /* [2175] */
    (xdc_Char)0x61,  /* [2176] */
    (xdc_Char)0x75,  /* [2177] */
    (xdc_Char)0x6c,  /* [2178] */
    (xdc_Char)0x74,  /* [2179] */
    (xdc_Char)0x54,  /* [2180] */
    (xdc_Char)0x79,  /* [2181] */
    (xdc_Char)0x70,  /* [2182] */
    (xdc_Char)0x65,  /* [2183] */
    (xdc_Char)0x41,  /* [2184] */
    (xdc_Char)0x6c,  /* [2185] */
    (xdc_Char)0x69,  /* [2186] */
    (xdc_Char)0x67,  /* [2187] */
    (xdc_Char)0x6e,  /* [2188] */
    (xdc_Char)0x28,  /* [2189] */
    (xdc_Char)0x29,  /* [2190] */
    (xdc_Char)0x0,  /* [2191] */
    (xdc_Char)0x61,  /* [2192] */
    (xdc_Char)0x6c,  /* [2193] */
    (xdc_Char)0x69,  /* [2194] */
    (xdc_Char)0x67,  /* [2195] */
    (xdc_Char)0x6e,  /* [2196] */
    (xdc_Char)0x20,  /* [2197] */
    (xdc_Char)0x70,  /* [2198] */
    (xdc_Char)0x61,  /* [2199] */
    (xdc_Char)0x72,  /* [2200] */
    (xdc_Char)0x61,  /* [2201] */
    (xdc_Char)0x6d,  /* [2202] */
    (xdc_Char)0x65,  /* [2203] */
    (xdc_Char)0x74,  /* [2204] */
    (xdc_Char)0x65,  /* [2205] */
    (xdc_Char)0x72,  /* [2206] */
    (xdc_Char)0x20,  /* [2207] */
    (xdc_Char)0x31,  /* [2208] */
    (xdc_Char)0x29,  /* [2209] */
    (xdc_Char)0x20,  /* [2210] */
    (xdc_Char)0x6d,  /* [2211] */
    (xdc_Char)0x75,  /* [2212] */
    (xdc_Char)0x73,  /* [2213] */
    (xdc_Char)0x74,  /* [2214] */
    (xdc_Char)0x20,  /* [2215] */
    (xdc_Char)0x62,  /* [2216] */
    (xdc_Char)0x65,  /* [2217] */
    (xdc_Char)0x20,  /* [2218] */
    (xdc_Char)0x30,  /* [2219] */
    (xdc_Char)0x20,  /* [2220] */
    (xdc_Char)0x6f,  /* [2221] */
    (xdc_Char)0x72,  /* [2222] */
    (xdc_Char)0x20,  /* [2223] */
    (xdc_Char)0x61,  /* [2224] */
    (xdc_Char)0x20,  /* [2225] */
    (xdc_Char)0x70,  /* [2226] */
    (xdc_Char)0x6f,  /* [2227] */
    (xdc_Char)0x77,  /* [2228] */
    (xdc_Char)0x65,  /* [2229] */
    (xdc_Char)0x72,  /* [2230] */
    (xdc_Char)0x20,  /* [2231] */
    (xdc_Char)0x6f,  /* [2232] */
    (xdc_Char)0x66,  /* [2233] */
    (xdc_Char)0x20,  /* [2234] */
    (xdc_Char)0x32,  /* [2235] */
    (xdc_Char)0x20,  /* [2236] */
    (xdc_Char)0x61,  /* [2237] */
    (xdc_Char)0x6e,  /* [2238] */
    (xdc_Char)0x64,  /* [2239] */
    (xdc_Char)0x20,  /* [2240] */
    (xdc_Char)0x32,  /* [2241] */
    (xdc_Char)0x29,  /* [2242] */
    (xdc_Char)0x20,  /* [2243] */
    (xdc_Char)0x6e,  /* [2244] */
    (xdc_Char)0x6f,  /* [2245] */
    (xdc_Char)0x74,  /* [2246] */
    (xdc_Char)0x20,  /* [2247] */
    (xdc_Char)0x67,  /* [2248] */
    (xdc_Char)0x72,  /* [2249] */
    (xdc_Char)0x65,  /* [2250] */
    (xdc_Char)0x61,  /* [2251] */
    (xdc_Char)0x74,  /* [2252] */
    (xdc_Char)0x65,  /* [2253] */
    (xdc_Char)0x72,  /* [2254] */
    (xdc_Char)0x20,  /* [2255] */
    (xdc_Char)0x74,  /* [2256] */
    (xdc_Char)0x68,  /* [2257] */
    (xdc_Char)0x61,  /* [2258] */
    (xdc_Char)0x6e,  /* [2259] */
    (xdc_Char)0x20,  /* [2260] */
    (xdc_Char)0x74,  /* [2261] */
    (xdc_Char)0x68,  /* [2262] */
    (xdc_Char)0x65,  /* [2263] */
    (xdc_Char)0x20,  /* [2264] */
    (xdc_Char)0x68,  /* [2265] */
    (xdc_Char)0x65,  /* [2266] */
    (xdc_Char)0x61,  /* [2267] */
    (xdc_Char)0x70,  /* [2268] */
    (xdc_Char)0x73,  /* [2269] */
    (xdc_Char)0x20,  /* [2270] */
    (xdc_Char)0x61,  /* [2271] */
    (xdc_Char)0x6c,  /* [2272] */
    (xdc_Char)0x69,  /* [2273] */
    (xdc_Char)0x67,  /* [2274] */
    (xdc_Char)0x6e,  /* [2275] */
    (xdc_Char)0x6d,  /* [2276] */
    (xdc_Char)0x65,  /* [2277] */
    (xdc_Char)0x6e,  /* [2278] */
    (xdc_Char)0x74,  /* [2279] */
    (xdc_Char)0x0,  /* [2280] */
    (xdc_Char)0x62,  /* [2281] */
    (xdc_Char)0x6c,  /* [2282] */
    (xdc_Char)0x6f,  /* [2283] */
    (xdc_Char)0x63,  /* [2284] */
    (xdc_Char)0x6b,  /* [2285] */
    (xdc_Char)0x53,  /* [2286] */
    (xdc_Char)0x69,  /* [2287] */
    (xdc_Char)0x7a,  /* [2288] */
    (xdc_Char)0x65,  /* [2289] */
    (xdc_Char)0x20,  /* [2290] */
    (xdc_Char)0x6d,  /* [2291] */
    (xdc_Char)0x75,  /* [2292] */
    (xdc_Char)0x73,  /* [2293] */
    (xdc_Char)0x74,  /* [2294] */
    (xdc_Char)0x20,  /* [2295] */
    (xdc_Char)0x62,  /* [2296] */
    (xdc_Char)0x65,  /* [2297] */
    (xdc_Char)0x20,  /* [2298] */
    (xdc_Char)0x6c,  /* [2299] */
    (xdc_Char)0x61,  /* [2300] */
    (xdc_Char)0x72,  /* [2301] */
    (xdc_Char)0x67,  /* [2302] */
    (xdc_Char)0x65,  /* [2303] */
    (xdc_Char)0x20,  /* [2304] */
    (xdc_Char)0x65,  /* [2305] */
    (xdc_Char)0x6e,  /* [2306] */
    (xdc_Char)0x6f,  /* [2307] */
    (xdc_Char)0x75,  /* [2308] */
    (xdc_Char)0x67,  /* [2309] */
    (xdc_Char)0x68,  /* [2310] */
    (xdc_Char)0x20,  /* [2311] */
    (xdc_Char)0x74,  /* [2312] */
    (xdc_Char)0x6f,  /* [2313] */
    (xdc_Char)0x20,  /* [2314] */
    (xdc_Char)0x68,  /* [2315] */
    (xdc_Char)0x6f,  /* [2316] */
    (xdc_Char)0x6c,  /* [2317] */
    (xdc_Char)0x64,  /* [2318] */
    (xdc_Char)0x20,  /* [2319] */
    (xdc_Char)0x61,  /* [2320] */
    (xdc_Char)0x74,  /* [2321] */
    (xdc_Char)0x6c,  /* [2322] */
    (xdc_Char)0x65,  /* [2323] */
    (xdc_Char)0x61,  /* [2324] */
    (xdc_Char)0x73,  /* [2325] */
    (xdc_Char)0x74,  /* [2326] */
    (xdc_Char)0x20,  /* [2327] */
    (xdc_Char)0x74,  /* [2328] */
    (xdc_Char)0x77,  /* [2329] */
    (xdc_Char)0x6f,  /* [2330] */
    (xdc_Char)0x20,  /* [2331] */
    (xdc_Char)0x70,  /* [2332] */
    (xdc_Char)0x6f,  /* [2333] */
    (xdc_Char)0x69,  /* [2334] */
    (xdc_Char)0x6e,  /* [2335] */
    (xdc_Char)0x74,  /* [2336] */
    (xdc_Char)0x65,  /* [2337] */
    (xdc_Char)0x72,  /* [2338] */
    (xdc_Char)0x73,  /* [2339] */
    (xdc_Char)0x0,  /* [2340] */
    (xdc_Char)0x6e,  /* [2341] */
    (xdc_Char)0x75,  /* [2342] */
    (xdc_Char)0x6d,  /* [2343] */
    (xdc_Char)0x42,  /* [2344] */
    (xdc_Char)0x6c,  /* [2345] */
    (xdc_Char)0x6f,  /* [2346] */
    (xdc_Char)0x63,  /* [2347] */
    (xdc_Char)0x6b,  /* [2348] */
    (xdc_Char)0x73,  /* [2349] */
    (xdc_Char)0x20,  /* [2350] */
    (xdc_Char)0x63,  /* [2351] */
    (xdc_Char)0x61,  /* [2352] */
    (xdc_Char)0x6e,  /* [2353] */
    (xdc_Char)0x6e,  /* [2354] */
    (xdc_Char)0x6f,  /* [2355] */
    (xdc_Char)0x74,  /* [2356] */
    (xdc_Char)0x20,  /* [2357] */
    (xdc_Char)0x62,  /* [2358] */
    (xdc_Char)0x65,  /* [2359] */
    (xdc_Char)0x20,  /* [2360] */
    (xdc_Char)0x7a,  /* [2361] */
    (xdc_Char)0x65,  /* [2362] */
    (xdc_Char)0x72,  /* [2363] */
    (xdc_Char)0x6f,  /* [2364] */
    (xdc_Char)0x0,  /* [2365] */
    (xdc_Char)0x62,  /* [2366] */
    (xdc_Char)0x75,  /* [2367] */
    (xdc_Char)0x66,  /* [2368] */
    (xdc_Char)0x53,  /* [2369] */
    (xdc_Char)0x69,  /* [2370] */
    (xdc_Char)0x7a,  /* [2371] */
    (xdc_Char)0x65,  /* [2372] */
    (xdc_Char)0x20,  /* [2373] */
    (xdc_Char)0x63,  /* [2374] */
    (xdc_Char)0x61,  /* [2375] */
    (xdc_Char)0x6e,  /* [2376] */
    (xdc_Char)0x6e,  /* [2377] */
    (xdc_Char)0x6f,  /* [2378] */
    (xdc_Char)0x74,  /* [2379] */
    (xdc_Char)0x20,  /* [2380] */
    (xdc_Char)0x62,  /* [2381] */
    (xdc_Char)0x65,  /* [2382] */
    (xdc_Char)0x20,  /* [2383] */
    (xdc_Char)0x7a,  /* [2384] */
    (xdc_Char)0x65,  /* [2385] */
    (xdc_Char)0x72,  /* [2386] */
    (xdc_Char)0x6f,  /* [2387] */
    (xdc_Char)0x0,  /* [2388] */
    (xdc_Char)0x48,  /* [2389] */
    (xdc_Char)0x65,  /* [2390] */
    (xdc_Char)0x61,  /* [2391] */
    (xdc_Char)0x70,  /* [2392] */
    (xdc_Char)0x42,  /* [2393] */
    (xdc_Char)0x75,  /* [2394] */
    (xdc_Char)0x66,  /* [2395] */
    (xdc_Char)0x5f,  /* [2396] */
    (xdc_Char)0x63,  /* [2397] */
    (xdc_Char)0x72,  /* [2398] */
    (xdc_Char)0x65,  /* [2399] */
    (xdc_Char)0x61,  /* [2400] */
    (xdc_Char)0x74,  /* [2401] */
    (xdc_Char)0x65,  /* [2402] */
    (xdc_Char)0x27,  /* [2403] */
    (xdc_Char)0x73,  /* [2404] */
    (xdc_Char)0x20,  /* [2405] */
    (xdc_Char)0x62,  /* [2406] */
    (xdc_Char)0x75,  /* [2407] */
    (xdc_Char)0x66,  /* [2408] */
    (xdc_Char)0x53,  /* [2409] */
    (xdc_Char)0x69,  /* [2410] */
    (xdc_Char)0x7a,  /* [2411] */
    (xdc_Char)0x65,  /* [2412] */
    (xdc_Char)0x20,  /* [2413] */
    (xdc_Char)0x70,  /* [2414] */
    (xdc_Char)0x61,  /* [2415] */
    (xdc_Char)0x72,  /* [2416] */
    (xdc_Char)0x61,  /* [2417] */
    (xdc_Char)0x6d,  /* [2418] */
    (xdc_Char)0x65,  /* [2419] */
    (xdc_Char)0x74,  /* [2420] */
    (xdc_Char)0x65,  /* [2421] */
    (xdc_Char)0x72,  /* [2422] */
    (xdc_Char)0x20,  /* [2423] */
    (xdc_Char)0x69,  /* [2424] */
    (xdc_Char)0x73,  /* [2425] */
    (xdc_Char)0x20,  /* [2426] */
    (xdc_Char)0x69,  /* [2427] */
    (xdc_Char)0x6e,  /* [2428] */
    (xdc_Char)0x76,  /* [2429] */
    (xdc_Char)0x61,  /* [2430] */
    (xdc_Char)0x6c,  /* [2431] */
    (xdc_Char)0x69,  /* [2432] */
    (xdc_Char)0x64,  /* [2433] */
    (xdc_Char)0x20,  /* [2434] */
    (xdc_Char)0x28,  /* [2435] */
    (xdc_Char)0x74,  /* [2436] */
    (xdc_Char)0x6f,  /* [2437] */
    (xdc_Char)0x6f,  /* [2438] */
    (xdc_Char)0x20,  /* [2439] */
    (xdc_Char)0x73,  /* [2440] */
    (xdc_Char)0x6d,  /* [2441] */
    (xdc_Char)0x61,  /* [2442] */
    (xdc_Char)0x6c,  /* [2443] */
    (xdc_Char)0x6c,  /* [2444] */
    (xdc_Char)0x29,  /* [2445] */
    (xdc_Char)0x0,  /* [2446] */
    (xdc_Char)0x43,  /* [2447] */
    (xdc_Char)0x61,  /* [2448] */
    (xdc_Char)0x6e,  /* [2449] */
    (xdc_Char)0x6e,  /* [2450] */
    (xdc_Char)0x6f,  /* [2451] */
    (xdc_Char)0x74,  /* [2452] */
    (xdc_Char)0x20,  /* [2453] */
    (xdc_Char)0x63,  /* [2454] */
    (xdc_Char)0x61,  /* [2455] */
    (xdc_Char)0x6c,  /* [2456] */
    (xdc_Char)0x6c,  /* [2457] */
    (xdc_Char)0x20,  /* [2458] */
    (xdc_Char)0x48,  /* [2459] */
    (xdc_Char)0x65,  /* [2460] */
    (xdc_Char)0x61,  /* [2461] */
    (xdc_Char)0x70,  /* [2462] */
    (xdc_Char)0x42,  /* [2463] */
    (xdc_Char)0x75,  /* [2464] */
    (xdc_Char)0x66,  /* [2465] */
    (xdc_Char)0x5f,  /* [2466] */
    (xdc_Char)0x66,  /* [2467] */
    (xdc_Char)0x72,  /* [2468] */
    (xdc_Char)0x65,  /* [2469] */
    (xdc_Char)0x65,  /* [2470] */
    (xdc_Char)0x20,  /* [2471] */
    (xdc_Char)0x77,  /* [2472] */
    (xdc_Char)0x68,  /* [2473] */
    (xdc_Char)0x65,  /* [2474] */
    (xdc_Char)0x6e,  /* [2475] */
    (xdc_Char)0x20,  /* [2476] */
    (xdc_Char)0x6e,  /* [2477] */
    (xdc_Char)0x6f,  /* [2478] */
    (xdc_Char)0x20,  /* [2479] */
    (xdc_Char)0x62,  /* [2480] */
    (xdc_Char)0x6c,  /* [2481] */
    (xdc_Char)0x6f,  /* [2482] */
    (xdc_Char)0x63,  /* [2483] */
    (xdc_Char)0x6b,  /* [2484] */
    (xdc_Char)0x73,  /* [2485] */
    (xdc_Char)0x20,  /* [2486] */
    (xdc_Char)0x68,  /* [2487] */
    (xdc_Char)0x61,  /* [2488] */
    (xdc_Char)0x76,  /* [2489] */
    (xdc_Char)0x65,  /* [2490] */
    (xdc_Char)0x20,  /* [2491] */
    (xdc_Char)0x62,  /* [2492] */
    (xdc_Char)0x65,  /* [2493] */
    (xdc_Char)0x65,  /* [2494] */
    (xdc_Char)0x6e,  /* [2495] */
    (xdc_Char)0x20,  /* [2496] */
    (xdc_Char)0x61,  /* [2497] */
    (xdc_Char)0x6c,  /* [2498] */
    (xdc_Char)0x6c,  /* [2499] */
    (xdc_Char)0x6f,  /* [2500] */
    (xdc_Char)0x63,  /* [2501] */
    (xdc_Char)0x61,  /* [2502] */
    (xdc_Char)0x74,  /* [2503] */
    (xdc_Char)0x65,  /* [2504] */
    (xdc_Char)0x64,  /* [2505] */
    (xdc_Char)0x0,  /* [2506] */
    (xdc_Char)0x41,  /* [2507] */
    (xdc_Char)0x5f,  /* [2508] */
    (xdc_Char)0x69,  /* [2509] */
    (xdc_Char)0x6e,  /* [2510] */
    (xdc_Char)0x76,  /* [2511] */
    (xdc_Char)0x61,  /* [2512] */
    (xdc_Char)0x6c,  /* [2513] */
    (xdc_Char)0x69,  /* [2514] */
    (xdc_Char)0x64,  /* [2515] */
    (xdc_Char)0x46,  /* [2516] */
    (xdc_Char)0x72,  /* [2517] */
    (xdc_Char)0x65,  /* [2518] */
    (xdc_Char)0x65,  /* [2519] */
    (xdc_Char)0x3a,  /* [2520] */
    (xdc_Char)0x20,  /* [2521] */
    (xdc_Char)0x49,  /* [2522] */
    (xdc_Char)0x6e,  /* [2523] */
    (xdc_Char)0x76,  /* [2524] */
    (xdc_Char)0x61,  /* [2525] */
    (xdc_Char)0x6c,  /* [2526] */
    (xdc_Char)0x69,  /* [2527] */
    (xdc_Char)0x64,  /* [2528] */
    (xdc_Char)0x20,  /* [2529] */
    (xdc_Char)0x66,  /* [2530] */
    (xdc_Char)0x72,  /* [2531] */
    (xdc_Char)0x65,  /* [2532] */
    (xdc_Char)0x65,  /* [2533] */
    (xdc_Char)0x0,  /* [2534] */
    (xdc_Char)0x41,  /* [2535] */
    (xdc_Char)0x5f,  /* [2536] */
    (xdc_Char)0x7a,  /* [2537] */
    (xdc_Char)0x65,  /* [2538] */
    (xdc_Char)0x72,  /* [2539] */
    (xdc_Char)0x6f,  /* [2540] */
    (xdc_Char)0x42,  /* [2541] */
    (xdc_Char)0x6c,  /* [2542] */
    (xdc_Char)0x6f,  /* [2543] */
    (xdc_Char)0x63,  /* [2544] */
    (xdc_Char)0x6b,  /* [2545] */
    (xdc_Char)0x3a,  /* [2546] */
    (xdc_Char)0x20,  /* [2547] */
    (xdc_Char)0x43,  /* [2548] */
    (xdc_Char)0x61,  /* [2549] */
    (xdc_Char)0x6e,  /* [2550] */
    (xdc_Char)0x6e,  /* [2551] */
    (xdc_Char)0x6f,  /* [2552] */
    (xdc_Char)0x74,  /* [2553] */
    (xdc_Char)0x20,  /* [2554] */
    (xdc_Char)0x61,  /* [2555] */
    (xdc_Char)0x6c,  /* [2556] */
    (xdc_Char)0x6c,  /* [2557] */
    (xdc_Char)0x6f,  /* [2558] */
    (xdc_Char)0x63,  /* [2559] */
    (xdc_Char)0x61,  /* [2560] */
    (xdc_Char)0x74,  /* [2561] */
    (xdc_Char)0x65,  /* [2562] */
    (xdc_Char)0x20,  /* [2563] */
    (xdc_Char)0x73,  /* [2564] */
    (xdc_Char)0x69,  /* [2565] */
    (xdc_Char)0x7a,  /* [2566] */
    (xdc_Char)0x65,  /* [2567] */
    (xdc_Char)0x20,  /* [2568] */
    (xdc_Char)0x30,  /* [2569] */
    (xdc_Char)0x0,  /* [2570] */
    (xdc_Char)0x41,  /* [2571] */
    (xdc_Char)0x5f,  /* [2572] */
    (xdc_Char)0x68,  /* [2573] */
    (xdc_Char)0x65,  /* [2574] */
    (xdc_Char)0x61,  /* [2575] */
    (xdc_Char)0x70,  /* [2576] */
    (xdc_Char)0x53,  /* [2577] */
    (xdc_Char)0x69,  /* [2578] */
    (xdc_Char)0x7a,  /* [2579] */
    (xdc_Char)0x65,  /* [2580] */
    (xdc_Char)0x3a,  /* [2581] */
    (xdc_Char)0x20,  /* [2582] */
    (xdc_Char)0x52,  /* [2583] */
    (xdc_Char)0x65,  /* [2584] */
    (xdc_Char)0x71,  /* [2585] */
    (xdc_Char)0x75,  /* [2586] */
    (xdc_Char)0x65,  /* [2587] */
    (xdc_Char)0x73,  /* [2588] */
    (xdc_Char)0x74,  /* [2589] */
    (xdc_Char)0x65,  /* [2590] */
    (xdc_Char)0x64,  /* [2591] */
    (xdc_Char)0x20,  /* [2592] */
    (xdc_Char)0x68,  /* [2593] */
    (xdc_Char)0x65,  /* [2594] */
    (xdc_Char)0x61,  /* [2595] */
    (xdc_Char)0x70,  /* [2596] */
    (xdc_Char)0x20,  /* [2597] */
    (xdc_Char)0x73,  /* [2598] */
    (xdc_Char)0x69,  /* [2599] */
    (xdc_Char)0x7a,  /* [2600] */
    (xdc_Char)0x65,  /* [2601] */
    (xdc_Char)0x20,  /* [2602] */
    (xdc_Char)0x69,  /* [2603] */
    (xdc_Char)0x73,  /* [2604] */
    (xdc_Char)0x20,  /* [2605] */
    (xdc_Char)0x74,  /* [2606] */
    (xdc_Char)0x6f,  /* [2607] */
    (xdc_Char)0x6f,  /* [2608] */
    (xdc_Char)0x20,  /* [2609] */
    (xdc_Char)0x73,  /* [2610] */
    (xdc_Char)0x6d,  /* [2611] */
    (xdc_Char)0x61,  /* [2612] */
    (xdc_Char)0x6c,  /* [2613] */
    (xdc_Char)0x6c,  /* [2614] */
    (xdc_Char)0x0,  /* [2615] */
    (xdc_Char)0x41,  /* [2616] */
    (xdc_Char)0x5f,  /* [2617] */
    (xdc_Char)0x61,  /* [2618] */
    (xdc_Char)0x6c,  /* [2619] */
    (xdc_Char)0x69,  /* [2620] */
    (xdc_Char)0x67,  /* [2621] */
    (xdc_Char)0x6e,  /* [2622] */
    (xdc_Char)0x3a,  /* [2623] */
    (xdc_Char)0x20,  /* [2624] */
    (xdc_Char)0x52,  /* [2625] */
    (xdc_Char)0x65,  /* [2626] */
    (xdc_Char)0x71,  /* [2627] */
    (xdc_Char)0x75,  /* [2628] */
    (xdc_Char)0x65,  /* [2629] */
    (xdc_Char)0x73,  /* [2630] */
    (xdc_Char)0x74,  /* [2631] */
    (xdc_Char)0x65,  /* [2632] */
    (xdc_Char)0x64,  /* [2633] */
    (xdc_Char)0x20,  /* [2634] */
    (xdc_Char)0x61,  /* [2635] */
    (xdc_Char)0x6c,  /* [2636] */
    (xdc_Char)0x69,  /* [2637] */
    (xdc_Char)0x67,  /* [2638] */
    (xdc_Char)0x6e,  /* [2639] */
    (xdc_Char)0x20,  /* [2640] */
    (xdc_Char)0x69,  /* [2641] */
    (xdc_Char)0x73,  /* [2642] */
    (xdc_Char)0x20,  /* [2643] */
    (xdc_Char)0x6e,  /* [2644] */
    (xdc_Char)0x6f,  /* [2645] */
    (xdc_Char)0x74,  /* [2646] */
    (xdc_Char)0x20,  /* [2647] */
    (xdc_Char)0x61,  /* [2648] */
    (xdc_Char)0x20,  /* [2649] */
    (xdc_Char)0x70,  /* [2650] */
    (xdc_Char)0x6f,  /* [2651] */
    (xdc_Char)0x77,  /* [2652] */
    (xdc_Char)0x65,  /* [2653] */
    (xdc_Char)0x72,  /* [2654] */
    (xdc_Char)0x20,  /* [2655] */
    (xdc_Char)0x6f,  /* [2656] */
    (xdc_Char)0x66,  /* [2657] */
    (xdc_Char)0x20,  /* [2658] */
    (xdc_Char)0x32,  /* [2659] */
    (xdc_Char)0x0,  /* [2660] */
    (xdc_Char)0x49,  /* [2661] */
    (xdc_Char)0x6e,  /* [2662] */
    (xdc_Char)0x76,  /* [2663] */
    (xdc_Char)0x61,  /* [2664] */
    (xdc_Char)0x6c,  /* [2665] */
    (xdc_Char)0x69,  /* [2666] */
    (xdc_Char)0x64,  /* [2667] */
    (xdc_Char)0x20,  /* [2668] */
    (xdc_Char)0x62,  /* [2669] */
    (xdc_Char)0x6c,  /* [2670] */
    (xdc_Char)0x6f,  /* [2671] */
    (xdc_Char)0x63,  /* [2672] */
    (xdc_Char)0x6b,  /* [2673] */
    (xdc_Char)0x20,  /* [2674] */
    (xdc_Char)0x61,  /* [2675] */
    (xdc_Char)0x64,  /* [2676] */
    (xdc_Char)0x64,  /* [2677] */
    (xdc_Char)0x72,  /* [2678] */
    (xdc_Char)0x65,  /* [2679] */
    (xdc_Char)0x73,  /* [2680] */
    (xdc_Char)0x73,  /* [2681] */
    (xdc_Char)0x20,  /* [2682] */
    (xdc_Char)0x6f,  /* [2683] */
    (xdc_Char)0x6e,  /* [2684] */
    (xdc_Char)0x20,  /* [2685] */
    (xdc_Char)0x74,  /* [2686] */
    (xdc_Char)0x68,  /* [2687] */
    (xdc_Char)0x65,  /* [2688] */
    (xdc_Char)0x20,  /* [2689] */
    (xdc_Char)0x66,  /* [2690] */
    (xdc_Char)0x72,  /* [2691] */
    (xdc_Char)0x65,  /* [2692] */
    (xdc_Char)0x65,  /* [2693] */
    (xdc_Char)0x2e,  /* [2694] */
    (xdc_Char)0x20,  /* [2695] */
    (xdc_Char)0x46,  /* [2696] */
    (xdc_Char)0x61,  /* [2697] */
    (xdc_Char)0x69,  /* [2698] */
    (xdc_Char)0x6c,  /* [2699] */
    (xdc_Char)0x65,  /* [2700] */
    (xdc_Char)0x64,  /* [2701] */
    (xdc_Char)0x20,  /* [2702] */
    (xdc_Char)0x74,  /* [2703] */
    (xdc_Char)0x6f,  /* [2704] */
    (xdc_Char)0x20,  /* [2705] */
    (xdc_Char)0x66,  /* [2706] */
    (xdc_Char)0x72,  /* [2707] */
    (xdc_Char)0x65,  /* [2708] */
    (xdc_Char)0x65,  /* [2709] */
    (xdc_Char)0x20,  /* [2710] */
    (xdc_Char)0x62,  /* [2711] */
    (xdc_Char)0x6c,  /* [2712] */
    (xdc_Char)0x6f,  /* [2713] */
    (xdc_Char)0x63,  /* [2714] */
    (xdc_Char)0x6b,  /* [2715] */
    (xdc_Char)0x20,  /* [2716] */
    (xdc_Char)0x62,  /* [2717] */
    (xdc_Char)0x61,  /* [2718] */
    (xdc_Char)0x63,  /* [2719] */
    (xdc_Char)0x6b,  /* [2720] */
    (xdc_Char)0x20,  /* [2721] */
    (xdc_Char)0x74,  /* [2722] */
    (xdc_Char)0x6f,  /* [2723] */
    (xdc_Char)0x20,  /* [2724] */
    (xdc_Char)0x68,  /* [2725] */
    (xdc_Char)0x65,  /* [2726] */
    (xdc_Char)0x61,  /* [2727] */
    (xdc_Char)0x70,  /* [2728] */
    (xdc_Char)0x2e,  /* [2729] */
    (xdc_Char)0x0,  /* [2730] */
    (xdc_Char)0x41,  /* [2731] */
    (xdc_Char)0x5f,  /* [2732] */
    (xdc_Char)0x64,  /* [2733] */
    (xdc_Char)0x6f,  /* [2734] */
    (xdc_Char)0x75,  /* [2735] */
    (xdc_Char)0x62,  /* [2736] */
    (xdc_Char)0x6c,  /* [2737] */
    (xdc_Char)0x65,  /* [2738] */
    (xdc_Char)0x46,  /* [2739] */
    (xdc_Char)0x72,  /* [2740] */
    (xdc_Char)0x65,  /* [2741] */
    (xdc_Char)0x65,  /* [2742] */
    (xdc_Char)0x3a,  /* [2743] */
    (xdc_Char)0x20,  /* [2744] */
    (xdc_Char)0x42,  /* [2745] */
    (xdc_Char)0x75,  /* [2746] */
    (xdc_Char)0x66,  /* [2747] */
    (xdc_Char)0x66,  /* [2748] */
    (xdc_Char)0x65,  /* [2749] */
    (xdc_Char)0x72,  /* [2750] */
    (xdc_Char)0x20,  /* [2751] */
    (xdc_Char)0x61,  /* [2752] */
    (xdc_Char)0x6c,  /* [2753] */
    (xdc_Char)0x72,  /* [2754] */
    (xdc_Char)0x65,  /* [2755] */
    (xdc_Char)0x61,  /* [2756] */
    (xdc_Char)0x64,  /* [2757] */
    (xdc_Char)0x79,  /* [2758] */
    (xdc_Char)0x20,  /* [2759] */
    (xdc_Char)0x66,  /* [2760] */
    (xdc_Char)0x72,  /* [2761] */
    (xdc_Char)0x65,  /* [2762] */
    (xdc_Char)0x65,  /* [2763] */
    (xdc_Char)0x0,  /* [2764] */
    (xdc_Char)0x41,  /* [2765] */
    (xdc_Char)0x5f,  /* [2766] */
    (xdc_Char)0x62,  /* [2767] */
    (xdc_Char)0x75,  /* [2768] */
    (xdc_Char)0x66,  /* [2769] */
    (xdc_Char)0x4f,  /* [2770] */
    (xdc_Char)0x76,  /* [2771] */
    (xdc_Char)0x65,  /* [2772] */
    (xdc_Char)0x72,  /* [2773] */
    (xdc_Char)0x66,  /* [2774] */
    (xdc_Char)0x6c,  /* [2775] */
    (xdc_Char)0x6f,  /* [2776] */
    (xdc_Char)0x77,  /* [2777] */
    (xdc_Char)0x3a,  /* [2778] */
    (xdc_Char)0x20,  /* [2779] */
    (xdc_Char)0x42,  /* [2780] */
    (xdc_Char)0x75,  /* [2781] */
    (xdc_Char)0x66,  /* [2782] */
    (xdc_Char)0x66,  /* [2783] */
    (xdc_Char)0x65,  /* [2784] */
    (xdc_Char)0x72,  /* [2785] */
    (xdc_Char)0x20,  /* [2786] */
    (xdc_Char)0x6f,  /* [2787] */
    (xdc_Char)0x76,  /* [2788] */
    (xdc_Char)0x65,  /* [2789] */
    (xdc_Char)0x72,  /* [2790] */
    (xdc_Char)0x66,  /* [2791] */
    (xdc_Char)0x6c,  /* [2792] */
    (xdc_Char)0x6f,  /* [2793] */
    (xdc_Char)0x77,  /* [2794] */
    (xdc_Char)0x0,  /* [2795] */
    (xdc_Char)0x41,  /* [2796] */
    (xdc_Char)0x5f,  /* [2797] */
    (xdc_Char)0x6e,  /* [2798] */
    (xdc_Char)0x6f,  /* [2799] */
    (xdc_Char)0x74,  /* [2800] */
    (xdc_Char)0x45,  /* [2801] */
    (xdc_Char)0x6d,  /* [2802] */
    (xdc_Char)0x70,  /* [2803] */
    (xdc_Char)0x74,  /* [2804] */
    (xdc_Char)0x79,  /* [2805] */
    (xdc_Char)0x3a,  /* [2806] */
    (xdc_Char)0x20,  /* [2807] */
    (xdc_Char)0x48,  /* [2808] */
    (xdc_Char)0x65,  /* [2809] */
    (xdc_Char)0x61,  /* [2810] */
    (xdc_Char)0x70,  /* [2811] */
    (xdc_Char)0x20,  /* [2812] */
    (xdc_Char)0x6e,  /* [2813] */
    (xdc_Char)0x6f,  /* [2814] */
    (xdc_Char)0x74,  /* [2815] */
    (xdc_Char)0x20,  /* [2816] */
    (xdc_Char)0x65,  /* [2817] */
    (xdc_Char)0x6d,  /* [2818] */
    (xdc_Char)0x70,  /* [2819] */
    (xdc_Char)0x74,  /* [2820] */
    (xdc_Char)0x79,  /* [2821] */
    (xdc_Char)0x0,  /* [2822] */
    (xdc_Char)0x41,  /* [2823] */
    (xdc_Char)0x5f,  /* [2824] */
    (xdc_Char)0x6e,  /* [2825] */
    (xdc_Char)0x75,  /* [2826] */
    (xdc_Char)0x6c,  /* [2827] */
    (xdc_Char)0x6c,  /* [2828] */
    (xdc_Char)0x4f,  /* [2829] */
    (xdc_Char)0x62,  /* [2830] */
    (xdc_Char)0x6a,  /* [2831] */
    (xdc_Char)0x65,  /* [2832] */
    (xdc_Char)0x63,  /* [2833] */
    (xdc_Char)0x74,  /* [2834] */
    (xdc_Char)0x3a,  /* [2835] */
    (xdc_Char)0x20,  /* [2836] */
    (xdc_Char)0x48,  /* [2837] */
    (xdc_Char)0x65,  /* [2838] */
    (xdc_Char)0x61,  /* [2839] */
    (xdc_Char)0x70,  /* [2840] */
    (xdc_Char)0x54,  /* [2841] */
    (xdc_Char)0x72,  /* [2842] */
    (xdc_Char)0x61,  /* [2843] */
    (xdc_Char)0x63,  /* [2844] */
    (xdc_Char)0x6b,  /* [2845] */
    (xdc_Char)0x5f,  /* [2846] */
    (xdc_Char)0x70,  /* [2847] */
    (xdc_Char)0x72,  /* [2848] */
    (xdc_Char)0x69,  /* [2849] */
    (xdc_Char)0x6e,  /* [2850] */
    (xdc_Char)0x74,  /* [2851] */
    (xdc_Char)0x48,  /* [2852] */
    (xdc_Char)0x65,  /* [2853] */
    (xdc_Char)0x61,  /* [2854] */
    (xdc_Char)0x70,  /* [2855] */
    (xdc_Char)0x20,  /* [2856] */
    (xdc_Char)0x63,  /* [2857] */
    (xdc_Char)0x61,  /* [2858] */
    (xdc_Char)0x6c,  /* [2859] */
    (xdc_Char)0x6c,  /* [2860] */
    (xdc_Char)0x65,  /* [2861] */
    (xdc_Char)0x64,  /* [2862] */
    (xdc_Char)0x20,  /* [2863] */
    (xdc_Char)0x77,  /* [2864] */
    (xdc_Char)0x69,  /* [2865] */
    (xdc_Char)0x74,  /* [2866] */
    (xdc_Char)0x68,  /* [2867] */
    (xdc_Char)0x20,  /* [2868] */
    (xdc_Char)0x6e,  /* [2869] */
    (xdc_Char)0x75,  /* [2870] */
    (xdc_Char)0x6c,  /* [2871] */
    (xdc_Char)0x6c,  /* [2872] */
    (xdc_Char)0x20,  /* [2873] */
    (xdc_Char)0x6f,  /* [2874] */
    (xdc_Char)0x62,  /* [2875] */
    (xdc_Char)0x6a,  /* [2876] */
    (xdc_Char)0x0,  /* [2877] */
    (xdc_Char)0x41,  /* [2878] */
    (xdc_Char)0x5f,  /* [2879] */
    (xdc_Char)0x62,  /* [2880] */
    (xdc_Char)0x61,  /* [2881] */
    (xdc_Char)0x64,  /* [2882] */
    (xdc_Char)0x43,  /* [2883] */
    (xdc_Char)0x6f,  /* [2884] */
    (xdc_Char)0x6e,  /* [2885] */
    (xdc_Char)0x74,  /* [2886] */
    (xdc_Char)0x65,  /* [2887] */
    (xdc_Char)0x78,  /* [2888] */
    (xdc_Char)0x74,  /* [2889] */
    (xdc_Char)0x3a,  /* [2890] */
    (xdc_Char)0x20,  /* [2891] */
    (xdc_Char)0x62,  /* [2892] */
    (xdc_Char)0x61,  /* [2893] */
    (xdc_Char)0x64,  /* [2894] */
    (xdc_Char)0x20,  /* [2895] */
    (xdc_Char)0x63,  /* [2896] */
    (xdc_Char)0x61,  /* [2897] */
    (xdc_Char)0x6c,  /* [2898] */
    (xdc_Char)0x6c,  /* [2899] */
    (xdc_Char)0x69,  /* [2900] */
    (xdc_Char)0x6e,  /* [2901] */
    (xdc_Char)0x67,  /* [2902] */
    (xdc_Char)0x20,  /* [2903] */
    (xdc_Char)0x63,  /* [2904] */
    (xdc_Char)0x6f,  /* [2905] */
    (xdc_Char)0x6e,  /* [2906] */
    (xdc_Char)0x74,  /* [2907] */
    (xdc_Char)0x65,  /* [2908] */
    (xdc_Char)0x78,  /* [2909] */
    (xdc_Char)0x74,  /* [2910] */
    (xdc_Char)0x2e,  /* [2911] */
    (xdc_Char)0x20,  /* [2912] */
    (xdc_Char)0x4d,  /* [2913] */
    (xdc_Char)0x61,  /* [2914] */
    (xdc_Char)0x79,  /* [2915] */
    (xdc_Char)0x20,  /* [2916] */
    (xdc_Char)0x6e,  /* [2917] */
    (xdc_Char)0x6f,  /* [2918] */
    (xdc_Char)0x74,  /* [2919] */
    (xdc_Char)0x20,  /* [2920] */
    (xdc_Char)0x62,  /* [2921] */
    (xdc_Char)0x65,  /* [2922] */
    (xdc_Char)0x20,  /* [2923] */
    (xdc_Char)0x65,  /* [2924] */
    (xdc_Char)0x6e,  /* [2925] */
    (xdc_Char)0x74,  /* [2926] */
    (xdc_Char)0x65,  /* [2927] */
    (xdc_Char)0x72,  /* [2928] */
    (xdc_Char)0x65,  /* [2929] */
    (xdc_Char)0x64,  /* [2930] */
    (xdc_Char)0x20,  /* [2931] */
    (xdc_Char)0x66,  /* [2932] */
    (xdc_Char)0x72,  /* [2933] */
    (xdc_Char)0x6f,  /* [2934] */
    (xdc_Char)0x6d,  /* [2935] */
    (xdc_Char)0x20,  /* [2936] */
    (xdc_Char)0x61,  /* [2937] */
    (xdc_Char)0x20,  /* [2938] */
    (xdc_Char)0x68,  /* [2939] */
    (xdc_Char)0x61,  /* [2940] */
    (xdc_Char)0x72,  /* [2941] */
    (xdc_Char)0x64,  /* [2942] */
    (xdc_Char)0x77,  /* [2943] */
    (xdc_Char)0x61,  /* [2944] */
    (xdc_Char)0x72,  /* [2945] */
    (xdc_Char)0x65,  /* [2946] */
    (xdc_Char)0x20,  /* [2947] */
    (xdc_Char)0x69,  /* [2948] */
    (xdc_Char)0x6e,  /* [2949] */
    (xdc_Char)0x74,  /* [2950] */
    (xdc_Char)0x65,  /* [2951] */
    (xdc_Char)0x72,  /* [2952] */
    (xdc_Char)0x72,  /* [2953] */
    (xdc_Char)0x75,  /* [2954] */
    (xdc_Char)0x70,  /* [2955] */
    (xdc_Char)0x74,  /* [2956] */
    (xdc_Char)0x20,  /* [2957] */
    (xdc_Char)0x74,  /* [2958] */
    (xdc_Char)0x68,  /* [2959] */
    (xdc_Char)0x72,  /* [2960] */
    (xdc_Char)0x65,  /* [2961] */
    (xdc_Char)0x61,  /* [2962] */
    (xdc_Char)0x64,  /* [2963] */
    (xdc_Char)0x2e,  /* [2964] */
    (xdc_Char)0x0,  /* [2965] */
    (xdc_Char)0x41,  /* [2966] */
    (xdc_Char)0x5f,  /* [2967] */
    (xdc_Char)0x62,  /* [2968] */
    (xdc_Char)0x61,  /* [2969] */
    (xdc_Char)0x64,  /* [2970] */
    (xdc_Char)0x43,  /* [2971] */
    (xdc_Char)0x6f,  /* [2972] */
    (xdc_Char)0x6e,  /* [2973] */
    (xdc_Char)0x74,  /* [2974] */
    (xdc_Char)0x65,  /* [2975] */
    (xdc_Char)0x78,  /* [2976] */
    (xdc_Char)0x74,  /* [2977] */
    (xdc_Char)0x3a,  /* [2978] */
    (xdc_Char)0x20,  /* [2979] */
    (xdc_Char)0x62,  /* [2980] */
    (xdc_Char)0x61,  /* [2981] */
    (xdc_Char)0x64,  /* [2982] */
    (xdc_Char)0x20,  /* [2983] */
    (xdc_Char)0x63,  /* [2984] */
    (xdc_Char)0x61,  /* [2985] */
    (xdc_Char)0x6c,  /* [2986] */
    (xdc_Char)0x6c,  /* [2987] */
    (xdc_Char)0x69,  /* [2988] */
    (xdc_Char)0x6e,  /* [2989] */
    (xdc_Char)0x67,  /* [2990] */
    (xdc_Char)0x20,  /* [2991] */
    (xdc_Char)0x63,  /* [2992] */
    (xdc_Char)0x6f,  /* [2993] */
    (xdc_Char)0x6e,  /* [2994] */
    (xdc_Char)0x74,  /* [2995] */
    (xdc_Char)0x65,  /* [2996] */
    (xdc_Char)0x78,  /* [2997] */
    (xdc_Char)0x74,  /* [2998] */
    (xdc_Char)0x2e,  /* [2999] */
    (xdc_Char)0x20,  /* [3000] */
    (xdc_Char)0x4d,  /* [3001] */
    (xdc_Char)0x61,  /* [3002] */
    (xdc_Char)0x79,  /* [3003] */
    (xdc_Char)0x20,  /* [3004] */
    (xdc_Char)0x6e,  /* [3005] */
    (xdc_Char)0x6f,  /* [3006] */
    (xdc_Char)0x74,  /* [3007] */
    (xdc_Char)0x20,  /* [3008] */
    (xdc_Char)0x62,  /* [3009] */
    (xdc_Char)0x65,  /* [3010] */
    (xdc_Char)0x20,  /* [3011] */
    (xdc_Char)0x65,  /* [3012] */
    (xdc_Char)0x6e,  /* [3013] */
    (xdc_Char)0x74,  /* [3014] */
    (xdc_Char)0x65,  /* [3015] */
    (xdc_Char)0x72,  /* [3016] */
    (xdc_Char)0x65,  /* [3017] */
    (xdc_Char)0x64,  /* [3018] */
    (xdc_Char)0x20,  /* [3019] */
    (xdc_Char)0x66,  /* [3020] */
    (xdc_Char)0x72,  /* [3021] */
    (xdc_Char)0x6f,  /* [3022] */
    (xdc_Char)0x6d,  /* [3023] */
    (xdc_Char)0x20,  /* [3024] */
    (xdc_Char)0x61,  /* [3025] */
    (xdc_Char)0x20,  /* [3026] */
    (xdc_Char)0x73,  /* [3027] */
    (xdc_Char)0x6f,  /* [3028] */
    (xdc_Char)0x66,  /* [3029] */
    (xdc_Char)0x74,  /* [3030] */
    (xdc_Char)0x77,  /* [3031] */
    (xdc_Char)0x61,  /* [3032] */
    (xdc_Char)0x72,  /* [3033] */
    (xdc_Char)0x65,  /* [3034] */
    (xdc_Char)0x20,  /* [3035] */
    (xdc_Char)0x6f,  /* [3036] */
    (xdc_Char)0x72,  /* [3037] */
    (xdc_Char)0x20,  /* [3038] */
    (xdc_Char)0x68,  /* [3039] */
    (xdc_Char)0x61,  /* [3040] */
    (xdc_Char)0x72,  /* [3041] */
    (xdc_Char)0x64,  /* [3042] */
    (xdc_Char)0x77,  /* [3043] */
    (xdc_Char)0x61,  /* [3044] */
    (xdc_Char)0x72,  /* [3045] */
    (xdc_Char)0x65,  /* [3046] */
    (xdc_Char)0x20,  /* [3047] */
    (xdc_Char)0x69,  /* [3048] */
    (xdc_Char)0x6e,  /* [3049] */
    (xdc_Char)0x74,  /* [3050] */
    (xdc_Char)0x65,  /* [3051] */
    (xdc_Char)0x72,  /* [3052] */
    (xdc_Char)0x72,  /* [3053] */
    (xdc_Char)0x75,  /* [3054] */
    (xdc_Char)0x70,  /* [3055] */
    (xdc_Char)0x74,  /* [3056] */
    (xdc_Char)0x20,  /* [3057] */
    (xdc_Char)0x74,  /* [3058] */
    (xdc_Char)0x68,  /* [3059] */
    (xdc_Char)0x72,  /* [3060] */
    (xdc_Char)0x65,  /* [3061] */
    (xdc_Char)0x61,  /* [3062] */
    (xdc_Char)0x64,  /* [3063] */
    (xdc_Char)0x2e,  /* [3064] */
    (xdc_Char)0x0,  /* [3065] */
    (xdc_Char)0x41,  /* [3066] */
    (xdc_Char)0x5f,  /* [3067] */
    (xdc_Char)0x62,  /* [3068] */
    (xdc_Char)0x61,  /* [3069] */
    (xdc_Char)0x64,  /* [3070] */
    (xdc_Char)0x43,  /* [3071] */
    (xdc_Char)0x6f,  /* [3072] */
    (xdc_Char)0x6e,  /* [3073] */
    (xdc_Char)0x74,  /* [3074] */
    (xdc_Char)0x65,  /* [3075] */
    (xdc_Char)0x78,  /* [3076] */
    (xdc_Char)0x74,  /* [3077] */
    (xdc_Char)0x3a,  /* [3078] */
    (xdc_Char)0x20,  /* [3079] */
    (xdc_Char)0x62,  /* [3080] */
    (xdc_Char)0x61,  /* [3081] */
    (xdc_Char)0x64,  /* [3082] */
    (xdc_Char)0x20,  /* [3083] */
    (xdc_Char)0x63,  /* [3084] */
    (xdc_Char)0x61,  /* [3085] */
    (xdc_Char)0x6c,  /* [3086] */
    (xdc_Char)0x6c,  /* [3087] */
    (xdc_Char)0x69,  /* [3088] */
    (xdc_Char)0x6e,  /* [3089] */
    (xdc_Char)0x67,  /* [3090] */
    (xdc_Char)0x20,  /* [3091] */
    (xdc_Char)0x63,  /* [3092] */
    (xdc_Char)0x6f,  /* [3093] */
    (xdc_Char)0x6e,  /* [3094] */
    (xdc_Char)0x74,  /* [3095] */
    (xdc_Char)0x65,  /* [3096] */
    (xdc_Char)0x78,  /* [3097] */
    (xdc_Char)0x74,  /* [3098] */
    (xdc_Char)0x2e,  /* [3099] */
    (xdc_Char)0x20,  /* [3100] */
    (xdc_Char)0x53,  /* [3101] */
    (xdc_Char)0x65,  /* [3102] */
    (xdc_Char)0x65,  /* [3103] */
    (xdc_Char)0x20,  /* [3104] */
    (xdc_Char)0x47,  /* [3105] */
    (xdc_Char)0x61,  /* [3106] */
    (xdc_Char)0x74,  /* [3107] */
    (xdc_Char)0x65,  /* [3108] */
    (xdc_Char)0x4d,  /* [3109] */
    (xdc_Char)0x75,  /* [3110] */
    (xdc_Char)0x74,  /* [3111] */
    (xdc_Char)0x65,  /* [3112] */
    (xdc_Char)0x78,  /* [3113] */
    (xdc_Char)0x50,  /* [3114] */
    (xdc_Char)0x72,  /* [3115] */
    (xdc_Char)0x69,  /* [3116] */
    (xdc_Char)0x20,  /* [3117] */
    (xdc_Char)0x41,  /* [3118] */
    (xdc_Char)0x50,  /* [3119] */
    (xdc_Char)0x49,  /* [3120] */
    (xdc_Char)0x20,  /* [3121] */
    (xdc_Char)0x64,  /* [3122] */
    (xdc_Char)0x6f,  /* [3123] */
    (xdc_Char)0x63,  /* [3124] */
    (xdc_Char)0x20,  /* [3125] */
    (xdc_Char)0x66,  /* [3126] */
    (xdc_Char)0x6f,  /* [3127] */
    (xdc_Char)0x72,  /* [3128] */
    (xdc_Char)0x20,  /* [3129] */
    (xdc_Char)0x64,  /* [3130] */
    (xdc_Char)0x65,  /* [3131] */
    (xdc_Char)0x74,  /* [3132] */
    (xdc_Char)0x61,  /* [3133] */
    (xdc_Char)0x69,  /* [3134] */
    (xdc_Char)0x6c,  /* [3135] */
    (xdc_Char)0x73,  /* [3136] */
    (xdc_Char)0x2e,  /* [3137] */
    (xdc_Char)0x0,  /* [3138] */
    (xdc_Char)0x41,  /* [3139] */
    (xdc_Char)0x5f,  /* [3140] */
    (xdc_Char)0x65,  /* [3141] */
    (xdc_Char)0x6e,  /* [3142] */
    (xdc_Char)0x74,  /* [3143] */
    (xdc_Char)0x65,  /* [3144] */
    (xdc_Char)0x72,  /* [3145] */
    (xdc_Char)0x54,  /* [3146] */
    (xdc_Char)0x61,  /* [3147] */
    (xdc_Char)0x73,  /* [3148] */
    (xdc_Char)0x6b,  /* [3149] */
    (xdc_Char)0x44,  /* [3150] */
    (xdc_Char)0x69,  /* [3151] */
    (xdc_Char)0x73,  /* [3152] */
    (xdc_Char)0x61,  /* [3153] */
    (xdc_Char)0x62,  /* [3154] */
    (xdc_Char)0x6c,  /* [3155] */
    (xdc_Char)0x65,  /* [3156] */
    (xdc_Char)0x64,  /* [3157] */
    (xdc_Char)0x3a,  /* [3158] */
    (xdc_Char)0x20,  /* [3159] */
    (xdc_Char)0x43,  /* [3160] */
    (xdc_Char)0x61,  /* [3161] */
    (xdc_Char)0x6e,  /* [3162] */
    (xdc_Char)0x6e,  /* [3163] */
    (xdc_Char)0x6f,  /* [3164] */
    (xdc_Char)0x74,  /* [3165] */
    (xdc_Char)0x20,  /* [3166] */
    (xdc_Char)0x63,  /* [3167] */
    (xdc_Char)0x61,  /* [3168] */
    (xdc_Char)0x6c,  /* [3169] */
    (xdc_Char)0x6c,  /* [3170] */
    (xdc_Char)0x20,  /* [3171] */
    (xdc_Char)0x47,  /* [3172] */
    (xdc_Char)0x61,  /* [3173] */
    (xdc_Char)0x74,  /* [3174] */
    (xdc_Char)0x65,  /* [3175] */
    (xdc_Char)0x4d,  /* [3176] */
    (xdc_Char)0x75,  /* [3177] */
    (xdc_Char)0x74,  /* [3178] */
    (xdc_Char)0x65,  /* [3179] */
    (xdc_Char)0x78,  /* [3180] */
    (xdc_Char)0x50,  /* [3181] */
    (xdc_Char)0x72,  /* [3182] */
    (xdc_Char)0x69,  /* [3183] */
    (xdc_Char)0x5f,  /* [3184] */
    (xdc_Char)0x65,  /* [3185] */
    (xdc_Char)0x6e,  /* [3186] */
    (xdc_Char)0x74,  /* [3187] */
    (xdc_Char)0x65,  /* [3188] */
    (xdc_Char)0x72,  /* [3189] */
    (xdc_Char)0x28,  /* [3190] */
    (xdc_Char)0x29,  /* [3191] */
    (xdc_Char)0x20,  /* [3192] */
    (xdc_Char)0x77,  /* [3193] */
    (xdc_Char)0x68,  /* [3194] */
    (xdc_Char)0x69,  /* [3195] */
    (xdc_Char)0x6c,  /* [3196] */
    (xdc_Char)0x65,  /* [3197] */
    (xdc_Char)0x20,  /* [3198] */
    (xdc_Char)0x74,  /* [3199] */
    (xdc_Char)0x68,  /* [3200] */
    (xdc_Char)0x65,  /* [3201] */
    (xdc_Char)0x20,  /* [3202] */
    (xdc_Char)0x54,  /* [3203] */
    (xdc_Char)0x61,  /* [3204] */
    (xdc_Char)0x73,  /* [3205] */
    (xdc_Char)0x6b,  /* [3206] */
    (xdc_Char)0x20,  /* [3207] */
    (xdc_Char)0x6f,  /* [3208] */
    (xdc_Char)0x72,  /* [3209] */
    (xdc_Char)0x20,  /* [3210] */
    (xdc_Char)0x53,  /* [3211] */
    (xdc_Char)0x77,  /* [3212] */
    (xdc_Char)0x69,  /* [3213] */
    (xdc_Char)0x20,  /* [3214] */
    (xdc_Char)0x73,  /* [3215] */
    (xdc_Char)0x63,  /* [3216] */
    (xdc_Char)0x68,  /* [3217] */
    (xdc_Char)0x65,  /* [3218] */
    (xdc_Char)0x64,  /* [3219] */
    (xdc_Char)0x75,  /* [3220] */
    (xdc_Char)0x6c,  /* [3221] */
    (xdc_Char)0x65,  /* [3222] */
    (xdc_Char)0x72,  /* [3223] */
    (xdc_Char)0x20,  /* [3224] */
    (xdc_Char)0x69,  /* [3225] */
    (xdc_Char)0x73,  /* [3226] */
    (xdc_Char)0x20,  /* [3227] */
    (xdc_Char)0x64,  /* [3228] */
    (xdc_Char)0x69,  /* [3229] */
    (xdc_Char)0x73,  /* [3230] */
    (xdc_Char)0x61,  /* [3231] */
    (xdc_Char)0x62,  /* [3232] */
    (xdc_Char)0x6c,  /* [3233] */
    (xdc_Char)0x65,  /* [3234] */
    (xdc_Char)0x64,  /* [3235] */
    (xdc_Char)0x2e,  /* [3236] */
    (xdc_Char)0x0,  /* [3237] */
    (xdc_Char)0x41,  /* [3238] */
    (xdc_Char)0x5f,  /* [3239] */
    (xdc_Char)0x62,  /* [3240] */
    (xdc_Char)0x61,  /* [3241] */
    (xdc_Char)0x64,  /* [3242] */
    (xdc_Char)0x43,  /* [3243] */
    (xdc_Char)0x6f,  /* [3244] */
    (xdc_Char)0x6e,  /* [3245] */
    (xdc_Char)0x74,  /* [3246] */
    (xdc_Char)0x65,  /* [3247] */
    (xdc_Char)0x78,  /* [3248] */
    (xdc_Char)0x74,  /* [3249] */
    (xdc_Char)0x3a,  /* [3250] */
    (xdc_Char)0x20,  /* [3251] */
    (xdc_Char)0x62,  /* [3252] */
    (xdc_Char)0x61,  /* [3253] */
    (xdc_Char)0x64,  /* [3254] */
    (xdc_Char)0x20,  /* [3255] */
    (xdc_Char)0x63,  /* [3256] */
    (xdc_Char)0x61,  /* [3257] */
    (xdc_Char)0x6c,  /* [3258] */
    (xdc_Char)0x6c,  /* [3259] */
    (xdc_Char)0x69,  /* [3260] */
    (xdc_Char)0x6e,  /* [3261] */
    (xdc_Char)0x67,  /* [3262] */
    (xdc_Char)0x20,  /* [3263] */
    (xdc_Char)0x63,  /* [3264] */
    (xdc_Char)0x6f,  /* [3265] */
    (xdc_Char)0x6e,  /* [3266] */
    (xdc_Char)0x74,  /* [3267] */
    (xdc_Char)0x65,  /* [3268] */
    (xdc_Char)0x78,  /* [3269] */
    (xdc_Char)0x74,  /* [3270] */
    (xdc_Char)0x2e,  /* [3271] */
    (xdc_Char)0x20,  /* [3272] */
    (xdc_Char)0x53,  /* [3273] */
    (xdc_Char)0x65,  /* [3274] */
    (xdc_Char)0x65,  /* [3275] */
    (xdc_Char)0x20,  /* [3276] */
    (xdc_Char)0x47,  /* [3277] */
    (xdc_Char)0x61,  /* [3278] */
    (xdc_Char)0x74,  /* [3279] */
    (xdc_Char)0x65,  /* [3280] */
    (xdc_Char)0x4d,  /* [3281] */
    (xdc_Char)0x75,  /* [3282] */
    (xdc_Char)0x74,  /* [3283] */
    (xdc_Char)0x65,  /* [3284] */
    (xdc_Char)0x78,  /* [3285] */
    (xdc_Char)0x20,  /* [3286] */
    (xdc_Char)0x41,  /* [3287] */
    (xdc_Char)0x50,  /* [3288] */
    (xdc_Char)0x49,  /* [3289] */
    (xdc_Char)0x20,  /* [3290] */
    (xdc_Char)0x64,  /* [3291] */
    (xdc_Char)0x6f,  /* [3292] */
    (xdc_Char)0x63,  /* [3293] */
    (xdc_Char)0x20,  /* [3294] */
    (xdc_Char)0x66,  /* [3295] */
    (xdc_Char)0x6f,  /* [3296] */
    (xdc_Char)0x72,  /* [3297] */
    (xdc_Char)0x20,  /* [3298] */
    (xdc_Char)0x64,  /* [3299] */
    (xdc_Char)0x65,  /* [3300] */
    (xdc_Char)0x74,  /* [3301] */
    (xdc_Char)0x61,  /* [3302] */
    (xdc_Char)0x69,  /* [3303] */
    (xdc_Char)0x6c,  /* [3304] */
    (xdc_Char)0x73,  /* [3305] */
    (xdc_Char)0x2e,  /* [3306] */
    (xdc_Char)0x0,  /* [3307] */
    (xdc_Char)0x41,  /* [3308] */
    (xdc_Char)0x5f,  /* [3309] */
    (xdc_Char)0x62,  /* [3310] */
    (xdc_Char)0x61,  /* [3311] */
    (xdc_Char)0x64,  /* [3312] */
    (xdc_Char)0x43,  /* [3313] */
    (xdc_Char)0x6f,  /* [3314] */
    (xdc_Char)0x6e,  /* [3315] */
    (xdc_Char)0x74,  /* [3316] */
    (xdc_Char)0x65,  /* [3317] */
    (xdc_Char)0x78,  /* [3318] */
    (xdc_Char)0x74,  /* [3319] */
    (xdc_Char)0x3a,  /* [3320] */
    (xdc_Char)0x20,  /* [3321] */
    (xdc_Char)0x62,  /* [3322] */
    (xdc_Char)0x61,  /* [3323] */
    (xdc_Char)0x64,  /* [3324] */
    (xdc_Char)0x20,  /* [3325] */
    (xdc_Char)0x63,  /* [3326] */
    (xdc_Char)0x61,  /* [3327] */
    (xdc_Char)0x6c,  /* [3328] */
    (xdc_Char)0x6c,  /* [3329] */
    (xdc_Char)0x69,  /* [3330] */
    (xdc_Char)0x6e,  /* [3331] */
    (xdc_Char)0x67,  /* [3332] */
    (xdc_Char)0x20,  /* [3333] */
    (xdc_Char)0x63,  /* [3334] */
    (xdc_Char)0x6f,  /* [3335] */
    (xdc_Char)0x6e,  /* [3336] */
    (xdc_Char)0x74,  /* [3337] */
    (xdc_Char)0x65,  /* [3338] */
    (xdc_Char)0x78,  /* [3339] */
    (xdc_Char)0x74,  /* [3340] */
    (xdc_Char)0x2e,  /* [3341] */
    (xdc_Char)0x20,  /* [3342] */
    (xdc_Char)0x53,  /* [3343] */
    (xdc_Char)0x65,  /* [3344] */
    (xdc_Char)0x65,  /* [3345] */
    (xdc_Char)0x20,  /* [3346] */
    (xdc_Char)0x47,  /* [3347] */
    (xdc_Char)0x61,  /* [3348] */
    (xdc_Char)0x74,  /* [3349] */
    (xdc_Char)0x65,  /* [3350] */
    (xdc_Char)0x53,  /* [3351] */
    (xdc_Char)0x70,  /* [3352] */
    (xdc_Char)0x69,  /* [3353] */
    (xdc_Char)0x6e,  /* [3354] */
    (xdc_Char)0x6c,  /* [3355] */
    (xdc_Char)0x6f,  /* [3356] */
    (xdc_Char)0x63,  /* [3357] */
    (xdc_Char)0x6b,  /* [3358] */
    (xdc_Char)0x20,  /* [3359] */
    (xdc_Char)0x41,  /* [3360] */
    (xdc_Char)0x50,  /* [3361] */
    (xdc_Char)0x49,  /* [3362] */
    (xdc_Char)0x20,  /* [3363] */
    (xdc_Char)0x64,  /* [3364] */
    (xdc_Char)0x6f,  /* [3365] */
    (xdc_Char)0x63,  /* [3366] */
    (xdc_Char)0x20,  /* [3367] */
    (xdc_Char)0x66,  /* [3368] */
    (xdc_Char)0x6f,  /* [3369] */
    (xdc_Char)0x72,  /* [3370] */
    (xdc_Char)0x20,  /* [3371] */
    (xdc_Char)0x64,  /* [3372] */
    (xdc_Char)0x65,  /* [3373] */
    (xdc_Char)0x74,  /* [3374] */
    (xdc_Char)0x61,  /* [3375] */
    (xdc_Char)0x69,  /* [3376] */
    (xdc_Char)0x6c,  /* [3377] */
    (xdc_Char)0x73,  /* [3378] */
    (xdc_Char)0x2e,  /* [3379] */
    (xdc_Char)0x0,  /* [3380] */
    (xdc_Char)0x41,  /* [3381] */
    (xdc_Char)0x5f,  /* [3382] */
    (xdc_Char)0x69,  /* [3383] */
    (xdc_Char)0x6e,  /* [3384] */
    (xdc_Char)0x76,  /* [3385] */
    (xdc_Char)0x61,  /* [3386] */
    (xdc_Char)0x6c,  /* [3387] */
    (xdc_Char)0x69,  /* [3388] */
    (xdc_Char)0x64,  /* [3389] */
    (xdc_Char)0x51,  /* [3390] */
    (xdc_Char)0x75,  /* [3391] */
    (xdc_Char)0x61,  /* [3392] */
    (xdc_Char)0x6c,  /* [3393] */
    (xdc_Char)0x69,  /* [3394] */
    (xdc_Char)0x74,  /* [3395] */
    (xdc_Char)0x79,  /* [3396] */
    (xdc_Char)0x3a,  /* [3397] */
    (xdc_Char)0x20,  /* [3398] */
    (xdc_Char)0x53,  /* [3399] */
    (xdc_Char)0x65,  /* [3400] */
    (xdc_Char)0x65,  /* [3401] */
    (xdc_Char)0x20,  /* [3402] */
    (xdc_Char)0x47,  /* [3403] */
    (xdc_Char)0x61,  /* [3404] */
    (xdc_Char)0x74,  /* [3405] */
    (xdc_Char)0x65,  /* [3406] */
    (xdc_Char)0x53,  /* [3407] */
    (xdc_Char)0x70,  /* [3408] */
    (xdc_Char)0x69,  /* [3409] */
    (xdc_Char)0x6e,  /* [3410] */
    (xdc_Char)0x6c,  /* [3411] */
    (xdc_Char)0x6f,  /* [3412] */
    (xdc_Char)0x63,  /* [3413] */
    (xdc_Char)0x6b,  /* [3414] */
    (xdc_Char)0x20,  /* [3415] */
    (xdc_Char)0x41,  /* [3416] */
    (xdc_Char)0x50,  /* [3417] */
    (xdc_Char)0x49,  /* [3418] */
    (xdc_Char)0x20,  /* [3419] */
    (xdc_Char)0x64,  /* [3420] */
    (xdc_Char)0x6f,  /* [3421] */
    (xdc_Char)0x63,  /* [3422] */
    (xdc_Char)0x20,  /* [3423] */
    (xdc_Char)0x66,  /* [3424] */
    (xdc_Char)0x6f,  /* [3425] */
    (xdc_Char)0x72,  /* [3426] */
    (xdc_Char)0x20,  /* [3427] */
    (xdc_Char)0x64,  /* [3428] */
    (xdc_Char)0x65,  /* [3429] */
    (xdc_Char)0x74,  /* [3430] */
    (xdc_Char)0x61,  /* [3431] */
    (xdc_Char)0x69,  /* [3432] */
    (xdc_Char)0x6c,  /* [3433] */
    (xdc_Char)0x73,  /* [3434] */
    (xdc_Char)0x2e,  /* [3435] */
    (xdc_Char)0x0,  /* [3436] */
    (xdc_Char)0x41,  /* [3437] */
    (xdc_Char)0x5f,  /* [3438] */
    (xdc_Char)0x7a,  /* [3439] */
    (xdc_Char)0x65,  /* [3440] */
    (xdc_Char)0x72,  /* [3441] */
    (xdc_Char)0x6f,  /* [3442] */
    (xdc_Char)0x54,  /* [3443] */
    (xdc_Char)0x69,  /* [3444] */
    (xdc_Char)0x6d,  /* [3445] */
    (xdc_Char)0x65,  /* [3446] */
    (xdc_Char)0x6f,  /* [3447] */
    (xdc_Char)0x75,  /* [3448] */
    (xdc_Char)0x74,  /* [3449] */
    (xdc_Char)0x3a,  /* [3450] */
    (xdc_Char)0x20,  /* [3451] */
    (xdc_Char)0x54,  /* [3452] */
    (xdc_Char)0x69,  /* [3453] */
    (xdc_Char)0x6d,  /* [3454] */
    (xdc_Char)0x65,  /* [3455] */
    (xdc_Char)0x6f,  /* [3456] */
    (xdc_Char)0x75,  /* [3457] */
    (xdc_Char)0x74,  /* [3458] */
    (xdc_Char)0x20,  /* [3459] */
    (xdc_Char)0x76,  /* [3460] */
    (xdc_Char)0x61,  /* [3461] */
    (xdc_Char)0x6c,  /* [3462] */
    (xdc_Char)0x75,  /* [3463] */
    (xdc_Char)0x65,  /* [3464] */
    (xdc_Char)0x20,  /* [3465] */
    (xdc_Char)0x61,  /* [3466] */
    (xdc_Char)0x6e,  /* [3467] */
    (xdc_Char)0x6e,  /* [3468] */
    (xdc_Char)0x6f,  /* [3469] */
    (xdc_Char)0x74,  /* [3470] */
    (xdc_Char)0x20,  /* [3471] */
    (xdc_Char)0x62,  /* [3472] */
    (xdc_Char)0x65,  /* [3473] */
    (xdc_Char)0x20,  /* [3474] */
    (xdc_Char)0x7a,  /* [3475] */
    (xdc_Char)0x65,  /* [3476] */
    (xdc_Char)0x72,  /* [3477] */
    (xdc_Char)0x6f,  /* [3478] */
    (xdc_Char)0x0,  /* [3479] */
    (xdc_Char)0x41,  /* [3480] */
    (xdc_Char)0x5f,  /* [3481] */
    (xdc_Char)0x69,  /* [3482] */
    (xdc_Char)0x6e,  /* [3483] */
    (xdc_Char)0x76,  /* [3484] */
    (xdc_Char)0x61,  /* [3485] */
    (xdc_Char)0x6c,  /* [3486] */
    (xdc_Char)0x69,  /* [3487] */
    (xdc_Char)0x64,  /* [3488] */
    (xdc_Char)0x4b,  /* [3489] */
    (xdc_Char)0x65,  /* [3490] */
    (xdc_Char)0x79,  /* [3491] */
    (xdc_Char)0x3a,  /* [3492] */
    (xdc_Char)0x20,  /* [3493] */
    (xdc_Char)0x74,  /* [3494] */
    (xdc_Char)0x68,  /* [3495] */
    (xdc_Char)0x65,  /* [3496] */
    (xdc_Char)0x20,  /* [3497] */
    (xdc_Char)0x6b,  /* [3498] */
    (xdc_Char)0x65,  /* [3499] */
    (xdc_Char)0x79,  /* [3500] */
    (xdc_Char)0x20,  /* [3501] */
    (xdc_Char)0x6d,  /* [3502] */
    (xdc_Char)0x75,  /* [3503] */
    (xdc_Char)0x73,  /* [3504] */
    (xdc_Char)0x74,  /* [3505] */
    (xdc_Char)0x20,  /* [3506] */
    (xdc_Char)0x62,  /* [3507] */
    (xdc_Char)0x65,  /* [3508] */
    (xdc_Char)0x20,  /* [3509] */
    (xdc_Char)0x73,  /* [3510] */
    (xdc_Char)0x65,  /* [3511] */
    (xdc_Char)0x74,  /* [3512] */
    (xdc_Char)0x20,  /* [3513] */
    (xdc_Char)0x74,  /* [3514] */
    (xdc_Char)0x6f,  /* [3515] */
    (xdc_Char)0x20,  /* [3516] */
    (xdc_Char)0x61,  /* [3517] */
    (xdc_Char)0x20,  /* [3518] */
    (xdc_Char)0x6e,  /* [3519] */
    (xdc_Char)0x6f,  /* [3520] */
    (xdc_Char)0x6e,  /* [3521] */
    (xdc_Char)0x2d,  /* [3522] */
    (xdc_Char)0x64,  /* [3523] */
    (xdc_Char)0x65,  /* [3524] */
    (xdc_Char)0x66,  /* [3525] */
    (xdc_Char)0x61,  /* [3526] */
    (xdc_Char)0x75,  /* [3527] */
    (xdc_Char)0x6c,  /* [3528] */
    (xdc_Char)0x74,  /* [3529] */
    (xdc_Char)0x20,  /* [3530] */
    (xdc_Char)0x76,  /* [3531] */
    (xdc_Char)0x61,  /* [3532] */
    (xdc_Char)0x6c,  /* [3533] */
    (xdc_Char)0x75,  /* [3534] */
    (xdc_Char)0x65,  /* [3535] */
    (xdc_Char)0x0,  /* [3536] */
    (xdc_Char)0x61,  /* [3537] */
    (xdc_Char)0x73,  /* [3538] */
    (xdc_Char)0x73,  /* [3539] */
    (xdc_Char)0x65,  /* [3540] */
    (xdc_Char)0x72,  /* [3541] */
    (xdc_Char)0x74,  /* [3542] */
    (xdc_Char)0x69,  /* [3543] */
    (xdc_Char)0x6f,  /* [3544] */
    (xdc_Char)0x6e,  /* [3545] */
    (xdc_Char)0x20,  /* [3546] */
    (xdc_Char)0x66,  /* [3547] */
    (xdc_Char)0x61,  /* [3548] */
    (xdc_Char)0x69,  /* [3549] */
    (xdc_Char)0x6c,  /* [3550] */
    (xdc_Char)0x75,  /* [3551] */
    (xdc_Char)0x72,  /* [3552] */
    (xdc_Char)0x65,  /* [3553] */
    (xdc_Char)0x25,  /* [3554] */
    (xdc_Char)0x73,  /* [3555] */
    (xdc_Char)0x25,  /* [3556] */
    (xdc_Char)0x73,  /* [3557] */
    (xdc_Char)0x0,  /* [3558] */
    (xdc_Char)0x25,  /* [3559] */
    (xdc_Char)0x24,  /* [3560] */
    (xdc_Char)0x53,  /* [3561] */
    (xdc_Char)0x0,  /* [3562] */
    (xdc_Char)0x6f,  /* [3563] */
    (xdc_Char)0x75,  /* [3564] */
    (xdc_Char)0x74,  /* [3565] */
    (xdc_Char)0x20,  /* [3566] */
    (xdc_Char)0x6f,  /* [3567] */
    (xdc_Char)0x66,  /* [3568] */
    (xdc_Char)0x20,  /* [3569] */
    (xdc_Char)0x6d,  /* [3570] */
    (xdc_Char)0x65,  /* [3571] */
    (xdc_Char)0x6d,  /* [3572] */
    (xdc_Char)0x6f,  /* [3573] */
    (xdc_Char)0x72,  /* [3574] */
    (xdc_Char)0x79,  /* [3575] */
    (xdc_Char)0x3a,  /* [3576] */
    (xdc_Char)0x20,  /* [3577] */
    (xdc_Char)0x68,  /* [3578] */
    (xdc_Char)0x65,  /* [3579] */
    (xdc_Char)0x61,  /* [3580] */
    (xdc_Char)0x70,  /* [3581] */
    (xdc_Char)0x3d,  /* [3582] */
    (xdc_Char)0x30,  /* [3583] */
    (xdc_Char)0x78,  /* [3584] */
    (xdc_Char)0x25,  /* [3585] */
    (xdc_Char)0x78,  /* [3586] */
    (xdc_Char)0x2c,  /* [3587] */
    (xdc_Char)0x20,  /* [3588] */
    (xdc_Char)0x73,  /* [3589] */
    (xdc_Char)0x69,  /* [3590] */
    (xdc_Char)0x7a,  /* [3591] */
    (xdc_Char)0x65,  /* [3592] */
    (xdc_Char)0x3d,  /* [3593] */
    (xdc_Char)0x25,  /* [3594] */
    (xdc_Char)0x75,  /* [3595] */
    (xdc_Char)0x0,  /* [3596] */
    (xdc_Char)0x25,  /* [3597] */
    (xdc_Char)0x73,  /* [3598] */
    (xdc_Char)0x20,  /* [3599] */
    (xdc_Char)0x30,  /* [3600] */
    (xdc_Char)0x78,  /* [3601] */
    (xdc_Char)0x25,  /* [3602] */
    (xdc_Char)0x78,  /* [3603] */
    (xdc_Char)0x0,  /* [3604] */
    (xdc_Char)0x45,  /* [3605] */
    (xdc_Char)0x5f,  /* [3606] */
    (xdc_Char)0x62,  /* [3607] */
    (xdc_Char)0x61,  /* [3608] */
    (xdc_Char)0x64,  /* [3609] */
    (xdc_Char)0x4c,  /* [3610] */
    (xdc_Char)0x65,  /* [3611] */
    (xdc_Char)0x76,  /* [3612] */
    (xdc_Char)0x65,  /* [3613] */
    (xdc_Char)0x6c,  /* [3614] */
    (xdc_Char)0x3a,  /* [3615] */
    (xdc_Char)0x20,  /* [3616] */
    (xdc_Char)0x42,  /* [3617] */
    (xdc_Char)0x61,  /* [3618] */
    (xdc_Char)0x64,  /* [3619] */
    (xdc_Char)0x20,  /* [3620] */
    (xdc_Char)0x66,  /* [3621] */
    (xdc_Char)0x69,  /* [3622] */
    (xdc_Char)0x6c,  /* [3623] */
    (xdc_Char)0x74,  /* [3624] */
    (xdc_Char)0x65,  /* [3625] */
    (xdc_Char)0x72,  /* [3626] */
    (xdc_Char)0x20,  /* [3627] */
    (xdc_Char)0x6c,  /* [3628] */
    (xdc_Char)0x65,  /* [3629] */
    (xdc_Char)0x76,  /* [3630] */
    (xdc_Char)0x65,  /* [3631] */
    (xdc_Char)0x6c,  /* [3632] */
    (xdc_Char)0x20,  /* [3633] */
    (xdc_Char)0x76,  /* [3634] */
    (xdc_Char)0x61,  /* [3635] */
    (xdc_Char)0x6c,  /* [3636] */
    (xdc_Char)0x75,  /* [3637] */
    (xdc_Char)0x65,  /* [3638] */
    (xdc_Char)0x3a,  /* [3639] */
    (xdc_Char)0x20,  /* [3640] */
    (xdc_Char)0x25,  /* [3641] */
    (xdc_Char)0x64,  /* [3642] */
    (xdc_Char)0x0,  /* [3643] */
    (xdc_Char)0x66,  /* [3644] */
    (xdc_Char)0x72,  /* [3645] */
    (xdc_Char)0x65,  /* [3646] */
    (xdc_Char)0x65,  /* [3647] */
    (xdc_Char)0x28,  /* [3648] */
    (xdc_Char)0x29,  /* [3649] */
    (xdc_Char)0x20,  /* [3650] */
    (xdc_Char)0x69,  /* [3651] */
    (xdc_Char)0x6e,  /* [3652] */
    (xdc_Char)0x76,  /* [3653] */
    (xdc_Char)0x61,  /* [3654] */
    (xdc_Char)0x6c,  /* [3655] */
    (xdc_Char)0x69,  /* [3656] */
    (xdc_Char)0x64,  /* [3657] */
    (xdc_Char)0x20,  /* [3658] */
    (xdc_Char)0x69,  /* [3659] */
    (xdc_Char)0x6e,  /* [3660] */
    (xdc_Char)0x20,  /* [3661] */
    (xdc_Char)0x67,  /* [3662] */
    (xdc_Char)0x72,  /* [3663] */
    (xdc_Char)0x6f,  /* [3664] */
    (xdc_Char)0x77,  /* [3665] */
    (xdc_Char)0x74,  /* [3666] */
    (xdc_Char)0x68,  /* [3667] */
    (xdc_Char)0x2d,  /* [3668] */
    (xdc_Char)0x6f,  /* [3669] */
    (xdc_Char)0x6e,  /* [3670] */
    (xdc_Char)0x6c,  /* [3671] */
    (xdc_Char)0x79,  /* [3672] */
    (xdc_Char)0x20,  /* [3673] */
    (xdc_Char)0x48,  /* [3674] */
    (xdc_Char)0x65,  /* [3675] */
    (xdc_Char)0x61,  /* [3676] */
    (xdc_Char)0x70,  /* [3677] */
    (xdc_Char)0x4d,  /* [3678] */
    (xdc_Char)0x69,  /* [3679] */
    (xdc_Char)0x6e,  /* [3680] */
    (xdc_Char)0x0,  /* [3681] */
    (xdc_Char)0x54,  /* [3682] */
    (xdc_Char)0x68,  /* [3683] */
    (xdc_Char)0x65,  /* [3684] */
    (xdc_Char)0x20,  /* [3685] */
    (xdc_Char)0x52,  /* [3686] */
    (xdc_Char)0x54,  /* [3687] */
    (xdc_Char)0x53,  /* [3688] */
    (xdc_Char)0x20,  /* [3689] */
    (xdc_Char)0x68,  /* [3690] */
    (xdc_Char)0x65,  /* [3691] */
    (xdc_Char)0x61,  /* [3692] */
    (xdc_Char)0x70,  /* [3693] */
    (xdc_Char)0x20,  /* [3694] */
    (xdc_Char)0x69,  /* [3695] */
    (xdc_Char)0x73,  /* [3696] */
    (xdc_Char)0x20,  /* [3697] */
    (xdc_Char)0x75,  /* [3698] */
    (xdc_Char)0x73,  /* [3699] */
    (xdc_Char)0x65,  /* [3700] */
    (xdc_Char)0x64,  /* [3701] */
    (xdc_Char)0x20,  /* [3702] */
    (xdc_Char)0x75,  /* [3703] */
    (xdc_Char)0x70,  /* [3704] */
    (xdc_Char)0x2e,  /* [3705] */
    (xdc_Char)0x20,  /* [3706] */
    (xdc_Char)0x45,  /* [3707] */
    (xdc_Char)0x78,  /* [3708] */
    (xdc_Char)0x61,  /* [3709] */
    (xdc_Char)0x6d,  /* [3710] */
    (xdc_Char)0x69,  /* [3711] */
    (xdc_Char)0x6e,  /* [3712] */
    (xdc_Char)0x65,  /* [3713] */
    (xdc_Char)0x20,  /* [3714] */
    (xdc_Char)0x50,  /* [3715] */
    (xdc_Char)0x72,  /* [3716] */
    (xdc_Char)0x6f,  /* [3717] */
    (xdc_Char)0x67,  /* [3718] */
    (xdc_Char)0x72,  /* [3719] */
    (xdc_Char)0x61,  /* [3720] */
    (xdc_Char)0x6d,  /* [3721] */
    (xdc_Char)0x2e,  /* [3722] */
    (xdc_Char)0x68,  /* [3723] */
    (xdc_Char)0x65,  /* [3724] */
    (xdc_Char)0x61,  /* [3725] */
    (xdc_Char)0x70,  /* [3726] */
    (xdc_Char)0x2e,  /* [3727] */
    (xdc_Char)0x0,  /* [3728] */
    (xdc_Char)0x45,  /* [3729] */
    (xdc_Char)0x5f,  /* [3730] */
    (xdc_Char)0x62,  /* [3731] */
    (xdc_Char)0x61,  /* [3732] */
    (xdc_Char)0x64,  /* [3733] */
    (xdc_Char)0x43,  /* [3734] */
    (xdc_Char)0x6f,  /* [3735] */
    (xdc_Char)0x6d,  /* [3736] */
    (xdc_Char)0x6d,  /* [3737] */
    (xdc_Char)0x61,  /* [3738] */
    (xdc_Char)0x6e,  /* [3739] */
    (xdc_Char)0x64,  /* [3740] */
    (xdc_Char)0x3a,  /* [3741] */
    (xdc_Char)0x20,  /* [3742] */
    (xdc_Char)0x52,  /* [3743] */
    (xdc_Char)0x65,  /* [3744] */
    (xdc_Char)0x63,  /* [3745] */
    (xdc_Char)0x65,  /* [3746] */
    (xdc_Char)0x69,  /* [3747] */
    (xdc_Char)0x76,  /* [3748] */
    (xdc_Char)0x65,  /* [3749] */
    (xdc_Char)0x64,  /* [3750] */
    (xdc_Char)0x20,  /* [3751] */
    (xdc_Char)0x69,  /* [3752] */
    (xdc_Char)0x6e,  /* [3753] */
    (xdc_Char)0x76,  /* [3754] */
    (xdc_Char)0x61,  /* [3755] */
    (xdc_Char)0x6c,  /* [3756] */
    (xdc_Char)0x69,  /* [3757] */
    (xdc_Char)0x64,  /* [3758] */
    (xdc_Char)0x20,  /* [3759] */
    (xdc_Char)0x63,  /* [3760] */
    (xdc_Char)0x6f,  /* [3761] */
    (xdc_Char)0x6d,  /* [3762] */
    (xdc_Char)0x6d,  /* [3763] */
    (xdc_Char)0x61,  /* [3764] */
    (xdc_Char)0x6e,  /* [3765] */
    (xdc_Char)0x64,  /* [3766] */
    (xdc_Char)0x2c,  /* [3767] */
    (xdc_Char)0x20,  /* [3768] */
    (xdc_Char)0x69,  /* [3769] */
    (xdc_Char)0x64,  /* [3770] */
    (xdc_Char)0x3a,  /* [3771] */
    (xdc_Char)0x20,  /* [3772] */
    (xdc_Char)0x25,  /* [3773] */
    (xdc_Char)0x64,  /* [3774] */
    (xdc_Char)0x2e,  /* [3775] */
    (xdc_Char)0x0,  /* [3776] */
    (xdc_Char)0x45,  /* [3777] */
    (xdc_Char)0x5f,  /* [3778] */
    (xdc_Char)0x6f,  /* [3779] */
    (xdc_Char)0x62,  /* [3780] */
    (xdc_Char)0x6a,  /* [3781] */
    (xdc_Char)0x65,  /* [3782] */
    (xdc_Char)0x63,  /* [3783] */
    (xdc_Char)0x74,  /* [3784] */
    (xdc_Char)0x4e,  /* [3785] */
    (xdc_Char)0x6f,  /* [3786] */
    (xdc_Char)0x74,  /* [3787] */
    (xdc_Char)0x49,  /* [3788] */
    (xdc_Char)0x6e,  /* [3789] */
    (xdc_Char)0x4b,  /* [3790] */
    (xdc_Char)0x65,  /* [3791] */
    (xdc_Char)0x72,  /* [3792] */
    (xdc_Char)0x6e,  /* [3793] */
    (xdc_Char)0x65,  /* [3794] */
    (xdc_Char)0x6c,  /* [3795] */
    (xdc_Char)0x53,  /* [3796] */
    (xdc_Char)0x70,  /* [3797] */
    (xdc_Char)0x61,  /* [3798] */
    (xdc_Char)0x63,  /* [3799] */
    (xdc_Char)0x65,  /* [3800] */
    (xdc_Char)0x3a,  /* [3801] */
    (xdc_Char)0x20,  /* [3802] */
    (xdc_Char)0x53,  /* [3803] */
    (xdc_Char)0x65,  /* [3804] */
    (xdc_Char)0x6d,  /* [3805] */
    (xdc_Char)0x61,  /* [3806] */
    (xdc_Char)0x70,  /* [3807] */
    (xdc_Char)0x68,  /* [3808] */
    (xdc_Char)0x6f,  /* [3809] */
    (xdc_Char)0x72,  /* [3810] */
    (xdc_Char)0x65,  /* [3811] */
    (xdc_Char)0x20,  /* [3812] */
    (xdc_Char)0x6f,  /* [3813] */
    (xdc_Char)0x62,  /* [3814] */
    (xdc_Char)0x6a,  /* [3815] */
    (xdc_Char)0x65,  /* [3816] */
    (xdc_Char)0x63,  /* [3817] */
    (xdc_Char)0x74,  /* [3818] */
    (xdc_Char)0x20,  /* [3819] */
    (xdc_Char)0x70,  /* [3820] */
    (xdc_Char)0x61,  /* [3821] */
    (xdc_Char)0x73,  /* [3822] */
    (xdc_Char)0x73,  /* [3823] */
    (xdc_Char)0x65,  /* [3824] */
    (xdc_Char)0x64,  /* [3825] */
    (xdc_Char)0x20,  /* [3826] */
    (xdc_Char)0x6e,  /* [3827] */
    (xdc_Char)0x6f,  /* [3828] */
    (xdc_Char)0x74,  /* [3829] */
    (xdc_Char)0x20,  /* [3830] */
    (xdc_Char)0x69,  /* [3831] */
    (xdc_Char)0x6e,  /* [3832] */
    (xdc_Char)0x20,  /* [3833] */
    (xdc_Char)0x4b,  /* [3834] */
    (xdc_Char)0x65,  /* [3835] */
    (xdc_Char)0x72,  /* [3836] */
    (xdc_Char)0x6e,  /* [3837] */
    (xdc_Char)0x65,  /* [3838] */
    (xdc_Char)0x6c,  /* [3839] */
    (xdc_Char)0x20,  /* [3840] */
    (xdc_Char)0x61,  /* [3841] */
    (xdc_Char)0x64,  /* [3842] */
    (xdc_Char)0x64,  /* [3843] */
    (xdc_Char)0x72,  /* [3844] */
    (xdc_Char)0x65,  /* [3845] */
    (xdc_Char)0x73,  /* [3846] */
    (xdc_Char)0x73,  /* [3847] */
    (xdc_Char)0x20,  /* [3848] */
    (xdc_Char)0x73,  /* [3849] */
    (xdc_Char)0x70,  /* [3850] */
    (xdc_Char)0x61,  /* [3851] */
    (xdc_Char)0x63,  /* [3852] */
    (xdc_Char)0x65,  /* [3853] */
    (xdc_Char)0x2e,  /* [3854] */
    (xdc_Char)0x0,  /* [3855] */
    (xdc_Char)0x45,  /* [3856] */
    (xdc_Char)0x5f,  /* [3857] */
    (xdc_Char)0x73,  /* [3858] */
    (xdc_Char)0x74,  /* [3859] */
    (xdc_Char)0x61,  /* [3860] */
    (xdc_Char)0x63,  /* [3861] */
    (xdc_Char)0x6b,  /* [3862] */
    (xdc_Char)0x4f,  /* [3863] */
    (xdc_Char)0x76,  /* [3864] */
    (xdc_Char)0x65,  /* [3865] */
    (xdc_Char)0x72,  /* [3866] */
    (xdc_Char)0x66,  /* [3867] */
    (xdc_Char)0x6c,  /* [3868] */
    (xdc_Char)0x6f,  /* [3869] */
    (xdc_Char)0x77,  /* [3870] */
    (xdc_Char)0x3a,  /* [3871] */
    (xdc_Char)0x20,  /* [3872] */
    (xdc_Char)0x54,  /* [3873] */
    (xdc_Char)0x61,  /* [3874] */
    (xdc_Char)0x73,  /* [3875] */
    (xdc_Char)0x6b,  /* [3876] */
    (xdc_Char)0x20,  /* [3877] */
    (xdc_Char)0x30,  /* [3878] */
    (xdc_Char)0x78,  /* [3879] */
    (xdc_Char)0x25,  /* [3880] */
    (xdc_Char)0x78,  /* [3881] */
    (xdc_Char)0x20,  /* [3882] */
    (xdc_Char)0x73,  /* [3883] */
    (xdc_Char)0x74,  /* [3884] */
    (xdc_Char)0x61,  /* [3885] */
    (xdc_Char)0x63,  /* [3886] */
    (xdc_Char)0x6b,  /* [3887] */
    (xdc_Char)0x20,  /* [3888] */
    (xdc_Char)0x6f,  /* [3889] */
    (xdc_Char)0x76,  /* [3890] */
    (xdc_Char)0x65,  /* [3891] */
    (xdc_Char)0x72,  /* [3892] */
    (xdc_Char)0x66,  /* [3893] */
    (xdc_Char)0x6c,  /* [3894] */
    (xdc_Char)0x6f,  /* [3895] */
    (xdc_Char)0x77,  /* [3896] */
    (xdc_Char)0x2e,  /* [3897] */
    (xdc_Char)0x0,  /* [3898] */
    (xdc_Char)0x45,  /* [3899] */
    (xdc_Char)0x5f,  /* [3900] */
    (xdc_Char)0x73,  /* [3901] */
    (xdc_Char)0x70,  /* [3902] */
    (xdc_Char)0x4f,  /* [3903] */
    (xdc_Char)0x75,  /* [3904] */
    (xdc_Char)0x74,  /* [3905] */
    (xdc_Char)0x4f,  /* [3906] */
    (xdc_Char)0x66,  /* [3907] */
    (xdc_Char)0x42,  /* [3908] */
    (xdc_Char)0x6f,  /* [3909] */
    (xdc_Char)0x75,  /* [3910] */
    (xdc_Char)0x6e,  /* [3911] */
    (xdc_Char)0x64,  /* [3912] */
    (xdc_Char)0x73,  /* [3913] */
    (xdc_Char)0x3a,  /* [3914] */
    (xdc_Char)0x20,  /* [3915] */
    (xdc_Char)0x54,  /* [3916] */
    (xdc_Char)0x61,  /* [3917] */
    (xdc_Char)0x73,  /* [3918] */
    (xdc_Char)0x6b,  /* [3919] */
    (xdc_Char)0x20,  /* [3920] */
    (xdc_Char)0x30,  /* [3921] */
    (xdc_Char)0x78,  /* [3922] */
    (xdc_Char)0x25,  /* [3923] */
    (xdc_Char)0x78,  /* [3924] */
    (xdc_Char)0x20,  /* [3925] */
    (xdc_Char)0x73,  /* [3926] */
    (xdc_Char)0x74,  /* [3927] */
    (xdc_Char)0x61,  /* [3928] */
    (xdc_Char)0x63,  /* [3929] */
    (xdc_Char)0x6b,  /* [3930] */
    (xdc_Char)0x20,  /* [3931] */
    (xdc_Char)0x65,  /* [3932] */
    (xdc_Char)0x72,  /* [3933] */
    (xdc_Char)0x72,  /* [3934] */
    (xdc_Char)0x6f,  /* [3935] */
    (xdc_Char)0x72,  /* [3936] */
    (xdc_Char)0x2c,  /* [3937] */
    (xdc_Char)0x20,  /* [3938] */
    (xdc_Char)0x53,  /* [3939] */
    (xdc_Char)0x50,  /* [3940] */
    (xdc_Char)0x20,  /* [3941] */
    (xdc_Char)0x3d,  /* [3942] */
    (xdc_Char)0x20,  /* [3943] */
    (xdc_Char)0x30,  /* [3944] */
    (xdc_Char)0x78,  /* [3945] */
    (xdc_Char)0x25,  /* [3946] */
    (xdc_Char)0x78,  /* [3947] */
    (xdc_Char)0x2e,  /* [3948] */
    (xdc_Char)0x0,  /* [3949] */
    (xdc_Char)0x45,  /* [3950] */
    (xdc_Char)0x5f,  /* [3951] */
    (xdc_Char)0x64,  /* [3952] */
    (xdc_Char)0x65,  /* [3953] */
    (xdc_Char)0x6c,  /* [3954] */
    (xdc_Char)0x65,  /* [3955] */
    (xdc_Char)0x74,  /* [3956] */
    (xdc_Char)0x65,  /* [3957] */
    (xdc_Char)0x4e,  /* [3958] */
    (xdc_Char)0x6f,  /* [3959] */
    (xdc_Char)0x74,  /* [3960] */
    (xdc_Char)0x41,  /* [3961] */
    (xdc_Char)0x6c,  /* [3962] */
    (xdc_Char)0x6c,  /* [3963] */
    (xdc_Char)0x6f,  /* [3964] */
    (xdc_Char)0x77,  /* [3965] */
    (xdc_Char)0x65,  /* [3966] */
    (xdc_Char)0x64,  /* [3967] */
    (xdc_Char)0x3a,  /* [3968] */
    (xdc_Char)0x20,  /* [3969] */
    (xdc_Char)0x54,  /* [3970] */
    (xdc_Char)0x61,  /* [3971] */
    (xdc_Char)0x73,  /* [3972] */
    (xdc_Char)0x6b,  /* [3973] */
    (xdc_Char)0x20,  /* [3974] */
    (xdc_Char)0x30,  /* [3975] */
    (xdc_Char)0x78,  /* [3976] */
    (xdc_Char)0x25,  /* [3977] */
    (xdc_Char)0x78,  /* [3978] */
    (xdc_Char)0x2e,  /* [3979] */
    (xdc_Char)0x0,  /* [3980] */
    (xdc_Char)0x45,  /* [3981] */
    (xdc_Char)0x5f,  /* [3982] */
    (xdc_Char)0x6d,  /* [3983] */
    (xdc_Char)0x6f,  /* [3984] */
    (xdc_Char)0x64,  /* [3985] */
    (xdc_Char)0x75,  /* [3986] */
    (xdc_Char)0x6c,  /* [3987] */
    (xdc_Char)0x65,  /* [3988] */
    (xdc_Char)0x53,  /* [3989] */
    (xdc_Char)0x74,  /* [3990] */
    (xdc_Char)0x61,  /* [3991] */
    (xdc_Char)0x74,  /* [3992] */
    (xdc_Char)0x65,  /* [3993] */
    (xdc_Char)0x43,  /* [3994] */
    (xdc_Char)0x68,  /* [3995] */
    (xdc_Char)0x65,  /* [3996] */
    (xdc_Char)0x63,  /* [3997] */
    (xdc_Char)0x6b,  /* [3998] */
    (xdc_Char)0x46,  /* [3999] */
    (xdc_Char)0x61,  /* [4000] */
    (xdc_Char)0x69,  /* [4001] */
    (xdc_Char)0x6c,  /* [4002] */
    (xdc_Char)0x65,  /* [4003] */
    (xdc_Char)0x64,  /* [4004] */
    (xdc_Char)0x3a,  /* [4005] */
    (xdc_Char)0x20,  /* [4006] */
    (xdc_Char)0x54,  /* [4007] */
    (xdc_Char)0x61,  /* [4008] */
    (xdc_Char)0x73,  /* [4009] */
    (xdc_Char)0x6b,  /* [4010] */
    (xdc_Char)0x20,  /* [4011] */
    (xdc_Char)0x6d,  /* [4012] */
    (xdc_Char)0x6f,  /* [4013] */
    (xdc_Char)0x64,  /* [4014] */
    (xdc_Char)0x75,  /* [4015] */
    (xdc_Char)0x6c,  /* [4016] */
    (xdc_Char)0x65,  /* [4017] */
    (xdc_Char)0x20,  /* [4018] */
    (xdc_Char)0x73,  /* [4019] */
    (xdc_Char)0x74,  /* [4020] */
    (xdc_Char)0x61,  /* [4021] */
    (xdc_Char)0x74,  /* [4022] */
    (xdc_Char)0x65,  /* [4023] */
    (xdc_Char)0x20,  /* [4024] */
    (xdc_Char)0x64,  /* [4025] */
    (xdc_Char)0x61,  /* [4026] */
    (xdc_Char)0x74,  /* [4027] */
    (xdc_Char)0x61,  /* [4028] */
    (xdc_Char)0x20,  /* [4029] */
    (xdc_Char)0x69,  /* [4030] */
    (xdc_Char)0x6e,  /* [4031] */
    (xdc_Char)0x74,  /* [4032] */
    (xdc_Char)0x65,  /* [4033] */
    (xdc_Char)0x67,  /* [4034] */
    (xdc_Char)0x72,  /* [4035] */
    (xdc_Char)0x69,  /* [4036] */
    (xdc_Char)0x74,  /* [4037] */
    (xdc_Char)0x79,  /* [4038] */
    (xdc_Char)0x20,  /* [4039] */
    (xdc_Char)0x63,  /* [4040] */
    (xdc_Char)0x68,  /* [4041] */
    (xdc_Char)0x65,  /* [4042] */
    (xdc_Char)0x63,  /* [4043] */
    (xdc_Char)0x6b,  /* [4044] */
    (xdc_Char)0x20,  /* [4045] */
    (xdc_Char)0x66,  /* [4046] */
    (xdc_Char)0x61,  /* [4047] */
    (xdc_Char)0x69,  /* [4048] */
    (xdc_Char)0x6c,  /* [4049] */
    (xdc_Char)0x65,  /* [4050] */
    (xdc_Char)0x64,  /* [4051] */
    (xdc_Char)0x2e,  /* [4052] */
    (xdc_Char)0x0,  /* [4053] */
    (xdc_Char)0x45,  /* [4054] */
    (xdc_Char)0x5f,  /* [4055] */
    (xdc_Char)0x6f,  /* [4056] */
    (xdc_Char)0x62,  /* [4057] */
    (xdc_Char)0x6a,  /* [4058] */
    (xdc_Char)0x65,  /* [4059] */
    (xdc_Char)0x63,  /* [4060] */
    (xdc_Char)0x74,  /* [4061] */
    (xdc_Char)0x43,  /* [4062] */
    (xdc_Char)0x68,  /* [4063] */
    (xdc_Char)0x65,  /* [4064] */
    (xdc_Char)0x63,  /* [4065] */
    (xdc_Char)0x6b,  /* [4066] */
    (xdc_Char)0x46,  /* [4067] */
    (xdc_Char)0x61,  /* [4068] */
    (xdc_Char)0x69,  /* [4069] */
    (xdc_Char)0x6c,  /* [4070] */
    (xdc_Char)0x65,  /* [4071] */
    (xdc_Char)0x64,  /* [4072] */
    (xdc_Char)0x3a,  /* [4073] */
    (xdc_Char)0x20,  /* [4074] */
    (xdc_Char)0x54,  /* [4075] */
    (xdc_Char)0x61,  /* [4076] */
    (xdc_Char)0x73,  /* [4077] */
    (xdc_Char)0x6b,  /* [4078] */
    (xdc_Char)0x20,  /* [4079] */
    (xdc_Char)0x30,  /* [4080] */
    (xdc_Char)0x78,  /* [4081] */
    (xdc_Char)0x25,  /* [4082] */
    (xdc_Char)0x78,  /* [4083] */
    (xdc_Char)0x20,  /* [4084] */
    (xdc_Char)0x6f,  /* [4085] */
    (xdc_Char)0x62,  /* [4086] */
    (xdc_Char)0x6a,  /* [4087] */
    (xdc_Char)0x65,  /* [4088] */
    (xdc_Char)0x63,  /* [4089] */
    (xdc_Char)0x74,  /* [4090] */
    (xdc_Char)0x20,  /* [4091] */
    (xdc_Char)0x64,  /* [4092] */
    (xdc_Char)0x61,  /* [4093] */
    (xdc_Char)0x74,  /* [4094] */
    (xdc_Char)0x61,  /* [4095] */
    (xdc_Char)0x20,  /* [4096] */
    (xdc_Char)0x69,  /* [4097] */
    (xdc_Char)0x6e,  /* [4098] */
    (xdc_Char)0x74,  /* [4099] */
    (xdc_Char)0x65,  /* [4100] */
    (xdc_Char)0x67,  /* [4101] */
    (xdc_Char)0x72,  /* [4102] */
    (xdc_Char)0x69,  /* [4103] */
    (xdc_Char)0x74,  /* [4104] */
    (xdc_Char)0x79,  /* [4105] */
    (xdc_Char)0x20,  /* [4106] */
    (xdc_Char)0x63,  /* [4107] */
    (xdc_Char)0x68,  /* [4108] */
    (xdc_Char)0x65,  /* [4109] */
    (xdc_Char)0x63,  /* [4110] */
    (xdc_Char)0x6b,  /* [4111] */
    (xdc_Char)0x20,  /* [4112] */
    (xdc_Char)0x66,  /* [4113] */
    (xdc_Char)0x61,  /* [4114] */
    (xdc_Char)0x69,  /* [4115] */
    (xdc_Char)0x6c,  /* [4116] */
    (xdc_Char)0x65,  /* [4117] */
    (xdc_Char)0x64,  /* [4118] */
    (xdc_Char)0x2e,  /* [4119] */
    (xdc_Char)0x0,  /* [4120] */
    (xdc_Char)0x45,  /* [4121] */
    (xdc_Char)0x5f,  /* [4122] */
    (xdc_Char)0x6f,  /* [4123] */
    (xdc_Char)0x62,  /* [4124] */
    (xdc_Char)0x6a,  /* [4125] */
    (xdc_Char)0x65,  /* [4126] */
    (xdc_Char)0x63,  /* [4127] */
    (xdc_Char)0x74,  /* [4128] */
    (xdc_Char)0x4e,  /* [4129] */
    (xdc_Char)0x6f,  /* [4130] */
    (xdc_Char)0x74,  /* [4131] */
    (xdc_Char)0x49,  /* [4132] */
    (xdc_Char)0x6e,  /* [4133] */
    (xdc_Char)0x4b,  /* [4134] */
    (xdc_Char)0x65,  /* [4135] */
    (xdc_Char)0x72,  /* [4136] */
    (xdc_Char)0x6e,  /* [4137] */
    (xdc_Char)0x65,  /* [4138] */
    (xdc_Char)0x6c,  /* [4139] */
    (xdc_Char)0x53,  /* [4140] */
    (xdc_Char)0x70,  /* [4141] */
    (xdc_Char)0x61,  /* [4142] */
    (xdc_Char)0x63,  /* [4143] */
    (xdc_Char)0x65,  /* [4144] */
    (xdc_Char)0x3a,  /* [4145] */
    (xdc_Char)0x20,  /* [4146] */
    (xdc_Char)0x54,  /* [4147] */
    (xdc_Char)0x61,  /* [4148] */
    (xdc_Char)0x73,  /* [4149] */
    (xdc_Char)0x6b,  /* [4150] */
    (xdc_Char)0x20,  /* [4151] */
    (xdc_Char)0x6f,  /* [4152] */
    (xdc_Char)0x62,  /* [4153] */
    (xdc_Char)0x6a,  /* [4154] */
    (xdc_Char)0x65,  /* [4155] */
    (xdc_Char)0x63,  /* [4156] */
    (xdc_Char)0x74,  /* [4157] */
    (xdc_Char)0x20,  /* [4158] */
    (xdc_Char)0x70,  /* [4159] */
    (xdc_Char)0x61,  /* [4160] */
    (xdc_Char)0x73,  /* [4161] */
    (xdc_Char)0x73,  /* [4162] */
    (xdc_Char)0x65,  /* [4163] */
    (xdc_Char)0x64,  /* [4164] */
    (xdc_Char)0x20,  /* [4165] */
    (xdc_Char)0x6e,  /* [4166] */
    (xdc_Char)0x6f,  /* [4167] */
    (xdc_Char)0x74,  /* [4168] */
    (xdc_Char)0x20,  /* [4169] */
    (xdc_Char)0x69,  /* [4170] */
    (xdc_Char)0x6e,  /* [4171] */
    (xdc_Char)0x20,  /* [4172] */
    (xdc_Char)0x4b,  /* [4173] */
    (xdc_Char)0x65,  /* [4174] */
    (xdc_Char)0x72,  /* [4175] */
    (xdc_Char)0x6e,  /* [4176] */
    (xdc_Char)0x65,  /* [4177] */
    (xdc_Char)0x6c,  /* [4178] */
    (xdc_Char)0x20,  /* [4179] */
    (xdc_Char)0x61,  /* [4180] */
    (xdc_Char)0x64,  /* [4181] */
    (xdc_Char)0x64,  /* [4182] */
    (xdc_Char)0x72,  /* [4183] */
    (xdc_Char)0x65,  /* [4184] */
    (xdc_Char)0x73,  /* [4185] */
    (xdc_Char)0x73,  /* [4186] */
    (xdc_Char)0x20,  /* [4187] */
    (xdc_Char)0x73,  /* [4188] */
    (xdc_Char)0x70,  /* [4189] */
    (xdc_Char)0x61,  /* [4190] */
    (xdc_Char)0x63,  /* [4191] */
    (xdc_Char)0x65,  /* [4192] */
    (xdc_Char)0x2e,  /* [4193] */
    (xdc_Char)0x0,  /* [4194] */
    (xdc_Char)0x45,  /* [4195] */
    (xdc_Char)0x5f,  /* [4196] */
    (xdc_Char)0x73,  /* [4197] */
    (xdc_Char)0x74,  /* [4198] */
    (xdc_Char)0x61,  /* [4199] */
    (xdc_Char)0x63,  /* [4200] */
    (xdc_Char)0x6b,  /* [4201] */
    (xdc_Char)0x4f,  /* [4202] */
    (xdc_Char)0x76,  /* [4203] */
    (xdc_Char)0x65,  /* [4204] */
    (xdc_Char)0x72,  /* [4205] */
    (xdc_Char)0x66,  /* [4206] */
    (xdc_Char)0x6c,  /* [4207] */
    (xdc_Char)0x6f,  /* [4208] */
    (xdc_Char)0x77,  /* [4209] */
    (xdc_Char)0x3a,  /* [4210] */
    (xdc_Char)0x20,  /* [4211] */
    (xdc_Char)0x49,  /* [4212] */
    (xdc_Char)0x53,  /* [4213] */
    (xdc_Char)0x52,  /* [4214] */
    (xdc_Char)0x20,  /* [4215] */
    (xdc_Char)0x73,  /* [4216] */
    (xdc_Char)0x74,  /* [4217] */
    (xdc_Char)0x61,  /* [4218] */
    (xdc_Char)0x63,  /* [4219] */
    (xdc_Char)0x6b,  /* [4220] */
    (xdc_Char)0x20,  /* [4221] */
    (xdc_Char)0x6f,  /* [4222] */
    (xdc_Char)0x76,  /* [4223] */
    (xdc_Char)0x65,  /* [4224] */
    (xdc_Char)0x72,  /* [4225] */
    (xdc_Char)0x66,  /* [4226] */
    (xdc_Char)0x6c,  /* [4227] */
    (xdc_Char)0x6f,  /* [4228] */
    (xdc_Char)0x77,  /* [4229] */
    (xdc_Char)0x2e,  /* [4230] */
    (xdc_Char)0x0,  /* [4231] */
    (xdc_Char)0x45,  /* [4232] */
    (xdc_Char)0x5f,  /* [4233] */
    (xdc_Char)0x61,  /* [4234] */
    (xdc_Char)0x6c,  /* [4235] */
    (xdc_Char)0x72,  /* [4236] */
    (xdc_Char)0x65,  /* [4237] */
    (xdc_Char)0x61,  /* [4238] */
    (xdc_Char)0x64,  /* [4239] */
    (xdc_Char)0x79,  /* [4240] */
    (xdc_Char)0x44,  /* [4241] */
    (xdc_Char)0x65,  /* [4242] */
    (xdc_Char)0x66,  /* [4243] */
    (xdc_Char)0x69,  /* [4244] */
    (xdc_Char)0x6e,  /* [4245] */
    (xdc_Char)0x65,  /* [4246] */
    (xdc_Char)0x64,  /* [4247] */
    (xdc_Char)0x3a,  /* [4248] */
    (xdc_Char)0x20,  /* [4249] */
    (xdc_Char)0x48,  /* [4250] */
    (xdc_Char)0x77,  /* [4251] */
    (xdc_Char)0x69,  /* [4252] */
    (xdc_Char)0x20,  /* [4253] */
    (xdc_Char)0x61,  /* [4254] */
    (xdc_Char)0x6c,  /* [4255] */
    (xdc_Char)0x72,  /* [4256] */
    (xdc_Char)0x65,  /* [4257] */
    (xdc_Char)0x61,  /* [4258] */
    (xdc_Char)0x64,  /* [4259] */
    (xdc_Char)0x79,  /* [4260] */
    (xdc_Char)0x20,  /* [4261] */
    (xdc_Char)0x64,  /* [4262] */
    (xdc_Char)0x65,  /* [4263] */
    (xdc_Char)0x66,  /* [4264] */
    (xdc_Char)0x69,  /* [4265] */
    (xdc_Char)0x6e,  /* [4266] */
    (xdc_Char)0x65,  /* [4267] */
    (xdc_Char)0x64,  /* [4268] */
    (xdc_Char)0x3a,  /* [4269] */
    (xdc_Char)0x20,  /* [4270] */
    (xdc_Char)0x69,  /* [4271] */
    (xdc_Char)0x6e,  /* [4272] */
    (xdc_Char)0x74,  /* [4273] */
    (xdc_Char)0x72,  /* [4274] */
    (xdc_Char)0x23,  /* [4275] */
    (xdc_Char)0x20,  /* [4276] */
    (xdc_Char)0x25,  /* [4277] */
    (xdc_Char)0x64,  /* [4278] */
    (xdc_Char)0x0,  /* [4279] */
    (xdc_Char)0x45,  /* [4280] */
    (xdc_Char)0x5f,  /* [4281] */
    (xdc_Char)0x68,  /* [4282] */
    (xdc_Char)0x77,  /* [4283] */
    (xdc_Char)0x69,  /* [4284] */
    (xdc_Char)0x4c,  /* [4285] */
    (xdc_Char)0x69,  /* [4286] */
    (xdc_Char)0x6d,  /* [4287] */
    (xdc_Char)0x69,  /* [4288] */
    (xdc_Char)0x74,  /* [4289] */
    (xdc_Char)0x45,  /* [4290] */
    (xdc_Char)0x78,  /* [4291] */
    (xdc_Char)0x63,  /* [4292] */
    (xdc_Char)0x65,  /* [4293] */
    (xdc_Char)0x65,  /* [4294] */
    (xdc_Char)0x64,  /* [4295] */
    (xdc_Char)0x65,  /* [4296] */
    (xdc_Char)0x64,  /* [4297] */
    (xdc_Char)0x3a,  /* [4298] */
    (xdc_Char)0x20,  /* [4299] */
    (xdc_Char)0x54,  /* [4300] */
    (xdc_Char)0x6f,  /* [4301] */
    (xdc_Char)0x6f,  /* [4302] */
    (xdc_Char)0x20,  /* [4303] */
    (xdc_Char)0x6d,  /* [4304] */
    (xdc_Char)0x61,  /* [4305] */
    (xdc_Char)0x6e,  /* [4306] */
    (xdc_Char)0x79,  /* [4307] */
    (xdc_Char)0x20,  /* [4308] */
    (xdc_Char)0x69,  /* [4309] */
    (xdc_Char)0x6e,  /* [4310] */
    (xdc_Char)0x74,  /* [4311] */
    (xdc_Char)0x65,  /* [4312] */
    (xdc_Char)0x72,  /* [4313] */
    (xdc_Char)0x72,  /* [4314] */
    (xdc_Char)0x75,  /* [4315] */
    (xdc_Char)0x70,  /* [4316] */
    (xdc_Char)0x74,  /* [4317] */
    (xdc_Char)0x73,  /* [4318] */
    (xdc_Char)0x20,  /* [4319] */
    (xdc_Char)0x64,  /* [4320] */
    (xdc_Char)0x65,  /* [4321] */
    (xdc_Char)0x66,  /* [4322] */
    (xdc_Char)0x69,  /* [4323] */
    (xdc_Char)0x6e,  /* [4324] */
    (xdc_Char)0x65,  /* [4325] */
    (xdc_Char)0x64,  /* [4326] */
    (xdc_Char)0x0,  /* [4327] */
    (xdc_Char)0x45,  /* [4328] */
    (xdc_Char)0x5f,  /* [4329] */
    (xdc_Char)0x65,  /* [4330] */
    (xdc_Char)0x78,  /* [4331] */
    (xdc_Char)0x63,  /* [4332] */
    (xdc_Char)0x65,  /* [4333] */
    (xdc_Char)0x70,  /* [4334] */
    (xdc_Char)0x74,  /* [4335] */
    (xdc_Char)0x69,  /* [4336] */
    (xdc_Char)0x6f,  /* [4337] */
    (xdc_Char)0x6e,  /* [4338] */
    (xdc_Char)0x3a,  /* [4339] */
    (xdc_Char)0x20,  /* [4340] */
    (xdc_Char)0x69,  /* [4341] */
    (xdc_Char)0x64,  /* [4342] */
    (xdc_Char)0x20,  /* [4343] */
    (xdc_Char)0x3d,  /* [4344] */
    (xdc_Char)0x20,  /* [4345] */
    (xdc_Char)0x25,  /* [4346] */
    (xdc_Char)0x64,  /* [4347] */
    (xdc_Char)0x2c,  /* [4348] */
    (xdc_Char)0x20,  /* [4349] */
    (xdc_Char)0x70,  /* [4350] */
    (xdc_Char)0x63,  /* [4351] */
    (xdc_Char)0x20,  /* [4352] */
    (xdc_Char)0x3d,  /* [4353] */
    (xdc_Char)0x20,  /* [4354] */
    (xdc_Char)0x25,  /* [4355] */
    (xdc_Char)0x30,  /* [4356] */
    (xdc_Char)0x38,  /* [4357] */
    (xdc_Char)0x78,  /* [4358] */
    (xdc_Char)0x2e,  /* [4359] */
    (xdc_Char)0xa,  /* [4360] */
    (xdc_Char)0x54,  /* [4361] */
    (xdc_Char)0x6f,  /* [4362] */
    (xdc_Char)0x20,  /* [4363] */
    (xdc_Char)0x73,  /* [4364] */
    (xdc_Char)0x65,  /* [4365] */
    (xdc_Char)0x65,  /* [4366] */
    (xdc_Char)0x20,  /* [4367] */
    (xdc_Char)0x6d,  /* [4368] */
    (xdc_Char)0x6f,  /* [4369] */
    (xdc_Char)0x72,  /* [4370] */
    (xdc_Char)0x65,  /* [4371] */
    (xdc_Char)0x20,  /* [4372] */
    (xdc_Char)0x65,  /* [4373] */
    (xdc_Char)0x78,  /* [4374] */
    (xdc_Char)0x63,  /* [4375] */
    (xdc_Char)0x65,  /* [4376] */
    (xdc_Char)0x70,  /* [4377] */
    (xdc_Char)0x74,  /* [4378] */
    (xdc_Char)0x69,  /* [4379] */
    (xdc_Char)0x6f,  /* [4380] */
    (xdc_Char)0x6e,  /* [4381] */
    (xdc_Char)0x20,  /* [4382] */
    (xdc_Char)0x64,  /* [4383] */
    (xdc_Char)0x65,  /* [4384] */
    (xdc_Char)0x74,  /* [4385] */
    (xdc_Char)0x61,  /* [4386] */
    (xdc_Char)0x69,  /* [4387] */
    (xdc_Char)0x6c,  /* [4388] */
    (xdc_Char)0x2c,  /* [4389] */
    (xdc_Char)0x20,  /* [4390] */
    (xdc_Char)0x73,  /* [4391] */
    (xdc_Char)0x65,  /* [4392] */
    (xdc_Char)0x74,  /* [4393] */
    (xdc_Char)0x20,  /* [4394] */
    (xdc_Char)0x74,  /* [4395] */
    (xdc_Char)0x69,  /* [4396] */
    (xdc_Char)0x2e,  /* [4397] */
    (xdc_Char)0x73,  /* [4398] */
    (xdc_Char)0x79,  /* [4399] */
    (xdc_Char)0x73,  /* [4400] */
    (xdc_Char)0x62,  /* [4401] */
    (xdc_Char)0x69,  /* [4402] */
    (xdc_Char)0x6f,  /* [4403] */
    (xdc_Char)0x73,  /* [4404] */
    (xdc_Char)0x2e,  /* [4405] */
    (xdc_Char)0x66,  /* [4406] */
    (xdc_Char)0x61,  /* [4407] */
    (xdc_Char)0x6d,  /* [4408] */
    (xdc_Char)0x69,  /* [4409] */
    (xdc_Char)0x6c,  /* [4410] */
    (xdc_Char)0x79,  /* [4411] */
    (xdc_Char)0x2e,  /* [4412] */
    (xdc_Char)0x61,  /* [4413] */
    (xdc_Char)0x72,  /* [4414] */
    (xdc_Char)0x6d,  /* [4415] */
    (xdc_Char)0x2e,  /* [4416] */
    (xdc_Char)0x6d,  /* [4417] */
    (xdc_Char)0x33,  /* [4418] */
    (xdc_Char)0x2e,  /* [4419] */
    (xdc_Char)0x48,  /* [4420] */
    (xdc_Char)0x77,  /* [4421] */
    (xdc_Char)0x69,  /* [4422] */
    (xdc_Char)0x2e,  /* [4423] */
    (xdc_Char)0x65,  /* [4424] */
    (xdc_Char)0x6e,  /* [4425] */
    (xdc_Char)0x61,  /* [4426] */
    (xdc_Char)0x62,  /* [4427] */
    (xdc_Char)0x6c,  /* [4428] */
    (xdc_Char)0x65,  /* [4429] */
    (xdc_Char)0x45,  /* [4430] */
    (xdc_Char)0x78,  /* [4431] */
    (xdc_Char)0x63,  /* [4432] */
    (xdc_Char)0x65,  /* [4433] */
    (xdc_Char)0x70,  /* [4434] */
    (xdc_Char)0x74,  /* [4435] */
    (xdc_Char)0x69,  /* [4436] */
    (xdc_Char)0x6f,  /* [4437] */
    (xdc_Char)0x6e,  /* [4438] */
    (xdc_Char)0x20,  /* [4439] */
    (xdc_Char)0x3d,  /* [4440] */
    (xdc_Char)0x20,  /* [4441] */
    (xdc_Char)0x74,  /* [4442] */
    (xdc_Char)0x72,  /* [4443] */
    (xdc_Char)0x75,  /* [4444] */
    (xdc_Char)0x65,  /* [4445] */
    (xdc_Char)0x20,  /* [4446] */
    (xdc_Char)0x6f,  /* [4447] */
    (xdc_Char)0x72,  /* [4448] */
    (xdc_Char)0x2c,  /* [4449] */
    (xdc_Char)0xa,  /* [4450] */
    (xdc_Char)0x65,  /* [4451] */
    (xdc_Char)0x78,  /* [4452] */
    (xdc_Char)0x61,  /* [4453] */
    (xdc_Char)0x6d,  /* [4454] */
    (xdc_Char)0x69,  /* [4455] */
    (xdc_Char)0x6e,  /* [4456] */
    (xdc_Char)0x65,  /* [4457] */
    (xdc_Char)0x20,  /* [4458] */
    (xdc_Char)0x74,  /* [4459] */
    (xdc_Char)0x68,  /* [4460] */
    (xdc_Char)0x65,  /* [4461] */
    (xdc_Char)0x20,  /* [4462] */
    (xdc_Char)0x45,  /* [4463] */
    (xdc_Char)0x78,  /* [4464] */
    (xdc_Char)0x63,  /* [4465] */
    (xdc_Char)0x65,  /* [4466] */
    (xdc_Char)0x70,  /* [4467] */
    (xdc_Char)0x74,  /* [4468] */
    (xdc_Char)0x69,  /* [4469] */
    (xdc_Char)0x6f,  /* [4470] */
    (xdc_Char)0x6e,  /* [4471] */
    (xdc_Char)0x20,  /* [4472] */
    (xdc_Char)0x76,  /* [4473] */
    (xdc_Char)0x69,  /* [4474] */
    (xdc_Char)0x65,  /* [4475] */
    (xdc_Char)0x77,  /* [4476] */
    (xdc_Char)0x20,  /* [4477] */
    (xdc_Char)0x66,  /* [4478] */
    (xdc_Char)0x6f,  /* [4479] */
    (xdc_Char)0x72,  /* [4480] */
    (xdc_Char)0x20,  /* [4481] */
    (xdc_Char)0x74,  /* [4482] */
    (xdc_Char)0x68,  /* [4483] */
    (xdc_Char)0x65,  /* [4484] */
    (xdc_Char)0x20,  /* [4485] */
    (xdc_Char)0x74,  /* [4486] */
    (xdc_Char)0x69,  /* [4487] */
    (xdc_Char)0x2e,  /* [4488] */
    (xdc_Char)0x73,  /* [4489] */
    (xdc_Char)0x79,  /* [4490] */
    (xdc_Char)0x73,  /* [4491] */
    (xdc_Char)0x62,  /* [4492] */
    (xdc_Char)0x69,  /* [4493] */
    (xdc_Char)0x6f,  /* [4494] */
    (xdc_Char)0x73,  /* [4495] */
    (xdc_Char)0x2e,  /* [4496] */
    (xdc_Char)0x66,  /* [4497] */
    (xdc_Char)0x61,  /* [4498] */
    (xdc_Char)0x6d,  /* [4499] */
    (xdc_Char)0x69,  /* [4500] */
    (xdc_Char)0x6c,  /* [4501] */
    (xdc_Char)0x79,  /* [4502] */
    (xdc_Char)0x2e,  /* [4503] */
    (xdc_Char)0x61,  /* [4504] */
    (xdc_Char)0x72,  /* [4505] */
    (xdc_Char)0x6d,  /* [4506] */
    (xdc_Char)0x2e,  /* [4507] */
    (xdc_Char)0x6d,  /* [4508] */
    (xdc_Char)0x33,  /* [4509] */
    (xdc_Char)0x2e,  /* [4510] */
    (xdc_Char)0x48,  /* [4511] */
    (xdc_Char)0x77,  /* [4512] */
    (xdc_Char)0x69,  /* [4513] */
    (xdc_Char)0x20,  /* [4514] */
    (xdc_Char)0x6d,  /* [4515] */
    (xdc_Char)0x6f,  /* [4516] */
    (xdc_Char)0x64,  /* [4517] */
    (xdc_Char)0x75,  /* [4518] */
    (xdc_Char)0x6c,  /* [4519] */
    (xdc_Char)0x65,  /* [4520] */
    (xdc_Char)0x20,  /* [4521] */
    (xdc_Char)0x75,  /* [4522] */
    (xdc_Char)0x73,  /* [4523] */
    (xdc_Char)0x69,  /* [4524] */
    (xdc_Char)0x6e,  /* [4525] */
    (xdc_Char)0x67,  /* [4526] */
    (xdc_Char)0x20,  /* [4527] */
    (xdc_Char)0x52,  /* [4528] */
    (xdc_Char)0x4f,  /* [4529] */
    (xdc_Char)0x56,  /* [4530] */
    (xdc_Char)0x2e,  /* [4531] */
    (xdc_Char)0x0,  /* [4532] */
    (xdc_Char)0x45,  /* [4533] */
    (xdc_Char)0x5f,  /* [4534] */
    (xdc_Char)0x6e,  /* [4535] */
    (xdc_Char)0x6f,  /* [4536] */
    (xdc_Char)0x49,  /* [4537] */
    (xdc_Char)0x73,  /* [4538] */
    (xdc_Char)0x72,  /* [4539] */
    (xdc_Char)0x3a,  /* [4540] */
    (xdc_Char)0x20,  /* [4541] */
    (xdc_Char)0x69,  /* [4542] */
    (xdc_Char)0x64,  /* [4543] */
    (xdc_Char)0x20,  /* [4544] */
    (xdc_Char)0x3d,  /* [4545] */
    (xdc_Char)0x20,  /* [4546] */
    (xdc_Char)0x25,  /* [4547] */
    (xdc_Char)0x64,  /* [4548] */
    (xdc_Char)0x2c,  /* [4549] */
    (xdc_Char)0x20,  /* [4550] */
    (xdc_Char)0x70,  /* [4551] */
    (xdc_Char)0x63,  /* [4552] */
    (xdc_Char)0x20,  /* [4553] */
    (xdc_Char)0x3d,  /* [4554] */
    (xdc_Char)0x20,  /* [4555] */
    (xdc_Char)0x25,  /* [4556] */
    (xdc_Char)0x30,  /* [4557] */
    (xdc_Char)0x38,  /* [4558] */
    (xdc_Char)0x78,  /* [4559] */
    (xdc_Char)0x0,  /* [4560] */
    (xdc_Char)0x45,  /* [4561] */
    (xdc_Char)0x5f,  /* [4562] */
    (xdc_Char)0x4e,  /* [4563] */
    (xdc_Char)0x4d,  /* [4564] */
    (xdc_Char)0x49,  /* [4565] */
    (xdc_Char)0x3a,  /* [4566] */
    (xdc_Char)0x20,  /* [4567] */
    (xdc_Char)0x25,  /* [4568] */
    (xdc_Char)0x73,  /* [4569] */
    (xdc_Char)0x0,  /* [4570] */
    (xdc_Char)0x45,  /* [4571] */
    (xdc_Char)0x5f,  /* [4572] */
    (xdc_Char)0x68,  /* [4573] */
    (xdc_Char)0x61,  /* [4574] */
    (xdc_Char)0x72,  /* [4575] */
    (xdc_Char)0x64,  /* [4576] */
    (xdc_Char)0x46,  /* [4577] */
    (xdc_Char)0x61,  /* [4578] */
    (xdc_Char)0x75,  /* [4579] */
    (xdc_Char)0x6c,  /* [4580] */
    (xdc_Char)0x74,  /* [4581] */
    (xdc_Char)0x3a,  /* [4582] */
    (xdc_Char)0x20,  /* [4583] */
    (xdc_Char)0x25,  /* [4584] */
    (xdc_Char)0x73,  /* [4585] */
    (xdc_Char)0x0,  /* [4586] */
    (xdc_Char)0x45,  /* [4587] */
    (xdc_Char)0x5f,  /* [4588] */
    (xdc_Char)0x6d,  /* [4589] */
    (xdc_Char)0x65,  /* [4590] */
    (xdc_Char)0x6d,  /* [4591] */
    (xdc_Char)0x46,  /* [4592] */
    (xdc_Char)0x61,  /* [4593] */
    (xdc_Char)0x75,  /* [4594] */
    (xdc_Char)0x6c,  /* [4595] */
    (xdc_Char)0x74,  /* [4596] */
    (xdc_Char)0x3a,  /* [4597] */
    (xdc_Char)0x20,  /* [4598] */
    (xdc_Char)0x25,  /* [4599] */
    (xdc_Char)0x73,  /* [4600] */
    (xdc_Char)0x2c,  /* [4601] */
    (xdc_Char)0x20,  /* [4602] */
    (xdc_Char)0x61,  /* [4603] */
    (xdc_Char)0x64,  /* [4604] */
    (xdc_Char)0x64,  /* [4605] */
    (xdc_Char)0x72,  /* [4606] */
    (xdc_Char)0x65,  /* [4607] */
    (xdc_Char)0x73,  /* [4608] */
    (xdc_Char)0x73,  /* [4609] */
    (xdc_Char)0x3a,  /* [4610] */
    (xdc_Char)0x20,  /* [4611] */
    (xdc_Char)0x25,  /* [4612] */
    (xdc_Char)0x30,  /* [4613] */
    (xdc_Char)0x38,  /* [4614] */
    (xdc_Char)0x78,  /* [4615] */
    (xdc_Char)0x0,  /* [4616] */
    (xdc_Char)0x45,  /* [4617] */
    (xdc_Char)0x5f,  /* [4618] */
    (xdc_Char)0x62,  /* [4619] */
    (xdc_Char)0x75,  /* [4620] */
    (xdc_Char)0x73,  /* [4621] */
    (xdc_Char)0x46,  /* [4622] */
    (xdc_Char)0x61,  /* [4623] */
    (xdc_Char)0x75,  /* [4624] */
    (xdc_Char)0x6c,  /* [4625] */
    (xdc_Char)0x74,  /* [4626] */
    (xdc_Char)0x3a,  /* [4627] */
    (xdc_Char)0x20,  /* [4628] */
    (xdc_Char)0x25,  /* [4629] */
    (xdc_Char)0x73,  /* [4630] */
    (xdc_Char)0x2c,  /* [4631] */
    (xdc_Char)0x20,  /* [4632] */
    (xdc_Char)0x61,  /* [4633] */
    (xdc_Char)0x64,  /* [4634] */
    (xdc_Char)0x64,  /* [4635] */
    (xdc_Char)0x72,  /* [4636] */
    (xdc_Char)0x65,  /* [4637] */
    (xdc_Char)0x73,  /* [4638] */
    (xdc_Char)0x73,  /* [4639] */
    (xdc_Char)0x3a,  /* [4640] */
    (xdc_Char)0x20,  /* [4641] */
    (xdc_Char)0x25,  /* [4642] */
    (xdc_Char)0x30,  /* [4643] */
    (xdc_Char)0x38,  /* [4644] */
    (xdc_Char)0x78,  /* [4645] */
    (xdc_Char)0x0,  /* [4646] */
    (xdc_Char)0x45,  /* [4647] */
    (xdc_Char)0x5f,  /* [4648] */
    (xdc_Char)0x75,  /* [4649] */
    (xdc_Char)0x73,  /* [4650] */
    (xdc_Char)0x61,  /* [4651] */
    (xdc_Char)0x67,  /* [4652] */
    (xdc_Char)0x65,  /* [4653] */
    (xdc_Char)0x46,  /* [4654] */
    (xdc_Char)0x61,  /* [4655] */
    (xdc_Char)0x75,  /* [4656] */
    (xdc_Char)0x6c,  /* [4657] */
    (xdc_Char)0x74,  /* [4658] */
    (xdc_Char)0x3a,  /* [4659] */
    (xdc_Char)0x20,  /* [4660] */
    (xdc_Char)0x25,  /* [4661] */
    (xdc_Char)0x73,  /* [4662] */
    (xdc_Char)0x0,  /* [4663] */
    (xdc_Char)0x45,  /* [4664] */
    (xdc_Char)0x5f,  /* [4665] */
    (xdc_Char)0x73,  /* [4666] */
    (xdc_Char)0x76,  /* [4667] */
    (xdc_Char)0x43,  /* [4668] */
    (xdc_Char)0x61,  /* [4669] */
    (xdc_Char)0x6c,  /* [4670] */
    (xdc_Char)0x6c,  /* [4671] */
    (xdc_Char)0x3a,  /* [4672] */
    (xdc_Char)0x20,  /* [4673] */
    (xdc_Char)0x73,  /* [4674] */
    (xdc_Char)0x76,  /* [4675] */
    (xdc_Char)0x4e,  /* [4676] */
    (xdc_Char)0x75,  /* [4677] */
    (xdc_Char)0x6d,  /* [4678] */
    (xdc_Char)0x20,  /* [4679] */
    (xdc_Char)0x3d,  /* [4680] */
    (xdc_Char)0x20,  /* [4681] */
    (xdc_Char)0x25,  /* [4682] */
    (xdc_Char)0x64,  /* [4683] */
    (xdc_Char)0x0,  /* [4684] */
    (xdc_Char)0x45,  /* [4685] */
    (xdc_Char)0x5f,  /* [4686] */
    (xdc_Char)0x64,  /* [4687] */
    (xdc_Char)0x65,  /* [4688] */
    (xdc_Char)0x62,  /* [4689] */
    (xdc_Char)0x75,  /* [4690] */
    (xdc_Char)0x67,  /* [4691] */
    (xdc_Char)0x4d,  /* [4692] */
    (xdc_Char)0x6f,  /* [4693] */
    (xdc_Char)0x6e,  /* [4694] */
    (xdc_Char)0x3a,  /* [4695] */
    (xdc_Char)0x20,  /* [4696] */
    (xdc_Char)0x25,  /* [4697] */
    (xdc_Char)0x73,  /* [4698] */
    (xdc_Char)0x0,  /* [4699] */
    (xdc_Char)0x45,  /* [4700] */
    (xdc_Char)0x5f,  /* [4701] */
    (xdc_Char)0x72,  /* [4702] */
    (xdc_Char)0x65,  /* [4703] */
    (xdc_Char)0x73,  /* [4704] */
    (xdc_Char)0x65,  /* [4705] */
    (xdc_Char)0x72,  /* [4706] */
    (xdc_Char)0x76,  /* [4707] */
    (xdc_Char)0x65,  /* [4708] */
    (xdc_Char)0x64,  /* [4709] */
    (xdc_Char)0x3a,  /* [4710] */
    (xdc_Char)0x20,  /* [4711] */
    (xdc_Char)0x25,  /* [4712] */
    (xdc_Char)0x73,  /* [4713] */
    (xdc_Char)0x20,  /* [4714] */
    (xdc_Char)0x25,  /* [4715] */
    (xdc_Char)0x64,  /* [4716] */
    (xdc_Char)0x0,  /* [4717] */
    (xdc_Char)0x45,  /* [4718] */
    (xdc_Char)0x5f,  /* [4719] */
    (xdc_Char)0x69,  /* [4720] */
    (xdc_Char)0x6e,  /* [4721] */
    (xdc_Char)0x76,  /* [4722] */
    (xdc_Char)0x61,  /* [4723] */
    (xdc_Char)0x6c,  /* [4724] */
    (xdc_Char)0x69,  /* [4725] */
    (xdc_Char)0x64,  /* [4726] */
    (xdc_Char)0x54,  /* [4727] */
    (xdc_Char)0x69,  /* [4728] */
    (xdc_Char)0x6d,  /* [4729] */
    (xdc_Char)0x65,  /* [4730] */
    (xdc_Char)0x72,  /* [4731] */
    (xdc_Char)0x3a,  /* [4732] */
    (xdc_Char)0x20,  /* [4733] */
    (xdc_Char)0x49,  /* [4734] */
    (xdc_Char)0x6e,  /* [4735] */
    (xdc_Char)0x76,  /* [4736] */
    (xdc_Char)0x61,  /* [4737] */
    (xdc_Char)0x6c,  /* [4738] */
    (xdc_Char)0x69,  /* [4739] */
    (xdc_Char)0x64,  /* [4740] */
    (xdc_Char)0x20,  /* [4741] */
    (xdc_Char)0x54,  /* [4742] */
    (xdc_Char)0x69,  /* [4743] */
    (xdc_Char)0x6d,  /* [4744] */
    (xdc_Char)0x65,  /* [4745] */
    (xdc_Char)0x72,  /* [4746] */
    (xdc_Char)0x20,  /* [4747] */
    (xdc_Char)0x49,  /* [4748] */
    (xdc_Char)0x64,  /* [4749] */
    (xdc_Char)0x20,  /* [4750] */
    (xdc_Char)0x25,  /* [4751] */
    (xdc_Char)0x64,  /* [4752] */
    (xdc_Char)0x0,  /* [4753] */
    (xdc_Char)0x45,  /* [4754] */
    (xdc_Char)0x5f,  /* [4755] */
    (xdc_Char)0x6e,  /* [4756] */
    (xdc_Char)0x6f,  /* [4757] */
    (xdc_Char)0x74,  /* [4758] */
    (xdc_Char)0x41,  /* [4759] */
    (xdc_Char)0x76,  /* [4760] */
    (xdc_Char)0x61,  /* [4761] */
    (xdc_Char)0x69,  /* [4762] */
    (xdc_Char)0x6c,  /* [4763] */
    (xdc_Char)0x61,  /* [4764] */
    (xdc_Char)0x62,  /* [4765] */
    (xdc_Char)0x6c,  /* [4766] */
    (xdc_Char)0x65,  /* [4767] */
    (xdc_Char)0x3a,  /* [4768] */
    (xdc_Char)0x20,  /* [4769] */
    (xdc_Char)0x54,  /* [4770] */
    (xdc_Char)0x69,  /* [4771] */
    (xdc_Char)0x6d,  /* [4772] */
    (xdc_Char)0x65,  /* [4773] */
    (xdc_Char)0x72,  /* [4774] */
    (xdc_Char)0x20,  /* [4775] */
    (xdc_Char)0x6e,  /* [4776] */
    (xdc_Char)0x6f,  /* [4777] */
    (xdc_Char)0x74,  /* [4778] */
    (xdc_Char)0x20,  /* [4779] */
    (xdc_Char)0x61,  /* [4780] */
    (xdc_Char)0x76,  /* [4781] */
    (xdc_Char)0x61,  /* [4782] */
    (xdc_Char)0x69,  /* [4783] */
    (xdc_Char)0x6c,  /* [4784] */
    (xdc_Char)0x61,  /* [4785] */
    (xdc_Char)0x62,  /* [4786] */
    (xdc_Char)0x6c,  /* [4787] */
    (xdc_Char)0x65,  /* [4788] */
    (xdc_Char)0x20,  /* [4789] */
    (xdc_Char)0x25,  /* [4790] */
    (xdc_Char)0x64,  /* [4791] */
    (xdc_Char)0x0,  /* [4792] */
    (xdc_Char)0x45,  /* [4793] */
    (xdc_Char)0x5f,  /* [4794] */
    (xdc_Char)0x63,  /* [4795] */
    (xdc_Char)0x61,  /* [4796] */
    (xdc_Char)0x6e,  /* [4797] */
    (xdc_Char)0x6e,  /* [4798] */
    (xdc_Char)0x6f,  /* [4799] */
    (xdc_Char)0x74,  /* [4800] */
    (xdc_Char)0x53,  /* [4801] */
    (xdc_Char)0x75,  /* [4802] */
    (xdc_Char)0x70,  /* [4803] */
    (xdc_Char)0x70,  /* [4804] */
    (xdc_Char)0x6f,  /* [4805] */
    (xdc_Char)0x72,  /* [4806] */
    (xdc_Char)0x74,  /* [4807] */
    (xdc_Char)0x3a,  /* [4808] */
    (xdc_Char)0x20,  /* [4809] */
    (xdc_Char)0x54,  /* [4810] */
    (xdc_Char)0x69,  /* [4811] */
    (xdc_Char)0x6d,  /* [4812] */
    (xdc_Char)0x65,  /* [4813] */
    (xdc_Char)0x72,  /* [4814] */
    (xdc_Char)0x20,  /* [4815] */
    (xdc_Char)0x63,  /* [4816] */
    (xdc_Char)0x61,  /* [4817] */
    (xdc_Char)0x6e,  /* [4818] */
    (xdc_Char)0x6e,  /* [4819] */
    (xdc_Char)0x6f,  /* [4820] */
    (xdc_Char)0x74,  /* [4821] */
    (xdc_Char)0x20,  /* [4822] */
    (xdc_Char)0x73,  /* [4823] */
    (xdc_Char)0x75,  /* [4824] */
    (xdc_Char)0x70,  /* [4825] */
    (xdc_Char)0x70,  /* [4826] */
    (xdc_Char)0x6f,  /* [4827] */
    (xdc_Char)0x72,  /* [4828] */
    (xdc_Char)0x74,  /* [4829] */
    (xdc_Char)0x20,  /* [4830] */
    (xdc_Char)0x72,  /* [4831] */
    (xdc_Char)0x65,  /* [4832] */
    (xdc_Char)0x71,  /* [4833] */
    (xdc_Char)0x75,  /* [4834] */
    (xdc_Char)0x65,  /* [4835] */
    (xdc_Char)0x73,  /* [4836] */
    (xdc_Char)0x74,  /* [4837] */
    (xdc_Char)0x65,  /* [4838] */
    (xdc_Char)0x64,  /* [4839] */
    (xdc_Char)0x20,  /* [4840] */
    (xdc_Char)0x70,  /* [4841] */
    (xdc_Char)0x65,  /* [4842] */
    (xdc_Char)0x72,  /* [4843] */
    (xdc_Char)0x69,  /* [4844] */
    (xdc_Char)0x6f,  /* [4845] */
    (xdc_Char)0x64,  /* [4846] */
    (xdc_Char)0x20,  /* [4847] */
    (xdc_Char)0x25,  /* [4848] */
    (xdc_Char)0x64,  /* [4849] */
    (xdc_Char)0x0,  /* [4850] */
    (xdc_Char)0x72,  /* [4851] */
    (xdc_Char)0x65,  /* [4852] */
    (xdc_Char)0x71,  /* [4853] */
    (xdc_Char)0x75,  /* [4854] */
    (xdc_Char)0x65,  /* [4855] */
    (xdc_Char)0x73,  /* [4856] */
    (xdc_Char)0x74,  /* [4857] */
    (xdc_Char)0x65,  /* [4858] */
    (xdc_Char)0x64,  /* [4859] */
    (xdc_Char)0x20,  /* [4860] */
    (xdc_Char)0x73,  /* [4861] */
    (xdc_Char)0x69,  /* [4862] */
    (xdc_Char)0x7a,  /* [4863] */
    (xdc_Char)0x65,  /* [4864] */
    (xdc_Char)0x20,  /* [4865] */
    (xdc_Char)0x69,  /* [4866] */
    (xdc_Char)0x73,  /* [4867] */
    (xdc_Char)0x20,  /* [4868] */
    (xdc_Char)0x74,  /* [4869] */
    (xdc_Char)0x6f,  /* [4870] */
    (xdc_Char)0x6f,  /* [4871] */
    (xdc_Char)0x20,  /* [4872] */
    (xdc_Char)0x62,  /* [4873] */
    (xdc_Char)0x69,  /* [4874] */
    (xdc_Char)0x67,  /* [4875] */
    (xdc_Char)0x3a,  /* [4876] */
    (xdc_Char)0x20,  /* [4877] */
    (xdc_Char)0x68,  /* [4878] */
    (xdc_Char)0x61,  /* [4879] */
    (xdc_Char)0x6e,  /* [4880] */
    (xdc_Char)0x64,  /* [4881] */
    (xdc_Char)0x6c,  /* [4882] */
    (xdc_Char)0x65,  /* [4883] */
    (xdc_Char)0x3d,  /* [4884] */
    (xdc_Char)0x30,  /* [4885] */
    (xdc_Char)0x78,  /* [4886] */
    (xdc_Char)0x25,  /* [4887] */
    (xdc_Char)0x78,  /* [4888] */
    (xdc_Char)0x2c,  /* [4889] */
    (xdc_Char)0x20,  /* [4890] */
    (xdc_Char)0x73,  /* [4891] */
    (xdc_Char)0x69,  /* [4892] */
    (xdc_Char)0x7a,  /* [4893] */
    (xdc_Char)0x65,  /* [4894] */
    (xdc_Char)0x3d,  /* [4895] */
    (xdc_Char)0x25,  /* [4896] */
    (xdc_Char)0x75,  /* [4897] */
    (xdc_Char)0x0,  /* [4898] */
    (xdc_Char)0x6f,  /* [4899] */
    (xdc_Char)0x75,  /* [4900] */
    (xdc_Char)0x74,  /* [4901] */
    (xdc_Char)0x20,  /* [4902] */
    (xdc_Char)0x6f,  /* [4903] */
    (xdc_Char)0x66,  /* [4904] */
    (xdc_Char)0x20,  /* [4905] */
    (xdc_Char)0x6d,  /* [4906] */
    (xdc_Char)0x65,  /* [4907] */
    (xdc_Char)0x6d,  /* [4908] */
    (xdc_Char)0x6f,  /* [4909] */
    (xdc_Char)0x72,  /* [4910] */
    (xdc_Char)0x79,  /* [4911] */
    (xdc_Char)0x3a,  /* [4912] */
    (xdc_Char)0x20,  /* [4913] */
    (xdc_Char)0x68,  /* [4914] */
    (xdc_Char)0x61,  /* [4915] */
    (xdc_Char)0x6e,  /* [4916] */
    (xdc_Char)0x64,  /* [4917] */
    (xdc_Char)0x6c,  /* [4918] */
    (xdc_Char)0x65,  /* [4919] */
    (xdc_Char)0x3d,  /* [4920] */
    (xdc_Char)0x30,  /* [4921] */
    (xdc_Char)0x78,  /* [4922] */
    (xdc_Char)0x25,  /* [4923] */
    (xdc_Char)0x78,  /* [4924] */
    (xdc_Char)0x2c,  /* [4925] */
    (xdc_Char)0x20,  /* [4926] */
    (xdc_Char)0x73,  /* [4927] */
    (xdc_Char)0x69,  /* [4928] */
    (xdc_Char)0x7a,  /* [4929] */
    (xdc_Char)0x65,  /* [4930] */
    (xdc_Char)0x3d,  /* [4931] */
    (xdc_Char)0x25,  /* [4932] */
    (xdc_Char)0x75,  /* [4933] */
    (xdc_Char)0x0,  /* [4934] */
    (xdc_Char)0x45,  /* [4935] */
    (xdc_Char)0x5f,  /* [4936] */
    (xdc_Char)0x70,  /* [4937] */
    (xdc_Char)0x72,  /* [4938] */
    (xdc_Char)0x69,  /* [4939] */
    (xdc_Char)0x6f,  /* [4940] */
    (xdc_Char)0x72,  /* [4941] */
    (xdc_Char)0x69,  /* [4942] */
    (xdc_Char)0x74,  /* [4943] */
    (xdc_Char)0x79,  /* [4944] */
    (xdc_Char)0x3a,  /* [4945] */
    (xdc_Char)0x20,  /* [4946] */
    (xdc_Char)0x54,  /* [4947] */
    (xdc_Char)0x68,  /* [4948] */
    (xdc_Char)0x72,  /* [4949] */
    (xdc_Char)0x65,  /* [4950] */
    (xdc_Char)0x61,  /* [4951] */
    (xdc_Char)0x64,  /* [4952] */
    (xdc_Char)0x20,  /* [4953] */
    (xdc_Char)0x70,  /* [4954] */
    (xdc_Char)0x72,  /* [4955] */
    (xdc_Char)0x69,  /* [4956] */
    (xdc_Char)0x6f,  /* [4957] */
    (xdc_Char)0x72,  /* [4958] */
    (xdc_Char)0x69,  /* [4959] */
    (xdc_Char)0x74,  /* [4960] */
    (xdc_Char)0x79,  /* [4961] */
    (xdc_Char)0x20,  /* [4962] */
    (xdc_Char)0x69,  /* [4963] */
    (xdc_Char)0x73,  /* [4964] */
    (xdc_Char)0x20,  /* [4965] */
    (xdc_Char)0x69,  /* [4966] */
    (xdc_Char)0x6e,  /* [4967] */
    (xdc_Char)0x76,  /* [4968] */
    (xdc_Char)0x61,  /* [4969] */
    (xdc_Char)0x6c,  /* [4970] */
    (xdc_Char)0x69,  /* [4971] */
    (xdc_Char)0x64,  /* [4972] */
    (xdc_Char)0x20,  /* [4973] */
    (xdc_Char)0x25,  /* [4974] */
    (xdc_Char)0x64,  /* [4975] */
    (xdc_Char)0x0,  /* [4976] */
    (xdc_Char)0x3c,  /* [4977] */
    (xdc_Char)0x2d,  /* [4978] */
    (xdc_Char)0x2d,  /* [4979] */
    (xdc_Char)0x20,  /* [4980] */
    (xdc_Char)0x63,  /* [4981] */
    (xdc_Char)0x6f,  /* [4982] */
    (xdc_Char)0x6e,  /* [4983] */
    (xdc_Char)0x73,  /* [4984] */
    (xdc_Char)0x74,  /* [4985] */
    (xdc_Char)0x72,  /* [4986] */
    (xdc_Char)0x75,  /* [4987] */
    (xdc_Char)0x63,  /* [4988] */
    (xdc_Char)0x74,  /* [4989] */
    (xdc_Char)0x3a,  /* [4990] */
    (xdc_Char)0x20,  /* [4991] */
    (xdc_Char)0x25,  /* [4992] */
    (xdc_Char)0x70,  /* [4993] */
    (xdc_Char)0x28,  /* [4994] */
    (xdc_Char)0x27,  /* [4995] */
    (xdc_Char)0x25,  /* [4996] */
    (xdc_Char)0x73,  /* [4997] */
    (xdc_Char)0x27,  /* [4998] */
    (xdc_Char)0x29,  /* [4999] */
    (xdc_Char)0x0,  /* [5000] */
    (xdc_Char)0x3c,  /* [5001] */
    (xdc_Char)0x2d,  /* [5002] */
    (xdc_Char)0x2d,  /* [5003] */
    (xdc_Char)0x20,  /* [5004] */
    (xdc_Char)0x63,  /* [5005] */
    (xdc_Char)0x72,  /* [5006] */
    (xdc_Char)0x65,  /* [5007] */
    (xdc_Char)0x61,  /* [5008] */
    (xdc_Char)0x74,  /* [5009] */
    (xdc_Char)0x65,  /* [5010] */
    (xdc_Char)0x3a,  /* [5011] */
    (xdc_Char)0x20,  /* [5012] */
    (xdc_Char)0x25,  /* [5013] */
    (xdc_Char)0x70,  /* [5014] */
    (xdc_Char)0x28,  /* [5015] */
    (xdc_Char)0x27,  /* [5016] */
    (xdc_Char)0x25,  /* [5017] */
    (xdc_Char)0x73,  /* [5018] */
    (xdc_Char)0x27,  /* [5019] */
    (xdc_Char)0x29,  /* [5020] */
    (xdc_Char)0x0,  /* [5021] */
    (xdc_Char)0x2d,  /* [5022] */
    (xdc_Char)0x2d,  /* [5023] */
    (xdc_Char)0x3e,  /* [5024] */
    (xdc_Char)0x20,  /* [5025] */
    (xdc_Char)0x64,  /* [5026] */
    (xdc_Char)0x65,  /* [5027] */
    (xdc_Char)0x73,  /* [5028] */
    (xdc_Char)0x74,  /* [5029] */
    (xdc_Char)0x72,  /* [5030] */
    (xdc_Char)0x75,  /* [5031] */
    (xdc_Char)0x63,  /* [5032] */
    (xdc_Char)0x74,  /* [5033] */
    (xdc_Char)0x3a,  /* [5034] */
    (xdc_Char)0x20,  /* [5035] */
    (xdc_Char)0x28,  /* [5036] */
    (xdc_Char)0x25,  /* [5037] */
    (xdc_Char)0x70,  /* [5038] */
    (xdc_Char)0x29,  /* [5039] */
    (xdc_Char)0x0,  /* [5040] */
    (xdc_Char)0x2d,  /* [5041] */
    (xdc_Char)0x2d,  /* [5042] */
    (xdc_Char)0x3e,  /* [5043] */
    (xdc_Char)0x20,  /* [5044] */
    (xdc_Char)0x64,  /* [5045] */
    (xdc_Char)0x65,  /* [5046] */
    (xdc_Char)0x6c,  /* [5047] */
    (xdc_Char)0x65,  /* [5048] */
    (xdc_Char)0x74,  /* [5049] */
    (xdc_Char)0x65,  /* [5050] */
    (xdc_Char)0x3a,  /* [5051] */
    (xdc_Char)0x20,  /* [5052] */
    (xdc_Char)0x28,  /* [5053] */
    (xdc_Char)0x25,  /* [5054] */
    (xdc_Char)0x70,  /* [5055] */
    (xdc_Char)0x29,  /* [5056] */
    (xdc_Char)0x0,  /* [5057] */
    (xdc_Char)0x45,  /* [5058] */
    (xdc_Char)0x52,  /* [5059] */
    (xdc_Char)0x52,  /* [5060] */
    (xdc_Char)0x4f,  /* [5061] */
    (xdc_Char)0x52,  /* [5062] */
    (xdc_Char)0x3a,  /* [5063] */
    (xdc_Char)0x20,  /* [5064] */
    (xdc_Char)0x25,  /* [5065] */
    (xdc_Char)0x24,  /* [5066] */
    (xdc_Char)0x46,  /* [5067] */
    (xdc_Char)0x25,  /* [5068] */
    (xdc_Char)0x24,  /* [5069] */
    (xdc_Char)0x53,  /* [5070] */
    (xdc_Char)0x0,  /* [5071] */
    (xdc_Char)0x57,  /* [5072] */
    (xdc_Char)0x41,  /* [5073] */
    (xdc_Char)0x52,  /* [5074] */
    (xdc_Char)0x4e,  /* [5075] */
    (xdc_Char)0x49,  /* [5076] */
    (xdc_Char)0x4e,  /* [5077] */
    (xdc_Char)0x47,  /* [5078] */
    (xdc_Char)0x3a,  /* [5079] */
    (xdc_Char)0x20,  /* [5080] */
    (xdc_Char)0x25,  /* [5081] */
    (xdc_Char)0x24,  /* [5082] */
    (xdc_Char)0x46,  /* [5083] */
    (xdc_Char)0x25,  /* [5084] */
    (xdc_Char)0x24,  /* [5085] */
    (xdc_Char)0x53,  /* [5086] */
    (xdc_Char)0x0,  /* [5087] */
    (xdc_Char)0x25,  /* [5088] */
    (xdc_Char)0x24,  /* [5089] */
    (xdc_Char)0x46,  /* [5090] */
    (xdc_Char)0x25,  /* [5091] */
    (xdc_Char)0x24,  /* [5092] */
    (xdc_Char)0x53,  /* [5093] */
    (xdc_Char)0x0,  /* [5094] */
    (xdc_Char)0x53,  /* [5095] */
    (xdc_Char)0x74,  /* [5096] */
    (xdc_Char)0x61,  /* [5097] */
    (xdc_Char)0x72,  /* [5098] */
    (xdc_Char)0x74,  /* [5099] */
    (xdc_Char)0x3a,  /* [5100] */
    (xdc_Char)0x20,  /* [5101] */
    (xdc_Char)0x25,  /* [5102] */
    (xdc_Char)0x24,  /* [5103] */
    (xdc_Char)0x53,  /* [5104] */
    (xdc_Char)0x0,  /* [5105] */
    (xdc_Char)0x53,  /* [5106] */
    (xdc_Char)0x74,  /* [5107] */
    (xdc_Char)0x6f,  /* [5108] */
    (xdc_Char)0x70,  /* [5109] */
    (xdc_Char)0x3a,  /* [5110] */
    (xdc_Char)0x20,  /* [5111] */
    (xdc_Char)0x25,  /* [5112] */
    (xdc_Char)0x24,  /* [5113] */
    (xdc_Char)0x53,  /* [5114] */
    (xdc_Char)0x0,  /* [5115] */
    (xdc_Char)0x53,  /* [5116] */
    (xdc_Char)0x74,  /* [5117] */
    (xdc_Char)0x61,  /* [5118] */
    (xdc_Char)0x72,  /* [5119] */
    (xdc_Char)0x74,  /* [5120] */
    (xdc_Char)0x49,  /* [5121] */
    (xdc_Char)0x6e,  /* [5122] */
    (xdc_Char)0x73,  /* [5123] */
    (xdc_Char)0x74,  /* [5124] */
    (xdc_Char)0x61,  /* [5125] */
    (xdc_Char)0x6e,  /* [5126] */
    (xdc_Char)0x63,  /* [5127] */
    (xdc_Char)0x65,  /* [5128] */
    (xdc_Char)0x3a,  /* [5129] */
    (xdc_Char)0x20,  /* [5130] */
    (xdc_Char)0x25,  /* [5131] */
    (xdc_Char)0x24,  /* [5132] */
    (xdc_Char)0x53,  /* [5133] */
    (xdc_Char)0x0,  /* [5134] */
    (xdc_Char)0x53,  /* [5135] */
    (xdc_Char)0x74,  /* [5136] */
    (xdc_Char)0x6f,  /* [5137] */
    (xdc_Char)0x70,  /* [5138] */
    (xdc_Char)0x49,  /* [5139] */
    (xdc_Char)0x6e,  /* [5140] */
    (xdc_Char)0x73,  /* [5141] */
    (xdc_Char)0x74,  /* [5142] */
    (xdc_Char)0x61,  /* [5143] */
    (xdc_Char)0x6e,  /* [5144] */
    (xdc_Char)0x63,  /* [5145] */
    (xdc_Char)0x65,  /* [5146] */
    (xdc_Char)0x3a,  /* [5147] */
    (xdc_Char)0x20,  /* [5148] */
    (xdc_Char)0x25,  /* [5149] */
    (xdc_Char)0x24,  /* [5150] */
    (xdc_Char)0x53,  /* [5151] */
    (xdc_Char)0x0,  /* [5152] */
    (xdc_Char)0x4c,  /* [5153] */
    (xdc_Char)0x57,  /* [5154] */
    (xdc_Char)0x5f,  /* [5155] */
    (xdc_Char)0x64,  /* [5156] */
    (xdc_Char)0x65,  /* [5157] */
    (xdc_Char)0x6c,  /* [5158] */
    (xdc_Char)0x61,  /* [5159] */
    (xdc_Char)0x79,  /* [5160] */
    (xdc_Char)0x65,  /* [5161] */
    (xdc_Char)0x64,  /* [5162] */
    (xdc_Char)0x3a,  /* [5163] */
    (xdc_Char)0x20,  /* [5164] */
    (xdc_Char)0x64,  /* [5165] */
    (xdc_Char)0x65,  /* [5166] */
    (xdc_Char)0x6c,  /* [5167] */
    (xdc_Char)0x61,  /* [5168] */
    (xdc_Char)0x79,  /* [5169] */
    (xdc_Char)0x3a,  /* [5170] */
    (xdc_Char)0x20,  /* [5171] */
    (xdc_Char)0x25,  /* [5172] */
    (xdc_Char)0x64,  /* [5173] */
    (xdc_Char)0x0,  /* [5174] */
    (xdc_Char)0x4c,  /* [5175] */
    (xdc_Char)0x4d,  /* [5176] */
    (xdc_Char)0x5f,  /* [5177] */
    (xdc_Char)0x74,  /* [5178] */
    (xdc_Char)0x69,  /* [5179] */
    (xdc_Char)0x63,  /* [5180] */
    (xdc_Char)0x6b,  /* [5181] */
    (xdc_Char)0x3a,  /* [5182] */
    (xdc_Char)0x20,  /* [5183] */
    (xdc_Char)0x74,  /* [5184] */
    (xdc_Char)0x69,  /* [5185] */
    (xdc_Char)0x63,  /* [5186] */
    (xdc_Char)0x6b,  /* [5187] */
    (xdc_Char)0x3a,  /* [5188] */
    (xdc_Char)0x20,  /* [5189] */
    (xdc_Char)0x25,  /* [5190] */
    (xdc_Char)0x64,  /* [5191] */
    (xdc_Char)0x0,  /* [5192] */
    (xdc_Char)0x4c,  /* [5193] */
    (xdc_Char)0x4d,  /* [5194] */
    (xdc_Char)0x5f,  /* [5195] */
    (xdc_Char)0x62,  /* [5196] */
    (xdc_Char)0x65,  /* [5197] */
    (xdc_Char)0x67,  /* [5198] */
    (xdc_Char)0x69,  /* [5199] */
    (xdc_Char)0x6e,  /* [5200] */
    (xdc_Char)0x3a,  /* [5201] */
    (xdc_Char)0x20,  /* [5202] */
    (xdc_Char)0x63,  /* [5203] */
    (xdc_Char)0x6c,  /* [5204] */
    (xdc_Char)0x6b,  /* [5205] */
    (xdc_Char)0x3a,  /* [5206] */
    (xdc_Char)0x20,  /* [5207] */
    (xdc_Char)0x30,  /* [5208] */
    (xdc_Char)0x78,  /* [5209] */
    (xdc_Char)0x25,  /* [5210] */
    (xdc_Char)0x78,  /* [5211] */
    (xdc_Char)0x2c,  /* [5212] */
    (xdc_Char)0x20,  /* [5213] */
    (xdc_Char)0x66,  /* [5214] */
    (xdc_Char)0x75,  /* [5215] */
    (xdc_Char)0x6e,  /* [5216] */
    (xdc_Char)0x63,  /* [5217] */
    (xdc_Char)0x3a,  /* [5218] */
    (xdc_Char)0x20,  /* [5219] */
    (xdc_Char)0x30,  /* [5220] */
    (xdc_Char)0x78,  /* [5221] */
    (xdc_Char)0x25,  /* [5222] */
    (xdc_Char)0x78,  /* [5223] */
    (xdc_Char)0x0,  /* [5224] */
    (xdc_Char)0x4c,  /* [5225] */
    (xdc_Char)0x4d,  /* [5226] */
    (xdc_Char)0x5f,  /* [5227] */
    (xdc_Char)0x70,  /* [5228] */
    (xdc_Char)0x6f,  /* [5229] */
    (xdc_Char)0x73,  /* [5230] */
    (xdc_Char)0x74,  /* [5231] */
    (xdc_Char)0x3a,  /* [5232] */
    (xdc_Char)0x20,  /* [5233] */
    (xdc_Char)0x65,  /* [5234] */
    (xdc_Char)0x76,  /* [5235] */
    (xdc_Char)0x65,  /* [5236] */
    (xdc_Char)0x6e,  /* [5237] */
    (xdc_Char)0x74,  /* [5238] */
    (xdc_Char)0x3a,  /* [5239] */
    (xdc_Char)0x20,  /* [5240] */
    (xdc_Char)0x30,  /* [5241] */
    (xdc_Char)0x78,  /* [5242] */
    (xdc_Char)0x25,  /* [5243] */
    (xdc_Char)0x78,  /* [5244] */
    (xdc_Char)0x2c,  /* [5245] */
    (xdc_Char)0x20,  /* [5246] */
    (xdc_Char)0x63,  /* [5247] */
    (xdc_Char)0x75,  /* [5248] */
    (xdc_Char)0x72,  /* [5249] */
    (xdc_Char)0x72,  /* [5250] */
    (xdc_Char)0x45,  /* [5251] */
    (xdc_Char)0x76,  /* [5252] */
    (xdc_Char)0x65,  /* [5253] */
    (xdc_Char)0x6e,  /* [5254] */
    (xdc_Char)0x74,  /* [5255] */
    (xdc_Char)0x73,  /* [5256] */
    (xdc_Char)0x3a,  /* [5257] */
    (xdc_Char)0x20,  /* [5258] */
    (xdc_Char)0x30,  /* [5259] */
    (xdc_Char)0x78,  /* [5260] */
    (xdc_Char)0x25,  /* [5261] */
    (xdc_Char)0x78,  /* [5262] */
    (xdc_Char)0x2c,  /* [5263] */
    (xdc_Char)0x20,  /* [5264] */
    (xdc_Char)0x65,  /* [5265] */
    (xdc_Char)0x76,  /* [5266] */
    (xdc_Char)0x65,  /* [5267] */
    (xdc_Char)0x6e,  /* [5268] */
    (xdc_Char)0x74,  /* [5269] */
    (xdc_Char)0x49,  /* [5270] */
    (xdc_Char)0x64,  /* [5271] */
    (xdc_Char)0x3a,  /* [5272] */
    (xdc_Char)0x20,  /* [5273] */
    (xdc_Char)0x30,  /* [5274] */
    (xdc_Char)0x78,  /* [5275] */
    (xdc_Char)0x25,  /* [5276] */
    (xdc_Char)0x78,  /* [5277] */
    (xdc_Char)0x0,  /* [5278] */
    (xdc_Char)0x4c,  /* [5279] */
    (xdc_Char)0x4d,  /* [5280] */
    (xdc_Char)0x5f,  /* [5281] */
    (xdc_Char)0x70,  /* [5282] */
    (xdc_Char)0x65,  /* [5283] */
    (xdc_Char)0x6e,  /* [5284] */
    (xdc_Char)0x64,  /* [5285] */
    (xdc_Char)0x3a,  /* [5286] */
    (xdc_Char)0x20,  /* [5287] */
    (xdc_Char)0x65,  /* [5288] */
    (xdc_Char)0x76,  /* [5289] */
    (xdc_Char)0x65,  /* [5290] */
    (xdc_Char)0x6e,  /* [5291] */
    (xdc_Char)0x74,  /* [5292] */
    (xdc_Char)0x3a,  /* [5293] */
    (xdc_Char)0x20,  /* [5294] */
    (xdc_Char)0x30,  /* [5295] */
    (xdc_Char)0x78,  /* [5296] */
    (xdc_Char)0x25,  /* [5297] */
    (xdc_Char)0x78,  /* [5298] */
    (xdc_Char)0x2c,  /* [5299] */
    (xdc_Char)0x20,  /* [5300] */
    (xdc_Char)0x63,  /* [5301] */
    (xdc_Char)0x75,  /* [5302] */
    (xdc_Char)0x72,  /* [5303] */
    (xdc_Char)0x72,  /* [5304] */
    (xdc_Char)0x45,  /* [5305] */
    (xdc_Char)0x76,  /* [5306] */
    (xdc_Char)0x65,  /* [5307] */
    (xdc_Char)0x6e,  /* [5308] */
    (xdc_Char)0x74,  /* [5309] */
    (xdc_Char)0x73,  /* [5310] */
    (xdc_Char)0x3a,  /* [5311] */
    (xdc_Char)0x20,  /* [5312] */
    (xdc_Char)0x30,  /* [5313] */
    (xdc_Char)0x78,  /* [5314] */
    (xdc_Char)0x25,  /* [5315] */
    (xdc_Char)0x78,  /* [5316] */
    (xdc_Char)0x2c,  /* [5317] */
    (xdc_Char)0x20,  /* [5318] */
    (xdc_Char)0x61,  /* [5319] */
    (xdc_Char)0x6e,  /* [5320] */
    (xdc_Char)0x64,  /* [5321] */
    (xdc_Char)0x4d,  /* [5322] */
    (xdc_Char)0x61,  /* [5323] */
    (xdc_Char)0x73,  /* [5324] */
    (xdc_Char)0x6b,  /* [5325] */
    (xdc_Char)0x3a,  /* [5326] */
    (xdc_Char)0x20,  /* [5327] */
    (xdc_Char)0x30,  /* [5328] */
    (xdc_Char)0x78,  /* [5329] */
    (xdc_Char)0x25,  /* [5330] */
    (xdc_Char)0x78,  /* [5331] */
    (xdc_Char)0x2c,  /* [5332] */
    (xdc_Char)0x20,  /* [5333] */
    (xdc_Char)0x6f,  /* [5334] */
    (xdc_Char)0x72,  /* [5335] */
    (xdc_Char)0x4d,  /* [5336] */
    (xdc_Char)0x61,  /* [5337] */
    (xdc_Char)0x73,  /* [5338] */
    (xdc_Char)0x6b,  /* [5339] */
    (xdc_Char)0x3a,  /* [5340] */
    (xdc_Char)0x20,  /* [5341] */
    (xdc_Char)0x30,  /* [5342] */
    (xdc_Char)0x78,  /* [5343] */
    (xdc_Char)0x25,  /* [5344] */
    (xdc_Char)0x78,  /* [5345] */
    (xdc_Char)0x2c,  /* [5346] */
    (xdc_Char)0x20,  /* [5347] */
    (xdc_Char)0x74,  /* [5348] */
    (xdc_Char)0x69,  /* [5349] */
    (xdc_Char)0x6d,  /* [5350] */
    (xdc_Char)0x65,  /* [5351] */
    (xdc_Char)0x6f,  /* [5352] */
    (xdc_Char)0x75,  /* [5353] */
    (xdc_Char)0x74,  /* [5354] */
    (xdc_Char)0x3a,  /* [5355] */
    (xdc_Char)0x20,  /* [5356] */
    (xdc_Char)0x25,  /* [5357] */
    (xdc_Char)0x64,  /* [5358] */
    (xdc_Char)0x0,  /* [5359] */
    (xdc_Char)0x4c,  /* [5360] */
    (xdc_Char)0x4d,  /* [5361] */
    (xdc_Char)0x5f,  /* [5362] */
    (xdc_Char)0x70,  /* [5363] */
    (xdc_Char)0x6f,  /* [5364] */
    (xdc_Char)0x73,  /* [5365] */
    (xdc_Char)0x74,  /* [5366] */
    (xdc_Char)0x3a,  /* [5367] */
    (xdc_Char)0x20,  /* [5368] */
    (xdc_Char)0x73,  /* [5369] */
    (xdc_Char)0x65,  /* [5370] */
    (xdc_Char)0x6d,  /* [5371] */
    (xdc_Char)0x3a,  /* [5372] */
    (xdc_Char)0x20,  /* [5373] */
    (xdc_Char)0x30,  /* [5374] */
    (xdc_Char)0x78,  /* [5375] */
    (xdc_Char)0x25,  /* [5376] */
    (xdc_Char)0x78,  /* [5377] */
    (xdc_Char)0x2c,  /* [5378] */
    (xdc_Char)0x20,  /* [5379] */
    (xdc_Char)0x63,  /* [5380] */
    (xdc_Char)0x6f,  /* [5381] */
    (xdc_Char)0x75,  /* [5382] */
    (xdc_Char)0x6e,  /* [5383] */
    (xdc_Char)0x74,  /* [5384] */
    (xdc_Char)0x3a,  /* [5385] */
    (xdc_Char)0x20,  /* [5386] */
    (xdc_Char)0x25,  /* [5387] */
    (xdc_Char)0x64,  /* [5388] */
    (xdc_Char)0x0,  /* [5389] */
    (xdc_Char)0x4c,  /* [5390] */
    (xdc_Char)0x4d,  /* [5391] */
    (xdc_Char)0x5f,  /* [5392] */
    (xdc_Char)0x70,  /* [5393] */
    (xdc_Char)0x65,  /* [5394] */
    (xdc_Char)0x6e,  /* [5395] */
    (xdc_Char)0x64,  /* [5396] */
    (xdc_Char)0x3a,  /* [5397] */
    (xdc_Char)0x20,  /* [5398] */
    (xdc_Char)0x73,  /* [5399] */
    (xdc_Char)0x65,  /* [5400] */
    (xdc_Char)0x6d,  /* [5401] */
    (xdc_Char)0x3a,  /* [5402] */
    (xdc_Char)0x20,  /* [5403] */
    (xdc_Char)0x30,  /* [5404] */
    (xdc_Char)0x78,  /* [5405] */
    (xdc_Char)0x25,  /* [5406] */
    (xdc_Char)0x78,  /* [5407] */
    (xdc_Char)0x2c,  /* [5408] */
    (xdc_Char)0x20,  /* [5409] */
    (xdc_Char)0x63,  /* [5410] */
    (xdc_Char)0x6f,  /* [5411] */
    (xdc_Char)0x75,  /* [5412] */
    (xdc_Char)0x6e,  /* [5413] */
    (xdc_Char)0x74,  /* [5414] */
    (xdc_Char)0x3a,  /* [5415] */
    (xdc_Char)0x20,  /* [5416] */
    (xdc_Char)0x25,  /* [5417] */
    (xdc_Char)0x64,  /* [5418] */
    (xdc_Char)0x2c,  /* [5419] */
    (xdc_Char)0x20,  /* [5420] */
    (xdc_Char)0x74,  /* [5421] */
    (xdc_Char)0x69,  /* [5422] */
    (xdc_Char)0x6d,  /* [5423] */
    (xdc_Char)0x65,  /* [5424] */
    (xdc_Char)0x6f,  /* [5425] */
    (xdc_Char)0x75,  /* [5426] */
    (xdc_Char)0x74,  /* [5427] */
    (xdc_Char)0x3a,  /* [5428] */
    (xdc_Char)0x20,  /* [5429] */
    (xdc_Char)0x25,  /* [5430] */
    (xdc_Char)0x64,  /* [5431] */
    (xdc_Char)0x0,  /* [5432] */
    (xdc_Char)0x4c,  /* [5433] */
    (xdc_Char)0x4d,  /* [5434] */
    (xdc_Char)0x5f,  /* [5435] */
    (xdc_Char)0x62,  /* [5436] */
    (xdc_Char)0x65,  /* [5437] */
    (xdc_Char)0x67,  /* [5438] */
    (xdc_Char)0x69,  /* [5439] */
    (xdc_Char)0x6e,  /* [5440] */
    (xdc_Char)0x3a,  /* [5441] */
    (xdc_Char)0x20,  /* [5442] */
    (xdc_Char)0x73,  /* [5443] */
    (xdc_Char)0x77,  /* [5444] */
    (xdc_Char)0x69,  /* [5445] */
    (xdc_Char)0x3a,  /* [5446] */
    (xdc_Char)0x20,  /* [5447] */
    (xdc_Char)0x30,  /* [5448] */
    (xdc_Char)0x78,  /* [5449] */
    (xdc_Char)0x25,  /* [5450] */
    (xdc_Char)0x78,  /* [5451] */
    (xdc_Char)0x2c,  /* [5452] */
    (xdc_Char)0x20,  /* [5453] */
    (xdc_Char)0x66,  /* [5454] */
    (xdc_Char)0x75,  /* [5455] */
    (xdc_Char)0x6e,  /* [5456] */
    (xdc_Char)0x63,  /* [5457] */
    (xdc_Char)0x3a,  /* [5458] */
    (xdc_Char)0x20,  /* [5459] */
    (xdc_Char)0x30,  /* [5460] */
    (xdc_Char)0x78,  /* [5461] */
    (xdc_Char)0x25,  /* [5462] */
    (xdc_Char)0x78,  /* [5463] */
    (xdc_Char)0x2c,  /* [5464] */
    (xdc_Char)0x20,  /* [5465] */
    (xdc_Char)0x70,  /* [5466] */
    (xdc_Char)0x72,  /* [5467] */
    (xdc_Char)0x65,  /* [5468] */
    (xdc_Char)0x54,  /* [5469] */
    (xdc_Char)0x68,  /* [5470] */
    (xdc_Char)0x72,  /* [5471] */
    (xdc_Char)0x65,  /* [5472] */
    (xdc_Char)0x61,  /* [5473] */
    (xdc_Char)0x64,  /* [5474] */
    (xdc_Char)0x3a,  /* [5475] */
    (xdc_Char)0x20,  /* [5476] */
    (xdc_Char)0x25,  /* [5477] */
    (xdc_Char)0x64,  /* [5478] */
    (xdc_Char)0x0,  /* [5479] */
    (xdc_Char)0x4c,  /* [5480] */
    (xdc_Char)0x44,  /* [5481] */
    (xdc_Char)0x5f,  /* [5482] */
    (xdc_Char)0x65,  /* [5483] */
    (xdc_Char)0x6e,  /* [5484] */
    (xdc_Char)0x64,  /* [5485] */
    (xdc_Char)0x3a,  /* [5486] */
    (xdc_Char)0x20,  /* [5487] */
    (xdc_Char)0x73,  /* [5488] */
    (xdc_Char)0x77,  /* [5489] */
    (xdc_Char)0x69,  /* [5490] */
    (xdc_Char)0x3a,  /* [5491] */
    (xdc_Char)0x20,  /* [5492] */
    (xdc_Char)0x30,  /* [5493] */
    (xdc_Char)0x78,  /* [5494] */
    (xdc_Char)0x25,  /* [5495] */
    (xdc_Char)0x78,  /* [5496] */
    (xdc_Char)0x0,  /* [5497] */
    (xdc_Char)0x4c,  /* [5498] */
    (xdc_Char)0x4d,  /* [5499] */
    (xdc_Char)0x5f,  /* [5500] */
    (xdc_Char)0x70,  /* [5501] */
    (xdc_Char)0x6f,  /* [5502] */
    (xdc_Char)0x73,  /* [5503] */
    (xdc_Char)0x74,  /* [5504] */
    (xdc_Char)0x3a,  /* [5505] */
    (xdc_Char)0x20,  /* [5506] */
    (xdc_Char)0x73,  /* [5507] */
    (xdc_Char)0x77,  /* [5508] */
    (xdc_Char)0x69,  /* [5509] */
    (xdc_Char)0x3a,  /* [5510] */
    (xdc_Char)0x20,  /* [5511] */
    (xdc_Char)0x30,  /* [5512] */
    (xdc_Char)0x78,  /* [5513] */
    (xdc_Char)0x25,  /* [5514] */
    (xdc_Char)0x78,  /* [5515] */
    (xdc_Char)0x2c,  /* [5516] */
    (xdc_Char)0x20,  /* [5517] */
    (xdc_Char)0x66,  /* [5518] */
    (xdc_Char)0x75,  /* [5519] */
    (xdc_Char)0x6e,  /* [5520] */
    (xdc_Char)0x63,  /* [5521] */
    (xdc_Char)0x3a,  /* [5522] */
    (xdc_Char)0x20,  /* [5523] */
    (xdc_Char)0x30,  /* [5524] */
    (xdc_Char)0x78,  /* [5525] */
    (xdc_Char)0x25,  /* [5526] */
    (xdc_Char)0x78,  /* [5527] */
    (xdc_Char)0x2c,  /* [5528] */
    (xdc_Char)0x20,  /* [5529] */
    (xdc_Char)0x70,  /* [5530] */
    (xdc_Char)0x72,  /* [5531] */
    (xdc_Char)0x69,  /* [5532] */
    (xdc_Char)0x3a,  /* [5533] */
    (xdc_Char)0x20,  /* [5534] */
    (xdc_Char)0x25,  /* [5535] */
    (xdc_Char)0x64,  /* [5536] */
    (xdc_Char)0x0,  /* [5537] */
    (xdc_Char)0x4c,  /* [5538] */
    (xdc_Char)0x4d,  /* [5539] */
    (xdc_Char)0x5f,  /* [5540] */
    (xdc_Char)0x73,  /* [5541] */
    (xdc_Char)0x77,  /* [5542] */
    (xdc_Char)0x69,  /* [5543] */
    (xdc_Char)0x74,  /* [5544] */
    (xdc_Char)0x63,  /* [5545] */
    (xdc_Char)0x68,  /* [5546] */
    (xdc_Char)0x3a,  /* [5547] */
    (xdc_Char)0x20,  /* [5548] */
    (xdc_Char)0x6f,  /* [5549] */
    (xdc_Char)0x6c,  /* [5550] */
    (xdc_Char)0x64,  /* [5551] */
    (xdc_Char)0x74,  /* [5552] */
    (xdc_Char)0x73,  /* [5553] */
    (xdc_Char)0x6b,  /* [5554] */
    (xdc_Char)0x3a,  /* [5555] */
    (xdc_Char)0x20,  /* [5556] */
    (xdc_Char)0x30,  /* [5557] */
    (xdc_Char)0x78,  /* [5558] */
    (xdc_Char)0x25,  /* [5559] */
    (xdc_Char)0x78,  /* [5560] */
    (xdc_Char)0x2c,  /* [5561] */
    (xdc_Char)0x20,  /* [5562] */
    (xdc_Char)0x6f,  /* [5563] */
    (xdc_Char)0x6c,  /* [5564] */
    (xdc_Char)0x64,  /* [5565] */
    (xdc_Char)0x66,  /* [5566] */
    (xdc_Char)0x75,  /* [5567] */
    (xdc_Char)0x6e,  /* [5568] */
    (xdc_Char)0x63,  /* [5569] */
    (xdc_Char)0x3a,  /* [5570] */
    (xdc_Char)0x20,  /* [5571] */
    (xdc_Char)0x30,  /* [5572] */
    (xdc_Char)0x78,  /* [5573] */
    (xdc_Char)0x25,  /* [5574] */
    (xdc_Char)0x78,  /* [5575] */
    (xdc_Char)0x2c,  /* [5576] */
    (xdc_Char)0x20,  /* [5577] */
    (xdc_Char)0x6e,  /* [5578] */
    (xdc_Char)0x65,  /* [5579] */
    (xdc_Char)0x77,  /* [5580] */
    (xdc_Char)0x74,  /* [5581] */
    (xdc_Char)0x73,  /* [5582] */
    (xdc_Char)0x6b,  /* [5583] */
    (xdc_Char)0x3a,  /* [5584] */
    (xdc_Char)0x20,  /* [5585] */
    (xdc_Char)0x30,  /* [5586] */
    (xdc_Char)0x78,  /* [5587] */
    (xdc_Char)0x25,  /* [5588] */
    (xdc_Char)0x78,  /* [5589] */
    (xdc_Char)0x2c,  /* [5590] */
    (xdc_Char)0x20,  /* [5591] */
    (xdc_Char)0x6e,  /* [5592] */
    (xdc_Char)0x65,  /* [5593] */
    (xdc_Char)0x77,  /* [5594] */
    (xdc_Char)0x66,  /* [5595] */
    (xdc_Char)0x75,  /* [5596] */
    (xdc_Char)0x6e,  /* [5597] */
    (xdc_Char)0x63,  /* [5598] */
    (xdc_Char)0x3a,  /* [5599] */
    (xdc_Char)0x20,  /* [5600] */
    (xdc_Char)0x30,  /* [5601] */
    (xdc_Char)0x78,  /* [5602] */
    (xdc_Char)0x25,  /* [5603] */
    (xdc_Char)0x78,  /* [5604] */
    (xdc_Char)0x0,  /* [5605] */
    (xdc_Char)0x4c,  /* [5606] */
    (xdc_Char)0x4d,  /* [5607] */
    (xdc_Char)0x5f,  /* [5608] */
    (xdc_Char)0x73,  /* [5609] */
    (xdc_Char)0x6c,  /* [5610] */
    (xdc_Char)0x65,  /* [5611] */
    (xdc_Char)0x65,  /* [5612] */
    (xdc_Char)0x70,  /* [5613] */
    (xdc_Char)0x3a,  /* [5614] */
    (xdc_Char)0x20,  /* [5615] */
    (xdc_Char)0x74,  /* [5616] */
    (xdc_Char)0x73,  /* [5617] */
    (xdc_Char)0x6b,  /* [5618] */
    (xdc_Char)0x3a,  /* [5619] */
    (xdc_Char)0x20,  /* [5620] */
    (xdc_Char)0x30,  /* [5621] */
    (xdc_Char)0x78,  /* [5622] */
    (xdc_Char)0x25,  /* [5623] */
    (xdc_Char)0x78,  /* [5624] */
    (xdc_Char)0x2c,  /* [5625] */
    (xdc_Char)0x20,  /* [5626] */
    (xdc_Char)0x66,  /* [5627] */
    (xdc_Char)0x75,  /* [5628] */
    (xdc_Char)0x6e,  /* [5629] */
    (xdc_Char)0x63,  /* [5630] */
    (xdc_Char)0x3a,  /* [5631] */
    (xdc_Char)0x20,  /* [5632] */
    (xdc_Char)0x30,  /* [5633] */
    (xdc_Char)0x78,  /* [5634] */
    (xdc_Char)0x25,  /* [5635] */
    (xdc_Char)0x78,  /* [5636] */
    (xdc_Char)0x2c,  /* [5637] */
    (xdc_Char)0x20,  /* [5638] */
    (xdc_Char)0x74,  /* [5639] */
    (xdc_Char)0x69,  /* [5640] */
    (xdc_Char)0x6d,  /* [5641] */
    (xdc_Char)0x65,  /* [5642] */
    (xdc_Char)0x6f,  /* [5643] */
    (xdc_Char)0x75,  /* [5644] */
    (xdc_Char)0x74,  /* [5645] */
    (xdc_Char)0x3a,  /* [5646] */
    (xdc_Char)0x20,  /* [5647] */
    (xdc_Char)0x25,  /* [5648] */
    (xdc_Char)0x64,  /* [5649] */
    (xdc_Char)0x0,  /* [5650] */
    (xdc_Char)0x4c,  /* [5651] */
    (xdc_Char)0x44,  /* [5652] */
    (xdc_Char)0x5f,  /* [5653] */
    (xdc_Char)0x72,  /* [5654] */
    (xdc_Char)0x65,  /* [5655] */
    (xdc_Char)0x61,  /* [5656] */
    (xdc_Char)0x64,  /* [5657] */
    (xdc_Char)0x79,  /* [5658] */
    (xdc_Char)0x3a,  /* [5659] */
    (xdc_Char)0x20,  /* [5660] */
    (xdc_Char)0x74,  /* [5661] */
    (xdc_Char)0x73,  /* [5662] */
    (xdc_Char)0x6b,  /* [5663] */
    (xdc_Char)0x3a,  /* [5664] */
    (xdc_Char)0x20,  /* [5665] */
    (xdc_Char)0x30,  /* [5666] */
    (xdc_Char)0x78,  /* [5667] */
    (xdc_Char)0x25,  /* [5668] */
    (xdc_Char)0x78,  /* [5669] */
    (xdc_Char)0x2c,  /* [5670] */
    (xdc_Char)0x20,  /* [5671] */
    (xdc_Char)0x66,  /* [5672] */
    (xdc_Char)0x75,  /* [5673] */
    (xdc_Char)0x6e,  /* [5674] */
    (xdc_Char)0x63,  /* [5675] */
    (xdc_Char)0x3a,  /* [5676] */
    (xdc_Char)0x20,  /* [5677] */
    (xdc_Char)0x30,  /* [5678] */
    (xdc_Char)0x78,  /* [5679] */
    (xdc_Char)0x25,  /* [5680] */
    (xdc_Char)0x78,  /* [5681] */
    (xdc_Char)0x2c,  /* [5682] */
    (xdc_Char)0x20,  /* [5683] */
    (xdc_Char)0x70,  /* [5684] */
    (xdc_Char)0x72,  /* [5685] */
    (xdc_Char)0x69,  /* [5686] */
    (xdc_Char)0x3a,  /* [5687] */
    (xdc_Char)0x20,  /* [5688] */
    (xdc_Char)0x25,  /* [5689] */
    (xdc_Char)0x64,  /* [5690] */
    (xdc_Char)0x0,  /* [5691] */
    (xdc_Char)0x4c,  /* [5692] */
    (xdc_Char)0x44,  /* [5693] */
    (xdc_Char)0x5f,  /* [5694] */
    (xdc_Char)0x62,  /* [5695] */
    (xdc_Char)0x6c,  /* [5696] */
    (xdc_Char)0x6f,  /* [5697] */
    (xdc_Char)0x63,  /* [5698] */
    (xdc_Char)0x6b,  /* [5699] */
    (xdc_Char)0x3a,  /* [5700] */
    (xdc_Char)0x20,  /* [5701] */
    (xdc_Char)0x74,  /* [5702] */
    (xdc_Char)0x73,  /* [5703] */
    (xdc_Char)0x6b,  /* [5704] */
    (xdc_Char)0x3a,  /* [5705] */
    (xdc_Char)0x20,  /* [5706] */
    (xdc_Char)0x30,  /* [5707] */
    (xdc_Char)0x78,  /* [5708] */
    (xdc_Char)0x25,  /* [5709] */
    (xdc_Char)0x78,  /* [5710] */
    (xdc_Char)0x2c,  /* [5711] */
    (xdc_Char)0x20,  /* [5712] */
    (xdc_Char)0x66,  /* [5713] */
    (xdc_Char)0x75,  /* [5714] */
    (xdc_Char)0x6e,  /* [5715] */
    (xdc_Char)0x63,  /* [5716] */
    (xdc_Char)0x3a,  /* [5717] */
    (xdc_Char)0x20,  /* [5718] */
    (xdc_Char)0x30,  /* [5719] */
    (xdc_Char)0x78,  /* [5720] */
    (xdc_Char)0x25,  /* [5721] */
    (xdc_Char)0x78,  /* [5722] */
    (xdc_Char)0x0,  /* [5723] */
    (xdc_Char)0x4c,  /* [5724] */
    (xdc_Char)0x4d,  /* [5725] */
    (xdc_Char)0x5f,  /* [5726] */
    (xdc_Char)0x79,  /* [5727] */
    (xdc_Char)0x69,  /* [5728] */
    (xdc_Char)0x65,  /* [5729] */
    (xdc_Char)0x6c,  /* [5730] */
    (xdc_Char)0x64,  /* [5731] */
    (xdc_Char)0x3a,  /* [5732] */
    (xdc_Char)0x20,  /* [5733] */
    (xdc_Char)0x74,  /* [5734] */
    (xdc_Char)0x73,  /* [5735] */
    (xdc_Char)0x6b,  /* [5736] */
    (xdc_Char)0x3a,  /* [5737] */
    (xdc_Char)0x20,  /* [5738] */
    (xdc_Char)0x30,  /* [5739] */
    (xdc_Char)0x78,  /* [5740] */
    (xdc_Char)0x25,  /* [5741] */
    (xdc_Char)0x78,  /* [5742] */
    (xdc_Char)0x2c,  /* [5743] */
    (xdc_Char)0x20,  /* [5744] */
    (xdc_Char)0x66,  /* [5745] */
    (xdc_Char)0x75,  /* [5746] */
    (xdc_Char)0x6e,  /* [5747] */
    (xdc_Char)0x63,  /* [5748] */
    (xdc_Char)0x3a,  /* [5749] */
    (xdc_Char)0x20,  /* [5750] */
    (xdc_Char)0x30,  /* [5751] */
    (xdc_Char)0x78,  /* [5752] */
    (xdc_Char)0x25,  /* [5753] */
    (xdc_Char)0x78,  /* [5754] */
    (xdc_Char)0x2c,  /* [5755] */
    (xdc_Char)0x20,  /* [5756] */
    (xdc_Char)0x63,  /* [5757] */
    (xdc_Char)0x75,  /* [5758] */
    (xdc_Char)0x72,  /* [5759] */
    (xdc_Char)0x72,  /* [5760] */
    (xdc_Char)0x54,  /* [5761] */
    (xdc_Char)0x68,  /* [5762] */
    (xdc_Char)0x72,  /* [5763] */
    (xdc_Char)0x65,  /* [5764] */
    (xdc_Char)0x61,  /* [5765] */
    (xdc_Char)0x64,  /* [5766] */
    (xdc_Char)0x3a,  /* [5767] */
    (xdc_Char)0x20,  /* [5768] */
    (xdc_Char)0x25,  /* [5769] */
    (xdc_Char)0x64,  /* [5770] */
    (xdc_Char)0x0,  /* [5771] */
    (xdc_Char)0x4c,  /* [5772] */
    (xdc_Char)0x4d,  /* [5773] */
    (xdc_Char)0x5f,  /* [5774] */
    (xdc_Char)0x73,  /* [5775] */
    (xdc_Char)0x65,  /* [5776] */
    (xdc_Char)0x74,  /* [5777] */
    (xdc_Char)0x50,  /* [5778] */
    (xdc_Char)0x72,  /* [5779] */
    (xdc_Char)0x69,  /* [5780] */
    (xdc_Char)0x3a,  /* [5781] */
    (xdc_Char)0x20,  /* [5782] */
    (xdc_Char)0x74,  /* [5783] */
    (xdc_Char)0x73,  /* [5784] */
    (xdc_Char)0x6b,  /* [5785] */
    (xdc_Char)0x3a,  /* [5786] */
    (xdc_Char)0x20,  /* [5787] */
    (xdc_Char)0x30,  /* [5788] */
    (xdc_Char)0x78,  /* [5789] */
    (xdc_Char)0x25,  /* [5790] */
    (xdc_Char)0x78,  /* [5791] */
    (xdc_Char)0x2c,  /* [5792] */
    (xdc_Char)0x20,  /* [5793] */
    (xdc_Char)0x66,  /* [5794] */
    (xdc_Char)0x75,  /* [5795] */
    (xdc_Char)0x6e,  /* [5796] */
    (xdc_Char)0x63,  /* [5797] */
    (xdc_Char)0x3a,  /* [5798] */
    (xdc_Char)0x20,  /* [5799] */
    (xdc_Char)0x30,  /* [5800] */
    (xdc_Char)0x78,  /* [5801] */
    (xdc_Char)0x25,  /* [5802] */
    (xdc_Char)0x78,  /* [5803] */
    (xdc_Char)0x2c,  /* [5804] */
    (xdc_Char)0x20,  /* [5805] */
    (xdc_Char)0x6f,  /* [5806] */
    (xdc_Char)0x6c,  /* [5807] */
    (xdc_Char)0x64,  /* [5808] */
    (xdc_Char)0x50,  /* [5809] */
    (xdc_Char)0x72,  /* [5810] */
    (xdc_Char)0x69,  /* [5811] */
    (xdc_Char)0x3a,  /* [5812] */
    (xdc_Char)0x20,  /* [5813] */
    (xdc_Char)0x25,  /* [5814] */
    (xdc_Char)0x64,  /* [5815] */
    (xdc_Char)0x2c,  /* [5816] */
    (xdc_Char)0x20,  /* [5817] */
    (xdc_Char)0x6e,  /* [5818] */
    (xdc_Char)0x65,  /* [5819] */
    (xdc_Char)0x77,  /* [5820] */
    (xdc_Char)0x50,  /* [5821] */
    (xdc_Char)0x72,  /* [5822] */
    (xdc_Char)0x69,  /* [5823] */
    (xdc_Char)0x20,  /* [5824] */
    (xdc_Char)0x25,  /* [5825] */
    (xdc_Char)0x64,  /* [5826] */
    (xdc_Char)0x0,  /* [5827] */
    (xdc_Char)0x4c,  /* [5828] */
    (xdc_Char)0x44,  /* [5829] */
    (xdc_Char)0x5f,  /* [5830] */
    (xdc_Char)0x65,  /* [5831] */
    (xdc_Char)0x78,  /* [5832] */
    (xdc_Char)0x69,  /* [5833] */
    (xdc_Char)0x74,  /* [5834] */
    (xdc_Char)0x3a,  /* [5835] */
    (xdc_Char)0x20,  /* [5836] */
    (xdc_Char)0x74,  /* [5837] */
    (xdc_Char)0x73,  /* [5838] */
    (xdc_Char)0x6b,  /* [5839] */
    (xdc_Char)0x3a,  /* [5840] */
    (xdc_Char)0x20,  /* [5841] */
    (xdc_Char)0x30,  /* [5842] */
    (xdc_Char)0x78,  /* [5843] */
    (xdc_Char)0x25,  /* [5844] */
    (xdc_Char)0x78,  /* [5845] */
    (xdc_Char)0x2c,  /* [5846] */
    (xdc_Char)0x20,  /* [5847] */
    (xdc_Char)0x66,  /* [5848] */
    (xdc_Char)0x75,  /* [5849] */
    (xdc_Char)0x6e,  /* [5850] */
    (xdc_Char)0x63,  /* [5851] */
    (xdc_Char)0x3a,  /* [5852] */
    (xdc_Char)0x20,  /* [5853] */
    (xdc_Char)0x30,  /* [5854] */
    (xdc_Char)0x78,  /* [5855] */
    (xdc_Char)0x25,  /* [5856] */
    (xdc_Char)0x78,  /* [5857] */
    (xdc_Char)0x0,  /* [5858] */
    (xdc_Char)0x4c,  /* [5859] */
    (xdc_Char)0x4d,  /* [5860] */
    (xdc_Char)0x5f,  /* [5861] */
    (xdc_Char)0x73,  /* [5862] */
    (xdc_Char)0x65,  /* [5863] */
    (xdc_Char)0x74,  /* [5864] */
    (xdc_Char)0x41,  /* [5865] */
    (xdc_Char)0x66,  /* [5866] */
    (xdc_Char)0x66,  /* [5867] */
    (xdc_Char)0x69,  /* [5868] */
    (xdc_Char)0x6e,  /* [5869] */
    (xdc_Char)0x69,  /* [5870] */
    (xdc_Char)0x74,  /* [5871] */
    (xdc_Char)0x79,  /* [5872] */
    (xdc_Char)0x3a,  /* [5873] */
    (xdc_Char)0x20,  /* [5874] */
    (xdc_Char)0x74,  /* [5875] */
    (xdc_Char)0x73,  /* [5876] */
    (xdc_Char)0x6b,  /* [5877] */
    (xdc_Char)0x3a,  /* [5878] */
    (xdc_Char)0x20,  /* [5879] */
    (xdc_Char)0x30,  /* [5880] */
    (xdc_Char)0x78,  /* [5881] */
    (xdc_Char)0x25,  /* [5882] */
    (xdc_Char)0x78,  /* [5883] */
    (xdc_Char)0x2c,  /* [5884] */
    (xdc_Char)0x20,  /* [5885] */
    (xdc_Char)0x66,  /* [5886] */
    (xdc_Char)0x75,  /* [5887] */
    (xdc_Char)0x6e,  /* [5888] */
    (xdc_Char)0x63,  /* [5889] */
    (xdc_Char)0x3a,  /* [5890] */
    (xdc_Char)0x20,  /* [5891] */
    (xdc_Char)0x30,  /* [5892] */
    (xdc_Char)0x78,  /* [5893] */
    (xdc_Char)0x25,  /* [5894] */
    (xdc_Char)0x78,  /* [5895] */
    (xdc_Char)0x2c,  /* [5896] */
    (xdc_Char)0x20,  /* [5897] */
    (xdc_Char)0x6f,  /* [5898] */
    (xdc_Char)0x6c,  /* [5899] */
    (xdc_Char)0x64,  /* [5900] */
    (xdc_Char)0x43,  /* [5901] */
    (xdc_Char)0x6f,  /* [5902] */
    (xdc_Char)0x72,  /* [5903] */
    (xdc_Char)0x65,  /* [5904] */
    (xdc_Char)0x3a,  /* [5905] */
    (xdc_Char)0x20,  /* [5906] */
    (xdc_Char)0x25,  /* [5907] */
    (xdc_Char)0x64,  /* [5908] */
    (xdc_Char)0x2c,  /* [5909] */
    (xdc_Char)0x20,  /* [5910] */
    (xdc_Char)0x6f,  /* [5911] */
    (xdc_Char)0x6c,  /* [5912] */
    (xdc_Char)0x64,  /* [5913] */
    (xdc_Char)0x41,  /* [5914] */
    (xdc_Char)0x66,  /* [5915] */
    (xdc_Char)0x66,  /* [5916] */
    (xdc_Char)0x69,  /* [5917] */
    (xdc_Char)0x6e,  /* [5918] */
    (xdc_Char)0x69,  /* [5919] */
    (xdc_Char)0x74,  /* [5920] */
    (xdc_Char)0x79,  /* [5921] */
    (xdc_Char)0x20,  /* [5922] */
    (xdc_Char)0x25,  /* [5923] */
    (xdc_Char)0x64,  /* [5924] */
    (xdc_Char)0x2c,  /* [5925] */
    (xdc_Char)0x20,  /* [5926] */
    (xdc_Char)0x6e,  /* [5927] */
    (xdc_Char)0x65,  /* [5928] */
    (xdc_Char)0x77,  /* [5929] */
    (xdc_Char)0x41,  /* [5930] */
    (xdc_Char)0x66,  /* [5931] */
    (xdc_Char)0x66,  /* [5932] */
    (xdc_Char)0x69,  /* [5933] */
    (xdc_Char)0x6e,  /* [5934] */
    (xdc_Char)0x69,  /* [5935] */
    (xdc_Char)0x74,  /* [5936] */
    (xdc_Char)0x79,  /* [5937] */
    (xdc_Char)0x20,  /* [5938] */
    (xdc_Char)0x25,  /* [5939] */
    (xdc_Char)0x64,  /* [5940] */
    (xdc_Char)0x0,  /* [5941] */
    (xdc_Char)0x4c,  /* [5942] */
    (xdc_Char)0x44,  /* [5943] */
    (xdc_Char)0x5f,  /* [5944] */
    (xdc_Char)0x73,  /* [5945] */
    (xdc_Char)0x63,  /* [5946] */
    (xdc_Char)0x68,  /* [5947] */
    (xdc_Char)0x65,  /* [5948] */
    (xdc_Char)0x64,  /* [5949] */
    (xdc_Char)0x75,  /* [5950] */
    (xdc_Char)0x6c,  /* [5951] */
    (xdc_Char)0x65,  /* [5952] */
    (xdc_Char)0x3a,  /* [5953] */
    (xdc_Char)0x20,  /* [5954] */
    (xdc_Char)0x63,  /* [5955] */
    (xdc_Char)0x6f,  /* [5956] */
    (xdc_Char)0x72,  /* [5957] */
    (xdc_Char)0x65,  /* [5958] */
    (xdc_Char)0x49,  /* [5959] */
    (xdc_Char)0x64,  /* [5960] */
    (xdc_Char)0x3a,  /* [5961] */
    (xdc_Char)0x20,  /* [5962] */
    (xdc_Char)0x25,  /* [5963] */
    (xdc_Char)0x64,  /* [5964] */
    (xdc_Char)0x2c,  /* [5965] */
    (xdc_Char)0x20,  /* [5966] */
    (xdc_Char)0x77,  /* [5967] */
    (xdc_Char)0x6f,  /* [5968] */
    (xdc_Char)0x72,  /* [5969] */
    (xdc_Char)0x6b,  /* [5970] */
    (xdc_Char)0x46,  /* [5971] */
    (xdc_Char)0x6c,  /* [5972] */
    (xdc_Char)0x61,  /* [5973] */
    (xdc_Char)0x67,  /* [5974] */
    (xdc_Char)0x3a,  /* [5975] */
    (xdc_Char)0x20,  /* [5976] */
    (xdc_Char)0x25,  /* [5977] */
    (xdc_Char)0x64,  /* [5978] */
    (xdc_Char)0x2c,  /* [5979] */
    (xdc_Char)0x20,  /* [5980] */
    (xdc_Char)0x63,  /* [5981] */
    (xdc_Char)0x75,  /* [5982] */
    (xdc_Char)0x72,  /* [5983] */
    (xdc_Char)0x53,  /* [5984] */
    (xdc_Char)0x65,  /* [5985] */
    (xdc_Char)0x74,  /* [5986] */
    (xdc_Char)0x4c,  /* [5987] */
    (xdc_Char)0x6f,  /* [5988] */
    (xdc_Char)0x63,  /* [5989] */
    (xdc_Char)0x61,  /* [5990] */
    (xdc_Char)0x6c,  /* [5991] */
    (xdc_Char)0x3a,  /* [5992] */
    (xdc_Char)0x20,  /* [5993] */
    (xdc_Char)0x25,  /* [5994] */
    (xdc_Char)0x64,  /* [5995] */
    (xdc_Char)0x2c,  /* [5996] */
    (xdc_Char)0x20,  /* [5997] */
    (xdc_Char)0x63,  /* [5998] */
    (xdc_Char)0x75,  /* [5999] */
    (xdc_Char)0x72,  /* [6000] */
    (xdc_Char)0x53,  /* [6001] */
    (xdc_Char)0x65,  /* [6002] */
    (xdc_Char)0x74,  /* [6003] */
    (xdc_Char)0x58,  /* [6004] */
    (xdc_Char)0x3a,  /* [6005] */
    (xdc_Char)0x20,  /* [6006] */
    (xdc_Char)0x25,  /* [6007] */
    (xdc_Char)0x64,  /* [6008] */
    (xdc_Char)0x2c,  /* [6009] */
    (xdc_Char)0x20,  /* [6010] */
    (xdc_Char)0x63,  /* [6011] */
    (xdc_Char)0x75,  /* [6012] */
    (xdc_Char)0x72,  /* [6013] */
    (xdc_Char)0x4d,  /* [6014] */
    (xdc_Char)0x61,  /* [6015] */
    (xdc_Char)0x73,  /* [6016] */
    (xdc_Char)0x6b,  /* [6017] */
    (xdc_Char)0x4c,  /* [6018] */
    (xdc_Char)0x6f,  /* [6019] */
    (xdc_Char)0x63,  /* [6020] */
    (xdc_Char)0x61,  /* [6021] */
    (xdc_Char)0x6c,  /* [6022] */
    (xdc_Char)0x3a,  /* [6023] */
    (xdc_Char)0x20,  /* [6024] */
    (xdc_Char)0x25,  /* [6025] */
    (xdc_Char)0x64,  /* [6026] */
    (xdc_Char)0x0,  /* [6027] */
    (xdc_Char)0x4c,  /* [6028] */
    (xdc_Char)0x44,  /* [6029] */
    (xdc_Char)0x5f,  /* [6030] */
    (xdc_Char)0x6e,  /* [6031] */
    (xdc_Char)0x6f,  /* [6032] */
    (xdc_Char)0x57,  /* [6033] */
    (xdc_Char)0x6f,  /* [6034] */
    (xdc_Char)0x72,  /* [6035] */
    (xdc_Char)0x6b,  /* [6036] */
    (xdc_Char)0x3a,  /* [6037] */
    (xdc_Char)0x20,  /* [6038] */
    (xdc_Char)0x63,  /* [6039] */
    (xdc_Char)0x6f,  /* [6040] */
    (xdc_Char)0x72,  /* [6041] */
    (xdc_Char)0x65,  /* [6042] */
    (xdc_Char)0x49,  /* [6043] */
    (xdc_Char)0x64,  /* [6044] */
    (xdc_Char)0x3a,  /* [6045] */
    (xdc_Char)0x20,  /* [6046] */
    (xdc_Char)0x25,  /* [6047] */
    (xdc_Char)0x64,  /* [6048] */
    (xdc_Char)0x2c,  /* [6049] */
    (xdc_Char)0x20,  /* [6050] */
    (xdc_Char)0x63,  /* [6051] */
    (xdc_Char)0x75,  /* [6052] */
    (xdc_Char)0x72,  /* [6053] */
    (xdc_Char)0x53,  /* [6054] */
    (xdc_Char)0x65,  /* [6055] */
    (xdc_Char)0x74,  /* [6056] */
    (xdc_Char)0x4c,  /* [6057] */
    (xdc_Char)0x6f,  /* [6058] */
    (xdc_Char)0x63,  /* [6059] */
    (xdc_Char)0x61,  /* [6060] */
    (xdc_Char)0x6c,  /* [6061] */
    (xdc_Char)0x3a,  /* [6062] */
    (xdc_Char)0x20,  /* [6063] */
    (xdc_Char)0x25,  /* [6064] */
    (xdc_Char)0x64,  /* [6065] */
    (xdc_Char)0x2c,  /* [6066] */
    (xdc_Char)0x20,  /* [6067] */
    (xdc_Char)0x63,  /* [6068] */
    (xdc_Char)0x75,  /* [6069] */
    (xdc_Char)0x72,  /* [6070] */
    (xdc_Char)0x53,  /* [6071] */
    (xdc_Char)0x65,  /* [6072] */
    (xdc_Char)0x74,  /* [6073] */
    (xdc_Char)0x58,  /* [6074] */
    (xdc_Char)0x3a,  /* [6075] */
    (xdc_Char)0x20,  /* [6076] */
    (xdc_Char)0x25,  /* [6077] */
    (xdc_Char)0x64,  /* [6078] */
    (xdc_Char)0x2c,  /* [6079] */
    (xdc_Char)0x20,  /* [6080] */
    (xdc_Char)0x63,  /* [6081] */
    (xdc_Char)0x75,  /* [6082] */
    (xdc_Char)0x72,  /* [6083] */
    (xdc_Char)0x4d,  /* [6084] */
    (xdc_Char)0x61,  /* [6085] */
    (xdc_Char)0x73,  /* [6086] */
    (xdc_Char)0x6b,  /* [6087] */
    (xdc_Char)0x4c,  /* [6088] */
    (xdc_Char)0x6f,  /* [6089] */
    (xdc_Char)0x63,  /* [6090] */
    (xdc_Char)0x61,  /* [6091] */
    (xdc_Char)0x6c,  /* [6092] */
    (xdc_Char)0x3a,  /* [6093] */
    (xdc_Char)0x20,  /* [6094] */
    (xdc_Char)0x25,  /* [6095] */
    (xdc_Char)0x64,  /* [6096] */
    (xdc_Char)0x0,  /* [6097] */
    (xdc_Char)0x4c,  /* [6098] */
    (xdc_Char)0x4d,  /* [6099] */
    (xdc_Char)0x5f,  /* [6100] */
    (xdc_Char)0x62,  /* [6101] */
    (xdc_Char)0x65,  /* [6102] */
    (xdc_Char)0x67,  /* [6103] */
    (xdc_Char)0x69,  /* [6104] */
    (xdc_Char)0x6e,  /* [6105] */
    (xdc_Char)0x3a,  /* [6106] */
    (xdc_Char)0x20,  /* [6107] */
    (xdc_Char)0x68,  /* [6108] */
    (xdc_Char)0x77,  /* [6109] */
    (xdc_Char)0x69,  /* [6110] */
    (xdc_Char)0x3a,  /* [6111] */
    (xdc_Char)0x20,  /* [6112] */
    (xdc_Char)0x30,  /* [6113] */
    (xdc_Char)0x78,  /* [6114] */
    (xdc_Char)0x25,  /* [6115] */
    (xdc_Char)0x78,  /* [6116] */
    (xdc_Char)0x2c,  /* [6117] */
    (xdc_Char)0x20,  /* [6118] */
    (xdc_Char)0x66,  /* [6119] */
    (xdc_Char)0x75,  /* [6120] */
    (xdc_Char)0x6e,  /* [6121] */
    (xdc_Char)0x63,  /* [6122] */
    (xdc_Char)0x3a,  /* [6123] */
    (xdc_Char)0x20,  /* [6124] */
    (xdc_Char)0x30,  /* [6125] */
    (xdc_Char)0x78,  /* [6126] */
    (xdc_Char)0x25,  /* [6127] */
    (xdc_Char)0x78,  /* [6128] */
    (xdc_Char)0x2c,  /* [6129] */
    (xdc_Char)0x20,  /* [6130] */
    (xdc_Char)0x70,  /* [6131] */
    (xdc_Char)0x72,  /* [6132] */
    (xdc_Char)0x65,  /* [6133] */
    (xdc_Char)0x54,  /* [6134] */
    (xdc_Char)0x68,  /* [6135] */
    (xdc_Char)0x72,  /* [6136] */
    (xdc_Char)0x65,  /* [6137] */
    (xdc_Char)0x61,  /* [6138] */
    (xdc_Char)0x64,  /* [6139] */
    (xdc_Char)0x3a,  /* [6140] */
    (xdc_Char)0x20,  /* [6141] */
    (xdc_Char)0x25,  /* [6142] */
    (xdc_Char)0x64,  /* [6143] */
    (xdc_Char)0x2c,  /* [6144] */
    (xdc_Char)0x20,  /* [6145] */
    (xdc_Char)0x69,  /* [6146] */
    (xdc_Char)0x6e,  /* [6147] */
    (xdc_Char)0x74,  /* [6148] */
    (xdc_Char)0x4e,  /* [6149] */
    (xdc_Char)0x75,  /* [6150] */
    (xdc_Char)0x6d,  /* [6151] */
    (xdc_Char)0x3a,  /* [6152] */
    (xdc_Char)0x20,  /* [6153] */
    (xdc_Char)0x25,  /* [6154] */
    (xdc_Char)0x64,  /* [6155] */
    (xdc_Char)0x2c,  /* [6156] */
    (xdc_Char)0x20,  /* [6157] */
    (xdc_Char)0x69,  /* [6158] */
    (xdc_Char)0x72,  /* [6159] */
    (xdc_Char)0x70,  /* [6160] */
    (xdc_Char)0x3a,  /* [6161] */
    (xdc_Char)0x20,  /* [6162] */
    (xdc_Char)0x30,  /* [6163] */
    (xdc_Char)0x78,  /* [6164] */
    (xdc_Char)0x25,  /* [6165] */
    (xdc_Char)0x78,  /* [6166] */
    (xdc_Char)0x0,  /* [6167] */
    (xdc_Char)0x4c,  /* [6168] */
    (xdc_Char)0x44,  /* [6169] */
    (xdc_Char)0x5f,  /* [6170] */
    (xdc_Char)0x65,  /* [6171] */
    (xdc_Char)0x6e,  /* [6172] */
    (xdc_Char)0x64,  /* [6173] */
    (xdc_Char)0x3a,  /* [6174] */
    (xdc_Char)0x20,  /* [6175] */
    (xdc_Char)0x68,  /* [6176] */
    (xdc_Char)0x77,  /* [6177] */
    (xdc_Char)0x69,  /* [6178] */
    (xdc_Char)0x3a,  /* [6179] */
    (xdc_Char)0x20,  /* [6180] */
    (xdc_Char)0x30,  /* [6181] */
    (xdc_Char)0x78,  /* [6182] */
    (xdc_Char)0x25,  /* [6183] */
    (xdc_Char)0x78,  /* [6184] */
    (xdc_Char)0x0,  /* [6185] */
    (xdc_Char)0x78,  /* [6186] */
    (xdc_Char)0x64,  /* [6187] */
    (xdc_Char)0x63,  /* [6188] */
    (xdc_Char)0x2e,  /* [6189] */
    (xdc_Char)0x0,  /* [6190] */
    (xdc_Char)0x72,  /* [6191] */
    (xdc_Char)0x75,  /* [6192] */
    (xdc_Char)0x6e,  /* [6193] */
    (xdc_Char)0x74,  /* [6194] */
    (xdc_Char)0x69,  /* [6195] */
    (xdc_Char)0x6d,  /* [6196] */
    (xdc_Char)0x65,  /* [6197] */
    (xdc_Char)0x2e,  /* [6198] */
    (xdc_Char)0x0,  /* [6199] */
    (xdc_Char)0x41,  /* [6200] */
    (xdc_Char)0x73,  /* [6201] */
    (xdc_Char)0x73,  /* [6202] */
    (xdc_Char)0x65,  /* [6203] */
    (xdc_Char)0x72,  /* [6204] */
    (xdc_Char)0x74,  /* [6205] */
    (xdc_Char)0x0,  /* [6206] */
    (xdc_Char)0x43,  /* [6207] */
    (xdc_Char)0x6f,  /* [6208] */
    (xdc_Char)0x72,  /* [6209] */
    (xdc_Char)0x65,  /* [6210] */
    (xdc_Char)0x0,  /* [6211] */
    (xdc_Char)0x44,  /* [6212] */
    (xdc_Char)0x65,  /* [6213] */
    (xdc_Char)0x66,  /* [6214] */
    (xdc_Char)0x61,  /* [6215] */
    (xdc_Char)0x75,  /* [6216] */
    (xdc_Char)0x6c,  /* [6217] */
    (xdc_Char)0x74,  /* [6218] */
    (xdc_Char)0x73,  /* [6219] */
    (xdc_Char)0x0,  /* [6220] */
    (xdc_Char)0x44,  /* [6221] */
    (xdc_Char)0x69,  /* [6222] */
    (xdc_Char)0x61,  /* [6223] */
    (xdc_Char)0x67,  /* [6224] */
    (xdc_Char)0x73,  /* [6225] */
    (xdc_Char)0x0,  /* [6226] */
    (xdc_Char)0x45,  /* [6227] */
    (xdc_Char)0x72,  /* [6228] */
    (xdc_Char)0x72,  /* [6229] */
    (xdc_Char)0x6f,  /* [6230] */
    (xdc_Char)0x72,  /* [6231] */
    (xdc_Char)0x0,  /* [6232] */
    (xdc_Char)0x47,  /* [6233] */
    (xdc_Char)0x61,  /* [6234] */
    (xdc_Char)0x74,  /* [6235] */
    (xdc_Char)0x65,  /* [6236] */
    (xdc_Char)0x0,  /* [6237] */
    (xdc_Char)0x4c,  /* [6238] */
    (xdc_Char)0x6f,  /* [6239] */
    (xdc_Char)0x67,  /* [6240] */
    (xdc_Char)0x0,  /* [6241] */
    (xdc_Char)0x4d,  /* [6242] */
    (xdc_Char)0x61,  /* [6243] */
    (xdc_Char)0x69,  /* [6244] */
    (xdc_Char)0x6e,  /* [6245] */
    (xdc_Char)0x0,  /* [6246] */
    (xdc_Char)0x4d,  /* [6247] */
    (xdc_Char)0x65,  /* [6248] */
    (xdc_Char)0x6d,  /* [6249] */
    (xdc_Char)0x6f,  /* [6250] */
    (xdc_Char)0x72,  /* [6251] */
    (xdc_Char)0x79,  /* [6252] */
    (xdc_Char)0x0,  /* [6253] */
    (xdc_Char)0x52,  /* [6254] */
    (xdc_Char)0x65,  /* [6255] */
    (xdc_Char)0x67,  /* [6256] */
    (xdc_Char)0x69,  /* [6257] */
    (xdc_Char)0x73,  /* [6258] */
    (xdc_Char)0x74,  /* [6259] */
    (xdc_Char)0x72,  /* [6260] */
    (xdc_Char)0x79,  /* [6261] */
    (xdc_Char)0x0,  /* [6262] */
    (xdc_Char)0x53,  /* [6263] */
    (xdc_Char)0x74,  /* [6264] */
    (xdc_Char)0x61,  /* [6265] */
    (xdc_Char)0x72,  /* [6266] */
    (xdc_Char)0x74,  /* [6267] */
    (xdc_Char)0x75,  /* [6268] */
    (xdc_Char)0x70,  /* [6269] */
    (xdc_Char)0x0,  /* [6270] */
    (xdc_Char)0x53,  /* [6271] */
    (xdc_Char)0x79,  /* [6272] */
    (xdc_Char)0x73,  /* [6273] */
    (xdc_Char)0x74,  /* [6274] */
    (xdc_Char)0x65,  /* [6275] */
    (xdc_Char)0x6d,  /* [6276] */
    (xdc_Char)0x0,  /* [6277] */
    (xdc_Char)0x53,  /* [6278] */
    (xdc_Char)0x79,  /* [6279] */
    (xdc_Char)0x73,  /* [6280] */
    (xdc_Char)0x4d,  /* [6281] */
    (xdc_Char)0x69,  /* [6282] */
    (xdc_Char)0x6e,  /* [6283] */
    (xdc_Char)0x0,  /* [6284] */
    (xdc_Char)0x54,  /* [6285] */
    (xdc_Char)0x65,  /* [6286] */
    (xdc_Char)0x78,  /* [6287] */
    (xdc_Char)0x74,  /* [6288] */
    (xdc_Char)0x0,  /* [6289] */
    (xdc_Char)0x74,  /* [6290] */
    (xdc_Char)0x69,  /* [6291] */
    (xdc_Char)0x2e,  /* [6292] */
    (xdc_Char)0x0,  /* [6293] */
    (xdc_Char)0x73,  /* [6294] */
    (xdc_Char)0x79,  /* [6295] */
    (xdc_Char)0x73,  /* [6296] */
    (xdc_Char)0x62,  /* [6297] */
    (xdc_Char)0x69,  /* [6298] */
    (xdc_Char)0x6f,  /* [6299] */
    (xdc_Char)0x73,  /* [6300] */
    (xdc_Char)0x2e,  /* [6301] */
    (xdc_Char)0x0,  /* [6302] */
    (xdc_Char)0x6b,  /* [6303] */
    (xdc_Char)0x6e,  /* [6304] */
    (xdc_Char)0x6c,  /* [6305] */
    (xdc_Char)0x2e,  /* [6306] */
    (xdc_Char)0x0,  /* [6307] */
    (xdc_Char)0x43,  /* [6308] */
    (xdc_Char)0x6c,  /* [6309] */
    (xdc_Char)0x6f,  /* [6310] */
    (xdc_Char)0x63,  /* [6311] */
    (xdc_Char)0x6b,  /* [6312] */
    (xdc_Char)0x0,  /* [6313] */
    (xdc_Char)0x49,  /* [6314] */
    (xdc_Char)0x64,  /* [6315] */
    (xdc_Char)0x6c,  /* [6316] */
    (xdc_Char)0x65,  /* [6317] */
    (xdc_Char)0x0,  /* [6318] */
    (xdc_Char)0x49,  /* [6319] */
    (xdc_Char)0x6e,  /* [6320] */
    (xdc_Char)0x74,  /* [6321] */
    (xdc_Char)0x72,  /* [6322] */
    (xdc_Char)0x69,  /* [6323] */
    (xdc_Char)0x6e,  /* [6324] */
    (xdc_Char)0x73,  /* [6325] */
    (xdc_Char)0x69,  /* [6326] */
    (xdc_Char)0x63,  /* [6327] */
    (xdc_Char)0x73,  /* [6328] */
    (xdc_Char)0x0,  /* [6329] */
    (xdc_Char)0x45,  /* [6330] */
    (xdc_Char)0x76,  /* [6331] */
    (xdc_Char)0x65,  /* [6332] */
    (xdc_Char)0x6e,  /* [6333] */
    (xdc_Char)0x74,  /* [6334] */
    (xdc_Char)0x0,  /* [6335] */
    (xdc_Char)0x4d,  /* [6336] */
    (xdc_Char)0x61,  /* [6337] */
    (xdc_Char)0x69,  /* [6338] */
    (xdc_Char)0x6c,  /* [6339] */
    (xdc_Char)0x62,  /* [6340] */
    (xdc_Char)0x6f,  /* [6341] */
    (xdc_Char)0x78,  /* [6342] */
    (xdc_Char)0x0,  /* [6343] */
    (xdc_Char)0x51,  /* [6344] */
    (xdc_Char)0x75,  /* [6345] */
    (xdc_Char)0x65,  /* [6346] */
    (xdc_Char)0x75,  /* [6347] */
    (xdc_Char)0x65,  /* [6348] */
    (xdc_Char)0x0,  /* [6349] */
    (xdc_Char)0x53,  /* [6350] */
    (xdc_Char)0x65,  /* [6351] */
    (xdc_Char)0x6d,  /* [6352] */
    (xdc_Char)0x61,  /* [6353] */
    (xdc_Char)0x70,  /* [6354] */
    (xdc_Char)0x68,  /* [6355] */
    (xdc_Char)0x6f,  /* [6356] */
    (xdc_Char)0x72,  /* [6357] */
    (xdc_Char)0x65,  /* [6358] */
    (xdc_Char)0x0,  /* [6359] */
    (xdc_Char)0x53,  /* [6360] */
    (xdc_Char)0x77,  /* [6361] */
    (xdc_Char)0x69,  /* [6362] */
    (xdc_Char)0x0,  /* [6363] */
    (xdc_Char)0x54,  /* [6364] */
    (xdc_Char)0x61,  /* [6365] */
    (xdc_Char)0x73,  /* [6366] */
    (xdc_Char)0x6b,  /* [6367] */
    (xdc_Char)0x0,  /* [6368] */
    (xdc_Char)0x68,  /* [6369] */
    (xdc_Char)0x61,  /* [6370] */
    (xdc_Char)0x6c,  /* [6371] */
    (xdc_Char)0x2e,  /* [6372] */
    (xdc_Char)0x0,  /* [6373] */
    (xdc_Char)0x48,  /* [6374] */
    (xdc_Char)0x77,  /* [6375] */
    (xdc_Char)0x69,  /* [6376] */
    (xdc_Char)0x0,  /* [6377] */
    (xdc_Char)0x42,  /* [6378] */
    (xdc_Char)0x49,  /* [6379] */
    (xdc_Char)0x4f,  /* [6380] */
    (xdc_Char)0x53,  /* [6381] */
    (xdc_Char)0x0,  /* [6382] */
    (xdc_Char)0x66,  /* [6383] */
    (xdc_Char)0x61,  /* [6384] */
    (xdc_Char)0x6d,  /* [6385] */
    (xdc_Char)0x69,  /* [6386] */
    (xdc_Char)0x6c,  /* [6387] */
    (xdc_Char)0x79,  /* [6388] */
    (xdc_Char)0x2e,  /* [6389] */
    (xdc_Char)0x0,  /* [6390] */
    (xdc_Char)0x61,  /* [6391] */
    (xdc_Char)0x72,  /* [6392] */
    (xdc_Char)0x6d,  /* [6393] */
    (xdc_Char)0x2e,  /* [6394] */
    (xdc_Char)0x0,  /* [6395] */
    (xdc_Char)0x6d,  /* [6396] */
    (xdc_Char)0x73,  /* [6397] */
    (xdc_Char)0x70,  /* [6398] */
    (xdc_Char)0x34,  /* [6399] */
    (xdc_Char)0x33,  /* [6400] */
    (xdc_Char)0x32,  /* [6401] */
    (xdc_Char)0x2e,  /* [6402] */
    (xdc_Char)0x0,  /* [6403] */
    (xdc_Char)0x69,  /* [6404] */
    (xdc_Char)0x6e,  /* [6405] */
    (xdc_Char)0x69,  /* [6406] */
    (xdc_Char)0x74,  /* [6407] */
    (xdc_Char)0x2e,  /* [6408] */
    (xdc_Char)0x0,  /* [6409] */
    (xdc_Char)0x42,  /* [6410] */
    (xdc_Char)0x6f,  /* [6411] */
    (xdc_Char)0x6f,  /* [6412] */
    (xdc_Char)0x74,  /* [6413] */
    (xdc_Char)0x0,  /* [6414] */
    (xdc_Char)0x6d,  /* [6415] */
    (xdc_Char)0x33,  /* [6416] */
    (xdc_Char)0x2e,  /* [6417] */
    (xdc_Char)0x0,  /* [6418] */
    (xdc_Char)0x49,  /* [6419] */
    (xdc_Char)0x6e,  /* [6420] */
    (xdc_Char)0x74,  /* [6421] */
    (xdc_Char)0x72,  /* [6422] */
    (xdc_Char)0x69,  /* [6423] */
    (xdc_Char)0x6e,  /* [6424] */
    (xdc_Char)0x73,  /* [6425] */
    (xdc_Char)0x69,  /* [6426] */
    (xdc_Char)0x63,  /* [6427] */
    (xdc_Char)0x73,  /* [6428] */
    (xdc_Char)0x53,  /* [6429] */
    (xdc_Char)0x75,  /* [6430] */
    (xdc_Char)0x70,  /* [6431] */
    (xdc_Char)0x70,  /* [6432] */
    (xdc_Char)0x6f,  /* [6433] */
    (xdc_Char)0x72,  /* [6434] */
    (xdc_Char)0x74,  /* [6435] */
    (xdc_Char)0x0,  /* [6436] */
    (xdc_Char)0x54,  /* [6437] */
    (xdc_Char)0x61,  /* [6438] */
    (xdc_Char)0x73,  /* [6439] */
    (xdc_Char)0x6b,  /* [6440] */
    (xdc_Char)0x53,  /* [6441] */
    (xdc_Char)0x75,  /* [6442] */
    (xdc_Char)0x70,  /* [6443] */
    (xdc_Char)0x70,  /* [6444] */
    (xdc_Char)0x6f,  /* [6445] */
    (xdc_Char)0x72,  /* [6446] */
    (xdc_Char)0x74,  /* [6447] */
    (xdc_Char)0x0,  /* [6448] */
    (xdc_Char)0x68,  /* [6449] */
    (xdc_Char)0x65,  /* [6450] */
    (xdc_Char)0x61,  /* [6451] */
    (xdc_Char)0x70,  /* [6452] */
    (xdc_Char)0x73,  /* [6453] */
    (xdc_Char)0x2e,  /* [6454] */
    (xdc_Char)0x0,  /* [6455] */
    (xdc_Char)0x48,  /* [6456] */
    (xdc_Char)0x65,  /* [6457] */
    (xdc_Char)0x61,  /* [6458] */
    (xdc_Char)0x70,  /* [6459] */
    (xdc_Char)0x4d,  /* [6460] */
    (xdc_Char)0x65,  /* [6461] */
    (xdc_Char)0x6d,  /* [6462] */
    (xdc_Char)0x0,  /* [6463] */
    (xdc_Char)0x67,  /* [6464] */
    (xdc_Char)0x61,  /* [6465] */
    (xdc_Char)0x74,  /* [6466] */
    (xdc_Char)0x65,  /* [6467] */
    (xdc_Char)0x73,  /* [6468] */
    (xdc_Char)0x2e,  /* [6469] */
    (xdc_Char)0x0,  /* [6470] */
    (xdc_Char)0x47,  /* [6471] */
    (xdc_Char)0x61,  /* [6472] */
    (xdc_Char)0x74,  /* [6473] */
    (xdc_Char)0x65,  /* [6474] */
    (xdc_Char)0x48,  /* [6475] */
    (xdc_Char)0x77,  /* [6476] */
    (xdc_Char)0x69,  /* [6477] */
    (xdc_Char)0x0,  /* [6478] */
    (xdc_Char)0x47,  /* [6479] */
    (xdc_Char)0x61,  /* [6480] */
    (xdc_Char)0x74,  /* [6481] */
    (xdc_Char)0x65,  /* [6482] */
    (xdc_Char)0x4d,  /* [6483] */
    (xdc_Char)0x75,  /* [6484] */
    (xdc_Char)0x74,  /* [6485] */
    (xdc_Char)0x65,  /* [6486] */
    (xdc_Char)0x78,  /* [6487] */
    (xdc_Char)0x0,  /* [6488] */
    (xdc_Char)0x54,  /* [6489] */
    (xdc_Char)0x69,  /* [6490] */
    (xdc_Char)0x6d,  /* [6491] */
    (xdc_Char)0x65,  /* [6492] */
    (xdc_Char)0x72,  /* [6493] */
    (xdc_Char)0x0,  /* [6494] */
    (xdc_Char)0x43,  /* [6495] */
    (xdc_Char)0x6c,  /* [6496] */
    (xdc_Char)0x6f,  /* [6497] */
    (xdc_Char)0x63,  /* [6498] */
    (xdc_Char)0x6b,  /* [6499] */
    (xdc_Char)0x46,  /* [6500] */
    (xdc_Char)0x72,  /* [6501] */
    (xdc_Char)0x65,  /* [6502] */
    (xdc_Char)0x71,  /* [6503] */
    (xdc_Char)0x73,  /* [6504] */
    (xdc_Char)0x0,  /* [6505] */
    (xdc_Char)0x74,  /* [6506] */
    (xdc_Char)0x69,  /* [6507] */
    (xdc_Char)0x2e,  /* [6508] */
    (xdc_Char)0x73,  /* [6509] */
    (xdc_Char)0x79,  /* [6510] */
    (xdc_Char)0x73,  /* [6511] */
    (xdc_Char)0x62,  /* [6512] */
    (xdc_Char)0x69,  /* [6513] */
    (xdc_Char)0x6f,  /* [6514] */
    (xdc_Char)0x73,  /* [6515] */
    (xdc_Char)0x2e,  /* [6516] */
    (xdc_Char)0x6b,  /* [6517] */
    (xdc_Char)0x6e,  /* [6518] */
    (xdc_Char)0x6c,  /* [6519] */
    (xdc_Char)0x2e,  /* [6520] */
    (xdc_Char)0x54,  /* [6521] */
    (xdc_Char)0x61,  /* [6522] */
    (xdc_Char)0x73,  /* [6523] */
    (xdc_Char)0x6b,  /* [6524] */
    (xdc_Char)0x2e,  /* [6525] */
    (xdc_Char)0x49,  /* [6526] */
    (xdc_Char)0x64,  /* [6527] */
    (xdc_Char)0x6c,  /* [6528] */
    (xdc_Char)0x65,  /* [6529] */
    (xdc_Char)0x54,  /* [6530] */
    (xdc_Char)0x61,  /* [6531] */
    (xdc_Char)0x73,  /* [6532] */
    (xdc_Char)0x6b,  /* [6533] */
    (xdc_Char)0x0,  /* [6534] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[46] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x182a,  /* left */
        (xdc_Bits16)0x182f,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1838,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x183f,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1844,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x184d,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1853,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1859,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x185e,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1862,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1867,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x186e,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1877,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x187f,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1886,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x188d,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x1892,  /* left */
        (xdc_Bits16)0x1896,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x189f,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x18a4,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x18aa,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x18af,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x18ba,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x18c0,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x18c8,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x18ce,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x18d8,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x18dc,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x18e1,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x801b,  /* left */
        (xdc_Bits16)0x18e6,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x18ea,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x18ef,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801e,  /* left */
        (xdc_Bits16)0x18f7,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801f,  /* left */
        (xdc_Bits16)0x18fc,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x8020,  /* left */
        (xdc_Bits16)0x1904,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x8021,  /* left */
        (xdc_Bits16)0x190a,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x801f,  /* left */
        (xdc_Bits16)0x190f,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x18e6,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x1913,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8023,  /* left */
        (xdc_Bits16)0x1925,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1931,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8027,  /* left */
        (xdc_Bits16)0x1938,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1940,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x1947,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x194f,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x8020,  /* left */
        (xdc_Bits16)0x1959,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x8020,  /* left */
        (xdc_Bits16)0x195f,  /* right */
    },  /* [45] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1987;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x2e;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S();
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_family_arm_m3_Hwi_create(intNum, hwiFxn, (const ti_sysbios_family_arm_m3_Hwi_Params *)prms, eb);
}

/* delete */
void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_m3_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_m3_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_arm_m3_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_m3_Hwi_getFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Hwi_setFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_arm_m3_Hwi_getHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_m3_Hwi_setHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_arm_m3_Hwi_getIrp((ti_sysbios_family_arm_m3_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.msp432.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_msp432_Timer_Module__startupDone__S();
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_family_arm_msp432_Timer_create(id, tickFxn, (const ti_sysbios_family_arm_msp432_Timer_Params *)prms, eb);
}

/* delete */
void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_family_arm_msp432_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_msp432_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_msp432_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_msp432_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_msp432_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_msp432_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_msp432_Timer_getMaxTicks((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_arm_msp432_Timer_setNextTick((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_msp432_Timer_start((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_msp432_Timer_stop((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_msp432_Timer_setPeriod((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_msp432_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_msp432_Timer_getPeriod((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_msp432_Timer_getCount((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_msp432_Timer_getFreq((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_msp432_Timer_getFunc((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_msp432_Timer_setFunc((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_msp432_Timer_trigger((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_msp432_Timer_getExpiredCounts((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_arm_msp432_Timer_getExpiredTicks((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_Bool save )
{
    return ti_sysbios_family_arm_msp432_Timer_getCurrentTick((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enterFxn, ti_sysbios_interfaces_ITaskSupport_FuncPtr exitFxn, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_arm_m3_TaskSupport_start(curTask, enterFxn, exitFxn, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_arm_m3_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getDefaultStackSize();
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)ti_sysbios_heaps_HeapMem_create((const ti_sysbios_heaps_HeapMem_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (xdc_CPtr)0, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.msp432.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_msp432_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_msp432_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_msp432_Timer_Object__DESC__C = {
    (xdc_CPtr)0, /* fxnTab */
    &ti_sysbios_family_arm_msp432_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_msp432_Timer___S1) - sizeof(ti_sysbios_family_arm_msp432_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_msp432_Timer_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_msp432_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_CPtr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Mailbox OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Mailbox_Object2__ s0; char c; } ti_sysbios_knl_Mailbox___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Mailbox_Object__DESC__C, ".const:ti_sysbios_knl_Mailbox_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Mailbox_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Mailbox_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Mailbox___S1) - sizeof(ti_sysbios_knl_Mailbox_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Mailbox_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Mailbox_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Mailbox_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module mod, const xdc_runtime_IGateProvider_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IGateProvider_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IGateProvider_Params), eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module mod, const xdc_runtime_IHeap_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IHeap_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IHeap_Params), eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__id *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.m3.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_family_arm_m3_Hwi_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_family_arm_m3_Hwi_Module__id *)(xdcRomConstPtr + ti_sysbios_family_arm_m3_Hwi_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_family_arm_m3_Hwi_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_family_arm_m3_Hwi_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_m3_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32804;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_arm_m3_Hwi_Object__ * const)ti_sysbios_family_arm_m3_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_arm_m3_Hwi_Args__create *__args = __aa;
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    ti_sysbios_family_arm_m3_Hwi_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(__obj, __args->intNum, __args->hwiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_family_arm_m3_Hwi_Handle ti_sysbios_family_arm_m3_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params prms;
    ti_sysbios_family_arm_m3_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_arm_m3_Hwi_construct(ti_sysbios_family_arm_m3_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_arm_m3_Hwi_destruct(ti_sysbios_family_arm_m3_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_m3_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_m3_Hwi_delete(ti_sysbios_family_arm_m3_Hwi_Handle *instp)
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.msp432.ClockFreqs SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_msp432_ClockFreqs_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.msp432.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_family_arm_msp432_Timer_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_family_arm_msp432_Timer_Module__id *)(xdcRomConstPtr + ti_sysbios_family_arm_msp432_Timer_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_family_arm_msp432_Timer_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_family_arm_msp432_Timer_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_family_arm_msp432_Timer_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_family_arm_msp432_Timer_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_family_arm_msp432_Timer_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_family_arm_msp432_Timer_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_family_arm_msp432_Timer_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_family_arm_msp432_Timer_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_family_arm_msp432_Timer_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_family_arm_msp432_Timer_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_family_arm_msp432_Timer_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_family_arm_msp432_Timer_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_family_arm_msp432_Timer_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_family_arm_msp432_Timer_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_family_arm_msp432_Timer_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_family_arm_msp432_Timer_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_family_arm_msp432_Timer_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_msp432_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_msp432_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_msp432_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_msp432_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_msp432_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_msp432_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_msp432_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_msp432_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32812;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_msp432_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_msp432_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_msp432_Timer_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_arm_msp432_Timer_Object__ * const)ti_sysbios_family_arm_msp432_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_msp432_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_msp432_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_msp432_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_msp432_Timer_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_msp432_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_msp432_Timer_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_arm_msp432_Timer_Args__create *__args = __aa;
    ti_sysbios_family_arm_msp432_Timer_Params __prms;
    ti_sysbios_family_arm_msp432_Timer_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_msp432_Timer_Instance_init__E(__obj, __args->id, __args->tickFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_family_arm_msp432_Timer_Handle ti_sysbios_family_arm_msp432_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_msp432_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_family_arm_msp432_Timer_Params prms;
    ti_sysbios_family_arm_msp432_Timer_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_msp432_Timer_Instance_init__E(obj, id, tickFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_arm_msp432_Timer_construct(ti_sysbios_family_arm_msp432_Timer_Struct *__obj, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_msp432_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_family_arm_msp432_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_msp432_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_arm_msp432_Timer_destruct(ti_sysbios_family_arm_msp432_Timer_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_msp432_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, *((ti_sysbios_family_arm_msp432_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_msp432_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_msp432_Timer_delete(ti_sysbios_family_arm_msp432_Timer_Handle *instp)
{
    ti_sysbios_family_arm_msp432_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.msp432.init.Boot SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_msp432_init_Boot_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_gates_GateHwi_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_gates_GateHwi_Module__id *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_gates_GateHwi_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_gates_GateHwi_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_gates_GateHwi_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_gates_GateHwi_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_gates_GateHwi_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_gates_GateHwi_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_gates_GateHwi_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_gates_GateHwi_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_gates_GateHwi_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_gates_GateHwi_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_gates_GateHwi_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_gates_GateHwi_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_gates_GateHwi_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_gates_GateHwi_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32810;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateHwi_Object__ * const)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *__obj, const ti_sysbios_gates_GateHwi_Params *__paramsPtr )
{
    ti_sysbios_gates_GateHwi_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_gates_GateMutex_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_gates_GateMutex_Module__id *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_gates_GateMutex_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_gates_GateMutex_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_gates_GateMutex_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_gates_GateMutex_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_gates_GateMutex_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_gates_GateMutex_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_gates_GateMutex_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_gates_GateMutex_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_gates_GateMutex_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_gates_GateMutex_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_gates_GateMutex_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_gates_GateMutex_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_gates_GateMutex_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_gates_GateMutex_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32811;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateMutex_Object__ * const)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *__obj, const ti_sysbios_gates_GateMutex_Params *__paramsPtr )
{
    ti_sysbios_gates_GateMutex_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_hal_Hwi_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_hal_Hwi_Module__id *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_hal_Hwi_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_hal_Hwi_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_hal_Hwi_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_hal_Hwi_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_hal_Hwi_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_hal_Hwi_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_hal_Hwi_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_hal_Hwi_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_hal_Hwi_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_hal_Hwi_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_hal_Hwi_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_hal_Hwi_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_hal_Hwi_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_hal_Hwi_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_hal_Hwi_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32796;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_hal_Hwi_Args__create *__args = __aa;
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__obj, __args->intNum, __args->hwiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__id *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_heaps_HeapMem_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_heaps_HeapMem_Module__id *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_heaps_HeapMem_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_heaps_HeapMem_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_heaps_HeapMem_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_heaps_HeapMem_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_heaps_HeapMem_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_heaps_HeapMem_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_heaps_HeapMem_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32808;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_heaps_HeapMem_Object__ * const)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *__obj, const ti_sysbios_heaps_HeapMem_Params *__paramsPtr )
{
    ti_sysbios_heaps_HeapMem_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Clock_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Clock_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Clock_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Clock_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Clock_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Clock_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Clock_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Clock_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Clock_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Clock_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Clock_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Clock_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Clock_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Clock_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Clock_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Clock_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Clock_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Clock_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Clock_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32786;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Clock_Args__create *__args = __aa;
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__obj, __args->clockFxn, __args->timeout, &__prms);
    return __obj;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(obj, clockFxn, timeout, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *__obj, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr )
{
    ti_sysbios_knl_Clock_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)__obj, clockFxn, timeout, &__prms);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Event_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Event_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Event_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Event_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Event_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Event_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Event_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Event_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Event_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Event_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Event_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Event_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Event_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Event_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Event_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Event_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Event_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Event_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Event_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Event_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Event_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Event_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Event_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Event_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Event_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Event_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Event_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Event_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32789;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Event_Params prms;
    ti_sysbios_knl_Event_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *__obj, const ti_sysbios_knl_Event_Params *__paramsPtr )
{
    ti_sysbios_knl_Event_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle *instp)
{
    ti_sysbios_knl_Event_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Mailbox SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Mailbox_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Mailbox_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Mailbox_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Mailbox_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Mailbox_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Mailbox_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Mailbox_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Mailbox_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Mailbox_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Mailbox_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Mailbox_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Mailbox_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Mailbox_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Mailbox_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Mailbox_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Mailbox_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Mailbox_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Mailbox_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Mailbox_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Mailbox_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Mailbox_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Mailbox_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Mailbox_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Mailbox_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Mailbox_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Mailbox_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Mailbox_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Mailbox_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Mailbox_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Mailbox_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Mailbox_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Mailbox_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Mailbox_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Mailbox_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Mailbox_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Mailbox_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Mailbox_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Mailbox_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Mailbox_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Mailbox_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Mailbox_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Mailbox_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Mailbox_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Mailbox_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Mailbox_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Mailbox_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Mailbox_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Mailbox_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Mailbox_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Mailbox_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Mailbox_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Mailbox_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Mailbox_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Mailbox_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Mailbox_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Mailbox_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Mailbox_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32790;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Mailbox_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Mailbox_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Mailbox_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Mailbox_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Mailbox_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Mailbox_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Mailbox_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Mailbox_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Mailbox_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Mailbox_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Mailbox_Args__create *__args = __aa;
    ti_sysbios_knl_Mailbox_Params __prms;
    ti_sysbios_knl_Mailbox_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Mailbox_Instance_init__E(__obj, __args->msgSize, __args->numMsgs, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Mailbox_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_knl_Mailbox_Handle ti_sysbios_knl_Mailbox_create( xdc_SizeT msgSize, xdc_UInt numMsgs, const ti_sysbios_knl_Mailbox_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Mailbox_Params prms;
    ti_sysbios_knl_Mailbox_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Mailbox_Instance_init__E(obj, msgSize, numMsgs, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Mailbox_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Mailbox_construct(ti_sysbios_knl_Mailbox_Struct *__obj, xdc_SizeT msgSize, xdc_UInt numMsgs, const ti_sysbios_knl_Mailbox_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Mailbox_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Mailbox_Instance_init__E((xdc_Ptr)__obj, msgSize, numMsgs, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Mailbox_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Mailbox_destruct(ti_sysbios_knl_Mailbox_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Mailbox_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Mailbox_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Mailbox_Object__DESC__C, *((ti_sysbios_knl_Mailbox_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Mailbox_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Mailbox_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Mailbox_delete(ti_sysbios_knl_Mailbox_Handle *instp)
{
    ti_sysbios_knl_Mailbox_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Queue_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Queue_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Queue_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Queue_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Queue_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Queue_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Queue_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Queue_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Queue_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Queue_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Queue_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Queue_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Queue_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Queue_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Queue_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Queue_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Queue_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Queue_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Queue_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32791;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__obj, &__prms);
    return __obj;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *__obj, const ti_sysbios_knl_Queue_Params *__paramsPtr )
{
    ti_sysbios_knl_Queue_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Semaphore_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Semaphore_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Semaphore_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Semaphore_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Semaphore_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Semaphore_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Semaphore_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Semaphore_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Semaphore_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Semaphore_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Semaphore_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Semaphore_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Semaphore_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Semaphore_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Semaphore_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Semaphore_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32792;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Semaphore_Args__create *__args = __aa;
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__obj;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__obj, __args->count, &__prms);
    return __obj;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(obj, count, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *__obj, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr )
{
    ti_sysbios_knl_Semaphore_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)__obj, count, &__prms);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Swi_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Swi_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Swi_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Swi_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Swi_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Swi_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Swi_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Swi_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Swi_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Swi_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Swi_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Swi_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Swi_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Swi_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Swi_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Swi_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Swi_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Swi_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Swi_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32793;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Swi_Object__ * const)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Swi_Args__create *__args = __aa;
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__obj, __args->swiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(obj, swiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *__obj, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)__obj, swiFxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef ti_sysbios_knl_Task_Module__id__CR
#define Module__MID (*((CT__ti_sysbios_knl_Task_Module__id *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__id__C_offset)))
#else
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef ti_sysbios_knl_Task_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__ti_sysbios_knl_Task_Module__diagsIncluded *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef ti_sysbios_knl_Task_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__ti_sysbios_knl_Task_Module__diagsEnabled *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef ti_sysbios_knl_Task_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__ti_sysbios_knl_Task_Module__diagsMask *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef ti_sysbios_knl_Task_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__ti_sysbios_knl_Task_Module__loggerDefined *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef ti_sysbios_knl_Task_Module__loggerObj__CR
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__ti_sysbios_knl_Task_Module__loggerObj *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef ti_sysbios_knl_Task_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn0 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef ti_sysbios_knl_Task_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn1 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef ti_sysbios_knl_Task_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn2 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef ti_sysbios_knl_Task_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn4 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef ti_sysbios_knl_Task_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__ti_sysbios_knl_Task_Module__loggerFxn8 *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef ti_sysbios_knl_Task_Module__gateObj__CR
#define Module__G_OBJ (*((CT__ti_sysbios_knl_Task_Module__gateObj *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef ti_sysbios_knl_Task_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__ti_sysbios_knl_Task_Module__gatePrms *)(xdcRomConstPtr + ti_sysbios_knl_Task_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32794;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Task_Object__ * const)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_CPtr __aa,
    const xdc_UChar *__paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Task_Args__create *__args = __aa;
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__obj;
    int iStat;

    /* common instance initialization */
    __obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (__obj == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__obj, __args->fxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __obj;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &prms, (xdc_CPtr)__paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(obj, fxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *__obj, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *eb )
{
    ti_sysbios_knl_Task_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_CPtr)__paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)__obj, fxn, &__prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef xdc_runtime_Main_Module_GateProxy_Module__id__CR
#define Module__MID (*((CT__xdc_runtime_Main_Module_GateProxy_Module__id *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__id__C_offset)))
#else
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef xdc_runtime_Main_Module_GateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__xdc_runtime_Main_Module_GateProxy_Module__diagsMask *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerDefined *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerObj__CR
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerObj *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef xdc_runtime_Main_Module_GateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__xdc_runtime_Main_Module_GateProxy_Module__gateObj *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef xdc_runtime_Main_Module_GateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__xdc_runtime_Main_Module_GateProxy_Module__gatePrms *)(xdcRomConstPtr + xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef xdc_runtime_Memory_HeapProxy_Module__id__CR
#define Module__MID (*((CT__xdc_runtime_Memory_HeapProxy_Module__id *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__id__C_offset)))
#else
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__xdc_runtime_Memory_HeapProxy_Module__diagsIncluded *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__xdc_runtime_Memory_HeapProxy_Module__diagsEnabled *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef xdc_runtime_Memory_HeapProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__xdc_runtime_Memory_HeapProxy_Module__diagsMask *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerDefined *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerObj__CR
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerObj *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn0 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn1 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn2 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn4 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__xdc_runtime_Memory_HeapProxy_Module__loggerFxn8 *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef xdc_runtime_Memory_HeapProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__xdc_runtime_Memory_HeapProxy_Module__gateObj *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef xdc_runtime_Memory_HeapProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__xdc_runtime_Memory_HeapProxy_Module__gatePrms *)(xdcRomConstPtr + xdc_runtime_Memory_HeapProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S(void)
{
    return 1;
}
xdc_CPtr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void )
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#ifdef xdc_runtime_System_Module_GateProxy_Module__id__CR
#define Module__MID (*((CT__xdc_runtime_System_Module_GateProxy_Module__id *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__id__C_offset)))
#else
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#endif

#undef Module__DGSINCL
#ifdef xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__CR
#define Module__DGSINCL (*((CT__xdc_runtime_System_Module_GateProxy_Module__diagsIncluded *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C_offset)))
#else
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#endif

#undef Module__DGSENAB
#ifdef xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__CR
#define Module__DGSENAB (*((CT__xdc_runtime_System_Module_GateProxy_Module__diagsEnabled *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C_offset)))
#else
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#endif

#undef Module__DGSMASK
#ifdef xdc_runtime_System_Module_GateProxy_Module__diagsMask__CR
#define Module__DGSMASK (*((CT__xdc_runtime_System_Module_GateProxy_Module__diagsMask *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__diagsMask__C_offset)))
#else
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#endif

#undef Module__LOGDEF
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerDefined__CR
#define Module__LOGDEF (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerDefined *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C_offset)))
#else
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#endif

#undef Module__LOGOBJ
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerObj__CR
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__R
#define Module__LOGOBJ (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerObj *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerObj__C_offset)))
#else
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#endif

#undef Module__LOGFXN0
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__CR
#define Module__LOGFXN0 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn0 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C_offset)))
#else
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#endif

#undef Module__LOGFXN1
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__CR
#define Module__LOGFXN1 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn1 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C_offset)))
#else
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#endif

#undef Module__LOGFXN2
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__CR
#define Module__LOGFXN2 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn2 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C_offset)))
#else
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#endif

#undef Module__LOGFXN4
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__CR
#define Module__LOGFXN4 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn4 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C_offset)))
#else
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#endif

#undef Module__LOGFXN8
#ifdef xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__CR
#define Module__LOGFXN8 (*((CT__xdc_runtime_System_Module_GateProxy_Module__loggerFxn8 *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C_offset)))
#else
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#endif

#undef Module__G_OBJ
#ifdef xdc_runtime_System_Module_GateProxy_Module__gateObj__CR
#define Module__G_OBJ (*((CT__xdc_runtime_System_Module_GateProxy_Module__gateObj *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__gateObj__C_offset)))
#else
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#endif

#undef Module__G_PRMS
#ifdef xdc_runtime_System_Module_GateProxy_Module__gatePrms__CR
#define Module__G_PRMS (*((CT__xdc_runtime_System_Module_GateProxy_Module__gatePrms *)(xdcRomConstPtr + xdc_runtime_System_Module_GateProxy_Module__gatePrms__C_offset)))
#else
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#endif

#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#if defined(__llvm__) && defined(__ti__)
    __attribute__ ((used))
#else
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

#ifdef __GNUC__
#if defined(__llvm__) && defined(__ti__)
    __attribute__ ((used))
#else
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
#endif
const ti_sysbios_heaps_HeapMem_Handle heap0 = (ti_sysbios_heaps_HeapMem_Handle)((ti_sysbios_heaps_HeapMem_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0]);

