	.file	"test2.cpp"
	.section	.text._ZN4TestC1Ev,"axG",@progbits,_ZN4TestC1Ev,comdat
	.align 2
	.weak	_ZN4TestC1Ev
	.type	_ZN4TestC1Ev, @function
_ZN4TestC1Ev:
.LFB540:
	pushl	%ebp
.LCFI0:
	movl	%esp, %ebp
.LCFI1:
	subl	$8, %esp
.LCFI2:
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	_ZNSsC1Ev
	leave
	ret
.LFE540:
	.size	_ZN4TestC1Ev, .-_ZN4TestC1Ev
	.section	.text._ZN4TestD1Ev,"axG",@progbits,_ZN4TestD1Ev,comdat
	.align 2
	.weak	_ZN4TestD1Ev
	.type	_ZN4TestD1Ev, @function
_ZN4TestD1Ev:
.LFB543:
	pushl	%ebp
.LCFI3:
	movl	%esp, %ebp
.LCFI4:
	subl	$8, %esp
.LCFI5:
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	_ZNSsD1Ev
	leave
	ret
.LFE543:
	.size	_ZN4TestD1Ev, .-_ZN4TestD1Ev
	.text
.globl main
	.type	main, @function
main:
.LFB537:
	leal	4(%esp), %ecx
.LCFI6:
	andl	$-16, %esp
	pushl	-4(%ecx)
.LCFI7:
	pushl	%ebp
.LCFI8:
	movl	%esp, %ebp
.LCFI9:
	pushl	%ebx
.LCFI10:
	pushl	%ecx
.LCFI11:
	subl	$32, %esp
.LCFI12:
	leal	-16(%ebp), %eax
	movl	%eax, (%esp)
	call	_ZN4TestC1Ev
	movl	$8, 8(%esp)
	movl	$0, 4(%esp)
	leal	-16(%ebp), %eax
	movl	%eax, (%esp)
	call	memset
	movl	$0, %ebx
	leal	-16(%ebp), %eax
	movl	%eax, (%esp)
	call	_ZN4TestD1Ev
	movl	%ebx, %eax
	addl	$32, %esp
	popl	%ecx
	popl	%ebx
	popl	%ebp
	leal	-4(%ecx), %esp
	ret
.LFE537:
	.size	main, .-main
	.weakref	_ZL20__gthrw_pthread_oncePiPFvvE,pthread_once
	.weakref	_ZL27__gthrw_pthread_getspecificj,pthread_getspecific
	.weakref	_ZL27__gthrw_pthread_setspecificjPKv,pthread_setspecific
	.weakref	_ZL22__gthrw_pthread_createPmPK14pthread_attr_tPFPvS3_ES3_,pthread_create
	.weakref	_ZL22__gthrw_pthread_cancelm,pthread_cancel
	.weakref	_ZL26__gthrw_pthread_mutex_lockP15pthread_mutex_t,pthread_mutex_lock
	.weakref	_ZL29__gthrw_pthread_mutex_trylockP15pthread_mutex_t,pthread_mutex_trylock
	.weakref	_ZL28__gthrw_pthread_mutex_unlockP15pthread_mutex_t,pthread_mutex_unlock
	.weakref	_ZL26__gthrw_pthread_mutex_initP15pthread_mutex_tPK19pthread_mutexattr_t,pthread_mutex_init
	.weakref	_ZL30__gthrw_pthread_cond_broadcastP14pthread_cond_t,pthread_cond_broadcast
	.weakref	_ZL25__gthrw_pthread_cond_waitP14pthread_cond_tP15pthread_mutex_t,pthread_cond_wait
	.weakref	_ZL26__gthrw_pthread_key_createPjPFvPvE,pthread_key_create
	.weakref	_ZL26__gthrw_pthread_key_deletej,pthread_key_delete
	.weakref	_ZL30__gthrw_pthread_mutexattr_initP19pthread_mutexattr_t,pthread_mutexattr_init
	.weakref	_ZL33__gthrw_pthread_mutexattr_settypeP19pthread_mutexattr_ti,pthread_mutexattr_settype
	.weakref	_ZL33__gthrw_pthread_mutexattr_destroyP19pthread_mutexattr_t,pthread_mutexattr_destroy
	.section	.eh_frame,"a",@progbits
.Lframe1:
	.long	.LECIE1-.LSCIE1
.LSCIE1:
	.long	0x0
	.byte	0x1
.globl __gxx_personality_v0
	.string	"zP"
	.uleb128 0x1
	.sleb128 -4
	.byte	0x8
	.uleb128 0x5
	.byte	0x0
	.long	__gxx_personality_v0
	.byte	0xc
	.uleb128 0x4
	.uleb128 0x4
	.byte	0x88
	.uleb128 0x1
	.align 4
.LECIE1:
.LSFDE1:
	.long	.LEFDE1-.LASFDE1
.LASFDE1:
	.long	.LASFDE1-.Lframe1
	.long	.LFB540
	.long	.LFE540-.LFB540
	.uleb128 0x0
	.byte	0x4
	.long	.LCFI0-.LFB540
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI1-.LCFI0
	.byte	0xd
	.uleb128 0x5
	.align 4
.LEFDE1:
.LSFDE3:
	.long	.LEFDE3-.LASFDE3
.LASFDE3:
	.long	.LASFDE3-.Lframe1
	.long	.LFB543
	.long	.LFE543-.LFB543
	.uleb128 0x0
	.byte	0x4
	.long	.LCFI3-.LFB543
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI4-.LCFI3
	.byte	0xd
	.uleb128 0x5
	.align 4
.LEFDE3:
.LSFDE5:
	.long	.LEFDE5-.LASFDE5
.LASFDE5:
	.long	.LASFDE5-.Lframe1
	.long	.LFB537
	.long	.LFE537-.LFB537
	.uleb128 0x0
	.byte	0x4
	.long	.LCFI6-.LFB537
	.byte	0xc
	.uleb128 0x1
	.uleb128 0x0
	.byte	0x9
	.uleb128 0x4
	.uleb128 0x1
	.byte	0x4
	.long	.LCFI7-.LCFI6
	.byte	0xc
	.uleb128 0x4
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI8-.LCFI7
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI9-.LCFI8
	.byte	0xd
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI11-.LCFI9
	.byte	0x84
	.uleb128 0x4
	.byte	0x83
	.uleb128 0x3
	.align 4
.LEFDE5:
	.ident	"GCC: (Ubuntu 4.3.3-5ubuntu4) 4.3.3"
	.section	.note.GNU-stack,"",@progbits
