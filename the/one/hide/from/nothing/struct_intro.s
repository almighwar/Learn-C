	.file	"struct_intro.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"Enter today's date (dd mm yy) "
.LC1:
	.string	"%i%i%i"
	.align 8
.LC2:
	.string	"The date of tomorrow is %i/%i/%i \n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$96, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-88(%rbp), %rax
	leaq	8(%rax), %rcx
	leaq	-88(%rbp), %rax
	leaq	4(%rax), %rdx
	leaq	-88(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	$31, -64(%rbp)
	movl	$28, -60(%rbp)
	movl	$31, -56(%rbp)
	movl	$30, -52(%rbp)
	movl	$31, -48(%rbp)
	movl	$30, -44(%rbp)
	movl	$31, -40(%rbp)
	movl	$31, -36(%rbp)
	movl	$30, -32(%rbp)
	movl	$31, -28(%rbp)
	movl	$30, -24(%rbp)
	movl	$31, -20(%rbp)
	movl	-88(%rbp), %edx
	movl	-84(%rbp), %eax
	subl	$1, %eax
	cltq
	movl	-64(%rbp,%rax,4), %eax
	cmpl	%eax, %edx
	je	.L2
	movl	-88(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -76(%rbp)
	movl	-84(%rbp), %eax
	movl	%eax, -72(%rbp)
	movl	-80(%rbp), %eax
	movl	%eax, -68(%rbp)
	jmp	.L3
.L2:
	movl	-84(%rbp), %eax
	cmpl	$12, %eax
	jne	.L4
	movl	$1, -76(%rbp)
	movl	$1, -72(%rbp)
	movl	-80(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -68(%rbp)
	jmp	.L3
.L4:
	movl	$1, -76(%rbp)
	movl	-84(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -72(%rbp)
	movl	-80(%rbp), %eax
	movl	%eax, -68(%rbp)
.L3:
	movl	-68(%rbp), %ecx
	movl	-72(%rbp), %edx
	movl	-76(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L6
	call	__stack_chk_fail@PLT
.L6:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
