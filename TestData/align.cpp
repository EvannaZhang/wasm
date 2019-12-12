int genera(int a, int b){
  int c = a + b;
  return c+a;
}


int main() {
    int a = genera(4,3);
    int b = genera(a,2)+genera(a,3)-genera(20, 9);
    int ans = genera(5, 3);
    a = a + b;
    a += 5;
    a -= 2;

    a *= 10;
  
    a /= 2;
 
    a %= 6;
  

    a = 14;
    a &= 7;
   
    a |= 8;
    
    a ^= 3;
    
    a <<= 2;
  
    a >>= 2;
    return (ans - a);

  
}