	.file	"vfuntion-as.cpp"
	.text
	.section .rdata,"dr"
_ZStL19piecewise_construct:
	.space 1
.lcomm _ZStL8__ioinit,1,1
	.globl	B
	.data
	.align 8
B:
	.quad	_ZTV1A+16
	.text
	.align 2
	.globl	_ZN1A3byeEv
	.def	_ZN1A3byeEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN1A3byeEv
_ZN1A3byeEv:
.LFB1576:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.align 2
	.globl	_ZN1A5helloEv
	.def	_ZN1A5helloEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN1A5helloEv
_ZN1A5helloEv:
.LFB1577:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.align 2
	.globl	_ZN1A4heloEv
	.def	_ZN1A4heloEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN1A4heloEv
_ZN1A4heloEv:
.LFB1578:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB1579:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	movl	$0, %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	_ZTV1A
	.section	.rdata$_ZTV1A,"dr"
	.linkonce same_size
	.align 8
_ZTV1A:
	.quad	0
	.quad	_ZTI1A
	.quad	_ZN1A3byeEv
	.quad	_ZN1A5helloEv
	.quad	_ZN1A4heloEv
	.globl	_ZTI1A
	.section	.rdata$_ZTI1A,"dr"
	.linkonce same_size
	.align 8
_ZTI1A:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS1A
	.globl	_ZTS1A
	.section	.rdata$_ZTS1A,"dr"
	.linkonce same_size
_ZTS1A:
	.ascii "1A\0"
	.text
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB2061:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
.LFB2060:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	cmpl	$1, 16(%rbp)
	jne	.L9
	cmpl	$65535, 24(%rbp)
	jne	.L9
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rcx
	call	atexit
.L9:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I_B;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I_B
_GLOBAL__sub_I_B:
.LFB2062:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	$65535, %edx
	movl	$1, %ecx
	call	_Z41__static_initialization_and_destruction_0ii
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I_B
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
