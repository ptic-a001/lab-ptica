#include <stdio.h>

int exp_a(int a){
	a = (a*a);
	return a;
}
int moduleo_ab(int a,int b){
	int mod_ab;
	mod_ab = a%b;
	if (mod_ab < 0)
	{
		mod_ab+=b;
	}
	return mod_ab;
}
int maximum(int a, int b){
	if (a >= b){
		return a;
	}
	else return b;

}
int minimum(int a,int b){
	if (a<=b){
		return a;
	}
	else return b;
}
int absolute(int a){
	if (a >=0)
		return a; 
	else return a*(-1);
}

int main(){
	int t;
	int i=13;
	int j=-9;
	int l=-4;
	int i_i;
	int j_j;
	for (t=1; t<50; t+=1) {
		i_i = i;
		j_j = j;
		if ((j<=-10) && (j>=-20) && ((exp_a(i+10)+exp_a(j+10))<=100) && ((exp_a(i+20)+exp_a(j+20))<=100))
			break;
		i = (moduleo_ab(i+j,30)/(moduleo_ab(absolute(l),5) + 1) + (moduleo_ab((i+l),30))/(moduleo_ab(absolute(j),5)+1));
		j = (moduleo_ab(maximum(t*i_i,(t+1)*j),25) - absolute(j-l)/10);
		l = (absolute(j_j-l)/10 + minimum(moduleo_ab(i_i+l,20),moduleo_ab(j_j*t,20))-10);
	}
	if (t == 50)
		printf("%s%d%s%d\n%s%d\n%s%d\n%s","Координаты точки: ",i," ",j,"Параметр движения: ",l,"Время: ",t,"Не попало");
	else
		printf("%s%d%s%d\n%s%d\n%s%d\n%s","Координаты точки: ",i," ",j,"Параметр движения: ",l,"Время: ",t,"Попало");
}


