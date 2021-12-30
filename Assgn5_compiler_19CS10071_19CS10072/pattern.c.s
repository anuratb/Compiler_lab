	.file	"pattern.c"
	.text
	.section	.rodata
t0:
	.string  "Enter n: "
t4:
	.string  "Cross pattern of dimension,"
t7:
	.string  " X "
t10:
	.string  " is:\n"
t23:
	.string  "\n"
t19:
	.string  "X "
t21:
	.string  ". "
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
	subq $144, %rsp
	subq	$8,%rsp
	leaq	t0(%rip),%rax
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
	leaq	t4(%rip),%rax
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
	leaq	t7(%rip),%rax
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
	leaq	t10(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	movl	$0, -84(%rbp)
	movl	-84(%rbp), %eax
	movl	%eax, -76(%rbp)
.LN25:
	movl	-4(%rbp), %eax
	cmp	%eax,-76(%rbp)
	jl	.LN30
	jmp	.LN56
.LN27:
	movl	-76(%rbp), %eax
	movl	%eax, -88(%rbp)
	movl	-76(%rbp), %eax
	inc     %eax
	movl	%eax, -76(%rbp)
	jmp	.LN25
.LN30:
	movl	$0, -104(%rbp)
	movl	-104(%rbp), %eax
	movl	%eax, -80(%rbp)
.LN32:
	movl	-4(%rbp), %eax
	cmp	%eax,-80(%rbp)
	jl	.LN37
	jmp	.LN52
.LN34:
	movl	-80(%rbp), %eax
	movl	%eax, -108(%rbp)
	movl	-80(%rbp), %eax
	inc     %eax
	movl	%eax, -80(%rbp)
	jmp	.LN32
.LN37:
	movl	-80(%rbp), %eax
	cmp	%eax,-76(%rbp)
	je	.LN44
	jmp	.LN39
.LN39:
	movl	-76(%rbp), %edx
	movl	-80(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -112(%rbp)
	movl	$1, -116(%rbp)
	movl	-4(%rbp), %eax
	movl	-116(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -120(%rbp)
	movl	$0, %eax
	movl	-120(%rbp), %eax
	cmp	%eax,-112(%rbp)
	je	.LN44
	jmp	.LN48
.LN44:
	subq	$8,%rsp
	leaq	t19(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	jmp	.LN34
.LN48:
	subq	$8,%rsp
	leaq	t21(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	jmp	.LN34
.LN52:
	subq	$8,%rsp
	leaq	t23(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	jmp	.LN27
.LN56:
.FRT_main:
	addq $144, %rsp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
	.ident	"tinyC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
