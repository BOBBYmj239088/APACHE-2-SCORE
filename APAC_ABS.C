#include<stdio.h>  /*the great apache 2 score program*/
#include<conio.h>
void main()
{
int grandapache,age,count,apachcreat,apacrit,ageapach,po2,oxyapach,apachemap,apachhr,apachpot,e,v,m,gcstot,apachgcs,resp,sod,apachph,apacherect,respapach,apachsod,apacwbc,CHP;
float creat,crit,hr,map,ph,pot,rect,wbc;
clrscr();
/*intro*/printf("\n ------------------------------------------------------------------------------\n");
printf("\n ************************** WELCOME TO THE PROGRAM FOR ************************\n");
printf("\n ACUTE PHYSIOLOGY AND CHRONIC HEALTH EVALUATION(APACHE-2) SCORE CALCULATION!! \n");
printf("\n -------------------------------------------------------------------------------\n");
count=1;
while(count<=16)
{
/*rect temp*/printf("\n ENTER THE PATIENT %d th VALUE FOR RECTAL TEMPERATURE: \n",count);
scanf("%f",&rect);
printf("\nThe Rectal Temperature is %f \n",rect);
/* NORMAL RANGE 0*//*if((rect>=36.0)&(rect<=38.4))/* FOR NORMAL RANGE 0*/
/*if(36.0<=rect<=38.4)*/ if((rect>=36.0)&(rect<=38.4))
{
apacherect=0;
printf("The APACHE 2 SCORE FOR Rectal Temperature is %d \n",apacherect);
getch();
}
/*FOR 1*/else if(((rect>=38.5)&(rect<=38.9))|((rect>=34.0)&(rect<=35.9)))/* FOR 1*/
{
apacherect=1;
printf("The APACHE 2 SCORE FOR Rectal Temperature is %d \n",apacherect);
getch();
}
/*FOR +2*/else if((rect>=32.0)&(rect<=33.9))/*FOR +2*/
{
apacherect=2;
printf("The APACHE 2 SCORE FOR Rectal Temperature is %d \n",apacherect);
getch();
}
/* FOR 3 */else if(((rect>=39.0)&(rect<=40.9))|((rect>=30.0)&(rect<=31.9)))/* FOR 3 */
{
apacherect=3;
printf("The APACHE 2 SCORE FOR Rectal Temperature is %d \n",apacherect);
getch();
}
/* FOR +4*/else if((rect>=41.0)|(rect<=29.9))/*&(apacherect!=(0&1&2&3)))/*  /*|((rect>=5.0)&(rect<=70.0)))*/
{
apacherect=4;
printf("The APACHE 2 SCORE FOR Rectal Temperature is %d \n",apacherect);
getch();
}
else
{
printf("\n INCORRECT RECTAL TEMPERATURE VALUE \n");
getch();
}
/*MAP*/printf("\n ENTER THE PATIENT%d th VALUE FOR MEAN ARTERIAL PRESSURE: \n",count);
scanf("%f",&map);
printf("\n The MEAN ARTERIAL PRESSURE FOR SUBJECT NO: %d is %f \n",count,map);
/* FOR NORMAL RANGE 0*/if((map>=70.0)&(map<=109.0))/* FOR NORMAL RANGE 0*/
{
apachemap=0;
printf("\n The APACHE 2 SCORE FOR MEAN ARTERIAL PRESSURE is %d \n",apachemap);
getch();
}
/*FOR +2*/else if(((map>=110.0)&(map<=129.0))|((map>=50.0)&(map<=69.0)))/*FOR +2*/
{
apachemap=2;
printf("\n The APACHE 2 SCORE FOR MEAN ARTERIAL PRESSURE is %d \n",apachemap);
getch();
}
/* FOR 3 */else if((map>=130.0)&(map<=159.0))
{
apachemap=3;
printf("\n The APACHE 2 SCORE FOR MEAN ARTERIAL PRESSURE is %d \n",apachemap);
getch();
}
/*                ---range for +4----------   not equal ----normal------------    -------higher-+2-------      -----lower +2--------     -----higher +3---------*/
/* FOR +4*/else if(((map<=49.0)|(map>=160.0))&(apachemap!=(0&1&2&3)))
{
apachemap=4;
printf("\n The APACHE 2 SCORE FOR MEAN ARTERIAL PRESSURE is %d \n",apachemap);
getch();
}
else
{
printf("\n INCORRECT MEAN ARTERIAL PRESSURE VALUE \n");
getch();
}
/* HEART RATE*/printf("\n ENTER THE PATIENT: %d th VALUE FOR HEART RATE: \n",count);
scanf("%f",&hr);
printf("\n The HEART RATE is %f \n",hr);
/*FOR NORMAL RANGE 0*/if((hr>=70.0)&(hr<=109.0))/* FOR NORMAL RANGE 0*/
{
apachhr=0;
printf("\n The APACHE 2 SCORE FOR HEART RATE is %d \n",apachhr);
getch();
}
/*FOR +2*/else if(((hr>=110.0)&(hr<=139.0))|((hr>=55.0)&(hr<=69.0)))/*FOR +2*/
{
apachhr=2;
printf("\n The APACHE 2 SCORE FOR HEART RATE is %d \n",apachhr);
getch();
}
/* FOR 3 */else if(((hr>=140.0)&(hr<=179.0))|((hr>=40.0)&(hr<=54.0)))
{
apachhr=3;
printf("\n The APACHE 2 SCORE FOR HEART RATE is %d \n",apachhr);
getch();
}
/* FOR +4*/else if(((hr<=39.0)|(hr>=180.0))&(apachhr!=(0&2&3)))
{
apachhr=4;
printf("\n The APACHE 2 SCORE FOR HEART RATE is %d \n",apachhr);
getch();
}
else
{
printf("\n INCORRECT HEART RATE VALUE \n");
getch();
}
/*RESPIRATORY RATE*/printf("\n ENTER THE PATIENT: %d th VALUE FOR RESPIRATORY RATE: \n",count);
scanf("%d",&resp);
printf("\n The RESPIRATORY RATE FOR SUBJECT NO: %d is %d \n",count,resp);
/* RESP-FOR NORMAL 0*//*if((resp>=12)&(resp<=24))/* FOR NORMAL RANGE 0*/
/*if(12<=resp<=24)*/if((resp>=12)&(resp<=24))
{
respapach=0;
printf("\n The APACHE 2 SCORE FOR RESPIRATORY RATE is %d \n",respapach);
getch();
}
/* FOR 1*/else if(((resp>=25)&(resp<=34))|((resp>=10)&(resp<=11)))/* FOR NORMAL RANGE 0*/
/*else if((10<=resp>=11)&(25<=resp>=34))*/
{
respapach=1;
printf("\n The APACHE 2 SCORE FOR RESPIRATORY RATE is %d \n",respapach);
getch();
}
/*FOR +2*/else if((resp>=6)&(resp<=9))/*FOR +2*/
{
respapach=2;
printf("\n The APACHE 2 SCORE FOR RESPIRATORY RATE is %d \n",respapach);
getch();
}
/* FOR 3 */else if((resp>=35)&(resp<=49))
{
respapach=3;
printf("\n The APACHE 2 SCORE FOR RESPIRATORY RATE is %d \n",respapach);
getch();

}
/* FOR +4*/else if((resp>=50)|(resp<=5))/*&(respapach!=(0&1&2&3)))*/
{
respapach=4;
printf("\n The APACHE 2 SCORE FOR RESPIRATORY RATE is %d \n",respapach);
getch();
}
else
printf("INCORRECT RESPIRATORY RATE VALUE \n");
getch();
/* oxygenation WITH paO2 VALUES*/
printf("\n ENTER THE patient: %d th VALUE FOR pO2: \n",count);
scanf("%d",&po2);
/* normal range=0 */ if (po2>70)
{
oxyapach=0;
printf("\n THE APACHE-2 VALUE FOR THE pO2 VALUE IS %d \n",oxyapach);
getch();
}
/* for the weight 1 */else if ((po2>=61)&(po2<=70))
{
oxyapach=1;
printf("\n THE APACHE-2 VALUE FOR THE pO2 VALUE IS %d \n",oxyapach);
getch();
}
/* for the weight 3 */else if((po2>55)&(po2<=60))
{
oxyapach=3;
printf("\n THE APACHE-2 VALUE FOR THE pO2 VALUE IS %d \n",oxyapach);
getch();
}
/* for the weight 4 */else if ((po2<55)&(oxyapach!=0&1&3))
{
oxyapach=4;
printf("\n THE APACHE-2 VALUE FOR THE pO2 VALUE IS %d \n",oxyapach);
getch();
}
else
{
printf("\n INCORRECT pO2 VALUE \n");
}
/* ARTERIAL pH---*/printf("\n ENTER THE patient: %d th VALUE FOR ARTERIAL pH: \n",count);
scanf("%f",&ph);
printf("\n The ARTERIAL pH is %f \n",ph);
/*normal range*/if((ph>=7.33)&(ph<=7.49))/* FOR NORMAL RANGE 0*/
{
apachph=0;
printf("\n The APACHE 2 SCORE FOR ARTERIAL pH is %d \n",apachph);
getch();
}
/*FOR +1*/else if((ph>=7.50)&(ph<=7.59))/*FOR +1*/
{
apachph=1;
printf("\n The APACHE 2 SCORE FOR ARTERIAL pH is %d \n",apachph);
getch();
}
/* FOR 2 */else if((ph>=7.25)&(ph<=7.32))
{
apachph=2;
printf("\n The APACHE 2 SCORE FOR ARTERIAL pH is %d \n",apachph);
getch();
}
/* FOR 3 */else if(((ph>=7.6)&(ph<=7.69))|((ph>=7.15)&(ph<=7.24)))
{
apachph=3;
printf("\n The APACHE 2 SCORE FOR ARTERIAL pH is %d \n",apachph);
getch();
}
/* FOR +4*/else if((ph>=7.7)|(ph<=7.15))/*&(apachph!=(0&1&2&3)))*/
{
apachph=4;
printf("\n The APACHE 2 SCORE FOR ARTERIAL pH is %d \n",apachph);
getch();
}
else
{
printf("\n INCORRECT ARTERIAL pH VALUE \n");
}
/*sodium*/printf("\n ENTER THE patient: %d th VALUE FOR SERUM SODIUM: \n",count);
scanf("%d",&sod);
printf("\n The value for SERUM SODIUM is %d \n",sod);
/* FOR NORMAL RANGE 0*/if((sod>=130)&(sod<=149))
{
apachsod=0;
printf("\n The APACHE 2 SCORE FOR SERUM SODIUM is %d \n",apachsod);
getch();
}
/*FOR +1*/else if((sod>=150)&(sod<=154))/*FOR +1*/
{
apachsod=1;
printf("\n The APACHE 2 SCORE FOR SERUM SODIUMis %d \n",apachsod);
getch();
}
/* FOR 2 */else if(((sod>=155)&(sod<=159))|((sod>=120)&(sod<=129)))
{
apachsod=2;
printf("\n The APACHE 2 SCORE FOR SERUM SODIUM is %d \n",apachsod);
getch();
}
/* FOR 3 */else if(((sod>=160)&(sod<=179))|((sod>=111)&(sod<=119)))
{
apachsod=3;
printf("\n The APACHE 2 SCORE FOR SERUM SODIUM is %d \n",apachsod);
getch();
}
/* FOR +4*/else if((sod>=180)|(sod<=110))/*&(apachsod!=(0&1&2&3)))*/
{
apachsod=4;
printf("\n The APACHE 2 SCORE FOR SERUM SODIUM is %d \n",apachsod);
getch();
}
else
{
printf("\n INCORRECT SERUM SODIUM VALUE \n");
getch();
}
/*POTASSIUM*/printf("\n ENTER THE patient: %d th VALUE FOR SERUM POTASSIUM: \n",count);
scanf("%f",&pot);
printf("\n The value for SERUM POTASSIUM is %f \n",pot);
/* FOR NORMAL RANGE 0 if((pot>=3.5)&(pot<=5.4)) FOR NORMAL RANGE 0*/
if (3.5<=pot<=5.4)
{
apachpot=0;
printf("The APACHE 2 SCORE FOR SERUM POTASSIUM is %d \n",apachpot);
getch();
}
/*FOR +1*/else if(((pot>=5.5)&(pot<=5.99))|((pot>=3.0)&(pot<=3.4)))/*FOR +1*/
{
apachpot=1;
printf("\n The APACHE 2 SCORE FOR SERUM POTASSIUM is %d \n",apachpot);
getch();
}
/* FOR 2 */else if((pot>=2.5)&(pot<=2.9))
{
apachpot=2;
printf("\n The APACHE 2 SCORE FOR SERUM POTASSIUM is %d \n",apachpot);
getch();
}
/* FOR 3 */else if((pot>=6.0)&(pot<=6.9))
{
apachpot=3;
printf("\n The APACHE 2 SCORE FOR SERUM POTASSIUM is %d \n",apachpot);
getch();
}
/* FOR +4*/else if((pot>=7.0)&(pot<=2.5))/*&(apachpot!=(0&1&2&3)))*/
{
apachpot=4;
printf("\n The APACHE 2 SCORE FOR POTASSIUM is %d \n",apachpot);
getch();
}
else
printf("INCORRECT SERUM POTASSIUM VALUE \n");
getch();
/*creatinine*/printf("\n ENTER THE patient: %d th VALUE FOR SERUM CREATININE: \n",count);
scanf("%f",&creat);
printf("\n The SERUM CREATININE is %f \n",creat);
/* FOR NORMAL RANGE 0*/if((creat>=0.6)&(creat<=1.4))/* FOR NORMAL RANGE 0*/
{
apachcreat=0;
printf("\n The APACHE 2 SCORE FOR SERUM CREATININE is %d \n",apachcreat);
getch();
}
/*FOR +2*/else if(((creat>=1.5)&(creat<=1.9))||(creat<=0.6))/*FOR +2*/
{
apachcreat=2;
printf("\n The APACHE 2 SCORE FOR SERUM CREATININE is %d \n",apachcreat);
getch();
}
/* FOR 3 */else if((creat>=2.0)&(creat<=3.4))
{
apachcreat=3;
printf("\n The APACHE 2 SCORE FOR SERUM CREATININE is %d \n",apachcreat);
getch();
}
/* FOR +4*/else if((creat>=3.5)&(apachcreat!=(0&1&2&3)))
{
apachcreat=4;
printf("\n The APACHE 2 SCORE FOR SERUM CREATININE is %d \n",apachcreat);
getch();
}
else
{
printf("\n INCORRECT SERUM CREATININE VALUE \n");
getch();
}
/*hematocrit*/printf("\n ENTER THE patient: %d th VALUE FOR HAEMATOCRIT: \n",count);
scanf("%f",&crit);
printf("\n The HAEMATOCRIT VALUE ENTERED IS %f \n",crit);
/* HEMATOCRIT--FOR NORMAL RANGE 0*/if((crit>=30.0)&(crit<=45.9))/* FOR NORMAL RANGE 0*/
{
apacrit=0;
printf("\n The APACHE 2 SCORE FOR HAEMATOCRIT is %d \n",apacrit);
getch();
}
/*FOR +1*/else if((crit>=46.0)&(crit<=49.9))/*FOR +1*/
{
apacrit=1;
printf("\n The APACHE 2 Score for HAEMATOCRIT is %d \n",apacrit);
getch();
}
/*FOR +2*/else if(((crit>=50.0)&(crit<=59.9))|((crit>=20.0)&(crit<=29.9)))/*FOR +2*/
{
apacrit=2;
printf("\n The APACHE 2 Score for HAEMATOCRIT is %d \n",apacrit);
getch();
}
/* FOR +4*/else if((crit>=60.0)|(crit<20.0))/*&(apacrit!=(0&1&2)))*/
{
apacrit=4;
printf("\n The APACHE 2 Score for HAEMATOCRIT is %d \n",apacrit);
getch();
}
else
{
printf("\n INCORRECT HAEMATOCRIT VALUE \n");
getch();
}
/*wbc total cell count*/printf("\n ENTER THE patient: %d th VALUE FOR TOTAL WBC COUNT: \n",count);
scanf("%f",&wbc);
printf("\n The TOTAL WBC COUNT is %f \n",wbc);
/* WBC-FOR NORMAL RANGE 0*/if((wbc>=3.0)&(wbc<=14.9))/* FOR NORMAL RANGE 0*/
{
apacwbc=0;
printf("\n The APACHE 2 Score for TOTAL WBC COUNT is %d \n",apacwbc);
getch();
}
/*FOR +1*/else if((wbc>=15.0)&(wbc<=19.9))/*FOR +1*/
{
apacwbc=1;
printf("\n The APACHE 2 Score for TOTAL WBC COUNT is %d \n",apacwbc);
getch();
}
/*FOR +2*/else if(((wbc>=20.0)&(wbc<=39.9))|((wbc>=1.0)&(wbc<=2.9)))/*FOR +2*/
{
apacwbc=2;
printf("\n The APACHE 2 Score for TOTAL WBC COUNT is %d \n",apacwbc);
getch();
}
/* FOR +4*/else if((wbc>=40.0)|(wbc<=1.0))/*&(apacwbc!=(1&2&3)))*/
{
apacwbc=4;
printf("\n The APACHE 2 Score for TOTAL WBC COUNT is %d \n",apacwbc);
getch();
}
else
{
printf("\n INCORRECT TOTAL BLOOD COUNT(WBC) VALUE \n");
getch();
}
/*GCS*/printf("\n ENTER THE patient: %d th VALUE FOR EYE MOVEMENT: \n",count);
scanf("%d",&e);
printf("\n ENTER THE patient: %d th VALUE FOR VERBAL SKILLS: \n",count);
scanf("%d",&v);
printf("\n ENTER THE patient: %d th VALUE FOR MOTOR CAPACITY: \n",count);
scanf("%d",&m);
printf("\n THE GCS YOU ENTERED IS E %d V %d M %d \n",e,v,m);
gcstot=e+v+m;
apachgcs=15-gcstot;
printf("\n The Total GCS value is: %d \n",gcstot);
printf("\n The APACHE 2 score for GCS is %d \n",apachgcs);
getch();
/*age*/ printf("\n Enter the patient: %d th value for Age: \n",count);
scanf("%d",&age);
printf("\n The Age value you entered is: %d \n",age);
/* for normal range*/if(age<=44)
{
ageapach=0;
printf("\n The Apache 2 score for this Age value is %d\n",ageapach);
getch();
}
/* for the value 2*/else if ((age>=45)&(age<=54))
{
ageapach=2;
printf("\n The Apache 2 score for this Age value is %d\n",ageapach);
getch();
}
/* for the value 3*/else if ((age>=55)&(age<=64))
{
ageapach=3;
printf("\n The Apache 2 score for this Age value is %d\n",ageapach);
getch();
}
/* for the value 5 */else if ((age>=65)&(age<=74))
{
ageapach=5;
printf("\n The Apache 2 score for this Age value is %d\n",ageapach);
getch();
}
/* for the value 6 */else if ((age>=75)&(ageapach!=(0&2&3&5)))
{
ageapach=6;
printf("\n The Apache 2 score for the patient no: %d value is %d\n",count,ageapach);
getch();
}
else
{
printf("\n The Age value is Incorrect \n");
getch();
}
/*CHP*/printf("Enter the CHP for Patient no: %d  [only 0 or 2 or 5] \n",count);
scanf("%d",CHP);
/*grandapache*/
grandapache=apachcreat+apacrit+ageapach+oxyapach+apachemap+apachhr+apachpot+apachgcs+apachph+apacherect+respapach+apachsod+apacwbc+CHP;
/*int grandapache,age,count,apachcreat,apacrit,
int   ageapach,po2,oxyapach,apachemap,apachhr,apachpot,
int   e,v,m,gcstot,apachgcs,resp,sod,apachph,apacherect,
int   respapach,apachsod,apacwbc,CHP;
float creat,crit,hr,map,ph,pot,rect,wbc; */
printf("------------------------------------------------------------------------\n");
printf("The APACHE-2 SCORE for the Rectal Temperature value: %f         is: %d \n",rect,apacherect);
printf("The APACHE-2 SCORE for the Mean Arterial Pressure value: %f     is: %d\n",map,apachemap);
printf("The APACHE-2 SCORE for the Heart Rate value: %f                 is: %d \n",hr,apachhr);
printf("The APACHE-2 SCORE for the Respiratory Rate value: %d           is: %d \n",resp,respapach);
printf("The APACHE-2 SCORE for the Oxygenation value: %d                is: %d \n",po2,oxyapach);
printf("The APACHE-2 SCORE for the Arterial pH value: %f                is: %d \n",ph,apachph);
printf("The APACHE-2 SCORE for the Serum Sodium value: %d               is: %d \n",sod,apachsod);
printf("The APACHE-2 SCORE for the Serum Pottasium value: %f            is: %d \n",pot,apachpot);
/*int grandapache,age,count,apachcreat,apacrit,
int   ageapach,po2,oxyapach,apachemap,apachhr,apachpot,
int   e,v,m,gcstot,apachgcs,resp,sod,apachph,apacherect,
int   respapach,apachsod,apacwbc,CHP;
float creat,crit,hr,map,ph,pot,rect,wbc; */
printf("The APACHE-2 SCORE for the Serum Creatinine value: %f        is: %d \n",creat,apachcreat);
printf("The APACHE-2 SCORE for the Hematocrit value: %f              is: %d \n",crit,apacrit);
printf("The APACHE-2 SCORE for the WBC Count(TLC) value: %f          is: %d \n",wbc,apacwbc);
printf("The APACHE-2 SCORE for the GCS(Sensorium) value: %d          is: %d \n",gcstot,apachgcs);
printf("The APACHE-2 SCORE for the Age value: %d                     is: %d \n",age,ageapach);
printf("The APACHE-2 SCORE for the Chronic Health Point value        is: %d \n",CHP);
printf("-------------------------------------------------------------------------\n");
printf("THE APACHE-2 SCORE FOR PATIENT NO: %d IS %d \n",count,grandapache);
printf("-------------------------------------------------------------------------\n");
count=count+1;
}
}