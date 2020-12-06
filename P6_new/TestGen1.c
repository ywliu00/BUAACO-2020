#include <stdio.h>
int main()
{
	int Tnew,Tuse,lx;
	freopen("test_autogen.asm", "w", stdout);
	printf("ori $1, $0, 0x5678\n");
	printf("ori $3, $0, 0x4567\n");
	printf("lui $2, 0xABCD\n\
lui $4, 0x4321\n\
ori $20, $0, 8  #DMµÿ÷∑\n\
sw $1, 0($0)\n\
sw $1, 4($0)\n\
sw $1, 8($0)\n\
sw $2, 12($0)\n\
sw $2, 16($0)\n\
sw $2, 20($0)\n\n");
	printf("#################### Case 1 ########################\n");
	for(lx=0;lx<1;lx++)
	{
		for(Tuse=0; Tuse<3; Tuse++)
		{
			for(Tnew=1; Tnew<4; Tnew++)
			{
				switch(Tnew)
				{
					case 1:printf("lui $5, 0xABCD #Tnew=%d\n", Tnew);break;
					case 2:printf("ori $5, $0, 0x5678 #Tnew=%d\n", Tnew);break;
					case 3:printf("lw $5, -4($20) #Tnew=%d\n", Tnew);break;
				}
				switch(lx)
				{
					case 0:printf("addu $8, $0, $0\n");break;
					case 1:printf("ori $5, $0, 0x5678 #Tnew=%d\n", Tnew);break;
				}
				switch(Tuse)
				{
					case 0:{
						if(Tnew == 1) printf("beq $5, $1, BDest%d_%d_2 #Tuse=%d\n", Tnew, Tuse, Tuse);
						else printf("beq $5, $2, BDest%d_%d_2\n", Tnew, Tuse);
						printf("nop\nori $8, $0, 0x1234\n");
						printf("BDest%d_%d_2:\naddu $5, $5, $5\n", Tnew, Tuse);
						break;
					}
					case 1:{
						printf("addu $5, $5, $1 #Tuse=%d\n", Tuse);
						break;
					}
					case 2:{
						printf("sw $5, 100($0) #Tuse=%d\n", Tuse);
						break;
					}
				}
				printf("\n");
			}
			
		}
	}
	
	printf("#################### Case 2 ########################\n");
	for(Tuse=0; Tuse<3; Tuse++)
	{
		for(Tnew=1; Tnew<4; Tnew++)
		{
			switch(Tnew)
			{
				case 1:printf("lui $5, 0xABCD #Tnew=%d\n", Tnew);break;
				case 2:printf("ori $5, $0, 0x5678 #Tnew=%d\n", Tnew);break;
				case 3:printf("lw $5, -4($20) #Tnew=%d\n", Tnew);break;
			}
			switch(Tuse)
			{
				case 0:{
					if(Tnew == 1) printf("beq $5, $1, BDest%d_%d_1 #Tuse=%d\n", Tnew, Tuse, Tuse);
					else printf("beq $5, $2, BDest%d_%d_1 #Tuse=%d\n", Tnew, Tuse, Tuse);
					printf("nop\nori $8, $0, 0x1234 #Tuse=%d\n", Tuse);
					printf("BDest%d_%d_1:\naddu $5, $5, $5 #Tuse=%d\n", Tnew, Tuse, Tuse);
					break;
				}
				case 1:{
					printf("addu $5, $5, $1 #Tuse=%d\n", Tuse);
					break;
				}
				case 2:{
					printf("sw $5, 100($0) #Tuse=%d\n", Tuse);
					break;
				}
			}
			printf("\n");
		}
	}
	
	printf("#################### Case 3 ########################\n");
	int Tnew1;
	for(Tuse=0; Tuse<3; Tuse++)
	{
		for(Tnew1=0; Tnew1<3; Tnew1++)
		{
			for(Tnew=1; Tnew<4; Tnew++)
			{
				switch(Tnew)
				{
					case 1:printf("lui $5, 0xABCD #Tnew=%d\n", Tnew);break;
					case 2:printf("ori $5, $0, 0x5678 #Tnew=%d\n", Tnew);break;
					case 3:printf("lw $5, -4($20) #Tnew=%d\n", Tnew);break;
				}
				switch(Tnew1)
				{
					case 0:printf("lui $5, 0x4321 #Tnew1=%d\n", Tnew1);break;
					case 1:printf("ori $5, $0, 0x4567 #Tnew1=%d\n", Tnew1);break;
					case 2:printf("lw $5, 8($20) #Tnew1=%d\n", Tnew1);break;
				}
				switch(Tuse)
				{
					case 0:{
						if(Tnew1 == 1) printf("beq $5, $4, BDest%d_%d_%d_3 #Tuse=%d\n", Tnew, Tnew1, Tuse, Tuse);
						else printf("beq $5, $3, BDest%d_%d_%d_3 #Tuse=%d\n", Tnew, Tnew1, Tuse, Tuse);
						printf("nop\nori $8, $0, 0x1234 #Tuse=%d\n", Tuse);
						printf("BDest%d_%d_%d_3:\naddu $5, $5, $5 #Tuse=%d\n\n", Tnew, Tnew1, Tuse, Tuse);
						break;
					}
					case 1:{
						printf("addu $5, $5, $1 #Tuse=%d\n", Tuse);
						break;
					}
					case 2:{
						printf("sw $5, 100($0) #Tuse=%d\n", Tuse);
						break;
					}
				}
				printf("\n");
			}
		}
	}
}
