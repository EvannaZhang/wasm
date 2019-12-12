
int x1[] = { 1, 2, 3, 4, 5 };
int *p1 = x1;
int *q1 = x1 + 2;

int x2 = 7;
int *p2 = &x2 + 1;

int main() {

    return (1 - *p1)+(3-*q1)+(7-p2[-1]);
    
}