
int add(int m1, int m2, int m3){
    return m1+m2+m3;
}

int minus(int q1, int q2, int q3){
    return q1-q2-q3;
}

int com(int w1, int w2){
    if(w1>w2){
        return w1;
    }else{
        return w2;
    }
}
int main() {
    int a = add(2, 5, 7);
    int b = minus(1093, 234, 45);
    int c = com(com(35, 345), com(234,23));
    
    int f = add(a, b, c);
    int g = minus(a, b, c);
    if(f>g){
        return 0;
    }
    else{
        return 42;
    }
}
