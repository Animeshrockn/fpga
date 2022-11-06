// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xkernel_gemm.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XKernel_gemm_CfgInitialize(XKernel_gemm *InstancePtr, XKernel_gemm_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XKernel_gemm_Start(XKernel_gemm *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKernel_gemm_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_AP_CTRL) & 0x80;
    XKernel_gemm_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XKernel_gemm_IsDone(XKernel_gemm *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKernel_gemm_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XKernel_gemm_IsIdle(XKernel_gemm *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKernel_gemm_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XKernel_gemm_IsReady(XKernel_gemm *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKernel_gemm_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XKernel_gemm_EnableAutoRestart(XKernel_gemm *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKernel_gemm_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XKernel_gemm_DisableAutoRestart(XKernel_gemm *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKernel_gemm_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_AP_CTRL, 0);
}

void XKernel_gemm_Set_C(XKernel_gemm *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKernel_gemm_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_C_DATA, Data);
}

u32 XKernel_gemm_Get_C(XKernel_gemm *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKernel_gemm_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_C_DATA);
    return Data;
}

void XKernel_gemm_Set_A(XKernel_gemm *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKernel_gemm_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_A_DATA, Data);
}

u32 XKernel_gemm_Get_A(XKernel_gemm *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKernel_gemm_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_A_DATA);
    return Data;
}

void XKernel_gemm_Set_B(XKernel_gemm *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKernel_gemm_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_B_DATA, Data);
}

u32 XKernel_gemm_Get_B(XKernel_gemm *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKernel_gemm_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_B_DATA);
    return Data;
}

void XKernel_gemm_InterruptGlobalEnable(XKernel_gemm *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKernel_gemm_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_GIE, 1);
}

void XKernel_gemm_InterruptGlobalDisable(XKernel_gemm *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKernel_gemm_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_GIE, 0);
}

void XKernel_gemm_InterruptEnable(XKernel_gemm *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XKernel_gemm_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_IER);
    XKernel_gemm_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_IER, Register | Mask);
}

void XKernel_gemm_InterruptDisable(XKernel_gemm *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XKernel_gemm_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_IER);
    XKernel_gemm_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_IER, Register & (~Mask));
}

void XKernel_gemm_InterruptClear(XKernel_gemm *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKernel_gemm_WriteReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_ISR, Mask);
}

u32 XKernel_gemm_InterruptGetEnabled(XKernel_gemm *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XKernel_gemm_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_IER);
}

u32 XKernel_gemm_InterruptGetStatus(XKernel_gemm *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XKernel_gemm_ReadReg(InstancePtr->Control_BaseAddress, XKERNEL_GEMM_CONTROL_ADDR_ISR);
}

