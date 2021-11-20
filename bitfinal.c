//112-Чудновский-Леонид
int bit_print(int massbitfinal[], int j){
    for(int i = 0; i < 32; i++){
        massbitfinal[31-i] = j&1;
        j >>= 1;
    }
}