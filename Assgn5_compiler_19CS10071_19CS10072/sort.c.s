	.file	"sort.c"
	.text
	.section	.rodata
t5:
	.string  "Enter 5 integers pressing enter: "
t42:
	.string  "Sorted array is: "
t53:
	.string  "\n"
t51:
	.string  " "
	.text
	.globl swap
	.type swap, @function
swap:
.LFB_swap:
	.cfi_startproc
	push %rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq %rsp,%rbp
	.cfi_def_cfa_register 5
	subq $20, %rsp
	movq	24(%rbp), %rax
	movl	(%rax),%edx
	movl	%edx, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	movq	24(%rbp), %rax
	movl	(%rax),%edx
	movl	%edx, -12(%rbp)
	movq	16(%rbp), %rax
	movl	(%rax),%edx
	movl	%edx, -16(%rbp)
	movl	-16(%rbp), %eax
	movq	24(%rbp), %rdx
	movl	%eax,(%rdx)
	movq	16(%rbp), %rax
	movl	(%rax),%edx
	movl	%edx, -20(%rbp)
	movl	-4(%rbp), %eax
	movq	16(%rbp), %rdx
	movl	%eax,(%rdx)
.FRT_swap:
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
	subq $280, %rsp
	movl	$5, -24(%rbp)
	subq	$8,%rsp
	leaq	t5(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	movl	$0, -76(%rbp)
	movl	-76(%rbp), %eax
	movl	%eax, -40(%rbp)
.LN18:
	movl	$5, -80(%rbp)
	movl	-80(%rbp), %eax
	cmp	%eax,-40(%rbp)
	jl	.LN24
	jmp	.LN31
.LN21:
	movl	-40(%rbp), %eax
	movl	%eax, -84(%rbp)
	movl	-40(%rbp), %eax
	inc     %eax
	movl	%eax, -40(%rbp)
	jmp	.LN18
.LN24:
	movl	$0, -88(%rbp)
	movl	-88(%rbp), %eax
	cltq
	leaq	-20(%rbp,%rax), %rdx
	movq	%rdx, -96(%rbp)
	movl	-40(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -100(%rbp)
	movl	$0, %eax
	movl	-100(%rbp), %eax
	cltq
	addq	-96(%rbp), %rax
	movq	%rax, -108(%rbp)
	subq	$8,%rsp
	movq	-108(%rbp),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	readInt
	addq	$8,%rsp
	jmp	.LN21
.LN31:
	movl	$0, -116(%rbp)
	movl	-116(%rbp), %eax
	movl	%eax, -40(%rbp)
.LN33:
	movl	$5, -120(%rbp)
	movl	-120(%rbp), %eax
	cmp	%eax,-40(%rbp)
	jl	.LN39
	jmp	.LN75
.LN36:
	movl	-40(%rbp), %eax
	movl	%eax, -124(%rbp)
	movl	-40(%rbp), %eax
	inc     %eax
	movl	%eax, -40(%rbp)
	jmp	.LN33
.LN39:
	movl	$0, -128(%rbp)
	movl	-128(%rbp), %eax
	movl	%eax, -44(%rbp)
.LN41:
	movl	$1, -132(%rbp)
	movl	-44(%rbp), %edx
	movl	-132(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -136(%rbp)
	movl	$5, -140(%rbp)
	movl	-140(%rbp), %eax
	cmp	%eax,-136(%rbp)
	jl	.LN49
	jmp	.LN36
.LN46:
	movl	-44(%rbp), %eax
	movl	%eax, -144(%rbp)
	movl	-44(%rbp), %eax
	inc     %eax
	movl	%eax, -44(%rbp)
	jmp	.LN41
.LN49:
	movl	$0, -148(%rbp)
	movl	-44(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -152(%rbp)
	movl	$0, %eax
	movl	-152(%rbp), %eax
	cltq
	movl	-20(%rbp,%rax) , %edx
	movl	%edx, -156(%rbp)
	movl	$0, -160(%rbp)
	movl	$1, -164(%rbp)
	movl	-44(%rbp), %edx
	movl	-164(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -168(%rbp)
	movl	-168(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -172(%rbp)
	movl	$0, %eax
	movl	-172(%rbp), %eax
	cltq
	movl	-20(%rbp,%rax) , %edx
	movl	%edx, -176(%rbp)
	movl	-176(%rbp), %eax
	cmp	%eax,-156(%rbp)
	jg	.LN59
	jmp	.LN46
.LN59:
	movl	$0, -180(%rbp)
	movl	-180(%rbp), %eax
	cltq
	leaq	-20(%rbp,%rax), %rdx
	movq	%rdx, -188(%rbp)
	movl	-44(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -192(%rbp)
	movl	$0, %eax
	movl	-192(%rbp), %eax
	cltq
	addq	-188(%rbp), %rax
	movq	%rax, -200(%rbp)
	subq	$8,%rsp
	movq	-200(%rbp),%rax
	movq	%rax,(%rsp)
	movl	$0, -204(%rbp)
	movl	-204(%rbp), %eax
	cltq
	leaq	-20(%rbp,%rax), %rdx
	movq	%rdx, -212(%rbp)
	movl	-44(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -216(%rbp)
	movl	$0, %eax
	movl	-216(%rbp), %eax
	cltq
	addq	-212(%rbp), %rax
	movq	%rax, -224(%rbp)
	movl	$1, -228(%rbp)
	movl	-228(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -232(%rbp)
	movl	$0, %eax
	movl	-232(%rbp), %eax
	cltq
	addq	-224(%rbp), %rax
	movq	%rax, -240(%rbp)
	subq	$8,%rsp
	movq	-240(%rbp),%rax
	movq	%rax,(%rsp)
	call	swap
	addq	$16,%rsp
	jmp	.LN46
	jmp	.LN36
.LN75:
	subq	$8,%rsp
	leaq	t42(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	movl	$0, -244(%rbp)
	movl	-244(%rbp), %eax
	movl	%eax, -40(%rbp)
.LN80:
	movl	$5, -248(%rbp)
	movl	-248(%rbp), %eax
	cmp	%eax,-40(%rbp)
	jl	.LN86
	jmp	.LN95
.LN83:
	movl	-40(%rbp), %eax
	movl	%eax, -252(%rbp)
	movl	-40(%rbp), %eax
	inc     %eax
	movl	%eax, -40(%rbp)
	jmp	.LN80
.LN86:
	movl	$0, -256(%rbp)
	movl	-40(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -260(%rbp)
	movl	$0, %eax
	movl	-260(%rbp), %eax
	cltq
	movl	-20(%rbp,%rax) , %edx
	movl	%edx, -264(%rbp)
	subq	$4,%rsp
	movl	-264(%rbp),%eax
	movl	%eax,(%rsp)
	movl	(%rsp),%edi
	call	printInt
	addq	$4,%rsp
	subq	$8,%rsp
	leaq	t51(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	jmp	.LN83
.LN95:
	subq	$8,%rsp
	leaq	t53(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
.LN98:
.FRT_main:
	addq $280, %rsp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
	.ident	"tinyC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
