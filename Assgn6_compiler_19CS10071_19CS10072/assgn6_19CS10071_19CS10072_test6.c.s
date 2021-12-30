	.file	"assgn6_19CS10071_19CS10072_test6.c"
	.text
	.globl	y
	.data
	.align 4
	.type	y, @object
	.size	y, 4
y:
	.long  7
	.globl	t0
	.data
	.align 4
	.type	t0, @object
	.size	t0, 4
t0:
	.long  7
	.section	.rodata
t2:
	.string  "******Program to print sum of 2 numbers one taken as input and other set globally as 7,tests handling of globals*******\n"
t4:
	.string  "Enter x: "
t9:
	.string  "Summ of x and y,globally declared as 7 : "
t12:
	.string  "\n"
	.text
	.globl sum
	.type sum, @function
sum:
.LFB_sum:
	.cfi_startproc
	push %rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq %rsp,%rbp
	.cfi_def_cfa_register 5
	subq $4, %rsp
	movl	24(%rbp), %edx
	movl	20(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax,20(%rbp)
	jmp	.FRT_sum
.FRT_sum:
	addq $4, %rsp
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
	subq $80, %rsp
	subq	$8,%rsp
	leaq	t2(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	subq	$8,%rsp
	leaq	t4(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	leaq	-16(%rbp), %rax
	movq	%rax, -36(%rbp)
	subq	$8,%rsp
	movq	-36(%rbp),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	readInt
	addq	$8,%rsp
	subq	$4,%rsp
	movl	-16(%rbp),%eax
	movl	%eax,(%rsp)
	subq	$4,%rsp
	movl	y(%rip),%eax
	movl	%eax,(%rsp)
	subq	$4,%rsp
	call	sum
	movl	4(%rsp),%eax
	movl	%eax, -48(%rbp)
	addq	$12,%rsp
	movl	-48(%rbp), %eax
	movl	%eax, -44(%rbp)
	subq	$8,%rsp
	leaq	t9(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	subq	$4,%rsp
	movl	-44(%rbp),%eax
	movl	%eax,(%rsp)
	movl	(%rsp),%edi
	call	printInt
	addq	$4,%rsp
	subq	$8,%rsp
	leaq	t12(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	movl	$0, -80(%rbp)
	movl	-80(%rbp), %eax
	movl	%eax,20(%rbp)
	jmp	.FRT_main
.LN32:
.FRT_main:
	addq $80, %rsp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
	.ident	"tinyC: 19CS10071 (Env :Ubuntu 7.5.0-3ubuntu1~18.04) "
	.section	.note.GNU-stack,"",@progbits
