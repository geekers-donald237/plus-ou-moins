#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// /*le but du jeu est de pouvoir deteminer un nombre alleatoires soit pris par l'ordinateur ou entrer oar un autre utlisateur*/
int pom1(int nbreentrer){
    int cpt=1,nbremystere=0;
    const int max=10,min=1;
    srand(time(NULL));
    nbremystere=(rand()%(max-min+1)-min);
    /*ici l'ordinateur genere un nombre aleatoire*/
    printf("NB:le nombre entrer doit respecter les bornes pour chaque niveau\n");
    do{ 
        do{  
            printf("A votre avis quel est le nbre mystere?? \n");
            scanf("%d",&nbreentrer);
        }while(min<=nbreentrer && nbreentrer>=max);
        if(nbreentrer<nbremystere){
            printf(" votre nbre est plus petit que le nombre mystere !!\n");
            cpt=cpt+1;
        }else if(nbreentrer>nbremystere){
            printf("votre nbre est plus grand que le nombre mystere !!\n");
            cpt=cpt+1;
        }else{
            printf("bravo, vous avez trouvez le nombre mystere en %d essai(s) !!\n",cpt);
        }
        /*a chaque fois je teste mon nombre avec celui generee par l'ordinateur*/
    }while(nbremystere!=nbreentrer);
    return nbremystere; 
}
/* je fais de  mm pour les autres fonctions sachant que les numeros apres 
les identificateurs des fonctions designe le niveau de difficulte*/ 
int pom2(int nbreentrer){
    int cpt=1,nbremystere=0;
    const int max=1000,min=1;
    srand(time(NULL));
    nbremystere=(rand()%(max-min+1)-min);
    do{
        do{ 
            printf("A votre avis quel est le nbre mystere?? \n");
            scanf("%d",&nbreentrer);
        }while(min<=nbreentrer && nbreentrer>=max);    
        if(nbreentrer<nbremystere){
            printf(" votre nbre est plus petit que le nombre mystere !!\n");
            cpt=cpt+1;
        }else if(nbreentrer>nbremystere){
            printf("votre nbre est plus grand que le nombre mystere !!\n");
            cpt=cpt+1;
        }else{
            printf("bravo, vous avez trouvez le nombre mystere en %d essai(s) !!\n",cpt);
        }
    }while(nbremystere!=nbreentrer);
    return nbremystere;
}
int  pom3(int nbreentrer){
    int cpt=1,nbremystere=0;
    const int max=1000000,min=1;
    srand(time(NULL));
    nbremystere=(rand()%(max-min+1)-min);
    do{
        do{  
            printf("A votre avis quel est le nbre mystere?? \n");
            scanf("%d",&nbreentrer);
        }while(min<=nbreentrer && nbreentrer>=max);
        if(nbreentrer<nbremystere){
            printf(" votre nbre est plus petit que le nombre mystere !!\n");
            cpt=cpt+1;
        }else if(nbreentrer>nbremystere){
            printf("votre nbre est plus grand que le nombre mystere !!\n");
            cpt=cpt+1;
        }else{
            printf("bravo, vous avez trouvez le nombre mystere en %d essai(s) !!\n",cpt);
        }
    }while(nbremystere!=nbreentrer);
    return nbremystere;
}
int pom2j1(int nbreentrer){
    int nbremystere,cpt;
    int max=100,min=1;
    do{
        do{  
            printf("A votre avis quel est le nbre mystere joueur2 ?? \n");
            scanf("%d",&nbreentrer);
        }while(min<=nbreentrer && nbreentrer>=max);
        if(nbreentrer<nbremystere){
            printf(" votre nbre est plus petit que le nombre mystere !!\n");
            cpt=cpt+1;
        }else if(nbreentrer>nbremystere){
            printf("votre nbre est plus grand que le nombre mystere !!\n");
            cpt=cpt+1;
        }else{
            printf("bravo, vous avez trouvez le nombre mystere en %d essai(s) !!\n",cpt);
        }
    }while(nbremystere!=nbreentrer);
    return nbremystere;
}
int pom2j2(int nbreentrer){
    int nbremystere,cpt;
    int max=10000,min=1;
    do{
        do{  
            printf("A votre avis quel est le nbre mystere joueur2 ?? \n");
            scanf("%d",&nbreentrer);
        }while(min<nbreentrer && nbreentrer>max);
        if(nbreentrer<nbremystere){
            printf(" votre nbre est plus petit que le nombre mystere !!\n");
            cpt=cpt+1;
        }else if(nbreentrer>nbremystere){
            printf("votre nbre est plus grand que le nombre mystere !!\n");
            cpt=cpt+1;
        }else{
            printf("bravo, vous avez trouvez le nombre mystere en %d essai(s) !!\n",cpt);
        }
    }while(nbremystere!=nbreentrer);
    return nbremystere;
}
int pom2j3(int nbreentrer){
    int nbremystere,cpt;
    int max=100000,min=1;
    do{
        do{  
            printf("A votre avis quel est le nbre mystere joueur2 ?? \n");
            scanf("%d",&nbreentrer);
        }while(min<nbreentrer && nbreentrer>max);
        if(nbreentrer<nbremystere){
            printf(" votre nbre est plus petit que le nombre mystere !!\n");
            cpt=cpt+1;
        }else if(nbreentrer>nbremystere){
            printf("votre nbre est plus grand que le nombre mystere !!\n");
            cpt=cpt+1;
        }else{
            printf("bravo, vous avez trouvez le nombre mystere en %d essai(s) !!\n",cpt);
        }
    }while(nbremystere!=nbreentrer);
    return nbremystere;
}
int pompc( int nbremystere2){
    int cpt=1,nbremystere1;
    const int max=100,min=1;
    srand(time(NULL));
    nbremystere1=(rand()%(max-min+1)-min);
    /*ici l'ordinateur genere deux nbres aleatoires pour ensuite les comparer*/
    printf("entrer le nbre mystere\n");
    nbremystere2=(rand()%(max-min+1)-min);
    do{ 
        /*dans cette boucle l'ordi genere des nombres pour a chaque fois les comparer avec l;e premiers nbrenystere generee*/
        nbremystere2=(rand()%(max-min+1)-min);
        printf("%d\n",nbremystere2);
        if(nbremystere1<nbremystere2){
            printf(" le nbre entrer est plus petit que le nombre mystere !!\n");
        }if(nbremystere1>nbremystere2){
            printf("le nbre entrer est plus grand que le nombre mystere !!\n");
        }
        cpt=cpt+1;
    }while(nbremystere1!=nbremystere2);
    printf("bravo, vous avez trouvez le nombre mystere en %d essai(s) !!\n",cpt);
    return nbremystere1;
}
int main (){
    int nbreentrer,max,min,mode;
    int niveau,nbremystere,nbremystere1,nbremystere2;
    char continuepartie=1;
    printf("selectionnez un mode de jeu\n");
    printf("1-(pc vs joueur1)\t 2-(joueur1 vs joueur2)\t, 3-(pc vs pc)\n");
    do{ 
        printf("selectionnez un mode de jeu  un entrant un numero parmis les trois d'en haut \n");
        scanf("%d",&mode);
    }while(mode>3);
    if(mode == 1){ 
        do{ 
            printf("les niveaux 1,2,3,correspondent respectivement a un nombre aleatoire compris entre :\n");
            printf("1-(1-10)\t 2-(1-1000)\t 3-(1-1000000)\t\n");
            do{ 
            printf("selectionner donc un niveau de jeu \n");
            scanf("%d",&niveau);
            }while(niveau>3); 
                if(niveau==1){
                nbremystere=pom1(nbreentrer);
                }else if(niveau==2){
                nbremystere=pom2(nbreentrer);
                }else{ 
                nbremystere=pom3(nbreentrer);
                }      
                printf("\n\n");
            printf("voulez vous recommencer la partie?? \n si oui taper'1', sinon taper'0':\n");
            printf("entrer donc  le chiffre correspondant \n");
            scanf("%hhd",&continuepartie);      
        }while(continuepartie=='1');
    }else if(mode==2){
        do{ 
            printf("joueur 1 selectionnee le niveau de difficulte tels que pour chaque level le nbremystere est compris entre \n");
            printf("1-(1-100)\t   2-(1-10000)\t   3-(1-1000000)\t\n");
            do{      
            printf("selectionner un niveau\n");
            scanf("%d",&niveau);
            }while(niveau>3);
            do{ 
            printf("entrer le nombre mystere a chercher joueur 1\n");
            scanf("%d",&nbremystere);
            }while( min<nbremystere && nbremystere>max);
                if(niveau==1){
                    nbremystere=pom2j1(nbreentrer);
                } else if(niveau==2){
                    nbremystere=pom2j2(nbreentrer);
                }else {
                    nbremystere=pom2j3(nbreentrer);
                }
                printf("\n");
            printf("\n");
            printf("voulez vous recommencer la partie?? \n si oui taper'1', sinon taper'0':\n");
            scanf("%hhd",&continuepartie);      
        }while(continuepartie=='1');
    }else{  
        do{ 
        nbremystere1=pompc(nbremystere2);
        printf("voulez vous recommencer la partie?? \n si oui taper'1', sinon taper'0':\n");
        scanf("%hhd",&continuepartie);    
        }while(continuepartie='1');
    }          
    return 0;
}
