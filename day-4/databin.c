#include<stdio.h>
int main(){

float;
 int a[10];
    int i, n, sum=0;
   char file="data.bin";

       int nx = 10, ny = 10;

    long double *buff1 = new long double[nx * ny];
    long double *buff2 = new long double[nx * ny];

    long double **data = new long double *[nx];
    long double **data_read = new long  double *[nx];

    for (int i = 0; i < nx; i++)
    {
        data[i] = buff1 + (i*ny);
        data_read[i] = buff2 + (i*ny);
    }

    data[4][4] = 10.0;
    printf("%LF\n", data[4][4]);

    FILE *file = fopen("data.bin", "wb");
    fwrite(buff1, sizeof(*buff1), nx * ny, file);
    fclose(file);

    file = fopen("data.bin", "rb");
    fread(buff2, sizeof(*buff2), nx * ny, file );
    fclose(file);

    printf("%LF\n", data_read[4][4]);

       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<10;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&a[i]);
	    }

    for(i=0; i<10; i++)
    {
        sum += a[i];
    }

    printf("Sum of all elements stored in the array is : %d\n", sum);
     for (int i=0; i<10; ++i)


return 0;
}