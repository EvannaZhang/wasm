int BubbleSort2(int *arr,int sz){
    int i = 0;
    int j = 0;
    int count = 0;
    for(i=0;i<sz-1;i++){
        for(j=sz;j>i;j--){
            if(arr[j]>arr[j-1]){
                count = count+1;
            }
        }
    }
}

int main(){
    int arr[]= {1,1,2,9,43,54,43,4,2,4,6};
    return BubbleSort2(arr, 11)-12;
}
