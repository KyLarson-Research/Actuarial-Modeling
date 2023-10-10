#include <stdio.h>
#include <string.h>

int main(void) {

   /* Type your code here. */
   char buf[100]={'\0'}, words[20][10], word[50];//*check;
   
   int i=0,l=0, f[20]={0},space_index[50], si=1, n=0;
   
   int j;
   

   fgets(buf, sizeof(buf), stdin);
      
     
   sscanf(buf, " %d", &n);
   
   sprintf(word, "%d", n);

   strcpy(buf,&(buf[strlen(word)+1]));

   space_index[0] = 0;
   //count spaces
   while(buf[i]!='\0'){
      if(buf[i]==' '){ space_index[si]=i; si++;}
   i++; 
   }
   
   //add each word string to array of word strings
   for(l=0; l<si; l++){
      sscanf(&buf[space_index[l]], "%s", word);
      //printf("%s\n", word);
         for( j =0; j<si; j++){
            if(strcmp(word, words[j])==0){ f[j]++; break;}
         }
         if(j==si){ strcpy(words[l], word); f[l]=1;}
   }
   
   //print everything
   
   for(l = 0; l<si; l++){
      if(f[l]!=0){
         printf("%s - %d\n", words[l], f[l]); //Keep
      }
      else{
         //find the count from the index j
         for( j =0; j<si; j++){
            sscanf(&buf[space_index[l]], " %s", word);
            if(strcmp(word, words[j])==0){break;}
         }
         printf("%s - %d\n", word, f[j]); //Keep
      }
   }
   


   return 0;
}
