	.file	"assgn6_19CS10071_19CS10072_test5.c"
	.text
	.section	.rodata
t7:
	.string  "******Program to print area of triangle from coordinates tests arithmetic expressions*******\n"
t20:
	.string  "Area of the triangle with coordinates("
t23:
	.string  ","
t26:
	.string  ") ,("
t29:
	.string  ","
t32:
	.string  ") ,("
t35:
	.string  ","
t38:
	.string  ") is : "
t41:
	.string  "\n"
	.text
	.globl abs
	.type abs, @function
abs:
.LFB_abs:
	.cfi_startproc
	push %rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq %rsp,%rbp
	.cfi_def_cfa_register 5
	subq $8, %rsp
	movl	$0, -4(%rbp)
	movl	-4(%rbp), %eax
	cmp	%eax,20(%rbp)
	jl	.LN7
	jmp	.LN9
.LN7:
	movl	20(%rbp), %eax
	neg	%eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, 20(%rbp)
.LN9:
	movl	20(%rbp), %eax
	movl	%eax,20(%rbp)
	jmp	.FRT_abs
.FRT_abs:
	addq $8, %rsp
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
	subq $228, %rsp
	movl	$0, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	$2, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	$0, -36(%rbp)
	movl	-36(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$0, -40(%rbp)
	movl	-40(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	$2, -44(%rbp)
	movl	-44(%rbp), %eax
	movl	%eax, -24(%rbp)
	subq	$8,%rsp
	leaq	t7(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	movl	-16(%rbp), %eax
	movl	-24(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -64(%rbp)
	movl	$0, %eax
	movl	-4(%rbp), %eax
	movl	-64(%rbp), %edx
	imul	%edx
	movl	%eax, -68(%rbp)
	movl	$0, %eax
	movl	-24(%rbp), %eax
	movl	-8(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -72(%rbp)
	movl	$0, %eax
	movl	-12(%rbp), %eax
	movl	-72(%rbp), %edx
	imul	%edx
	movl	%eax, -76(%rbp)
	movl	$0, %eax
	movl	-68(%rbp), %edx
	movl	-76(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -80(%rbp)
	movl	-8(%rbp), %eax
	movl	-16(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -84(%rbp)
	movl	$0, %eax
	movl	-20(%rbp), %eax
	movl	-84(%rbp), %edx
	imul	%edx
	movl	%eax, -88(%rbp)
	movl	$0, %eax
	movl	-80(%rbp), %edx
	movl	-88(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -92(%rbp)
	subq	$4,%rsp
	movl	-92(%rbp),%eax
	movl	%eax,(%rsp)
	subq	$4,%rsp
	call	abs
	movl	4(%rsp),%eax
	movl	%eax, -96(%rbp)
	addq	$8,%rsp
	movl	$2, -100(%rbp)
	movl	-96(%rbp), %eax
	movl	$0,%edx
	idivl	-100(%rbp)
	movl	%eax, -104(%rbp)
	movl	-104(%rbp), %eax
	movl	%eax, -60(%rbp)
	subq	$8,%rsp
	leaq	t20(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	subq	$4,%rsp
	movl	-4(%rbp),%eax
	movl	%eax,(%rsp)
	movl	(%rsp),%edi
	call	printInt
	addq	$4,%rsp
	subq	$8,%rsp
	leaq	t23(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	subq	$4,%rsp
	movl	-8(%rbp),%eax
	movl	%eax,(%rsp)
	movl	(%rsp),%edi
	call	printInt
	addq	$4,%rsp
	subq	$8,%rsp
	leaq	t26(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	subq	$4,%rsp
	movl	-12(%rbp),%eax
	movl	%eax,(%rsp)
	movl	(%rsp),%edi
	call	printInt
	addq	$4,%rsp
	subq	$8,%rsp
	leaq	t29(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	subq	$4,%rsp
	movl	-16(%rbp),%eax
	movl	%eax,(%rsp)
	movl	(%rsp),%edi
	call	printInt
	addq	$4,%rsp
	subq	$8,%rsp
	leaq	t32(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	subq	$4,%rsp
	movl	-20(%rbp),%eax
	movl	%eax,(%rsp)
	movl	(%rsp),%edi
	call	printInt
	addq	$4,%rsp
	subq	$8,%rsp
	leaq	t35(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	subq	$4,%rsp
	movl	-24(%rbp),%eax
	movl	%eax,(%rsp)
	movl	(%rsp),%edi
	call	printInt
	addq	$4,%rsp
	subq	$8,%rsp
	leaq	t38(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	subq	$4,%rsp
	movl	-60(%rbp),%eax
	movl	%eax,(%rsp)
	movl	(%rsp),%edi
	call	printInt
	addq	$4,%rsp
	subq	$8,%rsp
	leaq	t41(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
.LN76:
.FRT_main:
	addq $228, %rsp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
	.ident	"tinyC: 19CS10071 (Env :Ubuntu 7.5.0-3ubuntu1~18.04) "
	.section	.note.GNU-stack,"",@progbits
