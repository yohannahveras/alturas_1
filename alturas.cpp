#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, quantidade;
    double soma, media, percentual;
    
    cout << "Quantas pessoas serao digitadas? \n";
    cin >> n;
    
    string nome[n];
    int idade[n];
    double altura[n];
    
    for (int i = 0; i < n; i++) {
        cout << "Dados da " << i+1 << "a pessoa:\n";
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
    }
    
    soma = 0;
    for (int i = 0; i < n; i++) {
        soma = soma + altura[i];
    }
    
    media = soma / n;
    cout << fixed << setprecision(2);
    cout << endl << "Altura media: " << media << endl;
    
    quantidade = 0;
    for (int i = 0; i < n; i++) {
        if (idade[i] < 16) {
        quantidade++;
        }
    }
    
    percentual = (quantidade * 100.0) / n;
    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << percentual << "%" << endl;
    
    for (int i = 0; i < n; i++) {
        if (idade[i] < 16) {
        cout << nome[i] << endl;
        }
    }
    
    return 0;
}
