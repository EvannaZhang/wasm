float func(float first, float second){
    return first+first-second;
}
int main() {
    float first = func(234.342, 34.432);
    float second = func(3322.432, 34.2);
    float mid = first * 2;
    if (mid - second - func(first, second) > -1){
        return mid - second - func(first, second);
    }
    return func(234,24325.3);
}

