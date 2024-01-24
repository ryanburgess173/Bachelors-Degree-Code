.global _start
_start:	
    mov x9, #0b00000001
    mov x10, #0x00000000
    str x9, [x10, #0]
	
	mov x9, #0b00000010
	mov x10, #0x00000000
	str x9, [x10, #4]
	
	mov x9, #0b00000011
	mov x10, #0x00000000
	str x9, [x10, #8]
	
	mov x9, #0b00000100
	mov x10, #0x00000000
	str x9, [x10, #12]
	
	mov x9, #0b00000101
	mov x10, #0x00000010
	str x9, [x10, #0]
	
	mov x9, #0b00000110
	mov x10, #0x00000010
	str x9, [x10, #4]