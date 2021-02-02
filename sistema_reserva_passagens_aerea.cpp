#include <iostream>
#include <locale> //biblioteca manipulacao de diversas convenç?es culturais do utilizador (nessse codigo para acentuacao)

using namespace std;

void economica(bool* poltrona);
int main();
void p_classe(bool* poltrona){
int n;
string resposta;
        
while (1){
if(poltrona[0] == true && poltrona [1] == true && poltrona[2] == true && poltrona[3] == true && poltrona[4] == true){
	setlocale(LC_ALL, ""); //setlocale <locale>	
	cout << "Sem vaga na 1� classe. Ver vagas classe econ�mica? (sim ou nao) ";
	cin >> resposta;
    if (resposta == "nao"){
setlocale(LC_ALL, ""); //setlocale <locale>	
	cout << "O pr�ximo voo parte em 3 horas\n";
break;

}else if(resposta == "sim"){
             
economica(poltrona);
main();
                   
}else{

	cout << "Responda com sim ou nao";
 break;
 }
}
	setlocale(LC_ALL, ""); //setlocale <locale>	
	cout << "Voc� esta na op��o de reserva na 1� classe\n";
	cout << "\n";
	cout << "Escolha uma poltrona de 1 a 5, ou 0 para lista de poltronas: ";
	cin >> n;
	cout << "\n";
	if (n == 0){
for (int i = 0; i <= 4; i++){

	cout <<"Poltrona "<<i+1<< (poltrona[i] == true ? " Reservado":" Vago") << "\n";
	cout << "\n" ;
 }
}
if (poltrona[n-1] == false && n >= 1 && n <= 5){
	cout << "Poltrona " << n <<" na 1� Classe\n";
	cout << "\n";
	poltrona[n-1] = true;
for (int i = 0; i <= 4; i++){
	cout <<"Poltrona "<<i+1<< (poltrona[i] == true ? " Reservado":" Vago") << "\n";
 }break;
}

else if(poltrona[n-1] == true ){
	cout << "Poltrona " << n << " Reservada, escolha outra poltrona\n";
  }                
 } 
}

void economica(bool* poltrona){
int n;
string resposta;
        
while (1){
	setlocale(LC_ALL, ""); //setlocale <locale>	
if(poltrona[5] == true && poltrona [6] == true && poltrona[7] == true && poltrona[8] == true && poltrona[9] == true){
	cout << "Sem vaga na classe econ�mica. Ver vagas 1� classe? (sim ou nao) "; 
	cin >> resposta;
                   
if (resposta == "nao"){
	setlocale(LC_ALL, ""); //setlocale <locale>		
	cout << "O pr�ximo voo parte em 3 horas\n";
break;
}else if(resposta == "sim"){
                            
	p_classe(poltrona);
main ();                           
                   
}else{

	cout << "Resposta com sim ou nao";
break;

 }
}

setlocale(LC_ALL, ""); //setlocale <locale>	
	cout << "Voc� esta na op��o de reserva na classe econ�mica\n";
	cout << "\n";
	cout << "Escolha uma poltrona de 6 a 10, ou 0 para lista de poltronas: ";
	cin >> n;
	cout << "\n";
if (n == 0){
for (int i = 5; i <= 9; i++){
	cout <<"Poltrona "<<i+1<< (poltrona[i] == true ? " reservado":" livre") << "\n";
	cout << "\n";
 }
}
	
if (poltrona[n-1] == false && n >= 6 && n <= 10){
	setlocale(LC_ALL, ""); //setlocale <locale>	
	cout << "Voc� reservou a poltrona " << n <<" na classe econ�mica\n";
	cout << "\n";
	poltrona[n-1] = true;
for (int i = 5; i <= 9; i++){
	cout <<"Poltrona "<<i+1<< (poltrona[i] == true ? " reservado":" livre") << "\n";
	
 }break;
}

else if(poltrona[n-1] == true ){
	cout << "A poltrona " << n << "Reservada, escolha outra poltrona\n";
  }
 } 
}

int main(){
int alternativa;
bool poltrona[10] = {false,false,false,false,false,false,false,false,false,false};
while (1){
	setlocale(LC_ALL, ""); //setlocale <locale>		
	cout << "Digite 1 para 1� Classe e 2 para Econ�mica : ";
	cin >> alternativa;
	cout << "\n";
if (alternativa == 1){
	p_classe(poltrona);
}else if(alternativa == 2){
	economica(poltrona);

}else{
	
	cout << "Escolha 1 ou 2\n";
  }    
 }
    return 0;
}