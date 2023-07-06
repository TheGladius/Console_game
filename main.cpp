//POP 2020-12-07 projekt 1 Sadowski Jakub EiT 5 184396 CodeBlocks 17.12
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void zamiana_prawo_X_na_O (char tab[26][26], int i, int j, int n){
    int zmienna=0;
                    if(tab[i][j]=='O')
                        if(j+1<n) //sprawdzanie czy pionek O nie jest ostatni w rzedzie
                            if(tab[i][j+1]=='X') //sprawdzanie czy za pionkiem O jest pionek X
                                for(int k=0; k<n-j-1; k++){
                                    if(tab[i][k+j+1]=='-')
                                        break;
                                    if(tab[i][k+j+1]=='O'){   //sprawdzanie czy za X badz ciagiem X jest pionek O
                                        zmienna++;
                                        break;
                                    }
                                }
                            if(zmienna==1){ // wykonuje jesli znaleziono ciag O X... O
                                for(int k=0; k<n-j-1; k++){
                                    if(tab[i][k+j+1]=='O')   //jesli petla dojdzie do konca ciagu to break
                                        break;
                                    if(tab[i][k+j+1]=='X'){  //zamiana X na O
                                        tab[i][k+j+1]='O';
                                    }
                                }
                            }
                zmienna=0;
}
void zamiana_lewo_X_na_O (char tab[26][26], int i, int j, int n){
    int zmienna=0;
                    if(tab[i][j]=='O')
                        if(j>0) //sprawdzanie czy pionek O nie jest ostatni w rzedzie
                            if(tab[i][j-1]=='X') //sprawdzanie czy za pionkiem O jest pionek X
                                for(int k=j-1; k>=0; k--){
                                    if(tab[i][k]=='-')
                                        break;
                                    if(tab[i][k]=='O'){   //sprawdzanie czy za X badz ciagiem X jest pionek O
                                        zmienna++;
                                        break;
                                    }
                                }
                            if(zmienna==1){ // wykonuje jesli znaleziono ciag O X... O
                                for(int k=j-1; k>=0; k--){
                                    if(tab[i][k]=='O')   //jesli petla dojdzie do konca ciagu to break
                                        break;
                                    if(tab[i][k]=='X'){  //zamiana X na O
                                        tab[i][k]='O';
                                    }
                                }
                            }
                zmienna=0;
}
void zamiana_dol_X_na_O (char tab[26][26], int i, int j, int n){
    int zmienna=0;
                    if(tab[i][j]=='O')
                        if(i+1<n) //sprawdzanie czy pionek O nie jest ostatni w kolumnie
                            if(tab[i+1][j]=='X') //sprawdzanie czy pod pionkiem O jest pionek X
                                for(int k=0; k<n-i-1; k++){
                                    if(tab[k+i+1][j]=='-')
                                        break;
                                    if(tab[k+i+1][j]=='O'){ //sprawdzanie czy pod X badz ciagiem X jest O
                                        zmienna++;
                                        break;
                                    }
                                }
                            if(zmienna==1){
                                for(int k=0; k<n-i-1; k++){
                                    if(tab[k+i+1][j]=='O')
                                        break;
                                    if(tab[k+i+1][j]=='X'){ // zamiana X na O
                                        tab[k+i+1][j]='O';
                                    }
                                }
                            }
                zmienna=0;
}
void zamiana_gora_X_na_O (char tab[26][26], int i, int j, int n){
    int zmienna=0;
                    if(tab[i][j]=='O')
                        if(i>0) //sprawdzanie czy pionek O nie jest ostatni w kolumnie
                            if(tab[i-1][j]=='X') //sprawdzanie czy nad pionkiem O jest pionek X
                                for(int k=i-1; k>=0; k--){
                                    if(tab[k][j]=='-')
                                        break;
                                    if(tab[k][j]=='O'){ //sprawdzanie czy nad X badz ciagiem X jest O
                                        zmienna++;
                                        break;
                                    }
                                }
                            if(zmienna==1){
                                for(int k=i-1; k>=0; k--){
                                    if(tab[k][j]=='O')
                                        break;
                                    if(tab[k][j]=='X'){ // zamiana X na O
                                        tab[k][j]='O';
                                    }
                                }
                            }
                zmienna=0;
}
void zamiana_prawo_O_na_X (char tab[26][26], int i, int j, int n){
    int zmienna=0;
                    if(tab[i][j]=='X')
                        if(j+1<n) //sprawdzanie czy pionek X nie jest ostatni w rzedzie
                            if(tab[i][j+1]=='O') //sprawdzanie czy za pionkiem X jest pionek O
                                for(int k=0; k<n-j-1; k++){
                                    if(tab[i][k+j+1]=='-')
                                        break;
                                    if(tab[i][k+j+1]=='X'){   //sprawdzanie czy za O badz ciagiem O jest pionek X
                                        zmienna++;
                                        break;
                                    }
                                }
                            if(zmienna==1){ // wykonuje jesli znaleziono ciag X O... X
                                for(int k=0; k<n-j-1; k++){
                                    if(tab[i][k+j+1]=='X')   //jesli petla dojdzie do konca ciagu to break
                                        break;
                                    if(tab[i][k+j+1]=='O'){  //zamiana O na X
                                        tab[i][k+j+1]='X';
                                    }
                                }
                            }
                zmienna=0;
}
void zamiana_lewo_O_na_X (char tab[26][26], int i, int j, int n){
    int zmienna=0;
                    if(tab[i][j]=='X')
                        if(j>0) //sprawdzanie czy pionek X nie jest ostatni w rzedzie
                            if(tab[i][j-1]=='O') //sprawdzanie czy za pionkiem X jest pionek O
                                for(int k=j-1; k>=0; k--){
                                    if(tab[i][k]=='-')
                                        break;
                                    if(tab[i][k]=='X'){   //sprawdzanie czy za O badz ciagiem O jest pionek X
                                        zmienna++;
                                        break;
                                    }
                                }
                            if(zmienna==1){ // wykonuje jesli znaleziono ciag X O... X
                                for(int k=j-1; k>=0; k--){
                                    if(tab[i][k]=='X')   //jesli petla dojdzie do konca ciagu to break
                                        break;
                                    if(tab[i][k]=='O'){  //zamiana O na X
                                        tab[i][k]='X';
                                    }
                                }
                            }
                zmienna=0;
}
void zamiana_dol_O_na_X (char tab[26][26], int i, int j, int n){
    int zmienna=0;
                    if(tab[i][j]=='X')
                        if(i+1<n) //sprawdzanie czy pionek X nie jest ostatni w kolumnie
                            if(tab[i+1][j]=='O') //sprawdzanie czy pod pionkiem X jest pionek O
                                for(int k=0; k<n-i-1; k++){
                                    if(tab[k+i+1][j]=='-')
                                        break;
                                    if(tab[k+i+1][j]=='X'){ //sprawdzanie czy pod O badz ciagiem O jest X
                                        zmienna++;
                                        break;
                                    }
                                }
                            if(zmienna==1){
                                for(int k=0; k<n-i-1; k++){
                                    if(tab[k+i+1][j]=='X')
                                        break;
                                    if(tab[k+i+1][j]=='O'){ // zamiana O na X
                                        tab[k+i+1][j]='X';
                                    }
                                }
                            }
                zmienna=0;
}
void zamiana_gora_O_na_X (char tab[26][26], int i, int j, int n){
    int zmienna=0;
                    if(tab[i][j]=='X')
                        if(i>0) //sprawdzanie czy pionek X nie jest ostatni w kolumnie
                            if(tab[i-1][j]=='O') //sprawdzanie czy nad pionkiem X jest pionek O
                                for(int k=i-1; k>=0; k--){
                                    if(tab[k][j]=='-')
                                        break;
                                    if(tab[k][j]=='X'){ //sprawdzanie czy nad O badz ciagiem O jest X
                                        zmienna++;
                                        break;
                                    }
                                }
                            if(zmienna==1){
                                for(int k=i-1; k>=0; k--){
                                    if(tab[k][j]=='X')
                                        break;
                                    if(tab[k][j]=='O'){ // zamiana O na X
                                        tab[k][j]='X';
                                    }
                                }
                            }
                zmienna=0;
}

