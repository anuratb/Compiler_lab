	.file	"assgn6_19CS10071_19CS10072_test4.c"
	.text
	.section	.rodata
t4:
	.string  "******Program to implement bubble sort running 2 nested loops*******\n"
t7:
	.string  "Enter 5 integers pressing enter: "
t44:
	.string  "Sorted array is: "
t55:
	.string  "\n"
t53:
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
	subq $292, %rsp
	subq	$8,%rsp
	leaq	t4(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	movl	$5, -36(%rbp)
	subq	$8,%rsp
	leaq	t7(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	movl	$0, -88(%rbp)
	movl	-88(%rbp), %eax
	movl	%eax, -52(%rbp)
.LN21:
	movl	$5, -92(%rbp)
	movl	-92(%rbp), %eax
	cmp	%eax,-52(%rbp)
	jl	.LN27
	jmp	.LN34
.LN24:
	movl	-52(%rbp), %eax
	movl	%eax, -96(%rbp)
	movl	-52(%rbp), %eax
	inc     %eax
	movl	%eax, -52(%rbp)
	jmp	.LN21
.LN27:
	movl	$0, -100(%rbp)
	movl	-100(%rbp), %eax
	cltq
	leaq	-32(%rbp,%rax), %rdx
	movq	%rdx, -108(%rbp)
	movl	-52(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -112(%rbp)
	movl	$0, %eax
	movl	-112(%rbp), %eax
	cltq
	addq	-108(%rbp), %rax
	movq	%rax, -120(%rbp)
	subq	$8,%rsp
	movq	-120(%rbp),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	readInt
	addq	$8,%rsp
	jmp	.LN24
.LN34:
	movl	$0, -128(%rbp)
	movl	-128(%rbp), %eax
	movl	%eax, -52(%rbp)
.LN36:
	movl	$5, -132(%rbp)
	movl	-132(%rbp), %eax
	cmp	%eax,-52(%rbp)
	jl	.LN42
	jmp	.LN78
.LN39:
	movl	-52(%rbp), %eax
	movl	%eax, -136(%rbp)
	movl	-52(%rbp), %eax
	inc     %eax
	movl	%eax, -52(%rbp)
	jmp	.LN36
.LN42:
	movl	$0, -140(%rbp)
	movl	-140(%rbp), %eax
	movl	%eax, -56(%rbp)
.LN44:
	movl	$1, -144(%rbp)
	movl	-56(%rbp), %edx
	movl	-144(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -148(%rbp)
	movl	$5, -152(%rbp)
	movl	-152(%rbp), %eax
	cmp	%eax,-148(%rbp)
	jl	.LN52
	jmp	.LN39
.LN49:
	movl	-56(%rbp), %eax
	movl	%eax, -156(%rbp)
	movl	-56(%rbp), %eax
	inc     %eax
	movl	%eax, -56(%rbp)
	jmp	.LN44
.LN52:
	movl	$0, -160(%rbp)
	movl	-56(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -164(%rbp)
	movl	$0, %eax
	movl	-164(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax) , %edx
	movl	%edx, -168(%rbp)
	movl	$0, -172(%rbp)
	movl	$1, -176(%rbp)
	movl	-56(%rbp), %edx
	movl	-176(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -180(%rbp)
	movl	-180(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -184(%rbp)
	movl	$0, %eax
	movl	-184(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax) , %edx
	movl	%edx, -188(%rbp)
	movl	-188(%rbp), %eax
	cmp	%eax,-168(%rbp)
	jg	.LN62
	jmp	.LN49
.LN62:
	movl	$0, -192(%rbp)
	movl	-192(%rbp), %eax
	cltq
	leaq	-32(%rbp,%rax), %rdx
	movq	%rdx, -200(%rbp)
	movl	-56(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -204(%rbp)
	movl	$0, %eax
	movl	-204(%rbp), %eax
	cltq
	addq	-200(%rbp), %rax
	movq	%rax, -212(%rbp)
	subq	$8,%rsp
	movq	-212(%rbp),%rax
	movq	%rax,(%rsp)
	movl	$0, -216(%rbp)
	movl	-216(%rbp), %eax
	cltq
	leaq	-32(%rbp,%rax), %rdx
	movq	%rdx, -224(%rbp)
	movl	-56(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -228(%rbp)
	movl	$0, %eax
	movl	-228(%rbp), %eax
	cltq
	addq	-224(%rbp), %rax
	movq	%rax, -236(%rbp)
	movl	$1, -240(%rbp)
	movl	-240(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -244(%rbp)
	movl	$0, %eax
	movl	-244(%rbp), %eax
	cltq
	addq	-236(%rbp), %rax
	movq	%rax, -252(%rbp)
	subq	$8,%rsp
	movq	-252(%rbp),%rax
	movq	%rax,(%rsp)
	call	swap
	addq	$16,%rsp
	jmp	.LN49
	jmp	.LN39
.LN78:
	subq	$8,%rsp
	leaq	t44(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	movl	$0, -256(%rbp)
	movl	-256(%rbp), %eax
	movl	%eax, -52(%rbp)
.LN83:
	movl	$5, -260(%rbp)
	movl	-260(%rbp), %eax
	cmp	%eax,-52(%rbp)
	jl	.LN89
	jmp	.LN98
.LN86:
	movl	-52(%rbp), %eax
	movl	%eax, -264(%rbp)
	movl	-52(%rbp), %eax
	inc     %eax
	movl	%eax, -52(%rbp)
	jmp	.LN83
.LN89:
	movl	$0, -268(%rbp)
	movl	-52(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -272(%rbp)
	movl	$0, %eax
	movl	-272(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax) , %edx
	movl	%edx, -276(%rbp)
	subq	$4,%rsp
	movl	-276(%rbp),%eax
	movl	%eax,(%rsp)
	movl	(%rsp),%edi
	call	printInt
	addq	$4,%rsp
	subq	$8,%rsp
	leaq	t53(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	jmp	.LN86
.LN98:
	subq	$8,%rsp
	leaq	t55(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
.LN101:
.FRT_main:
	addq $292, %rsp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
	.ident	"tinyC: 19CS10071 (Env :Ubuntu 7.5.0-3ubuntu1~18.04) "
	.section	.note.GNU-stack,"",@progbits
