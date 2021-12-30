	.file	"assgn6_19CS10071_19CS10072_test7.c"
	.text
	.section	.rodata
t0:
	.string  "Program to print nXn cros pattern tsts nested loops if else and library functions\n"
t2:
	.string  "Enter n: "
t6:
	.string  "Cross pattern of dimension,"
t9:
	.string  " X "
t12:
	.string  " is:\n"
t25:
	.string  "\n"
t21:
	.string  "X "
t23:
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
	subq $156, %rsp
	subq	$8,%rsp
	leaq	t0(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	subq	$8,%rsp
	leaq	t2(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	leaq	-4(%rbp), %rax
	movq	%rax, -36(%rbp)
	subq	$8,%rsp
	movq	-36(%rbp),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	readInt
	addq	$8,%rsp
	subq	$8,%rsp
	leaq	t6(%rip),%rax
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
	leaq	t9(%rip),%rax
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
	leaq	t12(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	movl	$0, -96(%rbp)
	movl	-96(%rbp), %eax
	movl	%eax, -88(%rbp)
.LN28:
	movl	-4(%rbp), %eax
	cmp	%eax,-88(%rbp)
	jl	.LN33
	jmp	.LN59
.LN30:
	movl	-88(%rbp), %eax
	movl	%eax, -100(%rbp)
	movl	-88(%rbp), %eax
	inc     %eax
	movl	%eax, -88(%rbp)
	jmp	.LN28
.LN33:
	movl	$0, -116(%rbp)
	movl	-116(%rbp), %eax
	movl	%eax, -92(%rbp)
.LN35:
	movl	-4(%rbp), %eax
	cmp	%eax,-92(%rbp)
	jl	.LN40
	jmp	.LN55
.LN37:
	movl	-92(%rbp), %eax
	movl	%eax, -120(%rbp)
	movl	-92(%rbp), %eax
	inc     %eax
	movl	%eax, -92(%rbp)
	jmp	.LN35
.LN40:
	movl	-92(%rbp), %eax
	cmp	%eax,-88(%rbp)
	je	.LN47
	jmp	.LN42
.LN42:
	movl	-88(%rbp), %edx
	movl	-92(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -124(%rbp)
	movl	$1, -128(%rbp)
	movl	-4(%rbp), %eax
	movl	-128(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -132(%rbp)
	movl	$0, %eax
	movl	-132(%rbp), %eax
	cmp	%eax,-124(%rbp)
	je	.LN47
	jmp	.LN51
.LN47:
	subq	$8,%rsp
	leaq	t21(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	jmp	.LN37
.LN51:
	subq	$8,%rsp
	leaq	t23(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	jmp	.LN37
.LN55:
	subq	$8,%rsp
	leaq	t25(%rip),%rax
	movq	%rax,(%rsp)
	movq	(%rsp),%rdi
	call	printStr
	addq	$8,%rsp
	jmp	.LN30
.LN59:
.FRT_main:
	addq $156, %rsp
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
	.size	main, .-main
	.ident	"tinyC: 19CS10071 (Env :Ubuntu 7.5.0-3ubuntu1~18.04) "
	.section	.note.GNU-stack,"",@progbits
