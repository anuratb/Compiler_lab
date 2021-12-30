//Program to implement bubble sort
//Tests pointers passign pointers to funtions ,flow of control ,nested loops
int printInt(int p__);
int readInt(int * q__);
int printStr(char * ch);
//***************Implementation of bubble sort***************
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    printStr("******Program to implement bubble sort running 2 nested loops*******\n");
    int arr[5];
    printStr("Enter 5 integers pressing enter: ");
    for(int i=0;i<5;i++){
        readInt(arr+i);
    }
    int i,j;
    
    for(i=0;i<5;i++){
       for(j=0;j+1<5;j++){
           if(arr[j]>arr[j+1]){
               swap(arr+j,arr+j+1);
           }
       }
    }
    printStr("Sorted array is: ");
    for(int i=0;i<5;i++){
        printInt(arr[i]);
        printStr(" ");
    }
    printStr("\n");
}