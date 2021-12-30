//Tests working of modulus and recursiv functions
int printInt(int p__);
int readInt(int * q__);
int printStr(char * ch);

int gcd(int x,int y){
    
   
    if(y==0){
        return x;
    }
    int v = x%y;
    if(v==0){
        return y;
    }
    return gcd(y,v);
}
int main(){
    int x,y;
    printStr("Enter x: ");
    readInt(&x);
    printStr("Enter y: ");
    readInt(&y);
    printStr("Gcd of x and y is: ");
    printInt(gcd(x,y));
    printStr("\n");
}