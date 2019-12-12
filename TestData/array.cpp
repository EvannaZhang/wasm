int t1() {
    int a[2][3];
    int *p = a;
    *p = 1;
    return (1 - *p);
}

int t2() {
    int a[2][3];
    int *p = a + 1;
    *p = 1;
    int *q = a;
    *p = 32;
    return (32 - *(q + 3));
}

int t3() {
    int a[4][5];
    int *p = a;
    *(*(a + 1) + 2) = 62;
    return (62 - *(p + 7));
}

int t4() {
    int a[3] = { 1, 2, 3 };
    return (1 - a[0]) + (2 - a[1]) + (3 - a[2]);
}

int t5() {
    int a[2][3];
    a[0][1] = 1;
    a[1][1] = 2;
    int *p = a;
    return (1 - p[1]) + (2, p[4]);
}

int t6a(int e, int x[][3]) {
    return(e - *(*(x + 1) + 1));
}

int t6() {
    int a[2][3];
    int *p = a;
    *(p + 4) = 65;
    t6a(65, a);
}

int t7() {
    int a[3*3];  // integer constant expression
    a[8] = 68;
    return (68 - a[8]);
}

int  main() {
   int temp = t1() + t2();
   int twmp = t3() - t4();
   int ans = temp + twmp + t6() + t7();
   return ans;
}