	.file	"triangle_area.c"
	.text
	.section	.rodata
t18:
	.string  "Area of the triangle with coordinates("
t21:
	.string  ","
t24:
	.string  ") ,("
t27:
	.string  ","
t30:
	.string  ") ,("
t33:
	.string  ","
t36:
	.string  ") is : "
t39:
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
	subq $216, %rsp
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
	movl	-16(%rbp), %eax
	movl	-24(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -52(%rbp)
	movl	$0, %eax
	movl	-4(%rbp), %eax
	movl	-52(%rbp), %edx
	imul	%edx
	movl	%eax, -56(%rbp)
	movl	$0, %eax
	movl	-24(%rbp), %eax
	movl	-8(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -60(%rbp)
	movl	$0, %eax
	movl	-12(%rbp), %eax
	movl	-60(%rbp), %edx
	imul	%edx
	movl	%eax, -64(%rbp)
	movl	$0, %eax
	movl	-56(%rbp), %edx
	movl	-64(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -68(%rbp)
	movl	-8(%rbp), %eax
	movl	-16(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -72(%rbp)
	movl	$0, %eax
	movl	-20(%rbp), %eax
	movl	-72(%rbp), %edx
	imul	%edx
	movl	%eax, -76(%rbp)
	movl	$0, %eax
	movl	-68(%rbp), %edx
	movl	-76(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -80(%rbp)
	subq	$4,%rsp
	movl	-80(%rbp),%eax
	movl	%eax,(%rsp)
	subq	$4,%rsp
	call	abs
	movl	4(%rsp),%eax
	movl	%eax, -84(%rbp)
	addq	$8,%rsp
	movl	$2, -88(%rbp)
	movl	-84(%rbp), %eax
	movl	$0,%edx
	idivl	-88(%rbp)
	movl	%eax, -92(%rbp)
	movl	-92(%rbp), %eax
	movl	%eax, -48(%rbp)
	subq	$8,%rsp
	leaq	t18(%rip),%rax
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
	leaq	t21(%rip),%rax
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
	leaq	t24(%rip),%rax
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
	leaq	t27(%rip),%rax
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
	leaq	t30(%rip),%rax
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
	leaq	t33(%rip),%rax
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
	leaq	t36(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	subq	$4,%rsp
	movl	-48(%rbp),%eax
	movl	%eax,(%rsp)
	movl	(%rsp),%edi
	call	printInt
	addq	$4,%rsp
	subq	$8,%rsp
	leaq	t39(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
.LN73:
.FRT_main:
	addq $216, %rsp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
	.ident	"tinyC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
