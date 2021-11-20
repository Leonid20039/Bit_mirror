//112-Чудновский-Леонид
//Проверка на симметричность
int bit_mirror(int mass_bit[], int j, int flag){
     for (int i = 0; i < 32; i++){
         mass_bit[31-i] = j&1;
         j >>= 1;
     }
     for (int k = 0; k < 8; k++){
         if(mass_bit[16+k] != mass_bit[31-k]){
             flag = 1;
        }
    }
    return flag;
}