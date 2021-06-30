#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<cs50.h>

string ari(string s){
float characters=0;
float words=0;
float sentences=0;
for(int i=0;i<strlen(s);i++){
if(isalnum(s[i])){
characters +=1;
}else if(s[i]=='.'||s[i]=='!'||s[i]=='?'){
sentences +=1;
}
}
int index;
index= 4.71*(characters/words) + 0.5*(words/sentences) - 21.43;
index +=1;
if(index==1){return "Kindergarden";}
if(index==2){return "First/Second Grade";}
if(index==3){return "Third Grade";}
if(index==4){return "Fourth Grade";}
if(index==5){return "Fifth Grade";}
if(index==6){return "Sixth Grade";}
if(index==7){return "Seventh Grade";}
if(index==8){return "Eigth Grade";}
if(index==9){return "Ninth Grade";}
if(index==10){return "Tenth Grade";}
if(index==11){return "Eleventh Grade";}
if(index==12){return "Twelfth Grade";}
if(index==13){return "College Student";}
if(index>=14){return "Professor";}
}
