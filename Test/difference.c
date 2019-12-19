int main(){
    int test[11] = {1,2345,3,4345,34,543,56,56,65,34,43};
    int size = 11;
    int difference = test[0]-test[1];
    for(int k=0; k<size-1; k++){              //test every first number
        for(int l=k+1; l<size; l++){
            if (test[k]-test[l]>difference){
                difference = test[k]-test[l];
            }
        }
    }
    
    return difference-4311;
    
}
