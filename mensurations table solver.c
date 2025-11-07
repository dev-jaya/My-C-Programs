#include <stdio.h>
#include <conio.h>
#include <math.h>
       
        void main()
  {
      float a,b,c,d,e,f,g,h,i,j,k,l,volume, surface_area,total_surface_area,slant_height,pi,base_side;
        printf("\n ----FOR 3D SHAPES----");
        
           printf("\n ///CUBE///");
           
        printf("\nenter side of a cube = ");
        
        scanf("%f",&a);
         volume = a*a*a;
         printf("\nvolume of a cube = %.2f",volume);
         surface_area = 4*a*a;
         printf("\n surface area of a cube = %.2f",surface_area);
         total_surface_area = 6*a*a;
         printf("\nTotal surface area of cube = %.2f",total_surface_area);
         
        printf("\n ----CUBOID----");
        
        printf("\n enter length = ");
        scanf("%f",&b);
        printf("\n enter breadth = ");
        scanf("%f",&c);
        printf("\n enter height = ");
        scanf("%f",&d);
        volume = b*c*d;
        printf("\n volume of a cuboid= %.2f",volume);
        surface_area = (2*d*(b+c));
        printf("\n surface area of a cuboid = %.2f", surface_area);
        total_surface_area = 2*((b*c)+(c*d)+(d*b));
        printf("\ntotal surface area of a cuboid\n = %.2f", total_surface_area);
         
           printf("\n///CYLINDER///");
          
          printf("\nEnter radious = ");
          scanf("%f",&e);
          printf("\nEnter height = ");
          scanf("%f",&f);
          pi = 3.1415  ;
          volume = pi*e*e*f;
          printf("\nvolume of cylinder = %.2f",volume);
          surface_area = 2*pi*e*f;
          printf("\n surface_area of cylinder = %.2f",surface_area);
          total_surface_area = (2*pi*e*(f+e)) ;
          printf("\nTotal surface area of cylinder= %.2f",total_surface_area);
          
          printf("\n////CONE////");
          
          printf("\n Enter radius = ");
          scanf("%f",&g);
          printf("\n Enter height = ");
          scanf("%f",&h);
           
           pi= 3.1415 ;
           volume = ((1.0/3.0)*pi*g*g*h) ;
           printf("\n volume of cone = %.2f",volume);
           surface_area = pi*g*h;
           printf("\n surface area of cone = %.2f",surface_area);
           total_surface_area = (pi*g*(g+h));
           printf("\n total surface area of cone = %.2f",total_surface_area);
           
           printf("\n//// SPHERE ////");
           
            printf("\nenter radious of sphere = ");
            scanf("%f",&i);
            pi = 3.1415 ;
            volume = 4.0/3.0*pi*i*i*i ;
            printf("\n volume of sphere = %.2f",volume);
            total_surface_area = 4*pi*i*i ;
            printf("\n Total surface area of sphere = %.2f",total_surface_area);
            surface_area = 4*pi*i*i ;
            printf("\nSurface area of sphere = %.2f",surface_area);
            
               printf("\n////HEMISPHERE////");
               
                  printf("\n Enter radious of hemisphere  = ");
                  scanf("%f",&j);
                  pi= 3.1415 ;
                  volume = (2.0/3.0)*pi*j*j*j ;
                  total_surface_area = 3*pi*j*j ;
                  surface_area = 2*pi*j*j ;
                  printf("\nvolume of hemisphere = %.2f",volume);
                  printf("\nTotal surface area of hemisphere = %.2f",total_surface_area);
                  printf("\nsurface area of hemisphere = %.2f",surface_area);
                     
                     printf("\n////PYRAMID////");
                        printf("\n Enter base area of pyramid = ");
                        scanf("%f",&k);
                        printf("\n Enter height of pyramid = ");
                        scanf("%f",&l);
                          volume = ((1.0/3.0)*k*l) ;
                          slant_height = sqrt(l*l + (k/2)*(k/2));      ///except surface of cone should use slant height not vertical height.
                          base_side = sqrt(k);
                          surface_area = ((1.0/2.0)*(4*base_side)*slant_height) ;
                          total_surface_area = surface_area + k ;
                          printf("\n volume of Pyramid = %.2f ",volume);
                          printf("\n slant height of pyramid= %.2f",slant_height);
                          printf("\n surface area of pyramid = %.2f",surface_area);
                          printf("\n Total surface area of pyramid = %.2f",total_surface_area);
                          
                          
                          /// surface_area = LSA (letaral surface area)
            getch();       /// code by ''''M.JAYA BRAMHENDRA KUMAR'''' 🤩😘😘😘😘😘😘😘😘😘😘😁😁😁😁😁😁😁😁😁😁😁😁😁😁😁😁😁😁😁😁😁😁
                              /// P/Q will give approx.value 
                             ///No data loss for normal 10th class numbers.
                               //Program is ready to run for school level mensuration.😋😘🥰

                              //👋👋 All the best 🥰🥰
  }