#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char choice;
    printf("\t\t\t\t\tWELCOME TO CHITKARA UNIVERSITY\n");
    printf("\t\t\t\t\t\t(Punjab-Rajpura)\n");
    printf("-----STREAMS AVIALABLE-----");
    printf("\nA-ENGINEERING");
    printf("\nB-MBA");
    printf("\nC-M.E/MTECH");
    printf("\nD-Medicine & health sciences");
    printf("\nCHOOSE YOUR STREAM-->");
    scanf("%c",&choice);
    switch(choice)
    {
         case 'a':

        printf("\n1-B.E in Mechanical engineering");
        printf("\n2-B.E. in Civil Engineering");
        printf("\n3-Diploma in Mechanical Engineering");
        printf("\nENTER YOUR COURSE-->");
        scanf("%d",&a);
         switch(a)
        {
          case 1:
              printf("\nSUBJECTS");
              printf("\n1-Engineering Maths ");
              printf("\n2-Problem Solving Technique using C");
              printf("\n3-Engineering Graphics Lab");
              printf("\n4-Elements of Mechanical Engineering");
              printf("\nTOTAL FEES\t\t\tDURATION\n");
              printf("\n6.40lakh\t\t\t4 YEARS");

              break;
          case 2:
               printf("\nSUBJECTS");
              printf("\n1-Strength of Materials");
              printf("\n2-Construction Technology");
              printf("\n3-Concrete Technologies");
              printf("\n4-Soil Mechanics");
              printf("\nTOTAL FEES\t\t\tDURATION\n");
              printf("\n6.40lakh\t\t\t4 YEARS");
              break;
          case 3:
          printf("\nSUBJECTS");
              printf("\n1-Foundation Science Courses");
              printf("\n2-Intensive Focus on developing Communication Skills");
              printf("\n3-Basic Courses in Electrical & Electricity\n");
              printf("\nTOTAL FEES\t\t\tDURATION");
              printf("\n1.80lakh\t\t\t3 YEARS");
              break;
        }
           break;

    case 'b':
        printf("\n1-MBA in Marketing");
        printf("\n2-MBA in Finance and Banking");
        printf("\n3-MBA in Pharmaceutical Management");
        printf("\nENTER YOUR COURSE-->");
        scanf("%d",&a);
         switch(a)
        {
          case 1:
              printf("\nSUBJECTS");
              printf("\n1-Marketing Management/ Financial Accounting");
              printf("\n2-Organisational Behaviour & Management Principles");
              printf("\n3-Economics for Managers/ Statistics for Managers\n");
              printf("\nTOTAL FEES\t\t\tDURATION");
              printf("\n4.95lakh\t\t\t2 YEARS");
              break;
          case 2:
              printf("\nSUBJECTS");
              printf("\n1-Marketing Management/ Financial Accounting");
              printf("\n2-Organisational Behaviour & Management Principles");
              printf("\n3-Economics for Managers/ Statistics for Managers\n");
              printf("\nTOTAL FEES\t\t\tDURATION");
              printf("\n4.95lakh\t\t\t2 YEARS");
              break;
          case 3:
             printf("\nSUBJECTS");
              printf("\n1-Pharmaceutical Marketing Management");
              printf("\n2-Anatomy/ Physiology Pharmacology");
              printf("\n3-Pharma Distribution Management\n");
              printf("\nTOTAL FEES\t\t\tDURATION");
              printf("\n2.50lakh\t\t\t2 YEARS");
              break;

        }
        break;
    case 'c':
        printf("\n1-M.E. in Computer Science and Engineering");
        printf("\n2-M.E. in Electronics and Communication Engineering");
        printf("\n3-M.E. in Mechanical Engineering");
          printf("\nENTER YOUR COURSE-->");
        scanf("%d",&a);
         switch(a)
        {
          case 1:
               printf("\nSUBJECTS");
              printf("\n1-Algorithm and Complexity");
              printf("\n2-Mobile Computing");
              printf("\n3-Advanced Computer Architecture\n");
              printf("\nTOTAL FEES\t\t\tDURATION");
              printf("\n2.40lakh\t\t\t2 YEARS");
              break;

          case 2:
              printf("\nSUBJECTS");
              printf("\n1-Mixed Signal Circuit Design");
              printf("\n2-Mixed Signal Circuit Design Lab");
              printf("\n3-Digital Image Processing\n");
              printf("\nTOTAL FEES\t\t\tDURATION");
              printf("\n2.40lakh\t\t\t2 YEARS");
              break;
          case 3:
            printf("\nSUBJECTS");
              printf("\n1-Advance Engineering Mathematics");
              printf("\n2-Product Design and Development");
              printf("\n3-Finite Element Method\n");
              printf("\nTOTAL FEES\t\t\tDURATION");
              printf("\n2.40lakh\t\t\t2 YEARS");
              break;
        }
        break;
        case 'd':
        printf("\n1-B.Pharma.");
        printf("\n2-B.Sc. in Medical Imaging Technology in collaboration with Fortis Healthcare");
        printf("\n3-Bachelor of Optometry in collaboration with Sankara Eye Care");
          printf("\nENTER YOUR COURSE-->");
        scanf("%d",&a);
         switch(a)
        {
          case 1:
               printf("\nSUBJECTS");
              printf("\n1-General Pharmacy");
              printf("\n2-Technical English");
              printf("\n3-Pharmaceutical Analysis - I\n");
              printf("\nTOTAL FEES\t\t\tDURATION");
              printf("\n6.40lakh\t\t\t4 YEARS");
              break;

          case 2:
              printf("\nSUBJECTS");
              printf("\n1-Human Anatomy");
              printf("\n2-Human Physiology");
              printf("\n3-Radiation Physics\n");
              printf("\nTOTAL FEES\t\t\tDURATION");
              printf("\n3 lakh\t\t\t3 YEARS");
              break;
          case 3:
            printf("\nSUBJECTS");
              printf("\n1-Basic Biochemistry & Nutrition");
              printf("\n2-General & Ocular Physiology & Anatomy");
              printf("\n3-Physical & Geometric Optics\n");
              printf("\nTOTAL FEES\t\t\tDURATION");
              printf("\n4.40lakh\t\t\t4 YEARS");
            break;
        }
        break;
          default:
        printf("SORRY");
    }

}


