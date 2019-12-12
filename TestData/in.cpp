int recurbinary(int *a, int b)
{
    for(int i = 0; i<10; i++){
      if(b == a[i]){
        return 0;
      }
    }
    return 1;
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,12,13,45};

    if(recurbinary(a,1)==0 && recurbinary(a, 6) == 0){
      return 0;
    }
    else{
      return 1;
    }
   

}