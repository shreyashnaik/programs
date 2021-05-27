#include<stdio.h>
int count =0;
void check()
{
	char a = 'a';
	printf("%c",a-32);
}
void fun(char word[])
{ char ans[50];
	int k=0;
 for(int i=0;word[i]!='\n';i++)
 {
  if(count ==0)
  {
 	 if(word[i]=='a'||word[i]=='A'||word[i]=='e'||word[i]=='E'||word[i]=='i'||word[i]=='I'||word[i]=='o'||word[i]=='O'||word[i]=='u'||word[i]=='U')
 	 {
       word[i] ='$';
  	 }
  }else if(count==1)
           {
              if(word[i]=='a'||word[i]=='A'||word[i]=='e'||word[i]=='E'||word[i]=='i'||word[i]=='I'||word[i]=='o'||word[i]=='O'||word[i]=='u'||word[i]=='U')
 	           {
                 continue;
  	           }else
  	            word[i] ='#';
            }else if(count==2){
               word[i] = word[i]-32;
            }

}
 for(int i=0;word[i]!='\n';i++)
 {
 	if(word[i+1]=='\n')
 	{
 		ans[k] = word[i];
 		k++;
 		ans[k] = ' ';
 		k++;
 	}else{
 	ans[k] = word[i];
 	k++;
 }
 	if(word[i+1]=='\n')
 	{
 		if(count==3)
 		{
 			ans[k]='\n';
 		}
 		break;
 	}
 }
 count++;
 for(int i=0;ans[i]!='\n';i++)
 {
  printf("%c",ans[i]);
 }
}


void main()
{
	char one[50];
	char two[50];
	char three[50];
	fgets(one,sizeof(one),stdin);
	fgets(two,sizeof(two),stdin);
	fgets(three,sizeof(three),stdin);
	fun(one);
	//fun(two);
	//fun(three);
	
}