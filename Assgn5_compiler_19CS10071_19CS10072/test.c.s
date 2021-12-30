	.file	"test.c"
	.text
	.section	.rodata
t0:
	.string  "Enter 10 elements of the array(one by one pressing enter) : "
t4:
	.string  "Enter 10 elements of the array pressing enter :\n"
t49:
	.string  "Largest nonempty subarray sum: "
t52:
	.string  "\n"
	.text
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
	subq $340, %rsp
	subq	$8,%rsp
	leaq	t0(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	movl	$10, -56(%rbp)
	movl	$0, -64(%rbp)
	movl	-64(%rbp), %eax
	movl	%eax, -60(%rbp)
	subq	$8,%rsp
	leaq	t4(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	movl	$0, -204(%rbp)
	movl	-204(%rbp), %eax
	movl	%eax, -68(%rbp)
.LN15:
	movl	$10, -208(%rbp)
	movl	-208(%rbp), %eax
	cmp	%eax,-68(%rbp)
	jl	.LN21
	jmp	.LN28
.LN18:
	movl	-68(%rbp), %eax
	movl	%eax, -212(%rbp)
	movl	-68(%rbp), %eax
	inc     %eax
	movl	%eax, -68(%rbp)
	jmp	.LN15
.LN21:
	movl	$0, -216(%rbp)
	movl	-216(%rbp), %eax
	cltq
	leaq	-52(%rbp,%rax), %rdx
	movq	%rdx, -224(%rbp)
	movl	-68(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -228(%rbp)
	movl	$0, %eax
	movl	-228(%rbp), %eax
	cltq
	addq	-224(%rbp), %rax
	movq	%rax, -236(%rbp)
	subq	$8,%rsp
	movq	-236(%rbp),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	readInt
	addq	$8,%rsp
	jmp	.LN18
.LN28:
	movl	$10, -124(%rbp)
	movl	$0, -132(%rbp)
	movl	$0, -136(%rbp)
	movl	-136(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -140(%rbp)
	movl	$0, %eax
	movl	-140(%rbp), %eax
	cltq
	movl	-52(%rbp,%rax) , %edx
	movl	%edx, -144(%rbp)
	movl	-144(%rbp), %eax
	movl	%eax, -128(%rbp)
	movl	$0, -148(%rbp)
	movl	$0, -152(%rbp)
	movl	-152(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -156(%rbp)
	movl	$0, %eax
	movl	-156(%rbp), %eax
	cltq
	movl	 -128(%rbp),%edx
	movl	%edx,-120(%rbp,%rax)
	movl	$0, -160(%rbp)
	movl	$0, -164(%rbp)
	movl	-164(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -168(%rbp)
	movl	$0, %eax
	movl	-168(%rbp), %eax
	cltq
	movl	-52(%rbp,%rax) , %edx
	movl	%edx, -172(%rbp)
	movl	-172(%rbp), %eax
	movl	%eax, -60(%rbp)
	movl	$1, -244(%rbp)
	movl	-244(%rbp), %eax
	movl	%eax, -68(%rbp)
.LN45:
	movl	$10, -248(%rbp)
	movl	-248(%rbp), %eax
	cmp	%eax,-68(%rbp)
	jl	.LN51
	jmp	.LN82
.LN48:
	movl	-68(%rbp), %eax
	movl	%eax, -252(%rbp)
	movl	-68(%rbp), %eax
	inc     %eax
	movl	%eax, -68(%rbp)
	jmp	.LN45
.LN51:
	movl	$0, -260(%rbp)
	movl	$1, -264(%rbp)
	movl	-68(%rbp), %eax
	movl	-264(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -268(%rbp)
	movl	$0, %eax
	movl	-268(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -272(%rbp)
	movl	$0, %eax
	movl	-272(%rbp), %eax
	cltq
	movl	-120(%rbp,%rax) , %edx
	movl	%edx, -276(%rbp)
	movl	-276(%rbp), %eax
	movl	%eax, -256(%rbp)
	movl	$0, -284(%rbp)
	movl	-68(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -288(%rbp)
	movl	$0, %eax
	movl	-288(%rbp), %eax
	cltq
	movl	-52(%rbp,%rax) , %edx
	movl	%edx, -292(%rbp)
	movl	-292(%rbp), %eax
	movl	%eax, -280(%rbp)
	movl	$0, -296(%rbp)
	movl	-296(%rbp), %eax
	cmp	%eax,-256(%rbp)
	jg	.LN64
	jmp	.LN69
.LN64:
	movl	$0, -312(%rbp)
	movl	-68(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -316(%rbp)
	movl	$0, %eax
	movl	-280(%rbp), %edx
	movl	-256(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -320(%rbp)
	movl	-316(%rbp), %eax
	cltq
	movl	 -320(%rbp),%edx
	movl	%edx,-120(%rbp,%rax)
	jmp	.LN72
.LN69:
	movl	$0, -324(%rbp)
	movl	-68(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -328(%rbp)
	movl	$0, %eax
	movl	-328(%rbp), %eax
	cltq
	movl	 -280(%rbp),%edx
	movl	%edx,-120(%rbp,%rax)
.LN72:
	movl	$0, -300(%rbp)
	movl	-68(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -304(%rbp)
	movl	$0, %eax
	movl	-304(%rbp), %eax
	cltq
	movl	-120(%rbp,%rax) , %edx
	movl	%edx, -308(%rbp)
	movl	-308(%rbp), %eax
	cmp	%eax,-60(%rbp)
	jl	.LN77
	jmp	.LN48
.LN77:
	movl	$0, -332(%rbp)
	movl	-68(%rbp), %eax
	shl	$2,%eax
	movl	%eax, -336(%rbp)
	movl	$0, %eax
	movl	-336(%rbp), %eax
	cltq
	movl	-120(%rbp,%rax) , %edx
	movl	%edx, -340(%rbp)
	movl	-340(%rbp), %eax
	movl	%eax, -60(%rbp)
	jmp	.LN48
.LN82:
	subq	$8,%rsp
	leaq	t49(%rip),%rax
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
	leaq	t52(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
.LN90:
.FRT_main:
	addq $340, %rsp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
	.ident	"tinyC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
