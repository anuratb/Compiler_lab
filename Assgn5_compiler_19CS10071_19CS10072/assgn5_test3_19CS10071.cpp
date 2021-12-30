//test arrays

int main(){
    int arr[5][6];
    arr[0][0] = 5;
    int x = arr[3][2];
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            int y = arr[i][j] + x;
        }
    }
}