.global _start
.align 2

_start: MOV X0, #1  // stdout
        ADR X1, helloworld  // string to print
        MOV X2, #13 // string length
        MOV X16, #4 // MacOS Write system call
        SVC 0   // call linux to output the string

        MOV X0, #0 // use 0 return code
        MOV X16, #1 // service command code 1 terminates program
        SVC 0 // call MacOS To terminate program

helloworld: .ascii "Hello World!\n"
