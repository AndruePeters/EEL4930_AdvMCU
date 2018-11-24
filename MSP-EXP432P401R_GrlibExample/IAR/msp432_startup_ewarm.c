//*****************************************************************************
//
// Copyright (C) 2012 - 2014 Texas Instruments Incorporated - http://www.ti.com/
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//
//  Redistributions of source code must retain the above copyright
//  notice, this list of conditions and the following disclaimer.
//
//  Redistributions in binary form must reproduce the above copyright
//  notice, this list of conditions and the following disclaimer in the
//  documentation and/or other materials provided with the
//  distribution.
//
//  Neither the name of Texas Instruments Incorporated nor the names of
//  its contributors may be used to endorse or promote products derived
//  from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// MSP432 Startup Code for IAR Embedded Workbench for ARM
//
//****************************************************************************

#include <stdint.h>

/* Forward declaration of the default fault handlers. */
static void Default_Handler(void);

/* A union that describes the entries of the vector table.  The union is needed  */
/* since the first entry is the stack pointer and the remainder are function     */
/* pointers.                                                                     */
typedef union
{
    void (*pfnHandler)(void);
    uint32_t ulPtr;
}
uVectorEntry;

/* The vector table.  It needs to be linked to physical address 0x0000.0040 */
/* immediately following the vectors defined in vector_table_M.s */
__root const uVectorEntry interruptVectors[] @ 0x00000040 =
{
    Default_Handler,                      // PSS ISR
    Default_Handler,                      // CS ISR
    Default_Handler,                      // PCM ISR
    Default_Handler,                      // WDT ISR
    Default_Handler,                      // FPU ISR
    Default_Handler,                      // FLCTL ISR
    Default_Handler,                      // COMP0 ISR
    Default_Handler,                      // COMP1 ISR
    Default_Handler,                      // TA0_0 ISR
    Default_Handler,                      // TA0_N ISR
    Default_Handler,                      // TA1_0 ISR
    Default_Handler,                      // TA1_N ISR
    Default_Handler,                      // TA2_0 ISR
    Default_Handler,                      // TA2_N ISR
    Default_Handler,                      // TA3_0 ISR
    Default_Handler,                      // TA3_N ISR
    Default_Handler,                      // EUSCIA0 ISR
    Default_Handler,                      // EUSCIA1 ISR
    Default_Handler,                      // EUSCIA2 ISR
    Default_Handler,                      // EUSCIA3 ISR
    Default_Handler,                      // EUSCIB0 ISR
    Default_Handler,                      // EUSCIB1 ISR
    Default_Handler,                      // EUSCIB2 ISR
    Default_Handler,                      // EUSCIB3 ISR
    Default_Handler,                      // ADC14 ISR
    Default_Handler,                      // T32_INT1 ISR
    Default_Handler,                      // T32_INT2 ISR
    Default_Handler,                      // T32_INTC ISR
    Default_Handler,                      // AES ISR
    Default_Handler,                      // RTC ISR
    Default_Handler,                      // DMA_ERR ISR
    Default_Handler,                      // DMA_INT3 ISR
    Default_Handler,                      // DMA_INT2 ISR
    Default_Handler,                      // DMA_INT1 ISR
    Default_Handler,                      // DMA_INT0 ISR
    Default_Handler,                      // PORT1 ISR
    Default_Handler,                      // PORT2 ISR
    Default_Handler,                      // PORT3 ISR
    Default_Handler,                      // PORT4 ISR
    Default_Handler,                      // PORT5 ISR
    Default_Handler,                      // PORT6 ISR
    Default_Handler,                      // Reserved 41
    Default_Handler,                      // Reserved 42
    Default_Handler,                      // Reserved 43
    Default_Handler,                      // Reserved 44
    Default_Handler,                      // Reserved 45
    Default_Handler,                      // Reserved 46
    Default_Handler,                      // Reserved 47
    Default_Handler,                      // Reserved 48
    Default_Handler,                      // Reserved 49
    Default_Handler,                      // Reserved 50
    Default_Handler,                      // Reserved 51
    Default_Handler,                      // Reserved 52
    Default_Handler,                      // Reserved 53
    Default_Handler,                      // Reserved 54
    Default_Handler,                      // Reserved 55
    Default_Handler,                      // Reserved 56
    Default_Handler,                      // Reserved 57
    Default_Handler,                      // Reserved 58
    Default_Handler,                      // Reserved 59
    Default_Handler,                      // Reserved 60
    Default_Handler,                      // Reserved 61
    Default_Handler,                      // Reserved 62
    Default_Handler,                      // Reserved 63
    Default_Handler                       // Reserved 64
};

/* This is the code that gets called when the processor receives an unexpected   */
/* interrupt.  This simply enters an infinite loop, preserving the system state  */
/* for examination by a debugger.                                                */
static void Default_Handler(void)
{
    /* Go into an infinite loop. */
    while(1)
    {
    }
}

/* Declaration of system vectors initially defined by IAR in file vector_table_M.s */
void NMI_Handler(void)
{
    /* Go into an infinite loop. */
    while(1)
    {
    }
}

void HardFault_Handler(void)
{
    /* Go into an infinite loop. */
    while(1)
    {
    }
}

void MemManage_Handler(void)
{
    /* Go into an infinite loop. */
    while(1)
    {
    }
}

void BusFault_Handler(void)
{
    /* Go into an infinite loop. */
    while(1)
    {
    }
}

void UsageFault_Handler(void)
{
    /* Go into an infinite loop. */
    while(1)
    {
    }
}

void SVC_Handler(void)
{
    /* Go into an infinite loop. */
    while(1)
    {
    }
}

void DebugMon_Handler(void)
{
    /* Go into an infinite loop. */
    while(1)
    {
    }
}

void PendSV_Handler(void)
{
    /* Go into an infinite loop. */
    while(1)
    {
    }
}

void SysTick_Handler(void)
{
    /* Go into an infinite loop. */
    while(1)
    {
    }
}
