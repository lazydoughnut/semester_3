#include <stdio.h>
    struct data_tanggal 
    { 
        int tahun; 
        int bulan; 
        int tanggal; 
    };

    int main() 
    { 
        struct data_tanggal today = {1998,7,24} ; 
        return 0; 
    }
    /* struct diluar fungsi main() */
}