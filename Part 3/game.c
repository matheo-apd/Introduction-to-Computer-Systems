int cor_verde = 512;
int cor_vermelha = 2304;
 
char lista[20][6] = {
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
 
void run_game(){

    char seed[5] = {"____"};
    int i = 0;
    int j = 0;
    char palavra[6] = "gusta";
 
    char adivinhacao[5][6] = {"_____",
                              "_____",
                              "_____",
                              "_____",
                              "_____"};
 
    int true_seed  = 0;
        printf(1,5,"%c%c%c%c%c",seed[0],seed[1],seed[2],seed[3],seed[4]);
 
      for(i = 0; i < 4; i++){
            while(1){
 
                seed[i] = getch();
                if('a' < (seed[i]+1) && seed[i] < ('z'+1)){
                printf(1,5,"%c%c%c%c%c",seed[0],seed[1],seed[2],seed[3]);
 
                    break;
                }
                if('A' < (seed[i]+1) && seed[i] < ('Z'+1)){
                printf(1,5,"%c%c%c%c%c",seed[0],seed[1],seed[2],seed[3]);
    
                    break;
                }
            }
        }
    for(i = 0; i < 4; i++){    
    if(seed[i] == 'a'){
    true_seed += 1;
        }
    if(seed[i] == 'b'){
    true_seed *= 2;
        }  
     if(seed[i] == 'c'){
    true_seed *= 3;
        }
     if(seed[i] == 'd'){
    true_seed += 4;
        }
     if(seed[i] == 'e'){
    true_seed += 5;
        }
    if(seed[i] == 'f'){
    true_seed *= 6;
        }
     if(seed[i] == 'g'){
    true_seed += 7;
        }  
     if(seed[i] == 'h'){
    true_seed += 8;
        }  
       if(seed[i] == 'i'){
    true_seed += 9;
       }
       if(seed[i] == 'j'){
    true_seed += 10;
        }  
         if(seed[i] == 'k'){
    true_seed += 11;
        }
    if(seed[i] == 'l'){
    true_seed += 12;
        }  
     if(seed[i] == 'm'){
    true_seed += 13;
        }
     if(seed[i] == 'n'){
    true_seed += 14;
        }
     if(seed[i] == 'o'){
    true_seed += 15;
        }
    if(seed[i] == 'p'){
    true_seed += 16;
        }
     if(seed[i] == 'q'){
    true_seed += 17;
        }  
     if(seed[i] == 'r'){
    true_seed += 18;
        }  
       if(seed[i] == 's'){
    true_seed += 19;
       }
       if(seed[i] == 't'){
    true_seed += 20;
        }  
     if(seed[i] == 'u'){
    true_seed += 21;
        }
     if(seed[i] == 'v'){
    true_seed += 22;
        }
    if(seed[i] == 'w'){
    true_seed += 23;
        }
     if(seed[i] == 'x'){
    true_seed += 24;
        }  
       if(seed[i] == 'y'){
    true_seed += 25;
       }
       if(seed[i] == 'z'){
    true_seed += 26;
        }  
    }
  /*  true_seed ^= true_seed << 13;
    true_seed ^= true_seed >>17;
    true_seed ^= true_seed <<5;*/
 
    while (true_seed > 18)
    {
        true_seed -= 19;
    }
    
    for(i = 0; i < 6; i++){
        if(lista[true_seed][i] == 'a'){
            palavra[i] = 'a';
        }
                if(lista[true_seed][i] == 'a'){
            palavra[i] = 'a';
        }
                if(lista[true_seed][i] == 'b'){
            palavra[i] = 'b';
        }
                if(lista[true_seed][i] == 'c'){
            palavra[i] = 'c';
        }
                if(lista[true_seed][i] == 'd'){
            palavra[i] = 'd';
        }
                if(lista[true_seed][i] == 'e'){
            palavra[i] = 'e';
        }
                if(lista[true_seed][i] == 'f'){
            palavra[i] = 'f';
        }
                if(lista[true_seed][i] == 'g'){
            palavra[i] = 'g';
        }
                if(lista[true_seed][i] == 'h'){
            palavra[i] = 'h';
        }
                if(lista[true_seed][i] == 'i'){
            palavra[i] = 'i';
        }
                if(lista[true_seed][i] == 'j'){
            palavra[i] = 'j';
        }
                if(lista[true_seed][i] == 'k'){
            palavra[i] = 'k';
        }
                if(lista[true_seed][i] == 'l'){
            palavra[i] = 'l';
        }
                if(lista[true_seed][i] == 'm'){
            palavra[i] = 'm';
        }
                if(lista[true_seed][i] == 'n'){
            palavra[i] = 'n';
        }
                if(lista[true_seed][i] == 'o'){
            palavra[i] = 'o';
        }
                if(lista[true_seed][i] == 'p'){
            palavra[i] = 'p';
        }
                if(lista[true_seed][i] == 'q'){
            palavra[i] = 'q';
        }
                if(lista[true_seed][i] == 'r'){
            palavra[i] = 'r';
        }
                if(lista[true_seed][i] == 's'){
            palavra[i] = 's';
        }
                if(lista[true_seed][i] == 't'){
            palavra[i] = 't';
        }
                if(lista[true_seed][i] == 'u'){
            palavra[i] = 'u';
        }
                if(lista[true_seed][i] == 'v'){
            palavra[i] = 'v';
        }
                if(lista[true_seed][i] == 'w'){
            palavra[i] = 'w';
        }
                if(lista[true_seed][i] == 'x'){
            palavra[i] = 'x';
        }
                if(lista[true_seed][i] == 'y'){
            palavra[i] = 'y';
        }
                if(lista[true_seed][i] == 'z'){
            palavra[i] = 'z';
        }
    }

 
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
 
           while(1){

                adivinhacao[i][j] = getch();
                if('a' < (adivinhacao[i][j]+1) && adivinhacao[i][j] < ('z'+1)){
                    break;
                }
                if('A' < (adivinhacao[i][j]+1) && adivinhacao[i][j] < ('Z'+1)){
                    adivinhacao[i][j] += 'a' - 'A';
                    break;
                }
            }
            printf(i+8, j+12, "%c", adivinhacao[i][j]);
        }
        for(j = 0; j < 6; j++){
            if(adivinhacao[i][j] == palavra[j]){
                printf(i+8, j+12, "%c", adivinhacao[i][j] + cor_verde);
            }
            else{
                printf(i+8, j+12, "%c", adivinhacao[i][j] + cor_vermelha);
            }
        }
 
        if((adivinhacao[i][0] == palavra[0]) && (adivinhacao[i][1] == palavra[1]) && (adivinhacao[i][2] == palavra[2]) && (adivinhacao[i][3] == palavra[3]) && (adivinhacao[i][4] == palavra[4])){
            printf(19,19,"PARABENS, VOCE VENCEU");
            break;
        }
        else if(i == 4){
            printf(20,20,"VOCE PERDEU KEK");
        }
    }
 
    return;
}
 
void clear_screen(){
 int i;
 int j;
    for( i = 0; i < 30; i++){
        for( j = 0; j < 40; j++){
            printf(i, j, " ");
        }
    }
 
    return;
}
 
 
void main(){
 
    while(1){
        run_game();
        printf(22,22,"Deseja sair? [y/n]");
        char opcao;
        while(1){
            opcao = getch();
            if(opcao == 'y' || opcao == 'n'){
                break;
            }
        }
        if(opcao == 'y'){
            break;
        }
        clear_screen();
    }
 
    return;
}
