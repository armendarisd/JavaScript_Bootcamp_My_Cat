#include <stdio.h>

int main (int argc, char *argv[]) {
   
    FILE *fp;
    int c;

    for(int i = 1; i < argc; i++){
        fp = fopen(argv[i],"r");

        while(1) {
        c = fgetc(fp);
            if( feof(fp) ) {
                break;
            }
        printf("%c", c);
        }

        fclose(fp);
    }
      


      

      
        


         
    
  
        return(0);
}