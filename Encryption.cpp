#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int gcd( int m, int n)
{
	while( m!= n) // execute loop until m == n
	{
		if( m > n)
			m = m - n; // large - small , store the results in large variable
		else
			n = n - m;
	}
	return ( m); // m or n is GCD
}

void sort(int arr[])
{
 int i, j, temp ;
	for ( i = 0 ; i <= 7 ; i++ )
	{
		for ( j = i + 1 ; j <= 8 ; j++ )
		{
			if ( arr[i] > arr[j] )
			{
				temp = arr[i] ;
				arr[i] = arr[j] ;
				arr[j] = temp ;
			}
		}
	}
}

int sum(int a[])
{
   int i, sum=0;
   for (i=0; i<8; i++)
   {
	 sum = sum + a[i];
   }
   return(sum);
}

int main()
{
    printf("\nInitialising the super-increasing sequence\n");
    int w[8],i,j,qt,q,r;
    int b[8],a[8];
    int c=0;

    for(i=0;i<9;i++)
		srand(time(NULL));
    
	for(i=0;i<8;i++)
		w[i]=rand()%1000;
    
	qt=sum(w);
    q=rand()%10000;
    
	while(q<qt)
	{
		q=rand()%10000;
	}
	
	sort(w);
    printf("\nThe super-increasing sequence is: ");
    
	for(j=0;j<8;j++)
		printf("%d\t",w[j]);
    
	printf("\nThe value of sigma W is %d",qt);
    printf("\nThe value of q chosen is %d\n",q);
    rep:r=rand();
    
	while(gcd(q,r)!=1)
    {
        r=rand();                  
    }
    
	if(q<r) goto rep;
    
	printf("\nThe value of r chosen is %d\n",r);
    
	for(i=0;i<8;i++)
    {
        b[i]=(r*w[i])%q;
    }
    
	printf("\nThe public key beta is \n");
    
	for(j=0;j<8;j++)
		printf("%d\t",b[j]);
    
    printf("\nEnter the 8-bit string to be encrypted\n");
    
	for(i=0;i<8;i++)
		scanf("%d",&a[i]);
    
	printf("\nThe Encrypted Ciphertext is\n");
    
	for(i=0;i<8;i++)
		c+=(a[i]*b[i]);
    
	printf("%d\t",c);
    scanf("%d");
    
	return 0;
}
