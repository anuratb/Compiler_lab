
int printInt(int p__);
int readInt(int * q__);
int printStr(char * ch);
int y = 7;
int sum(int a1,int a2){
    return a1+a2;
}
//Tests calling of functions and library funcctions and handling of globals
int main(){
    printStr("******Program to print sum of 2 numbers one taken as input and other set globally as 7,tests handling of globals*******\n");
    int x;
    printStr("Enter x: ");
    readInt(&x);
    int sm = sum(x,y);
    printStr("Summ of x and y,globally declared as 7 : ");
    printInt(sm);
    printStr("\n");
    return 0;
}
