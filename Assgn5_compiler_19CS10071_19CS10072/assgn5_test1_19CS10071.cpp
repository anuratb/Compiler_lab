

/* Assignment -4 (Parser for tnyC)
 Group Members - Anurat Bhattacharya , Pramit Kumar Chandra
 */

//This is a code to test the bison specs

/* Testing if the nested commments produces a problem.
 //Part of the same comment
 continue
 */
//Test loops

int main()
{
   int x = 2;
   int y;
   y = 7;
   
   for(int i = 0;i<6;i++){
       x=x*12;
   }
   
   while(y>0){
       y--;
       x++;
   }
    do{
        int z = x+y;
    }while(x<y);
   
}
​​​​​​​​
