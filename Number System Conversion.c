
#include <stdio.h>
#include <math.h>

int rem,sum,tmp;

int decimalBinary(int x){
	int i=1;
	sum=0;
	while(x>0){
		rem=x % 2;
		sum=sum+rem * i;
		i=i*10;
		x=x/2;
	}
	printf("\t\t\t\t\tBinary:%d",sum);
	return 0;
}

int decimalOctal(int x){
	int i,cnt=0,octal[32];
	sum=0;
	while(x>0){
		octal[cnt]=x % 8;
		x=x/8; 
		cnt++;
	}
	printf("\t\t\t\t\tOctal:");
	for(i=(cnt-1);i>=0;i--){
		printf("%d",octal[i]);
	}
	return 0;
}

int decimalHex(int x){
	int i=0;
	char hex[32];
	sum=0;
	while(x>0){
		rem=x % 16;
		if(rem<=9){
			hex[i]=(rem + 0x30);
		}
		else{
			if(rem==10){
				hex[i]='A';
			}
			else if(rem==11){
				hex[i]='B';
			}
			else if(rem==12){
				hex[i]='C';
			}
			else if(rem==13){
				hex[i]='D';
			}
			else if(rem==14){
				hex[i]='E';
			}
			else if(rem==15){
				hex[i]='F';
			}
			
		}
		x=x/16;
		i++;			
	}
	sum=i;
	printf("\t\t\t\t\tHex:");
	for(i=(sum-1);i>=0;i--){
	
		printf("%c",hex[i]);
	}
	return 0;
}

int binaryDecimal(int x){
	int i=0;
	sum=0;
	
	while(x>0){
		rem=x % 10;
		sum=sum+(rem*pow(2,i));
		i++;
		x=x/10;
	}

	return sum;
}

int octalDecimal(int x){
	sum=0;
	int i=0;
	while(x>0){
		rem=x%10;
		sum=sum+(rem*pow(8,i));
		x=x/10;
		i++;
	}
	return sum;
}
int hexDecimal(char* x){
	int i,y;
	i=y=0;
	sum=0;
	printf("%c",*x);
	while(*x!='\0'){
		y=*x-0x30;
		printf("\n\n%d",y);
		sum=sum+(y*pow(16,i));
		*(x++);
		i++;
	}
	printf("%d",sum);
}
void binaryOctal(int x){
	int y=binaryDecimal(x);
	decimalOctal(y);
	
}
void binaryHex(int x){
	int y=0;
	y=binaryDecimal(x);
	decimalHex(y);

}
void octalBinary(int x){
	int y=0;
	y=octalDecimal(x);
	decimalBinary(y);
}
int print(int x){
	int num;
	if(x==0){
	printf("\t\t\t\t\tEnter a Binary number:");
	}
	if(x==1){
	printf("\t\t\t\t\tEnter a Octal number:");
	}
	if(x==2){
	printf("\t\t\t\t\tEnter a Decimal number:");
	}
	if(x==3){
	printf("\t\t\t\t\tEnter a Hexadecimal number:");
	}

	scanf("%d",&num);
	return num;
}

int main(){
	int num,digit,choose;
	char ch='y';
	while(ch=='y' ||ch=='Y'){
	
	printf("\n\n\n\n\t\t\t\t*---Number System Conversion Programs---*\n");
	printf("\n\t\t\t\t\t1.Decimal To Binary.");
	printf("\n\t\t\t\t\t2.Decimal To Octal.");
	printf("\n\t\t\t\t\t3.Decimal To Hexadecimal.");
	printf("\n\t\t\t\t\t4.Binary To Decimal.");
	printf("\n\t\t\t\t\t5.Octal To Decimal.");
	printf("\n\t\t\t\t\t6.Hexadecimal To Decimal.");
	printf("\n\t\t\t\t\t7.Binary To Octal.");
	printf("\n\t\t\t\t\t8.Binary To Hexadecimal.");
	printf("\n\t\t\t\t\t9.Octal To Binary.");
	printf("\n\t\t\t\t\t10.Hexadecimal To Binary.");
	printf("\n\n\t\t\t\t\tWhich Operation?[1-11]:");
	scanf("%d",&choose);
	switch(choose){
		case 1:num=print(2);
			   decimalBinary(num);break;
		case 2:num=print(2);
				decimalOctal(num);break;
		case 3:num=print(2);
		    	decimalHex(num);break;
		case 4:num=print(0);
          		printf("\t\t\t\t\tDecimal:%d",binaryDecimal(num));break;
		case 5:num=print(1);
				printf("\t\t\t\t\tDecimal:%d",octalDecimal(num));break;
//		case 6:num=print();
//				isArmstrong(num);break;
		case 7:	num=print(0);
				binaryOctal(num);break;
		case 8:num=print(0);
				binaryHex(num);break;
		case 9:num=print(1);
				octalBinary(num);break;
//		case 10:num=print();
//				powerof2(num);break;
	
    }
	sleep(1);fflush(stdin);
	printf("\n\n\t\t\t\t\tDo you want to continue?[Y-N]:");
	scanf("%c",&ch);
	}
	
	return 0;
}
	
