int minus(int a, int b, int c){
    return a-b-c;
}
int main() {
    int x = (minus(10,3,1));
    while (x < 10) {
        x = x + 1;
    }
    return x-10;
}
