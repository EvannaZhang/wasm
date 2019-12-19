int func(int a, int b){
  int temp = a - b;
  return temp;
}

int main() {
    int f = func(10,4);
    int k = func(4,223);
    int first = func(f, k);
    
    if(first != 6-4+223){
      return func(f,k);
    }
    
    return 0;
    
}