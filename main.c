// 112-Чудновский-Леонид
// Найти N целых чисел, у которых младший байт является зеркальным отображением следующего байта
#include <stdio.h>
#include <stdlib.h>
#include "bit.h"

int main(void) {
	char filename[120];	
	int mass_bit[15], massbitfinal[31];
	int i, j = 0, n = 1, flag = 0, N;		
	FILE* fin;	
		
		printf("Enter file name:");
		scanf("%s", filename);
		fin = fopen(filename, "w");
        scanf("%d", &N);

		// провекрка на возможность открыть файл
		if(!fin){
			printf("Unable to open %s\n", filename);
			return 1;
		}

        while(n <= N){
           int flag = bit_mirror(mass_bit, j, flag);
            if(flag == 0){
                n++;
                bit_print(massbitfinal,  j);
                fprintf(fin, "%d   \t", j);
                for(int i = 0; i < 32; i++){
                    if (i == 8 || i == 16 || i == 24){
                        fprintf(fin, " ");
                    }
                    fprintf(fin, "%d", massbitfinal[i]);
                }
                fprintf(fin, "\n");
            }
            j++;
            flag = 0;
         }
	return 0;
}