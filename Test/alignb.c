int genera(int a, int b){
  int c = a + b;
  return c+a;
}


int main() {
    int two = genera(3, -7);
    int six = genera(two, 2);
    char b = 0;
    b += 5;
    b -= two;

    b *= 10;

    b /= two;

    b %= six;


    b = 14;
    b &= 7;

    b |= 8;
    b ^= 3;

    b <<= two;

    b >>= two;
   
    return (13 - b);
  
}