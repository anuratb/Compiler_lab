#include "myl.h"

#define SZ 33
#define PRECISION 1000000
#define PRECLNG 6

//Helper function to calculate absoulute


//Helper function to get string equivalent of int
int toString(int x, char buff[], int *length, int beg)
{
    char zero = '0';
    int ind = beg;
    if (x == 0)
    {
        buff[ind++] = zero;
        buff[ind] = '\0';
        *length = ind + 1;
        return 1;
    }
    else
    {
        if (x < 0)//if negative
        {
            buff[ind++] = '-';
            x = -x;
        }
        int temp = 1;
        while ((temp * 10) <= x)
            temp *= 10;
        while (temp > 0)
        {
            buff[ind++] = ('0' + (x / temp) % 10);
            temp /= 10;
        }
        buff[ind] = '\0';
        *length = ind + 1;
        return 1;
    }
    return 0;
    
}
/***************START OF WRITE FUNCTIONS******************/
int printInt(int x)
{
    char buff[SZ];
    char zero = '0';
    int ind = 0;
    int bytes = ERR;
    int chk =toString(x, buff, &bytes,0);//call helper funtion to convert int to string
    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        : "S"(buff), "d"(bytes));
    if(chk&&bytes>0) return bytes;
    else    return ERR;
}

int printStr(char *str)//for printing string
{

    int ind = 0;
    int lng = 0;
    //find length of the string
    while (str[lng] != '\0')        
    {
        lng++;
    }
    lng++;
    char buff[lng];
    //copy string to buff
    while (str[ind] != '\0')
    {
        buff[ind] = str[ind];
        ind++;
    }

    buff[ind] = '\0';

    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        : "S"(buff), "d"(lng));
    if(lng>0)   return lng;
    else    return ERR;
}

/**************START OF READ FUNCTIONS*************/

int readInt(int *x)//readint function
{

    char buff[SZ]; // declare the temp_buff array
    int bytes;
    asm(
        "movl $0, %%eax;"
        "movq $0, %%rdi;"
        "syscall;"
        : "=a"(bytes)
        : "S"(buff), "d"(SZ));
    if(bytes>10)    return ERR;//overflow return error
    buff[bytes-1] = '\0';    
    int ind = 0;
    int val = 0;
    int sgn = 0;
    if(buff[ind]=='-')
    {
        sgn = 1;
        ind++;
    }
    else if(buff[ind]=='+') ind++;
    while (ind <=(bytes-2))
    {
        if(buff[ind]>'9'||buff[ind]<'0')
        {
            return ERR;
        }
        int oldVal = val;
        val += (buff[ind] - '0');
        if (ind < bytes-2)   val *= 10;
        if(val<oldVal)  return ERR;//overflow return error
        ind++;
    }
    if(sgn) val = -val;
    *x = val;
    return OK;
}




