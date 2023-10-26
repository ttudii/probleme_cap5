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

    //problema 4

    #define DIM 20
    int x[DIM],n,val,i=0,j,identice=0;

    do
    {
        printf("numar elemente:");
        scanf("%d",&n);
    }while(n<2 || n>=DIM);

    printf("\n");
    for(i=0; i<n; i++) scanf("%d",&x[i]);

    printf("\n\n");
    for(i=0; i<n; i++) printf("%3d ",x[i]);
    printf("\n");

    for(i=0;i<n-1;i++){
        if(x[i]==x[i+1]) identice++;
    }
        if(identice==n-1) printf("toate identice\n");
    else
        if(identice==0) printf("toate diferite\n");
    else
        if((identice>0) && (identice<n)) printf("oarecare\n");


    //problema 5

    #define DIM 20
    int x[DIM],n,i=0,j=0,k=0,identice;

    do
    {
        printf("numar elemente:");
        scanf("%d",&n);
    }while(n<2 || n>=DIM);

    printf("\n");
    for(i=0; i<n; i++) scanf("%d",&x[i]);

    printf("\n\n");
    for(i=0; i<n; i++) printf("%3d ",x[i]);
    printf("\n");
    i=j=0;
    while(i<n){
            for(j=i+1;j<n;j++){
                if(x[i]==x[j]){
                        for(k=j;k<n-1;k++) x[k]=x[k+1];
                        n--;
                        j--;
                }
            }
        i++;
        }
    printf("\n\n");
    for(i=0; i<n; i++) printf("%3d ",x[i]);


    //problema 6

    #define DIM 20
    int x[DIM],y[DIM],n,p,i=0,j=0,k=0,identice;

    do
    {
        printf("numar elemente:");
        scanf("%d",&n);
    }while(n<2 || n>=DIM);

    do{
    printf("introduceti valoarea p=");
    scanf("%d",&p);
    }while(p<0);

    printf("\n");
    for(i=0; i<n; i++) scanf("%d",&x[i]);

    printf("\n\n");
    for(i=0; i<n; i++) printf("%3d ",x[i]);
    printf("\n");
    i=j=0;
    while(i<n){
            if((i+p)<n){
                y[i+p]=x[i];
                i++;
                //j++;
            }
            else
            if((i+p)>=n){
                y[(i+p)%n]=x[i];
                i++;
                //j++;
            }
    }

    printf("\n\n");
    for(i=0; i<n; i++) printf("%3d ",y[i]);

    //problema 7


    #define DIM 30
    int m[DIM][DIM],n,i,j;
    do
    {
        printf("Introduceti nr de linii si de coloane: ");
        scanf("%d",&n);
    }while((n<2)||(n>DIM));
    printf("\n\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d",&m[i][j]);
    }
    printf("\n\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%3d ",m[i][j]);
        printf("\n");
    }
    printf("\n");
    for(i=0; i<n; i++) printf("%3d ",m[i][i]);
    printf("\n");
    for(i=0; i<n; i++) printf("%3d ",m[i][n-i-1]);
    printf("\n");
    printf("Valorile din triunghiul superior sunt:\n\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i<j) printf("%3d ",m[i][j]);
            }
    printf("\n");
    }

    //elementele de pe conturul matricei
    printf("elementele de pe conturul matricei: \n\n");
    for(i=0;i<n;i++) printf("%3d ",m[0][i]);
    for(i=1;i<n;i++) printf("%3d ",m[i][n-1]);
    for(i=n-2;i>=0;i--) printf("%3d ",m[n-1][i]);
    for(i=n-2;i>0;i--) printf("%3d ",m[i][0]);
    printf("\n\n");
    //spirala
    printf("elementele afisate in spirala: \n\n");
    if(n%2==0){
    for(j=0;j<(n/2);j++){
    for(i=j;i<n-j;i++) printf("%3d ",m[j][i]);
    for(i=j+1;i<(n-j);i++) printf("%3d ",m[i][n-j-1]);
    for(i=n-j-2;i>=j;i--) printf("%3d ",m[n-j-1][i]);
    for(i=n-j-2;i>j;i--) printf("%3d ",m[i][j]);
    }
    }
    else{
    for(j=0;j<((n/2)+1);j++){
    for(i=j;i<n-j;i++) printf("%3d ",m[j][i]);
    for(i=j+1;i<(n-j);i++) printf("%3d ",m[i][n-j-1]);
    for(i=n-j-2;i>=j;i--) printf("%3d ",m[n-j-1][i]);
    for(i=n-j-2;i>j;i--) printf("%3d ",m[i][j]);
    }
    }*/

    //problema 8
    int a[30][30],b[30][30],s[30][30],m,n,p,q,i,j;
    do
    {
        printf("nr de linii matrice a: ");
        scanf("%d",&m);
        printf("nr de coloane matrice a: ");
        scanf("%d",&n);
    }
    while((m>30)||(n>30)|| (m<1)|| (n<1));

    printf("\n");
    do
    {
        printf("nr de linii matrice b: ");
        scanf("%d",&p);
        printf("nr de coloane matrice b: ");
        scanf("%d",&q);
    }
    while((p>30)||(q>30)|| (p<1)|| (q<1));

    //matrice A
    printf("\ncitire elemente A: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\nafisare matrice A:\n\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%3d ",a[i][j]);
        }
        printf("\n");
    }
    //matrice B
    printf("\ncitire elemente B: \n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n\nafisare matrice B:\n\n");
    for(i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
        {
            printf("%3d ",b[i][j]);
        }
        printf("\n");
    }

    if((m==p)&&(n==q))
    {
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                s[i][j]+=(a[i][j]+b[i][j]);
            }
        }
        printf("\n\nSuma matricelor este:\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%3d ",s[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("nu se poate efectua a+b\n");


    //inmultirea matricelor

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            s[i][j]=0;
        }
    }

    printf("\n\nInmultirea matricelor este: \n\n");
    int k,suma;
    if(n==p)
    {
        for(i=0; i<m; i++)
        {
            for(j=0; j<q; j++)
            {
                int ip=0,jp=0;
                suma=0;
                for(k=0; k<p; k++)
                {
                    suma+=a[i][jp]*b[ip][j];
                    ip++;
                    jp++;
                }
                printf("%3d ",suma);

            }
            printf("\n");
        }
    }
    else
        printf("\nnu se poate efectua a*b\n");

return 0;
}


//mi se pare o prostie codul tau!

