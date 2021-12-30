//Program to print fibonacci sequence
//Tests the working of recursive functions
int printInt(int p__);
int readInt(int * q__);
int printStr(char * ch);

int fibo(int n){
    
    if(n<=1)    return n;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int x;
    printStr("Enter x: ");
    readInt(&x);
    printStr("Fibo(x) is: ");
    printInt(fibo(x));
    printStr("\n");
}