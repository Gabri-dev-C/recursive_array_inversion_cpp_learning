#include <iostream>
#include <ctime>

void inverti_vet(int v[], int i, int j);

int main(){

    int lung_vett = 20;
    int vett[lung_vett];
    int val_min = 1;
    int val_max = 20;

    srand(time(NULL));

    std::cout << std::endl;
    std::cout << "\tVettore: ";

    for(int i = 0; i < lung_vett; i++){
        vett[i] = val_min + (rand() % (val_max - val_min + 1));
        if(i < lung_vett-1)
            std::cout << vett[i] << ", ";
        else
            std::cout << vett[i];
    }
    std::cout << std::endl;

    inverti_vet(vett, 0, lung_vett - 1);

    std::cout << std::endl;
    std::cout << "\tVettore: ";

    for(int i = 0; i < lung_vett; i++){
        if(i < lung_vett-1)
            std::cout << vett[i] << ", ";
        else
            std::cout << vett[i];
    }

    std::cout << std::endl;
    return 0;
}

void inverti_vet(int v[], int i, int j){
    if(j <= i)                      // condizione di terminazione: gli indici hanno scavallato
        return;                     // fine ricorsione
    else
        inverti_vet(v, i+1, j-1);   // chiamata ricorsiva + passi di avvicinamento

    // swap
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
