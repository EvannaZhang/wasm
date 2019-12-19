int hanio(int x){
    long moves = 1;
    for(int k=0; k<x; k++){
        moves = moves*3;
    }
    return moves;
}

int main(){
    int first = hanio(3);
    int c = hanio(first);
    return hanio(c)-1;
    
}

