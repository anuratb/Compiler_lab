
//Tests arithmetic expressions
int printInt(int p__);
int readInt(int * q__);
int printStr(char * ch);
int abs(int x){
    if(x<0) {
        x = -x;
    }
    return x;
}
int main(){
    int x1,y1,x2,y2,x3,y3;//(xi,yi) are the coordinates of the tangle vertices
    x1 = y1 = 0;
    x2 = 2;
    y2 = 0;
    x3 = 0;
    y3 = 2;
    int area = abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
    printStr("Area of the triangle with coordinates(");
    printInt(x1);
    printStr(",");
    printInt(y1);
    printStr(") ,(");
    printInt(x2);
    printStr(",");
    printInt(y2);
    printStr(") ,(");
    printInt(x3);
    printStr(",");
    printInt(y3);
    printStr(") is : ");
    printInt(area);
    printStr("\n");
}