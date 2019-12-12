int reverse(int x)
{
    int max = 2147483647, min =-2147483648;
    long result=0;
        while(x!=0)
            {
                result=result*10+x%10;
                x=x/10;
            }
    return result>max||result<min?0:result; 
}

int main() {
	
	  int ret = -123;
	  int ans = reverse(ret);
	  int a = 120;
	  int b = reverse(a);
	  if(ans == -321 && b == 21){
	    return 0;
	  }
	  else{
	    return 1;
  	}
  

}