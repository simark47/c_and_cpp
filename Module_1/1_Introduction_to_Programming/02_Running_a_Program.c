// The compiler takes the entire program written in a high-level language (like C, C++, Java, etc.) and translates it into machine code, which is a low-level binary language understood by the computer's hardware.

// Compilation: Before running the program, it needs to be translated into machine code that the computer can understand. This process is called compilation. You use a C compiler like gcc to compile the C source code into an executable file.

// Execution: Once the program is compiled, you can execute it. To do so, you typically double-click the executable file or use a command-line interface to run it. When you initiate the execution, the operating system loads the program into memory and hands control over to the CPU.





// Install a C Compiler (Mingw-w64)

// VS Code does NOT include a compiler, so you must install one.

// Download MinGW-w64

// Use the official installer:  “MSYS2 MinGW-w64 download”

// Open MSYS2 MSYS terminal and run:

// pacman -Syu
// pacman -S mingw-w64-ucrt-x86_64-gcc
// ------------------------------------
// Add Compiler Path to Environment Variables:


// 1) Open Start → Edit environment variables

// 2) Click Environment Variables

// 3) Under System Variables, select Path

// 4) Click New
// 5) Add:  C:\msys64\ucrt64\bin

// 6)Save and Test by opening Command Prompt: gcc --version