int main()
{
    int n;
    char tab[26][26];
    int litera=65;
    const int z=1;

    while(z!=0){
        cout<<"Podaj dlugosc boku planszy (od 2 do 26): "<<endl;
        cin>>n;
        if(n>=2 && n<=26){
            system("cls");
            break;
        }
        else
            cout<<"Zle dane - sproboj jeszcze raz."<<endl<<endl;
    }

    //wypelnianie tablicy znakami "-"
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            tab[i][j]='-';
        }
    }

    //startowe wypisanie tablicy
    cout<<endl;
    cout<<"  ";
    for(int i=0; i<n; i++){
        cout<<setw(3)<<char(litera);
        litera++;
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        if(i+1<10)
        cout<<i+1<<" ";
        if(i+1>=10)
        cout<<i+1;
            for(int j=0; j<n; j++){
                cout<<setw(3)<<tab[i][j];
            }
        cout<<endl;
    }

    int liczba_y;
    char litera_x;
    int licznik=1;
    int suma_na_koniec_rundy=0;
    int pom=1;
    int gra;

    for(int x=0; x<(n*n); x++){         //n*n -> maksymalna ilosc ruchów (z pominieciem podania zlych danych, bo wtedy x-- i choc petla wykonuje sie kolejny raz to w praktyce jest to "ten sam raz")

        //wczytywanie punktu do tablicy
        if(licznik==1){ //zaczyna gracz X
        while(z!=0){
            cout<<"Graczu X podaj wspolrzedna y (liczba calkowita od 1 do "<<n<<"): "<<endl;
            cin>>liczba_y;
            if(liczba_y>=1 && liczba_y<=n)
                break;
            else
                cout<<"Zle dane - sproboj jeszcze raz."<<endl<<endl;
        }
         while(z!=0){
            cout<<"Graczu X podaj wspolrzedna x (duza litera alfabetu angielskiego od A do "<<char(n-1+65)<<"): "<<endl;
            cin>>litera_x;
            if(int(litera_x)+1-65>=1 && int(litera_x)+1-65<=n)
                break;
            else
                cout<<"Zle dane - sproboj jeszcze raz."<<endl<<endl;
        }
            for(int i=0; i<n; i++){
                if(liczba_y-1==i)
                for(int j=0; j<n; j++){
                    if(int(litera_x)-65==j&&tab[i][j]=='-')
                        tab[i][j]='X';
                }
            }
        }

        if(licznik>1){
        if(licznik%2==0){ //dla gracza O
        while(z!=0){
            cout<<"Graczu O czy chcesz grac dalej?"<<endl;
            cout<<"Tak - wpisz 1"<<endl<<"Nie, poddaje sie - wpisz 0"<<endl;
            cin>>gra;
            if(gra==1 || gra==0)
                break;
            else
                cout<<"Zle dane - sproboj jeszcze raz."<<endl<<endl;
        }
        if(gra==1){
        while(z!=0){
            cout<<"Graczu O podaj wspolrzedna y (liczba calkowita od 1 do "<<n<<"): "<<endl;
            cin>>liczba_y;
            if(liczba_y>=1 && liczba_y<=n)
                break;
            else
                cout<<"Zle dane - sproboj jeszcze raz."<<endl<<endl;
        }
         while(z!=0){
            cout<<"Graczu O podaj wspolrzedna x (duza litera alfabetu angielskiego od A do "<<char(n-1+65)<<"): "<<endl;
            cin>>litera_x;
            if(int(litera_x)+1-65>=1 && int(litera_x)+1-65<=n)
                break;
            else
                cout<<"Zle dane - sproboj jeszcze raz."<<endl<<endl;
        }
            for(int i=0; i<n; i++){
                if(liczba_y-1==i)
                for(int j=0; j<n; j++){
                    if(int(litera_x)-65==j){
                    if(tab[i][j]=='-'){
                        // dla punktu C4
                        //tab[i][j-1]== C3 tab[i][j+1]== C5 tab[i-1][j]== B4 tab[i+1][j]== D4
                        //sprawdzanie dla pierwszego rzedu
                        if(liczba_y==1){
                            if(int(litera_x)+1-65==1) //lewy, gorny rog
                                if(tab[i+1][j]=='X' || tab[i][j+1]=='X' || tab[i+1][j]=='O' || tab[i][j+1]=='O')
                                {
                                    tab[i][j]='O';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_lewo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_dol_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_gora_X_na_O(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                            if(int(litera_x)+1-65==n) //prawy, gorny rog
                                if(tab[i+1][j]=='X' || tab[i][j-1]=='X' || tab[i+1][j]=='O' || tab[i][j-1]=='O')
                                    {
                                    tab[i][j]='O';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_lewo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_dol_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_gora_X_na_O(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                            if(int(litera_x)+1-65>1 && int(litera_x)+1-65<n) //reszta przypadkow gdzie wspolrzedna y to 1
                                if(tab[i+1][j]=='X' || tab[i][j-1]=='X' || tab[i][j+1]=='X' || tab[i+1][j]=='O' || tab[i][j-1]=='O' || tab[i][j+1]=='O')
                                   {
                                    tab[i][j]='O';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_lewo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_dol_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_gora_X_na_O(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                        }
                        //sprawdzanie dla ostatniego rzedu
                        if(liczba_y==n){
                            if(int(litera_x)+1-65==1)//lewy, dolny rog
                                if(tab[i-1][j]=='X' || tab[i][j+1]=='X' || tab[i-1][j]=='O' || tab[i][j+1]=='O')
                                    {
                                    tab[i][j]='O';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_lewo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_dol_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_gora_X_na_O(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                            if(int(litera_x)+1-65==n)//prawy, dolny rog
                                if(tab[i-1][j]=='X' || tab[i][j-1]=='X' || tab[i-1][j]=='O' || tab[i][j-1]=='O')
                                    {
                                    tab[i][j]='O';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_lewo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_dol_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_gora_X_na_O(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                            if(int(litera_x)+1-65>1 && int(litera_x)+1-65<n) //reszta przypadkow gdzie wspolrzedna y to n
                                if(tab[i-1][j]=='X' || tab[i][j-1]=='X' || tab[i][j+1]=='X' || tab[i-1][j]=='O' || tab[i][j-1]=='O' || tab[i][j+1]=='O')
                                   {
                                    tab[i][j]='O';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_lewo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_dol_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_gora_X_na_O(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                        }
                        //sprawdzanie dla rzedow w przedziale (1,n)
                        if(liczba_y!=1 && liczba_y!=n){
                            if(int(litera_x)+1-65==1) //punkt lezy przy lewej krawedzi
                                if(tab[i-1][j]=='X' || tab[i+1][j]=='X' || tab[i][j+1]=='X' || tab[i-1][j]=='O' || tab[i+1][j]=='O' || tab[i][j+1]=='O')
                                   {
                                    tab[i][j]='O';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_lewo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_dol_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_gora_X_na_O(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                            if(int(litera_x)+1-65==n) //punkt lezy przy prawej krawedzi
                                if(tab[i-1][j]=='X' || tab[i+1][j]=='X' || tab[i][j-1]=='X' || tab[i-1][j]=='O' || tab[i+1][j]=='O' || tab[i][j-1]=='O')
                                    {
                                    tab[i][j]='O';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_lewo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_dol_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_gora_X_na_O(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                            if(int(litera_x)+1-65>1 && int(litera_x)+1-65<n) //punkt lezy gdzies w srodku planszy
                                if(tab[i-1][j]=='X' || tab[i+1][j]=='X' || tab[i][j-1]=='X' || tab[i][j+1]=='X' || tab[i-1][j]=='O' || tab[i+1][j]=='O' || tab[i][j-1]=='O' || tab[i][j+1]=='O')
                                    {
                                    tab[i][j]='O';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_lewo_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_dol_X_na_O(tab, pom_i, pom_j, n);
                                    zamiana_gora_X_na_O(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                        }

                    }
                    else{
                        system("cls");
                        cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                        x--;
                        break;
                    }
                    }
                }
            }
        }
        else{
            cout<<endl;
            cout<<"Gracz O poddaje gre"<<endl;
            cout<<"Wygrywa gracz X!"<<endl;
            return 0;
        }

        }
        if(licznik%2!=0){ //dla gracza X
        while(z!=0){
            cout<<"Graczu X czy chcesz grac dalej?"<<endl;
            cout<<"Tak - wpisz 1"<<endl<<"Nie, poddaje sie - wpisz 0"<<endl;
            cin>>gra;
            if(gra==1 || gra==0)
                break;
            else
                cout<<"Zle dane - sproboj jeszcze raz."<<endl<<endl;
        }
        if(gra==1){
        while(z!=0){
            cout<<"Graczu X podaj wspolrzedna y (liczba calkowita od 1 do "<<n<<"): "<<endl;
            cin>>liczba_y;
            if(liczba_y>=1 && liczba_y<=n)
                break;
            else
                cout<<"Zle dane - sproboj jeszcze raz."<<endl<<endl;
        }
         while(z!=0){
            cout<<"Graczu X podaj wspolrzedna x (duza litera alfabetu angielskiego od A do "<<char(n-1+65)<<"): "<<endl;
            cin>>litera_x;
            if(int(litera_x)+1-65>=1 && int(litera_x)+1-65<=n)
                break;
            else
                cout<<"Zle dane - sproboj jeszcze raz."<<endl<<endl;
        }
            for(int i=0; i<n; i++){
                if(liczba_y-1==i)
                for(int j=0; j<n; j++){
                    if(int(litera_x)-65==j){
                    if(tab[i][j]=='-'){
                        // dla punktu C4
                        //tab[i][j-1]== C3 tab[i][j+1]== C5 tab[i-1][j]== B4 tab[i+1][j]== D4
                        //sprawdzanie dla pierwszego rzedu
                        if(liczba_y==1){
                            if(int(litera_x)+1-65==1) //lewy, gorny rog
                                if(tab[i+1][j]=='X' || tab[i][j+1]=='X' || tab[i+1][j]=='O' || tab[i][j+1]=='O')
                                    {
                                    tab[i][j]='X';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_lewo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_dol_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_gora_O_na_X(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                            if(int(litera_x)+1-65==n) //prawy, gorny rog
                                if(tab[i+1][j]=='X' || tab[i][j-1]=='X' || tab[i+1][j]=='O' || tab[i][j-1]=='O')
                                    {
                                    tab[i][j]='X';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_lewo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_dol_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_gora_O_na_X(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                            if(int(litera_x)+1-65>1 && int(litera_x)+1-65<n) //reszta przypadkow gdzie wspolrzedna y to 1
                                if(tab[i+1][j]=='X' || tab[i][j-1]=='X' || tab[i][j+1]=='X' || tab[i+1][j]=='O' || tab[i][j-1]=='O' || tab[i][j+1]=='O')
                                   {
                                    tab[i][j]='X';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_lewo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_dol_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_gora_O_na_X(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                        }
                        //sprawdzanie dla ostatniego rzedu
                        if(liczba_y==n){
                            if(int(litera_x)+1-65==1)//lewy, dolny rog
                                if(tab[i-1][j]=='X' || tab[i][j+1]=='X' || tab[i-1][j]=='O' || tab[i][j+1]=='O')
                                    {
                                    tab[i][j]='X';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_lewo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_dol_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_gora_O_na_X(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                            if(int(litera_x)+1-65==n)//prawy, dolny rog
                                if(tab[i-1][j]=='X' || tab[i][j-1]=='X' || tab[i-1][j]=='O' || tab[i][j-1]=='O')
                                    {
                                    tab[i][j]='X';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_lewo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_dol_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_gora_O_na_X(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                            if(int(litera_x)+1-65>1 && int(litera_x)+1-65<n) //reszta przypadkow gdzie wspolrzedna y to n
                                if(tab[i-1][j]=='X' || tab[i][j-1]=='X' || tab[i][j+1]=='X' || tab[i-1][j]=='O' || tab[i][j-1]=='O' || tab[i][j+1]=='O')
                                   {
                                    tab[i][j]='X';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_lewo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_dol_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_gora_O_na_X(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                        }
                        //sprawdzanie dla rzedow w przedziale (1,n)
                        if(liczba_y!=1 && liczba_y!=n){
                            if(int(litera_x)+1-65==1) //punkt lezy przy lewej krawedzi
                                if(tab[i-1][j]=='X' || tab[i+1][j]=='X' || tab[i][j+1]=='X' || tab[i-1][j]=='O' || tab[i+1][j]=='O' || tab[i][j+1]=='O')
                                    {
                                    tab[i][j]='X';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_lewo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_dol_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_gora_O_na_X(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                            if(int(litera_x)+1-65==n) //punkt lezy przy prawej krawedzi
                                if(tab[i-1][j]=='X' || tab[i+1][j]=='X' || tab[i][j-1]=='X' || tab[i-1][j]=='O' || tab[i+1][j]=='O' || tab[i][j-1]=='O')
                                    {
                                    tab[i][j]='X';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_lewo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_dol_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_gora_O_na_X(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                            if(int(litera_x)+1-65>1 && int(litera_x)+1-65<n) //punkt lezy gdzies w srodku planszy
                                if(tab[i-1][j]=='X' || tab[i+1][j]=='X' || tab[i][j-1]=='X' || tab[i][j+1]=='X' || tab[i-1][j]=='O' || tab[i+1][j]=='O' || tab[i][j-1]=='O' || tab[i][j+1]=='O')
                                    {
                                    tab[i][j]='X';
                                    int pom_i=i;
                                    int pom_j=j;
                                    zamiana_prawo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_lewo_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_dol_O_na_X(tab, pom_i, pom_j, n);
                                    zamiana_gora_O_na_X(tab, pom_i, pom_j, n);
                                }
                                else{
                                    system("cls");
                                    cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                                    x--;
                                    break;
                                }
                        }

                    }
                    else{
                        system("cls");
                        cout<<"Nieprawidlowe pole - podaj dane jeszcze raz"<<endl;
                        x--;
                        break;
                    }
                    }
                }
            }
        }
        else{
            cout<<endl;
            cout<<"Gracz X poddaje gre"<<endl;
            cout<<"Wygrywa gracz O!"<<endl;
            return 0;
        }

        }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(tab[i][j]=='X' || tab[i][j]=='O')
                    suma_na_koniec_rundy+=1;
            }
        }
        if(suma_na_koniec_rundy==pom){ //sprawdzanie czy zostalo podanne prawidlowe pole, jesli nie to licznik przejsc sie nie zwiksza i kolejny raz rusza ten sam gracz
            licznik++;
            suma_na_koniec_rundy=0;
            pom+=1;
            system("cls");
        }
        else
            suma_na_koniec_rundy=0;

        //wypisywanie tablicy
        cout<<endl;
        litera=65;
        cout<<"  ";
        for(int i=0; i<n; i++){
        cout<<setw(3)<<char(litera);
        litera++;
        }
        cout<<endl;
        for(int i=0; i<n; i++){
            if(i+1<10)
            cout<<i+1<<" ";
            if(i+1>=10)
            cout<<i+1;
                for(int j=0; j<n; j++){
                    cout<<setw(3)<<tab[i][j];
                }
            cout<<endl;
        }
        cout<<endl;
    }

    int suma_X=0, suma_O=0;
    //liczenie ilosci pionkow kazdego z graczy
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(tab[i][j]=='X')
                suma_X+=1;
            if(tab[i][j]=='O')
                suma_O+=1;
        }
    }
    if(suma_X>suma_O){
        cout<<endl;
        cout<<"Zwyciezyl gracz X!"<<endl;
        cout<<"Suma jego pionkow: "<<suma_X<<endl;
    }
    if (suma_X<suma_O){
        cout<<endl;
        cout<<"Zwyciezyl gracz O!"<<endl;
        cout<<"Suma jego pionkow: "<<suma_O<<endl;
    }
    if (suma_X==suma_O){
        cout<<endl;
        cout<<"Remis!"<<endl;
    }

}
