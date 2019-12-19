#include <stdio.h>

/*binsearch : find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n){
    int low, high, mid;
    
    low = 0;
    high = n - 1;
    
    while ( low <= high ) {
        mid = (low + high) / 2;
        if(x < v[mid]){
            high = mid - 1;
        }
        else if(x > v[mid]){
            low = mid + 1;
        }
        else{ /*found match*/
            return mid;
        }
    }
    
    return -1;
}

int main(){
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int location;
    int number = 4;
    location = binsearch(number, array, 11);
    
    return location-4;
}
