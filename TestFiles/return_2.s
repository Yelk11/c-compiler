	.file	"return_2.c"
	.text
	.p2align 4
	.globl	_myMethod
	.def	_myMethod;	.scl	2;	.type	32;	.endef
_myMethod:
LFB0:
	.cfi_startproc
	movl	$2, %eax
	ret
	.cfi_endproc
LFE0:
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
