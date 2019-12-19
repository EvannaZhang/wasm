
int count(int* arr, int sz){
    int count = 0;
    int i = 0;
    int j = 0;
    for(i=0;i<10;i++){
        for(j=0;j<10-i;j++){
            if(arr[j]>arr[j+1]){
                count = count +1;
            }
        }
    }
    return count;
}
int main(){
    int arr[]= {1,1,2,9,43,54,43,4,2,4,6};
    return count(arr, 11)-12;
}
