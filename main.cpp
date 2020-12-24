#include <../shared/qstd.h>
using namespace qstd;

#include <stdio.h>

int main()
{
    cout<< "__________reseau de tri__________" << endl <<endl;
    cout<< "rentrer vos quatre elements" << endl <<endl;
    int i;
    int valeur[4];
    for (i = 0; i<4; i++){
        printf ("element %d: ",i);
        scanf ("%d" , &valeur[i]);
    }

    if (valeur[0] > valeur[2]){

        i = valeur [0];
        valeur[0] = valeur[2];
        valeur[2] = i;

    }

    if (valeur[1] > valeur[3]){
        i = valeur [1];
        valeur[1] = valeur[3];
        valeur[3] = i;
    }

    if (valeur[0] > valeur[1]){
        i = valeur [0];
        valeur[0] = valeur[1];
        valeur[1] = i;
    }

    if (valeur[2] > valeur[3]){
        i = valeur [2];
        valeur[2] = valeur[3];
        valeur[3] = i;
    }

    if (valeur[1] > valeur[2]){
        i = valeur [1];
        valeur[1] = valeur[2];
        valeur[2] = i;
    }
    printf ("tableau trié : ");
    for (i = 0; i<4; i++){
        printf ("%d " , valeur[i]);
    }
    printf ("\n\n");
}
