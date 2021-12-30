int printInt(int p__);
int readInt(int * q__);
//int readInt(int * q__);
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int main(){
   int arr[10];
   
   for(int i=0;i<10;i++){
       readInt(arr+i);
   }
   swap(arr,arr+1);
   for(int i=0;i<10;i++){
       printInt(arr[i]);
   }
   
   
}
