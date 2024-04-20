#include<iostream>
#include<math.h>
#include<string.h>
using namespace std; 
void dec_to_bin(int x){
    int rem;
    int bin=0;
    int arr[100000];
    int i=0;
    while(x!=0){
        rem=x%2;
        arr[i]=rem;
        i++;
        x=x/2;
    }
    for(int j=i-1;j>=0;j--){
        bin=bin*10+arr[j];
        
    }
    cout<<"THE BINARY OF THE NUMBER IS : "<<bin;
    cout<<endl;
}
void bin_to_dec(int x){
    int num=0;
    int rem=0;
    int a=0;
   
   
    
    while(x!=0){
        rem=x%10;
       
        num=num+int(pow(2,a))*rem;
        a++;
        x=x/10;
    }
    cout<<"THE DECIMAL NUMBER IS :"<<num;
    cout<<endl;
    
}
int rbin_to_dec(int x){
    int num=0;
    int rem=0;
    int a=0;
   
   
    
    while(x!=0){
        rem=x%10;
       
        num=num+int(pow(2,a))*rem;
        a++;
        x=x/10;
    }
    return num;
}
void dec_to_octal(int x){
    int rem;
    int bin=0;
    int arr[100000];
    int i=0;
    while(x!=0){
        rem=x%8;
        arr[i]=rem;
        i++;
        x=x/8;
    }
    for(int j=i-1;j>=0;j--){
        bin=bin*10+arr[j];
        
    }
    cout<<"THE OCTAL OF THE NUMBER IS : "<<bin;
    cout<<endl;
}
void octal_to_dec(int x){
    int num=0;
    int rem=0;
    int a=0;
    while(x!=0){
        rem=x%10;
       
        num=num+int(pow(8,a))*rem;
        a++;
        x=x/10;
    }
    cout<<"THE DECIMAL NUMBER IS :"<<num;
    cout<<endl;
}
int roctal_to_dec(int x){
    int num=0;
    int rem=0;
    int a=0;
    while(x!=0){
        rem=x%10;
       
        num=num+int(pow(8,a))*rem;
        a++;
        x=x/10;
    }
    return num;
}
void binary_octal(long int bi)
{
    int i=0,rem,sum=0,r[100],len=0;

    while(bi!=0)
    {
        rem=bi%10;
        bi=bi/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        r[i]=sum%8;
        sum=sum/8;
        i++;
        len++;
    }

    printf("\nOctal Number: ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",r[i]);
    }cout<<endl;
}

