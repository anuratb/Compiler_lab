//Checks read and print functions
int printInt(int p__);
int readInt(int * q__);
int printStr(char * ch);
//Program to print a nXn cross pattern
int main(){
    int n;
    printStr("Enter n: ");
    readInt(&n);
    printStr("Cross pattern of dimension,");
    printInt(n);
    printStr(" X ");
    printInt(n);
    printStr(" is:\n");
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j||i+j==n-1){
                printStr("X ");
            }else{
                printStr(". ");
            }
        }
        printStr("\n");
    }
    
}