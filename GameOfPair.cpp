#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	
	int kotak_2[4][4];
    int kotak_1[4][4];
	int g,h,x,z,a,b,c,d,e,f,i,j,k,l,m,n;
    char pil1,pil2;

    kotak_1[0][0]=0;    b=0;		
    kotak_1[0][1]=0;    c=0;		
    kotak_1[0][2]=0;    d=0;		
    kotak_1[0][3]=0;    e=0;		
    kotak_1[1][0]=0;    f=0;		
    kotak_1[1][1]=0;    g=0;		
    kotak_1[1][2]=0;    h=0;		
    kotak_1[1][3]=0;    i=0;		
    kotak_1[2][0]=0;					
    kotak_1[2][1]=0;					
    kotak_1[2][2]=0;					
    kotak_1[2][3]=0;				
    kotak_1[3][0]=0;				
    kotak_1[3][1]=0;					
    kotak_1[3][2]=0;					
    kotak_1[3][3]=0;					

	kotak_2[0][0]=0;
    kotak_2[0][1]=0;
    kotak_2[0][2]=0;
    kotak_2[0][3]=0;
    kotak_2[1][0]=0;
    kotak_2[1][1]=0;
    kotak_2[1][2]=0;
    kotak_2[1][3]=0;
    kotak_2[2][0]=0;
    kotak_2[2][1]=0;
    kotak_2[2][2]=0;
    kotak_2[2][3]=0;
    kotak_2[3][0]=0;
    kotak_2[3][1]=0;
    kotak_2[3][2]=0;
    kotak_2[3][3]=0;

	for( x=0;x<=3;x++)
	{
		for( z=0;z<=3;z++)
		{
			a= rand()%8+1;
			kotak_1[x][z] = a;
		
				if(a==1&&b==2){z--;}
		    		else if (a==1&&b<2){ b++;}
				if(a==2&&c==2){z--;}
				    else if (a==2&&c<2){ c++;}
				if(a==3&&d==2){z--;}
				    else if (a==3&&d<2){ d++;}
				if(a==4&&e==2){z--;}
				    else if (a==4&&e<2){ e++;}
				if(a==5&&f==2){z--;}
				    else if (a==5&&f<2){ f++;}
				if(a==6&&g==2){z--;}
				    else if (a==6&&g<2){ g++;}
				if(a==7&&h==2){z--;}
				    else if (a==7&&h<2){ h++;}
				if(a==8&&i==2){z--;}
				    else if (a==8&&i<2){ i++;}

		}	
	}
proses:
	printf("		       Kholilul Rachman Nur Manab (17081010055)\n\t");
	printf("   	    	FINAL PROJECT PEMROGRAMAN DASAR <GAME OF PAIR> \n\t");
	printf("     	   Pembimbing:Pak Wahyu.S.J.Saputra, S.Kom.,M.Kom. \n\n\n");
	printf("Kotak 1 \n");
	
 for(z=0;z<=3;z++){
    for(x=0;x<=3;x++){


         if(kotak_2[z][x]==1){printf("[ %i ]",kotak_1[z][x]);}
        else if(kotak_2[z][x]==0){printf("[ ? ]");}
    }printf("\n");
}


printf("Kotak 3 (Hint)");
printf("\n[ a ][ b ][ c ][ d ]\n[ e ][ f ][ g ][ h ]\n[ i ][ j ][ k ][ l ]\n[ m ][ n ][ o ][ p ]\n\n");

printf("Masukkan pilihan abjad-1 anda => (Hint)\n ");
pil1 = getchar();

char alp[213];
gets(alp);

printf("Masukkan pilihan abjad-2 anda => (Hint)\n ");
pil2 = getchar();

printf("\n");
        switch (pil1)
		{
			case 'a' : kotak_2[0][0]=1; break;
			case 'b' : kotak_2[0][1]=1; break;
			case 'c' : kotak_2[0][2]=1; break;
			case 'd' : kotak_2[0][3]=1; break;
			case 'e' : kotak_2[1][0]=1; break;
			case 'f' : kotak_2[1][1]=1; break;
			case 'g' : kotak_2[1][2]=1; break;
			case 'h' : kotak_2[1][3]=1; break;
			case 'i' : kotak_2[2][0]=1; break;
			case 'j' : kotak_2[2][1]=1; break;
			case 'k' : kotak_2[2][2]=1; break;
			case 'l' : kotak_2[2][3]=1; break;
	        case 'm' : kotak_2[3][0]=1; break;
			case 'n' : kotak_2[3][1]=1; break;
			case 'o' : kotak_2[3][2]=1; break;
			case 'p' : kotak_2[3][3]=1; break;
			
			default : printf(" error\t"); break;
		}


       switch (pil2)
	   {
			case 'a' : kotak_2[0][0]=1; break;
			case 'b' : kotak_2[0][1]=1; break;
			case 'c' : kotak_2[0][2]=1; break;
			case 'd' : kotak_2[0][3]=1; break;
			case 'e' : kotak_2[1][0]=1; break;
			case 'f' : kotak_2[1][1]=1; break;
			case 'g' : kotak_2[1][2]=1; break;
			case 'h' : kotak_2[1][3]=1; break;
			case 'i' : kotak_2[2][0]=1; break;
			case 'j' : kotak_2[2][1]=1; break;
			case 'k' : kotak_2[2][2]=1; break;
			case 'l' : kotak_2[2][3]=1; break;
	        case 'm' : kotak_2[3][0]=1; break;
			case 'n' : kotak_2[3][1]=1; break;
			case 'o' : kotak_2[3][2]=1; break;
			case 'p' : kotak_2[3][3]=1; break;


			default : printf(" error\t"); break;
		}
gets(alp);

