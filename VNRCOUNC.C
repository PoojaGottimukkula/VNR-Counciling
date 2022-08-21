//program to check whether can you get a seat in vnr vjiet through Eamcet ranking.
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{long int caste,rank,gender;
clrscr();
printf("enter your eamcet rank");
scanf("%ld",&rank);
printf("enter the number that is specified to your caste:\noc-1\nbc_a-2\nbc_b-3\nbc_c-4\nbc_d-5\nbc_e-6\nsc-7\nst-8\n");
scanf("%ld",&caste);
printf("your gender:press 1 for male and 2 for female\n");
scanf("%ld",&gender);
if(gender==2)
	 {
	  switch(caste)
		{case 1:if(rank>0 && rank<1426)
				printf("you get cse");
			else if(rank<1592)
				printf("you get csm");
			else if(rank<2241)
				printf("you get csd");
			else if(rank<2591)
				printf("you get csc");
			else if(rank<2676)
				printf("you get iot");
			else if(rank<3151)
				printf("you get csbs");
			else if(rank<3461)
				printf("you get ece");
			else if(rank<3419)
				printf("you get it");
			else if(rank<7292)
				printf("you get eee");
			else if(rank<13159)
				printf("you get civil engineering");
			else if(rank<14593)
				printf("you get eie");
			else if(rank<15152)
				printf("you get mechanical engineering");
			else if(rank<21177)
				printf("you get automobile engineering");
			break;
		case 2:if(rank>0 && rank<5361)
				printf("you get csc");
			else if(rank<5782)
				printf("you get cse");
			else if(rank<5898)
				printf("you get csm");
			else if(rank<6513)
				printf("you get csd");
			else if(rank<10038)
				printf("you get csbs");
			else if(rank<11580)
				printf("you get iot");
			else if(rank<11669)
				printf("you get it");
			else if(rank<14814)
				printf("you get ece");
			else if(rank<24338)
				printf("you get eee");
			else if(rank<35950)
				printf("you get civil engineering");
			else if(rank<51322)
				printf("you get mechanical engineering");
			else if(rank<51944)
				printf("you get automobile engineering");
			else if(rank<74395)
				printf("you get eie");
			break;
		 case 3:if(rank>0 && rank<2198)
				printf("you get cse");
			else if(rank<2643)
				printf("you get csd");
			else if(rank<3884)
				printf("you get csm");
			else if(rank<4329)
				printf("you get csc");
			else if(rank<4363)
				printf("you get iot");
			else if(rank<4416)
				printf("you get csbs");
			else if(rank<5276)
				printf("you get ece");
			else if(rank<5792)
				printf("you get it");
			else if(rank<14945)
				printf("you get eee");
			else if(rank<25750)
				printf("you get civil engineering");
			else if(rank<26492)
				printf("you get eie");
			else if(rank<36595)
				printf("you get mechanical engineering");
			else if(rank<57480)
				printf("you get automobile engineering");
			break;
		 case 4:if(rank>0 && rank<1592)
				printf("you get csm");
			else if(rank<2241)
				printf("you get csd");
			else if(rank<3151)
				printf("you get csbs");
			else if(rank<3461)
				printf("you get ece");
			else if(rank<7171)
				printf("you get cse");
			else if(rank<10969)
				printf("you get csc");
			else if(rank<12574)
				printf("you get it");
			else if(rank<15152)
				printf("you get mechanical engineering");
			else if(rank<18083)
				printf("you get iot");
			else if(rank<24524)
				printf("you get eee");
			else if(rank<35452)
				printf("you get civil engineering");
			else if(rank<42177)
				printf("you get eie");
			else if(rank<82150)
				printf("you get automobile engineering");
			break;
		 case 5:if(rank>0 && rank<2660)
				printf("you get cse");
			else if(rank<3270)
				printf("you get csm");
			else if(rank<4355)
				printf("you get csd");
			else if(rank<4595)
				printf("you get csc");
			else if(rank<5555)
				printf("you get csbs");
			else if(rank<5945)
				printf("you get it");
			else if(rank<6148)
				printf("you get ece");
			else if(rank<6635)
				printf("you get iot");
			else if(rank<10781)
				printf("you get eee");
			else if(rank<22549)
				printf("you get civil engineering");
			else if(rank<26025)
				printf("you get eie");
			else if(rank<32304)
				printf("you get mechanical engineering");
			else if(rank<55417)
				printf("you get automobile engineering");
			break;
		 case 6:if(rank>0 && rank<4668)
				printf("you get cse");
			else if(rank<5022)
				printf("you get csc");
			else if(rank<7638)
				printf("you get csm");
			else if(rank<8343)
				printf("you get iot");
			else if(rank<9131)
				printf("you get csd");
			else if(rank<14511)
				printf("you get it");
			else if(rank<16167)
				printf("you get ece");
			else if(rank<21693)
				printf("you get eee");
			else if(rank<35897)
				printf("you get civil engineering");
			else if(rank<38772)
				printf("you get csbs");
			else if(rank<41561)
				printf("you get mechanical engineering");
			else if(rank<53230)
				printf("you get automobile engineering");
			else if(rank<78155)
				printf("you get eie");
			break;
		 case 7:if(rank>0 && rank<12166)
				printf("you get cse");
			else if(rank<19388)
				printf("you get csm");
			else if(rank<20281)
				printf("you get ece");
			else if(rank<25338)
				printf("you get it");
			else if(rank<26235)
				printf("you get csd");
			else if(rank<28761)
				printf("you get eee");
			else if(rank<31826)
				printf("you get csc");
			else if(rank<34747)
				printf("you get iot");
			else if(rank<35056)
				printf("you get csbs");
			else if(rank<35105)
				printf("you get civil engineering");
			else if(rank<55300)
				printf("you get mechanical engineering");
			else if(rank<76522)
				printf("you get eie");
			else if(rank<80730)
				printf("you get automobile engineering");
			break;
		 case 8:if(rank>0 && rank<14805)
				printf("you get cse");
			else if(rank<17100)
				printf("you get csm");
			else if(rank<20694)
				printf("you get civil engineering");
			else if(rank<22274)
				printf("you get eee");
			else if(rank<22752)
				printf("you get ece");
			else if(rank<24449)
				printf("you get csd");
			else if(rank<25502)
				printf("you get iot");
			else if(rank<27875)
				printf("you get it");
			else if(rank<31573)
				printf("you get mechanical engineering");
			else if(rank<34240)
				printf("you get csc");
			else if(rank<61219)
				printf("you get csbs");
			else if(rank<77132)
				printf("you get automobile engineering");
			else if(rank<77331)
				printf("you get eie");
			break;
		}
	 }

else if(gender==1)
	 {
	  switch(caste)
		{case 1:if(rank>0 && rank<1397)
				printf("you get cse");
			else if(rank<1559)
				printf("you get csm");
			else if(rank<1768)
				printf("you get csd");
			else if(rank<2325)
				printf("you get csc");
			else if(rank<2329)
				printf("you get iot");
			else if(rank<3067)
				printf("you get csbs");
			else if(rank<3354)
				printf("you get it");
			else if(rank<3461)
				printf("you get ece");
			else if(rank<5003)
				printf("you get eee");
			else if(rank<8847)
				printf("you get mechanical engineering");
			else if(rank<11725)
				printf("you get civil engineering");
			else if(rank<14515)
				printf("you get eie");
			else if(rank<21177)
				printf("you get automobile engineering");
			break;
		 case 2:if(rank>0 && rank<3355)
				printf("you get cse");
			else if(rank<5361)
				printf("you get csc");
			else if(rank<5898)
				printf("you get csm");
			else if(rank<6513)
				printf("you get csd");
			else if(rank<9024)
				printf("you get iot");
			else if(rank<10038)
				printf("you get csbs");
			else if(rank<11669)
				printf("you get it");
			else if(rank<12530)
				printf("you get ece");
			else if(rank<24338)
				printf("you get eee");
			else if(rank<26885)
				printf("you get civil engineering");
			else if(rank<29504)
				printf("you get mechanical engineering");
			else if(rank<44559)
				printf("you get automobile engineering");
			else if(rank<71750)
				printf("you get eie");
			break;
		 case 3:if(rank>0 && rank<2198)
				printf("you get cse");
			else if(rank<2355)
				printf("you get csm");
			else if(rank<2643)
				printf("you get csd");
			else if(rank<3360)
				printf("you get iot");
			else if(rank<3425)
				printf("you get csc");
			else if(rank<4416)
				printf("you get csbs");
			else if(rank<4773)
				printf("you get it");
			else if(rank<5276)
				printf("you get ece");
			else if(rank<8988)
				printf("you get eee");
			else if(rank<17309)
				printf("you get mechanical engineering");
			else if(rank<19183)
				printf("you get civil engineering");
			else if(rank<25315)
				printf("you get eie");
			else if(rank<32524)
				printf("you get automobile engineering");
			break;
		 case 4:if(rank>0 && rank<1559)
				printf("you get csm");
			else if(rank<1768)
				printf("you get csd");
			else if(rank<2329)
				printf("you get iot");
			else if(rank<3067)
				printf("you get csbs");
			else if(rank<3461)
				printf("you get ece");
			else if(rank<7171)
				printf("you get cse");
			else if(rank<8847)
				printf("you get mechanical engineering");
			else if(rank<10969)
				printf("you get csc");
			else if(rank<11725)
				printf("you get civil engineering");
			else if(rank<12574)
				printf("you get it");
			else if(rank<14515)
				printf("you get eie");
			else if(rank<24524)
				printf("you get eee");
			else if(rank<82150)
				printf("you get automobile engineering");
			break;
		 case 5:if(rank>0 && rank<2501)
				printf("you get cse");
			else if(rank<3270)
				printf("you get csm");
			else if(rank<3624)
				printf("you get csd");
			else if(rank<4270)
				printf("you get csc");
			else if(rank<4573)
				printf("you get iot");
			else if(rank<4838)
				printf("you get it");
			else if(rank<5115)
				printf("you get ece");
			else if(rank<5555)
				printf("you get csbs");
			else if(rank<9046)
				printf("you get eee");
			else if(rank<13815)
				printf("you get mechanical engineering");
			else if(rank<15595)
				printf("you get civil engineering");
			else if(rank<26025)
				printf("you get eie");
			else if(rank<27795)
				printf("you get automobile engineering");
			break;
		 case 6:if(rank>0 && rank<3067)
				printf("you get csbs");
			else if(rank<3458)
				printf("you get cse");
			else if(rank<4293)
				printf("you get csm");
			else if(rank<4752)
				printf("you get csd");
			else if(rank<5022)
				printf("you get csc");
			else if(rank<8343)
				printf("you get iot");
			else if(rank<9854)
				printf("you get ece");
			else if(rank<11786)
				printf("you get it");
			else if(rank<21693)
				printf("you get eee");
			else if(rank<22682)
				printf("you get civil engineering");
			else if(rank<41561)
				printf("you get mechanical engineering");
			else if(rank<53230)
				printf("you get automobile engineering");
			else if(rank<78155)
				printf("you get eie");
			break;
		 case 7:if(rank>0 && rank<12166)
				printf("you get cse");
			else if(rank<15216)
				printf("you get csm");
			else if(rank<16361)
				printf("you get csd");
			else if(rank<18218)
				printf("you get csc");
			else if(rank<19725)
				printf("you get ece");
			else if(rank<20069)
				printf("you get iot");
			else if(rank<25338)
				printf("you get it");
			else if(rank<27757)
				printf("you get eee");
			else if(rank<29410)
				printf("you get civil engineering");
			else if(rank<34776)
				printf("you get mechanical engineering");
			else if(rank<35056)
				printf("you get csbs");
			else if(rank<71673)
				printf("you get automobile engineering");
			else if(rank<76522)
				printf("you get eie");
			break;
		 case 8:if(rank>0 && rank<3067)
				printf("you get csbs");
			else if(rank<9529)
				printf("you get cse");
			else if(rank<17100)
				printf("you get csm");
			else if(rank<17322)
				printf("you get ece");
			else if(rank<18866)
				printf("you get eee");
			else if(rank<19592)
				printf("you get it");
			else if(rank<20694)
				printf("you get civil engineering");
			else if(rank<20970)
				printf("you get csc");
			else if(rank<23305)
				printf("you get mechanical engineering");
			else if(rank<24449)
				printf("you get csd");
			else if(rank<25502)
				printf("you get iot");
			else if(rank<52185)
				printf("you get automobile engineering");
			else if(rank<58434)
				printf("you get eie");
			break;
		}
	 }
else printf("you are not eligible to get into vnr through counciling");
getch();
return 0;
}
