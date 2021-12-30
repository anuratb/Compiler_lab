//program to find hypotnuse square of right triangle
int hypoSqr(int base,int ht){
    return base*base+ht*ht;
}
int main(){
    int b,h;
    b = 7;
    h = 9;
    int ans = hypoSqr(b,h);
}