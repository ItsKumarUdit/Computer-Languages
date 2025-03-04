 #include<stdio.h>
 int main(){
 	char S1[50] = {"Udit"};
 	char S2[50] = {"Raj"};
 	int   j=0;
 	while(S1[j] != '\0'){
 		j++;
 	}
 	int i = 0;
 	while(S2[i] != '\0'){
 		S1[j] = S2[i];
 		j++;
 		i++;
	 }
	 S1[i] = '\0';
	 printf("%s",S1);
 }