void binary_hexadecimal(long int bi)
{
    int rem,i=0,sum=0,r[100],len=0;

    while(bi!=0)
    {
        rem=bi%10;
        bi=bi/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        r[i]=sum%16;
        sum=sum/16;
        i++;
        len++;
    }

    printf("\nHexa-Decimal Number: ");
    for(i=len-1;i>=0;i--)
    {
        switch(r[i])
        {
            case 10:
                printf("A"); 
                break;
            case 11:
                printf("B"); 
                break;
            case 12:
                printf("C"); 
                break;
            case 13:
                printf("D"); 
                break;
            case 14:
                printf("E"); 
                break;
            case 15:
                printf("F"); 
                break;
            default:
                printf("%d",r[i]);
        }
    }cout<<endl;
}
void decToHexa(int n)
{
   
    string ans = "";
   
    while (n != 0) {
        
        int rem = 0;
         
        
        char ch;
        
        rem = n % 16;
 
        if (rem < 10) {
            ch = rem + 48;
        }
        else {
            ch = rem + 55;
        }

        ans += ch;
        n = n / 16;
    }
     
    
    int i = 0, j = ans.size() - 1;
    while(i <= j)
    {
      swap(ans[i], ans[j]);
      i++;
      j--;
    }
    cout<<"Hexa-Decimal Number: "<<ans;cout<<endl;
}
void octal_hexadecimal(long int oct)
{
    int r[50000],len=0,decimal=0,i=0,num,ans=0;
    while(oct!=0)
    {
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }

    i=0;
    while(decimal!=0)
    {
        r[i]=decimal%16;
        decimal=decimal/16;
        i++;
        len++;
    }

    printf("\nHexa-Decimal Number: ");
    
    for(i=len-1;i>=0;i--)
    {
        switch(r[i])
        {
            case 10:
                printf("A"); 
                break;
            case 11:
                printf("B"); 
                break;
            case 12:
                printf("C"); 
                break;
            case 13:
                printf("D"); 
                break;
            case 14:
                printf("E"); 
                break;
            case 15:
                printf("F"); 
                break;
            default:
                printf("%d",r[i]);
        }
    }cout<<endl;
}
void hexadecimal_decimal(char *hexa)
{
    int i,num=0,power=0,decimal=0;

    for(i=strlen(hexa)-1;i>=0;i--)
    {
        if(hexa[i]=='A'||hexa[i]=='a')
            num=10;
        else if(hexa[i]=='B'||hexa[i]=='b')
            num=11;
        else if(hexa[i]=='C'||hexa[i]=='c')
            num=12;
        else if(hexa[i]=='D'||hexa[i]=='d')
            num=13;
        else if(hexa[i]=='E'||hexa[i]=='e')
            num=14;
        else if(hexa[i]=='F'||hexa[i]=='f')
            num=15;
        else
            num=hexa[i]-48;

        decimal=decimal+num*pow(16,power);
        power++;
    }
    printf("\nDecimal Number: %d",decimal);cout<<endl;
}
int rhexadecimal_decimal(char hexa[])
{
    int i,num=0,power=0,decimal=0;

    for(i=strlen(hexa)-1;i>=0;i--)
    {
        if(hexa[i]=='A'||hexa[i]=='a')
            num=10;
        else if(hexa[i]=='B'||hexa[i]=='b')
            num=11;
        else if(hexa[i]=='C'||hexa[i]=='c')
            num=12;
        else if(hexa[i]=='D'||hexa[i]=='d')
            num=13;
        else if(hexa[i]=='E'||hexa[i]=='e')
            num=14;
        else if(hexa[i]=='F'||hexa[i]=='f')
            num=15;
        else
            num=hexa[i]-48;

        decimal=decimal+num*pow(16,power);
        power++;
    }
    return decimal;
}
void hexadecimal_octal(char hexa[])
{
    int i,len,num=0,power=0,decimal=0,rem[100];

    for(i=strlen(hexa)-1;i>=0;i--)
    {
        if(hexa[i]=='A'||hexa[i]=='a')
            num=10;
        else if(hexa[i]=='B'||hexa[i]=='b')
            num=11;
        else if(hexa[i]=='C'||hexa[i]=='c')
            num=12;
        else if(hexa[i]=='D'||hexa[i]=='d')
            num=13;
        else if(hexa[i]=='E'||hexa[i]=='e')
            num=14;
        else if(hexa[i]=='F'||hexa[i]=='f')
            num=15;
        else
            num=hexa[i]-48;

        decimal=decimal+num*pow(16,power);
        power++;
    }

    i=0,len=0;
    while(decimal!=0)
    {
        rem[i]=decimal%8;
        decimal=decimal/8;
        i++;
        len++;
    }

    printf("\nOctal Number: ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
    cout<<endl;
}
int main(){
    cout<<"WELCOME TO THE CONVERTER"<<endl;
    cout<<"HOW CAN WE HELP YOU OUT "<<endl;
    cout<<"*************************************************"<<endl;
    cout<<"PRESS 1. TO CONVERT DECIMAL NUMBER TO A BINARY NUMBER"<<endl;
    cout<<"PRESS 2. TO CONVERT BINARY TO DECIMAL"<<endl;
    cout<<"PRESS 3. TO CONVERT DECIMAL TO OCTAL "<<endl;
    cout<<"PRESS 4. TO CONVERT OCTAL TO DECIMAL "<<endl;
    cout<<"PRESS 5. TO CONVERT BINARY TO OCTAL "<<endl;
    cout<<"PRESS 6. TO CONVERT BINARY TO HEXADECIMAL "<<endl;
    cout<<"PRESS 7. TO CONVERT DECIMAL TO HEXADECIMAL "<<endl;
    cout<<"PRESS 8. TO CONVERT OCTAL TO HEXADECIMAL"<<endl;
    cout<<"PRESS 9. TO CONVERT HEXADECIMAL TO DECIMAL"<<endl;
    cout<<"PRESS 10. TO CONVERT HEXADECIMAL TO OCTAL "<<endl;
    cout<<"PRESS 11. TO ADD 2 DECIMAL NUMBERS"<<endl;
    cout<<"PRESS 12. TO ADD 2 BINARY NUMBER"<<endl;
    cout<<"PRESS 13. TO ADD 2 OCTAL NUMBERS"<<endl;
    cout<<"PRESS 14. TO ADD 2 HEXADECIMAL NUMBER"<<endl;
    cout<<"PRESS 15. TO MULTIPLY 2 DECIMAL NUMBERS"<<endl;
    cout<<"PRESS 16. TO MULTIPLY 2 BINARY NUMBER"<<endl;
    cout<<"PRESS 17. TO MULTIPLY 2 OCTAL NUMBERS"<<endl;
    cout<<"PRESS 18. TO MULTIPLY 2 HEXADECIMAL NUMBER"<<endl;
    cout<<"*************************************************"<<endl;
    cout<<"ENTER YOUR CHOICE"<<endl;
    int x;
    for(int i=0;;i++){
        cin>>x;
        switch(x){
            case 1:
            cout<<"*************************************************"<<endl;
            cout<<"DECIMAL TO BINARY CONVERTER IS HERE"<<endl;
            int w;
            cout<<"KINDLY ENTER THE DECIMAL NUMBER "<<endl;
            cin>>w;
            dec_to_bin(w);
            break;
            case 2:
            cout<<"*************************************************"<<endl;
            cout<<"BINARY TO DECIMAL CONVERTER IS HERE"<<endl;
            int a;
            cout<<"KINDLY ENTER THE BINARY NUMBER "<<endl;
            cin>>a;
            bin_to_dec(a);
                
            
            break;
            case 3:
            cout<<"*************************************************"<<endl;
            cout<<"DECIMAL TO OCTAL CONVERTER IS HERE"<<endl;
            int b;
            cout<<"KINDLY ENTER THE DECIMAL NUMBER "<<endl;
            cin>>b;
            dec_to_octal(b);
            break;
            case 4:
            cout<<"*************************************************"<<endl;
            cout<<"OCTAL TO DECIMAL CONVERTER IS HERE"<<endl;
            int d;
            cout<<"KINDLY ENTER THE OCTAL NUMBER "<<endl;
            cin>>d;
            
            
                octal_to_dec(d);
                
            
            break;
            case 5:
            cout<<"*************************************************"<<endl;
            cout<<"BINARY TO OCTAL CONVERTER IS HERE"<<endl;
            int c;
            cout<<"KINDLY ENTER THE BINARY NUMBER "<<endl;
            cin>>c;
            
                
            
          
                binary_octal(c);
                
            
            break;
            case 6:
            cout<<"*************************************************"<<endl;
            cout<<"BINARY TO HEXADECIMAL IS HERE"<<endl;
            int e;
            cout<<"KINDLY ENTER THE BINARY NUMBER "<<endl;
            cin>>e;
           
                
            
            
                binary_hexadecimal(e);
                
            
            break;
            case 7:
            cout<<"*************************************************"<<endl;
            cout<<"DECIMAL TO HEXADECIMAL IS HERE"<<endl;
            int f;
            cout<<"KINDLY ENTER THE DECIMAL NUMBER"<<endl;
            cin>>f;
            decToHexa(f);
            break;
            case 8:
            cout<<"*************************************************"<<endl;
            cout<<"OCTAL TO HEXADECIMAL IS HERE"<<endl;
            int g;
            cout<<"KINDLY ENTER THE OCTAL NUMBER"<<endl;
            cin>>g;
            
                octal_hexadecimal(g);
            
            break;
            case 9:
            cout<<"*************************************************"<<endl;
            cout<<"HEXADECIMAL TO DECIMAL IS HERE"<<endl;
            char h[1000];
            cout<<"KINDLY ENTER THE HEXADECIMAL NUMBER"<<endl;
            cin>>h;
            hexadecimal_decimal(h);
            break;
            case 10:
            cout<<"*************************************************"<<endl;
            cout<<"HEXADECIMAL TO OCTAL IS HERE"<<endl;
            char I[1000];
            cout<<"KINDLY ENTER THE HEXADECIMAL NUMBER"<<endl;
            cin>>I;
            hexadecimal_octal(I);
            break;
            case 11:
            cout<<"*************************************************"<<endl;
            cout<<"KINDLY ENTER TWO NUMBERS"<<endl;
            int num1,num2;
            cin>>num1>>num2;
            cout<<"CHOOSE IN WHICH FORMAT YOU WANT TO GET THE SUM OF THE NUMBERS"<<endl;
            cout<<"1.DECIMAL"<<endl;
            cout<<"2.BINARY"<<endl;
            cout<<"3.OCTAL"<<endl;
            cout<<"4.HEXADECIMAL"<<endl;
            int ans;
            ans=num1+num2;
            int res;
            cin>>res;
            if(res==1){
                cout<<"THE SUM IN DECIMAL IS "<<ans<<endl;
            }
            else if(res==2){
                cout<<"THE SUM IN ";
                dec_to_bin(ans);
                
            }
            else if(res==3){
                cout<<"THE SUM IN";
                dec_to_octal(ans);
            }
            else if(res==4){
                cout<<"THE SUM IN ";
                decToHexa(ans);
            }
            break;
            case 12:
            cout<<"*************************************************"<<endl;
            cout<<"KINDLY ENTER TWO BINARY NUMBERS"<<endl;
            int dec1,dec2;
            cin>>dec1>>dec2;
            dec1=rbin_to_dec(dec1);
            dec2=rbin_to_dec(dec2);
            cout<<"CHOOSE IN WHICH FORMAT YOU WANT TO GET THE SUM OF THE NUMBERS"<<endl;
            cout<<"1.DECIMAL"<<endl;
            cout<<"2.BINARY"<<endl;
            cout<<"3.OCTAL"<<endl;
            cout<<"4.HEXADECIMAL"<<endl;
            int ans1;
            ans1=dec1+dec2;
            int cho;
            cin>>cho;
            if(cho==1){
                cout<<"THE SUM IN DECIMAL IS "<<ans1<<endl;
            }
            else if(cho==2){
                cout<<"THE SUM IN ";
                dec_to_bin(ans1);
                
            }
            else if(cho==3){
                cout<<"THE SUM IN";
                dec_to_octal(ans1);
            }
            else if(cho==4){
                cout<<"THE SUM IN ";
                decToHexa(ans1);
            }
            break;
            case 13:
            cout<<"*************************************************"<<endl;
            cout<<"KINDLY ENTER TWO OCTAL NUMBERS"<<endl;
            int octal1,octal2;
            cin>>octal1>>octal2;
            octal1=roctal_to_dec(octal1);
            octal2=roctal_to_dec(octal2);
            cout<<"CHOOSE IN WHICH FORMAT YOU WANT TO GET THE SUM OF THE NUMBERS"<<endl;
            cout<<"1.DECIMAL"<<endl;
            cout<<"2.BINARY"<<endl;
            cout<<"3.OCTAL"<<endl;
            cout<<"4.HEXADECIMAL"<<endl;
            int ans2;
            ans2=octal1+octal2;
            int choc;
            cin>>choc;
            if(choc==1){
                cout<<"THE SUM IN DECIMAL IS "<<ans2<<endl;
            }
            else if(choc==2){
                cout<<"THE SUM IN ";
                dec_to_bin(ans2);
                
            }
            else if(choc==3){
                cout<<"THE SUM IN";
                dec_to_octal(ans2);
            }
            else if(choc==4){
                cout<<"THE SUM IN ";
                decToHexa(ans2);
            }
            break;
            case 14:
            cout<<"*************************************************"<<endl;
            cout<<"KINDLY ENTER TWO HEXADECIMAL NUMBERS"<<endl;
            char hexa1[100],hexa2[100];
            cin>>hexa1>>hexa2;
            int deh1,deh2;
            deh1=rhexadecimal_decimal(hexa1);
            deh2=rhexadecimal_decimal(hexa2);
            cout<<"CHOOSE IN WHICH FORMAT YOU WANT TO GET THE SUM OF THE NUMBERS"<<endl;
            cout<<"1.DECIMAL"<<endl;
            cout<<"2.BINARY"<<endl;
            cout<<"3.OCTAL"<<endl;
            cout<<"4.HEXADECIMAL"<<endl;
            int ans3;
            ans3=deh1+deh2;
            int cc;
            cin>>cc;
            if(cc==1){
                cout<<"THE SUM IN DECIMAL IS "<<ans3<<endl;
            }
            else if(cc==2){
                cout<<"THE SUM IN ";
                dec_to_bin(ans3);
                
            }
            else if(cc==3){
                cout<<"THE SUM IN";
                dec_to_octal(ans3);
            }
            else if(cc==4){
                cout<<"THE SUM IN ";
                decToHexa(ans3);
            }
            break;
            case 15:
            cout<<"*************************************************"<<endl;
            cout<<"KINDLY ENTER TWO DECIMAL NUMBERS"<<endl;
            int num11,num12;
            cin>>num11>>num12;
            cout<<"CHOOSE IN WHICH FORMAT YOU WANT TO GET THE PRODUCT OF THE NUMBERS"<<endl;
            cout<<"1.DECIMAL"<<endl;
            cout<<"2.BINARY"<<endl;
            cout<<"3.OCTAL"<<endl;
            cout<<"4.HEXADECIMAL"<<endl;
            int ans11;
            ans11=num11*num12;
            int res1;
            cin>>res1;
            if(res1==1){
                cout<<"THE PRODUCT IN DECIMAL IS "<<ans11<<endl;
            }
            else if(res==2){
                cout<<"THE PRODUCT IN ";
                dec_to_bin(ans11);
                
            }
            else if(res==3){
                cout<<"THE PRODUCT IN";
                dec_to_octal(ans11);
            }
            else if(res==4){
                cout<<"THE PRODUCT IN ";
                decToHexa(ans11);
            }
            break;
            case 16:
            cout<<"*************************************************"<<endl;
            cout<<"KINDLY ENTER TWO BINARY NUMBERS"<<endl;
            int dec11,dec12;
            cin>>dec11>>dec12;
            dec1=rbin_to_dec(dec11);
            dec2=rbin_to_dec(dec12);
            cout<<"CHOOSE IN WHICH FORMAT YOU WANT TO GET THE PRODUCT OF THE NUMBERS"<<endl;
            cout<<"1.DECIMAL"<<endl;
            cout<<"2.BINARY"<<endl;
            cout<<"3.OCTAL"<<endl;
            cout<<"4.HEXADECIMAL"<<endl;
            int ans111;
            ans111=dec11*dec12;
            int cho1;
            cin>>cho1;
            if(cho1==1){
                cout<<"THE PRODUCT IN DECIMAL IS "<<ans111<<endl;
            }
            else if(cho1==2){
                cout<<"THE PRODUCT IN ";
                dec_to_bin(ans111);
                
            }
            else if(cho1==3){
                cout<<"THE PRODUCT IN";
                dec_to_octal(ans111);
            }
            else if(cho1==4){
                cout<<"THE SUM IN ";
                decToHexa(ans111);
            }
            break;
            case 17:
            cout<<"*************************************************"<<endl;
            cout<<"KINDLY ENTER TWO OCTAL NUMBERS"<<endl;
            int octal11,octal12;
            cin>>octal1>>octal2;
            octal1=roctal_to_dec(octal1);
            octal2=roctal_to_dec(octal2);
            cout<<"CHOOSE IN WHICH FORMAT YOU WANT TO GET THE PRODUCT OF THE NUMBERS"<<endl;
            cout<<"1.DECIMAL"<<endl;
            cout<<"2.BINARY"<<endl;
            cout<<"3.OCTAL"<<endl;
            cout<<"4.HEXADECIMAL"<<endl;
            int ans211;
            ans211=octal11*octal12;
            int choc11;
            cin>>choc11;
            if(choc11==1){
                cout<<"THE PRODUCT IN DECIMAL IS "<<ans211<<endl;
            }
            else if(choc11==2){
                cout<<"THE PRODUCT IN ";
                dec_to_bin(ans211);
                
            }
            else if(choc11==3){
                cout<<"THE PRODUCT IN";
                dec_to_octal(ans211);
            }
            else if(choc11==4){
                cout<<"THE PRODUCT IN ";
                decToHexa(ans211);
            }
            break;
            case 18:
            cout<<"*************************************************"<<endl;
            cout<<"KINDLY ENTER TWO HEXADECIMAL NUMBERS"<<endl;
            char hexa11[100],hexa12[100];
            cin>>hexa11>>hexa12;
            int deh11,deh12;
            deh11=rhexadecimal_decimal(hexa11);
            deh12=rhexadecimal_decimal(hexa12);
            cout<<"CHOOSE IN WHICH FORMAT YOU WANT TO GET THE PRODUCT OF THE NUMBERS"<<endl;
            cout<<"1.DECIMAL"<<endl;
            cout<<"2.BINARY"<<endl;
            cout<<"3.OCTAL"<<endl;
            cout<<"4.HEXADECIMAL"<<endl;
            int ans31;
            ans31=deh11*deh12;
            int cc1;
            cin>>cc1;
            if(cc1==1){
                cout<<"THE PRODUCT IN DECIMAL IS "<<ans31<<endl;
            }
            else if(cc1==2){
                cout<<"THE PRODUCT IN ";
                dec_to_bin(ans31);
                
            }
            else if(cc1==3){
                cout<<"THE PRODUCT IN";
                dec_to_octal(ans31);
            }
            else if(cc1==4){
                cout<<"THE PRODUCT IN ";
                decToHexa(ans31);
            }
            break;
            default:
            cout<<"WRONG NUMBER PRESS !!!!"<<endl;
        
        }

        cout<<"DO YOU WANT TO CONTINUE OR YOU WANT TO EXIT"<<endl;
        cout<<"TO CONTINUE TYPE :: CONTINUE"<<endl;
        cout<<"TO EXIT TYPE :: EXIT "<<endl;
        string ce;
        cin>>ce;
        if(ce=="EXIT"||ce=="Exit"||ce=="exit"){
            
            break;
        }
        else{
             cout<<"HOW CAN WE HELP YOU OUT "<<endl;
        cout<<"*************************************************"<<endl;
        cout<<"PRESS 1. TO CONVERT DECIMAL NUMBER TO A BINARY NUMBER"<<endl;
        cout<<"PRESS 2. TO CONVERT BINARY TO DECIMAL"<<endl;
        cout<<"PRESS 3. TO CONVERT DECIMAL TO OCTAL "<<endl;
        cout<<"PRESS 4. TO CONVERT OCTAL TO DECIMAL "<<endl;
        cout<<"PRESS 5. TO CONVERT BINARY TO OCTAL "<<endl;
        cout<<"PRESS 6. TO CONVERT BINARY TO HEXADECIMAL "<<endl;
        cout<<"PRESS 7. TO CONVERT DECIMAL TO HEXADECIMAL "<<endl;
        cout<<"PRESS 8. TO CONVERT OCTAL TO HEXADECIMAL"<<endl;
        cout<<"PRESS 9. TO CONVERT HEXADECIMAL TO DECIMAL"<<endl;
        cout<<"PRESS 10. TO CONVERT HEXADECIMAL TO OCTAL "<<endl;
        cout<<"PRESS 11. TO ADD 2 DECIMAL NUMBERS"<<endl;
        cout<<"PRESS 12. TO ADD 2 BINARY NUMBER"<<endl;
        cout<<"PRESS 13. TO ADD 2 OCTAL NUMBERS"<<endl;
        cout<<"PRESS 14. TO ADD 2 HEXADECIMAL NUMBER"<<endl;
        cout<<"PRESS 15. TO MULTIPLY 2 DECIMAL NUMBERS"<<endl;
        cout<<"PRESS 16. TO MULTIPLY 2 BINARY NUMBER"<<endl;
        cout<<"PRESS 17. TO MULTIPLY 2 OCTAL NUMBERS"<<endl;
        cout<<"PRESS 18. TO MULTIPLY 2 HEXADECIMAL NUMBER"<<endl;
        cout<<"*************************************************"<<endl;
        cout<<"ENTER YOUR CHOICE"<<endl;
            continue;
        }
        
       
    }
    cout<<"THANKS FOR USING THE CONVERTER HAVE A GREAT TYPE AHEAD "<<endl;
    cout<<"NEW THINGS TO BE ADDED IN FUTURE"<<endl;
    cout<<"ADD SUBTRACTION AND DIVISION AND THEN ALL OTHER MATHEMATICAL CALCULATION"<<endl;
    cout<<"NEXT PROJECT : TICK TAC TAO AND SNACK AND LADDER"<<endl;
    cout<<"ALL RIGHT RESERVED TO DIPSITA ROUT(23BAI1234) AND NAINA GARG(23BAI1215)"<<endl;
    cout<<"VIT CHENNAI "<<endl;
}
