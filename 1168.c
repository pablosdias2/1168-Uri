#include <stdio.h>
#include <ctype.h>

int main(){
	
 

int Numop, Numpecfa, totalpec=0,i,nOp; 
char sexoop;
float totalfolh=0, opmaiorsalario,meidapecF=0,meidapecH=0,salario_minimo,cont=0,cont2=0,c=0;


	
for (i=0;i<2;i++){ 
	
    salario_minimo=900;
    
	printf("Digite o numero do operario: ");
	scanf("%d",&Numop);

	printf("Digite o numero de pecas fabricadas no mes: ");
	scanf("%d",&Numpecfa);
 
    fflush(stdin);
	printf("Digite  o sexo do operario F=feminino M=masculino: ");
	scanf("%c",&sexoop);
   
    sexoop=toupper(sexoop);
    
    if(Numpecfa>31&&Numpecfa<50){
		 
		c=salario_minimo*0.03;
		c*=(Numpecfa-30);
		salario_minimo+=c;
		
	   }
	   
    else if(Numpecfa>50){
		
	    c=salario_minimo*0.05;
		c*=(Numpecfa-30);
		salario_minimo+=c;
		
	   }
	   
    totalfolh+=salario_minimo;
  
	totalpec+=Numpecfa;
	if(i==0){
		
		nOp=Numop;
		opmaiorsalario=salario_minimo;
       
       }
       
    else if(opmaiorsalario<salario_minimo){
			
			nOp=Numop;
			opmaiorsalario=salario_minimo;
		
		}
		
	if(sexoop=='M'){
		
		meidapecH+=(float)(Numpecfa);
		cont++;
		
		}
		
	if (sexoop=='F'){
	    
	    meidapecF+=(float)(Numpecfa);
	    cont2++;
                 
        }

	
	printf("a.O numero do operario: %d e seu salario :%.2f \n\n", Numop,salario_minimo);

	}
	
 
	printf("\nb. O total da folha de pagamento da fabrica %.2f\n",totalfolh);
	printf("c. O numero total de pecas fabricadas no mes: %d\n",totalpec);
	printf("d. A media de peças fabricadas pelos homens: %.2f\n",meidapecH/cont);
	printf("e. A media de peças fabricadas pelas mulheres: %.2f\n",meidapecF/cont2);
	printf("f. O número do operario ou da operaria de maior salario: %d  salario:%.2f\n",nOp,opmaiorsalario);
return 0;
}
