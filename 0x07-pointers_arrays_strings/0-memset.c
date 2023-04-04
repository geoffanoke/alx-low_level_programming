char *_memset(char *s, char b, unsigned int n) 
{ 
/* fill a block of memory with a specific value 
s: starting address of memory to be filled 
 b: the desired value 
 n: number of bytes to be changed 
returns: changed array with new value for n bytes */


 for (int i = 0; n > 0; n--)
{ 
s[i] = b; 
n--; 
i++;
} 


return (s); 
}
