//Program to print sum of array
//Tests working of arrays
int printInt(int p__);
int readInt(int * q__);
int printStr(char * ch);

int main(){
    printStr("Enter 10 elements of the array(one by one pressing enter) : ");
    int arr[10];
    int sm = 0;
    int i;
   
    
    printStr("Enter 10 elements of the array pressing enter :\n");
    for(int i=0;i<10;i++){
        readInt(arr+i);
        
    }
    int dp[10];
    int init = arr[0];
    dp[0] = init;
    sm = arr[0];
    for(int i=1;i<10;i++){
        int prev = dp[i-1];
        int curr = arr[i];
       
        if(prev>0){
            
            dp[i] = curr+prev;
        }else{
            dp[i] = curr;
        }
        if(sm<dp[i]){
            sm = dp[i];
        }
        
    }

    printStr("Largest nonempty subarray sum: ");
    printInt(sm);
    printStr("\n");
    //int i=0;
    //arr[0] = 2;
    //i++;
    //printInt(i);
    //printStr(" ");
    //arr[1] = arr[0]+2;    
    //printInt(arr[1]);
    //printStr(" ");
    //i++;
   // printInt(i);
   // printStr(" ");
    
    //arr[2] = arr[1]+2;    
    //printInt(x);
    //printStr(" ");
    //printInt(arr[2]);
    //printStr(" ");
   // i++;
   // printInt(i);
   // printStr(" ");
    //arr[3] = arr[2]+2;    
    //printInt(arr[3]);
    //printStr(" ");
    
    //printStr("\n");
  /*  arr[0] = 0;
    for(i=1;i<10;i++){
        arr[i]  = i;
        int x = i+arr[i];
        printInt(x);
        printStr(" ");
        int y=  arr[i-1];
        printInt(y);
        printStr(" ");
    }
    int x = 6;
    int y = 4;
    x = x%y;
    printInt(x);
    printStr("\n");
}
*/
/*
//biggest NON EMPTY subarray sum usign kadanes algorithm

int main(){
    
    int v;
    int y = 7;

    if((y+v)>0){
        int val = 3;
        printStr("Success\n");
    }
    //printStr("Greatest non emtpy subarray sum : ");
   // printInt(ans);
    //printStr("\n");
}*/
}