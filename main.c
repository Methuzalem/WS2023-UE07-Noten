#include <stdio.h>
#include <stdlib.h>

int main()
{
    int note=0, note1=0, note2=0;

    printf("Noten: ");
    scanf("%d", &note);

if(note > 999 || note < 100){
    printf("Erwarte genau 3 Noten!");
}
else{
        while(note > 100){
            note=note-100;
            note1++;
        }
        while(note > 10){
            note=note-10;
            note2++;
        }


        if(note1 > 5  || note1 == 0){
            printf("Erste Note muss zwischen 1 und 5 liegen! \n");
        }
        else if(note2 > 5  || note2 == 0){
            printf("Zweite Note muss zwischen 1 und 5 liegen! \n");
        }
        else if(note > 5  || note == 0){
            printf("Dritte Note muss zwischen 1 und 5 liegen! \n");
        }
        else if (note+note1+note2 == 3){
            printf("Ausgezeichneter Erfolg! \n");
        }
        else if(note+note1+note2 == 4){
            printf("Guter Erfolg! \n");
        }
        else if(note == 5 || note1 == 5 || note2 == 5){
            printf("Nicht bestanden! \n");
        }
        else if(note+note1+note2 >4){
            printf("Bestanden. \n");
        }

}
        return 0;
    }


