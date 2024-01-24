.global _start
.align 2

_start:
    MOV w9, 0x4
    MOV w10, 0x1B
    ADD w11, w9, w10

    MOV w0, #1 // stdout
    MOV w1, w11 // value to output (need to convert to str)
    MOV w2, #2 // str length
    MOV w16, #4 // macos output call
    SVC 0

    MOV w0, #0 // use 0 return code
    MOV w16, #1 // terminates program
    SVC 0

