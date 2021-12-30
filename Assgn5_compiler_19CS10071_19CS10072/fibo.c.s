	.file	"fibo.c"
	.text
	.section	.rodata
t8:
	.string  "Enter x: "
t12:
	.string  "Fibo(x) is: "
t16:
	.string  "\n"
	.text
	.globl fibo
	.type fibo, @function
fibo:
.LFB_fibo:
	.cfi_startproc
	push %rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq %rsp,%rbp
	.cfi_def_cfa_register 5
	subq $32, %rsp
	movl	$1, -32(%rbp)
	movl	-32(%rbp), %eax
	cmp	%eax,20(%rbp)
	jle	.LN7
	jmp	.LN8
.LN7:
	movl	20(%rbp), %eax
	movl	%eax,20(%rbp)
	jmp	.FRT_fibo
.LN8:
	movl	$1, -4(%rbp)
	movl	20(%rbp), %eax
	movl	-4(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -8(%rbp)
	movl	$0, %eax
	subq	$4,%rsp
	movl	-8(%rbp),%eax
	movl	%eax,(%rsp)
	subq	$4,%rsp
	call	fibo
	movl	4(%rsp),%eax
	movl	%eax, -12(%rbp)
	addq	$8,%rsp
	movl	$2, -16(%rbp)
	movl	20(%rbp), %eax
	movl	-16(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -20(%rbp)
	movl	$0, %eax
	subq	$4,%rsp
	movl	-20(%rbp),%eax
	movl	%eax,(%rsp)
	subq	$4,%rsp
	call	fibo
	movl	4(%rsp),%eax
	movl	%eax, -24(%rbp)
	addq	$8,%rsp
	movl	-12(%rbp), %edx
	movl	-24(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax,20(%rbp)
	jmp	.FRT_fibo
.FRT_fibo:
	addq $32, %rsp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.globl main
	.type main, @function
main:
.LFB_main:
	.cfi_startproc
	push %rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq %rsp,%rbp
	.cfi_def_cfa_register 5
	subq $60, %rsp
	subq	$8,%rsp
	leaq	t8(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	leaq	-4(%rbp), %rax
	movq	%rax, -24(%rbp)
	subq	$8,%rsp
	movq	-24(%rbp),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	readInt
	addq	$8,%rsp
	subq	$8,%rsp
	leaq	t12(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	subq	$4,%rsp
	movl	-4(%rbp),%eax
	movl	%eax,(%rsp)
	subq	$4,%rsp
	call	fibo
	movl	4(%rsp),%eax
	movl	%eax, -44(%rbp)
	addq	$8,%rsp
	subq	$4,%rsp
	movl	-44(%rbp),%eax
	movl	%eax,(%rsp)
	movl	(%rsp),%edi
	call	printInt
	addq	$4,%rsp
	subq	$8,%rsp
	leaq	t16(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
.LN35:
.FRT_main:
	addq $60, %rsp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
	.ident	"tinyC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
