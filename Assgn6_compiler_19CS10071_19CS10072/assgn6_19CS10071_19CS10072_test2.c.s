	.file	"assgn6_19CS10071_19CS10072_test2.c"
	.text
	.section	.rodata
t4:
	.string  "******Program to print gcd of 2 numbers(recursive function)*******\n"
t6:
	.string  "Enter x: "
t10:
	.string  "Enter y: "
t14:
	.string  "Gcd of x and y is: "
t18:
	.string  "\n"
	.text
	.globl gcd
	.type gcd, @function
gcd:
.LFB_gcd:
	.cfi_startproc
	push %rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq %rsp,%rbp
	.cfi_def_cfa_register 5
	subq $20, %rsp
	movl	$0, -16(%rbp)
	movl	-16(%rbp), %eax
	cmp	%eax,20(%rbp)
	je	.LN7
	jmp	.LN8
.LN7:
	movl	24(%rbp), %eax
	movl	%eax,20(%rbp)
	jmp	.FRT_gcd
.LN8:
	movl	24(%rbp), %eax
	movl	$0,%edx
	idivl	20(%rbp)
	movl	%edx, -8(%rbp)
	movl	$0, %eax
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$0, -20(%rbp)
	movl	-20(%rbp), %eax
	cmp	%eax,-4(%rbp)
	je	.LN13
	jmp	.LN14
.LN13:
	movl	20(%rbp), %eax
	movl	%eax,20(%rbp)
	jmp	.FRT_gcd
.LN14:
	subq	$4,%rsp
	movl	20(%rbp),%eax
	movl	%eax,(%rsp)
	subq	$4,%rsp
	movl	-4(%rbp),%eax
	movl	%eax,(%rsp)
	subq	$4,%rsp
	call	gcd
	movl	4(%rsp),%eax
	movl	%eax, -12(%rbp)
	addq	$12,%rsp
	movl	-12(%rbp), %eax
	movl	%eax,20(%rbp)
	jmp	.FRT_gcd
.FRT_gcd:
	addq $20, %rsp
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
	subq $100, %rsp
	subq	$8,%rsp
	leaq	t4(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	subq	$8,%rsp
	leaq	t6(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	leaq	-16(%rbp), %rax
	movq	%rax, -40(%rbp)
	subq	$8,%rsp
	movq	-40(%rbp),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	readInt
	addq	$8,%rsp
	subq	$8,%rsp
	leaq	t10(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	leaq	-20(%rbp), %rax
	movq	%rax, -64(%rbp)
	subq	$8,%rsp
	movq	-64(%rbp),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	readInt
	addq	$8,%rsp
	subq	$8,%rsp
	leaq	t14(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	subq	$4,%rsp
	movl	-16(%rbp),%eax
	movl	%eax,(%rsp)
	subq	$4,%rsp
	movl	-20(%rbp),%eax
	movl	%eax,(%rsp)
	subq	$4,%rsp
	call	gcd
	movl	4(%rsp),%eax
	movl	%eax, -84(%rbp)
	addq	$12,%rsp
	subq	$4,%rsp
	movl	-84(%rbp),%eax
	movl	%eax,(%rsp)
	movl	(%rsp),%edi
	call	printInt
	addq	$4,%rsp
	subq	$8,%rsp
	leaq	t18(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
.LN45:
.FRT_main:
	addq $100, %rsp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
	.ident	"tinyC: 19CS10071 (Env :Ubuntu 7.5.0-3ubuntu1~18.04) "
	.section	.note.GNU-stack,"",@progbits
