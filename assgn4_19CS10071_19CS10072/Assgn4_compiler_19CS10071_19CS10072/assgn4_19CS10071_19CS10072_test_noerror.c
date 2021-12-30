

/* Assignment -4 (Parser for tnyC)
 Group Members - Anurat Bhattacharya , Pramit Kumar Chandra
 */

//This is a code to test the bison specs

/* Testing if the nested commments produces a problem.
 //Part of the same comment
 continue
 */


int main()
{
   int x = 2;
   int y;
   y = 7;
   int arr[6] = {2,3,4,5,6,7};
   for(int i = 0;i<6;i++){
       x+=arr[i];
   }
   char str[] = "arf452";
   if(str[2]=='f'){
       y = 5;
   }else{
       y = 6;
   }
   while(y>0){
       y--;
       x++;
   }
   int z = 0;
   do{
       z++;
   }while(z<20);
}
​​​​​​​​
