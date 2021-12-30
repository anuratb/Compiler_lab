//Program to print sum of array
//Tests working of arrays
int printInt(int p__);
int readInt(int * q__);
int printStr(char * ch);

int main(){

    printStr("******Program to print largest non empty subarray sum using Kadanes algorithm*******\n");
    printStr("Enter 10 elements of the array(one by one pressing enter) : ");
    int arr[10];
    int sm = 0;
    int i;
    
    
    
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
}