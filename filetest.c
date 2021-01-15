#include <stdio.h>
int main(){
  FILE *fp;
  fp = fopen("C:/Users/pichu/Desktop/episodelist.txt", "w+");
  //initialize an object of the type FILE
  fprintf(fp, "Indigo League\n");
  int newcount = 0;
  for(int count = 0; count < 1127; count++){
    newcount++;
    if(count == 84){
        fprintf(fp, "Orange Islands\n");
        newcount = 0;
    }
    else if(count == 119){
        fprintf(fp, "Johto Journeys\n");
        newcount = 0;
    }
    else if(count == 160){
        fprintf(fp, "Johto League Champions\n");
        newcount = 0;
    }
    else if(count == 212){
        fprintf(fp, "Master Quest\n");
        newcount = 0;
    }
    else if(count == 277){
        fprintf(fp, "Advanced\n");
        newcount = 0;
    }
    else if(count == 317){
        fprintf(fp, "Advanced Challenge\n");
        newcount = 0;
    }
    else if(count == 369){
        fprintf(fp, "Advanced Battle\n");
        newcount = 0;
    }
    else if(count == 423){
        fprintf(fp, "Battle Frontier\n");
        newcount = 0;
    }
    else if(count == 469){
        fprintf(fp, "Diamond and Pearl\n");
        newcount = 0;
    }
    else if(count == 521){
        fprintf(fp, "DP Battle Dimension\n");
        newcount = 0;
    }
    else if(count == 573){
        fprintf(fp, "DP Galatic Battles\n");
        newcount = 0;
    }
    else if(count == 626){
        fprintf(fp, "Sinnoh League Victors\n");
        newcount = 0;
    }
    else if(count == 660){
        fprintf(fp, "Black and White\n");
        newcount = 0;
    }
    else if(count == 710){
        fprintf(fp, "BW Rival Destinies\n");
        newcount = 0;
    }
    else if(count == 759){
        fprintf(fp, "BW Adventures in Unova (and Beyond)\n");
        newcount = 0;
    }
    else if(count == 804){
        fprintf(fp, "XY\n");
        newcount = 0;
    }
    else if(count == 853){
        fprintf(fp, "XY Kalos Quest\n");
        newcount = 0;
    }
    else if(count == 897){
        fprintf(fp, "XYZ\n");
        newcount = 0;
    }
    else if(count == 944){
        fprintf(fp, "Sun and Moon\n");
        newcount = 0;
    }
    else if(count == 987){
        fprintf(fp, "Sun and Moon Ultra Adventures\n");
        newcount = 0;
    }
    else if(count == 1036){
        fprintf(fp, "Sun and MoonUltra Legends\n");
        newcount = 0;
    }
    else if(count == 1090){
        fprintf(fp, "Journeys\n");
        newcount = 0;
    }
    fprintf(fp, "%d\n", newcount);
  }
  fclose(fp);
}
