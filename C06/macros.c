#include <stdio.h>

#define Plus(a, b) (a+b)
#define Minu(a, b) (a-b)
#define Mult(a, b) (a*b)
#define Dive(a, b) (a/b)

#define Print_F(Str) printf("%s", Str)
#define Print_P(Stn) puts(Stn)
#define Print_Fp(Stn) fputs(Stn, stdout)

int main(){
	int x,i;
	x = 60;
	i = 20;

	printf("%d + %d = %d\n", x, i, Plus(x, i));
	printf("%d - %d = %d\n", x, i, Minu(x, i));
	printf("%d * %d = %d\n", x, i, Mult(x, i));
	printf("%d / %d = %d\n", x, i, Dive(x, i));

	Print_F("- I had hoped to spare you\n");
	Print_P("- Being a man");
	Print_Fp("- it can be lifetime of anguish and tragedy\n- That is the curse\n");
	
	return 0;
}
