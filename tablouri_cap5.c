#include <stdio.h>
int main(){
/*
unsigned m[20][20],n;
int i,j;
unsigned indice=0;
do{
    printf("numarul de linii si coloane ale matricei patratice: ");
    scanf("%u",&n);
}while(n<2);
printf("\n");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    scanf("%u",&m[i][j]);
    }
}
printf("\n");
printf("afisare matrice:\n\n");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    printf("%3u ",m[i][j]);
    }
printf("\n");
}
//simetrie fata de diagonala principala

for(i=0;i<n;i++){
    for(j=0;j<n;j++){
         if((m[i][j]==m[j][i]) && (i!=j)) indice++;
    }
}
printf("\n");
if(indice==n*(n-1))
    printf("matricea este simetrica fata de diagonala principala!");
else
    printf("matricea nu este simetrica fata de diagonala principala!");

//matrice inferior triunghiulara
indice=0;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
         if((m[i][j]==0) && (i<j)) indice++;
    }
}
printf("\n");
if(indice==n*(n-1)/2)
    printf("matricea este inferior triunghiulara!\n");
else
    printf("matricea nu este inferior triunghiulara!\n");


//problema 7

int a[10][10],m,n,k;
int i,j;
int indice=0,linie=0;
do{
    printf("numar linii(mai mare sau egal ca 2): ");
    scanf("%d",&m);
}while(m<2);
printf("\n");
do{
    printf("numar coloane(mai mare sau egal ca 2): ");
    scanf("%d",&n);
}while(n<2);
printf("\n");
do{
    printf("numar de elemente nenule(<=n): ");
    scanf("%d",&k);
}while(k>n);
printf("\n");

printf("introducerea elementelor:\n\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("afisare matrice:\n\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%3d ",a[i][j]);
    }
printf("\n");
}
printf("\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if(a[i][j]!=0) indice++;
    }
if(indice==k){
    printf("linia %d verifica proprietatea\n",i+1);
    linie++;
}
indice=0;
}
printf("\n");
if(linie==0) printf("nicio linie nu verifica proprietatea!\n");

//problema 2 (o singura aparitie in sir)

#define DIM 15
int s[DIM],n,aparitie=1,i,j;
do{
    printf("numar de elemente ale sirului: ");
    scanf("%d",&n);
}while((n<1) || (n>=DIM));
printf("\n");

for(i=0;i<n;i++)
    scanf("%d",&s[i]);
printf("\n");
for(i=0;i<n;i++)
    printf("%d ",s[i]);
printf("\n\n");

for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if((s[i]==s[j]) && (i!=j)) aparitie++;
    }
if(aparitie==1) printf("numarul %d are o singura aparitie\n", s[i]);
aparitie=1;
}


//problema 5

#define DIM 20
int x[DIM],n,val,i=0,j,succes=0;
do{
    printf("numar elemente:");
    scanf("%d",&n);
}while(n<2 || n>=DIM);
printf("\n");
printf("elementele trebuie introduse in ordine crescatoare:\n\n");
scanf("%d",&x[i]);
for(i=1;i<n;i++){
    scanf("%d",&x[i]);
    if (x[i]<=x[i-1]){
        printf("sirul trebuie sa fie crescator\n");
        i--;
    }
}
printf("\n\n");
for(i=0;i<n;i++) printf("%3d ",x[i]);

printf("\n\n");
printf("introduceti valoarea val=");
scanf("%d",&val);

if(x[0]>val){
    for(i=n;i>0;i--)
     x[i]=x[i-1];
     x[0]=val;
     succes=1;
}
else{
for(i=0;i<n-1;i++)
    if((x[i]<val) && (x[i+1]>val)){
    for(j=n;j>i+1;j--) x[j]=x[j-1];
    x[i+1]=val;
    succes=1;
    break;
    }
    if((val>x[i])&& succes==0){
        x[i+1]=val;
        succes=1;
        }
    }
printf("\n\n");
if(succes==1){
    n++;
    printf("noul sir este:");
    for(i=0;i<n;i++)
            printf("%3d ",x[i]);
    }
else
    printf("valoarea nu poate fi adaugata in sir");*/


//problema 4 probleme propuse

#define DIM 20
float a[DIM];
int b[DIM],n,i,j=0;
float suma=0.0,medie=0.0;
for(i=0;i<DIM;i++) b[i]=0.0;
do{
    printf("numar de elemente vector(<20): ");
    scanf("%d",&n);
}while((n<2) || (n>=DIM));
printf("\n\n");
printf("\introduceti valorile sirului:\n");
for(i=0;i<n;i++){
    scanf("%f",&a[i]);
}
printf("\n");
for(i=0;i<n;i++){
    printf("%3.2f ",a[i]);
}
///////////////////////////////////////////
for(i=0;i<n;i++) suma+=a[i];
medie=suma/n;
printf("\nmedie=%.2f\n\n",medie);
for(i=0;i<n;i++){
    if(a[i]>medie){
        b[j]=i+1;
        j++;
    }
}
for(i=0;i<j;i++){
    printf("%d ",b[i]);
}
printf("\n");


return 0;
}


//mi se pare o prostie codul tau!

