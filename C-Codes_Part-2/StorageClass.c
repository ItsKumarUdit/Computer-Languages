#include <stdio.h>

extern int x = 5;

void func1() {
    auto int autoVar = 10;
    register int registerVar = 20;
    static int staticVar = 30;

    printf("Inside func1:\n");
    printf("autoVar: %d\n", autoVar);
    printf("registerVar: %d\n", registerVar);
    printf("staticVar: %d\n", staticVar);
    printf("extern x = %d\n",x);
    
    staticVar++; 
	 
}

void func2() {
	static int staticVar;
    printf("Inside func2:\n");
    printf("staticVar (from func1): %d\n", staticVar);
	printf("extern x = %d\n",x);  
}

int main() {
    printf("Inside main:\n");

    func1();
    func2();

    func1();  

    return 0;
}

