# GCD-FPGA
Greatest common divisor of two 32-bit numbers in verilog

<B>The following code is written in Verilog and the simulation is done on Xilinx ISE.</B>

The algorithm for finding the GCD of two integers is very simple and can be implemented in C/C++ in just 10 lines of code.
When we try to do it on the hardware, the whole picture changes. We have to define everything from what a number is to how the clock will
synchronize with the operation of the Control and Data path.

The control path will provide the control signals and the data path will contain all the logic for mathematical operation as subtraction.
