//biggest NON EMPTY subarray sum usign kadanes algorithm
int printStr(char *);
int printInt(int);
int readInt(int *);
int main(){
    
    int arr[10];
    //take input
    printStr("Enter 10 elements of the array pressing enter\n");
    for(int i=0;i<10;i++){
        readInt(arr+i);
    }
    int dp[10];//dp[i] stores max subarray sum ending at i
    dp[0] = arr[0];
    int ans = arr[0];
    for(int i=1;i<10;i++){
        if(dp[i-1]+arr[i]>arr[i]){
            dp[i] = dp[i-1]+arr[i];
        }else{
            dp[i] = arr[i];
        }
        if(ans<dp[i]){
            ans = dp[i];
        }
    }
    printStr("Greatest non emtpy subarray sum : ");
    printInt(ans);
    printStr("\n");
}