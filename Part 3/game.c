int cor_verde = 512;
int cor_vermelha = 2304;
 
char lista[19][6] = {
    {"fauna"},
    {"morar"},
    {"peste"},
    {"feito"},
    {"casto"},
    {"lazer"},
    {"brisa"},
    {"andar"},
    {"treta"},
    {"fruir"},
    {"fugir"},
    {"praia"},
    {"corpo"},
    {"logro"},
    {"sumir"},
    {"turba"},
    {"caixa"},
    {"lindo"},
    {"navio"},
    {"astro"}
};
 
 
void main(){
 
    char seed[5] = {"____"};
    int i = 0;
    int j = 0;
    char palavra[6] = {"12345"};
 
    char adivinhacao[5][6] = {"_____",
                              "_____",
                              "_____",
                              "_____",
                              "_____"};
 
    int true_seed  = 0;
        printf(1,5,"%c%c%c%c%c",seed[0],seed[1],seed[2],seed[3],seed[4]);
 
    for(i = 0; i < 5; i++){
        seed[i] = getch();
        printf(1,1,"%c%c%c%c%c",seed[0],seed[1],seed[2],seed[3],seed[4]);
    }
 
    true_seed = (int) seed[0]+seed[1]*seed[2]+seed[3]*seed[4];
    true_seed ^= true_seed << 13;
    true_seed ^= true_seed >>17;
    true_seed ^= true_seed <<5;
 
    while (true_seed > 20)
    {
        true_seed = true_seed - 20;
    }
    
    for(i = 0; i < 6; i++){
        palavra[i] = lista[true_seed][i];
    }
 
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){

            while(1){

                adivinhacao[i][j] = getch();
                if('a' <= adivinhacao[i][j] && adivinhacao[i][j] <= 'z'){
                    break;
                }
                if('A' <= adivinhacao[i][j] && adivinhacao[i][j] <= 'Z'){
                    break;
                }
            }
        }
        for(j = 0; j < 6; j++){
            if(adivinhacao[i][j] == palavra[j]){
                adivinhacao[i][j] += cor_verde;
                printf(i+8,j+12,"%c%c%c%c%c",adivinhacao[i][0],adivinhacao[i][1],adivinhacao[i][2],adivinhacao[i][3],adivinhacao[i][4]);
            }
            else{
                adivinhacao[i][j] += cor_vermelha;
            }
            printf(i+8,j+12,"%c%c%c%c%c",adivinhacao[i][0],adivinhacao[i][1],adivinhacao[i][2],adivinhacao[i][3],adivinhacao[i][4]);
        }
        if((adivinhacao[i][0] == palavra[0]+cor_verde) && (adivinhacao[i][1] == palavra[1] + cor_verde) && (adivinhacao[i][2] == palavra[2]+cor_verde) && (adivinhacao[i][3] == palavra[3] + cor_verde) && (adivinhacao[i][4] == palavra[4] + cor_verde)){
            printf(20,20,"PARABÉNS, VOCÊ VENCEU");
            break;
        }
        else if(i == 4){
            printf(20,20,"VOCÊ PERDEU KEK");
        }
    }

    return;
}
