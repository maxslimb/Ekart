#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<process.h>
#include<fstream.h>
char ui[100];int adf;
class Bill
{
 public:
 void tm();
 void uii();
 void clS();
 void ugf();
 void gy(); 
 void op(); 
 void jh();
 void gt();
 void gto(); 
 void gtp();
    
int adf,fh;char ar1[100],ar2[100],ar3[100],ar4[100],wq[25],qw[10];
};
    void Bill::ugf()
    {
	clrscr();
	cout<<"1. If NOt A NEw User-----> Sign In\n";
	cout<<"2. If NEw User-----------> Sign Up\n";
	cin>>fh;
	if(fh==1)
	{
	    gy();
	}
	else if(fh==2)
	{
	    op();
	}
	else
	{
	    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
	    ugf();
	    cout<<"*/*/*/*/*/*/*/*/*/**/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*\n";

	}
    }

    void Bill::gy()
    {

	cout<<"Enter Email: ";
	cin>>ar1;cout<<endl;
	cout<<"Enter Password: ";
	cin>>ar2;
	cout<<"\nItem Added: "<<ui<<endl;
	cout<<"\n\n//Free Home Delivery\\\n\n";
	cout<<"Total Cost= "<<adf;
	cout<<"\n1.   <.../;NEXT;/...>   \n";
	int re;cin>>re;
	if(re==1)
	{
	    uii();
	}
	else
	{
	    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
	    gy();

	}
    }

   void Bill::op()
    {

	cout<<"Enter Email: ";
	cin>>ar1;cout<<endl;
	cout<<"\nEnter Password: ";
	cin>>ar2;
	cout<<"\nConfirm Password: ";
	cin>>ar3;
	cout<<"\nEnter Your Address: ";
	cin>>ar4;
	tm();
	cout<<"\nEnter Your Pincode: ";
	int asp;cin>>asp;
	tm();
	cout<<"\n\nUser Successfully Registered///\n\n";//cout<<"\n";
	cout<<"1 Item In Your Cart: \n";
	cout<<"Item Added: "<<ui;cout<<endl;
	cout<<"\n\n//Free Home Delivery\\\n\n";
	cout<<"Total Cost= "<<adf;cout<<"\n";
	cout<<"1.   <.../;NEXT;/...>   \n";
	int re;cin>>re;
	if(re==1)
	{
	    uii();
	}
	else
	{
	    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
	    op();

	}
    }
void Bill::uii()
{
   clS();
   char ch;
   fstream fin,fout;               clS();
   cout<<"1. SHOW BILL ";
   int gst,total;gst=0.05*adf;total=adf+gst;
   fout.open("bill.txt",ios::out);
   fout<<"--------------------------------------------------------------------------------";
   fout<<"| Sr.No: |    Name of Product     |     Price     |      G.S.T     |    Total  |\n";
   fout<<"|   1.   |    "<<ui<<"       |       "<<adf<<"     |      "<<gst<<"     |    "<<total<<"  |\n";
   fout<<"--------------------------------------------------------------------------------";
   fout.close();
   fin.open("bill.txt",ios::in);xx:
   cout<<"\n\n\n2.   <.../;NEXT;/...>   ";
	int re;cin>>re;
        if(re==1)
        {
	   while(!fin.eof()){
	   fin.get(ch);cout<<ch;}
	   fin.close();
	   cout<<"2.   <.../;NEXT;/...>   \n";cin>>re;}

	 if(re==2)
	{
	    jh();
	}
	else
	{
	    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
	    uii();

	}

}

 
  void Bill::jh()
    {

	clS();
	cout<<"Choose Payment Option--------|?|\n";
	cout<<"Payment By Credit Card-------/1/\n";
	cout<<"Payment By Debit Card--------/2/\n";
	cout<<"Payment-COD------------------/3/\n";
	cout<<"To Go Back-------------------/4/\n";
	int res;cin>>res;
	if (res==1)
	{
	    gt();
	}
	else  if (res==2)
	{
	    gto();
	}
	else  if (res==3)
        {
            gtp();
        }
        else  if (res==4)
        {
            uii();
        }
        else  
        {
            cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
            jh();
        }
    }

   void Bill::gt()
    {
        

        cout<<"Enter Your 16 Digit Credit Card Number\n";
        cin.getline(wq,25);
	int az=strlen(wq);
        if(az==16)
        {
            cout<<"Enter your 4 Digit-CVV Passcode\n";
            cin.getline(qw,10);
	    int ay=strlen(qw);
	    if(ay==4)
            {
                tm();tm();
                clS();
                cout<<"      /.>/.>/.>   \n";
                tm();tm();
                cout<<"                   \n";
                tm();tm();
                cout<<"      /.>/.>/.>   \n";
                tm();tm();
                cout<<"                   \n";
                tm();tm();
                cout<<"     PROCESSING   \n";
                tm();tm();
                cout<<"                   \n";
                tm();tm();
                cout<<"      /.>/.>/.>   \n";
                tm();tm();
                cout<<"                   \n";
                tm();tm();
                cout<<"      /.>/.>/.>   \n";
                tm();tm();
                cout<<"Money Recieved Successfully\n";
                tm();tm();
                cout<<"|.|.|.|Confirming Order/./././\n";
                tm();tm();
                cout<<"/-/-/-*#Cheking Quantity#*-/-/-/\n";
                tm();
                tm();
                tm();
                tm();
                tm();
                clS();
                cout<<"./././/Order Confirmed//././.\n";
                tm();tm();
                cout<<"{.|.|.|.|Shipment Within 2 Business Days/./././.}\n";
                tm();
                clS();
                tm();
                cout<<"/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";
                cout<<"                                           /_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";
                cout<<"                                                                                      /_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";
                cout<<"                                       !!!^*:|:|Thank U For Shopping With Ekart!!!^*:/:/                                       \n";
                cout<<"                                                                                  /_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";
                cout<<"                                            /_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";
                cout<<"/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";tm();tm();
            }
            else if(ay!=4)
            {
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                gt();
            }
        }
        else if(az!=16)
        {
            cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
            gt();
        }   
    }

    void Bill::gto()
    {
        

        cout<<"Enter Your 16 Digit Debit Card Number\n";
        cin.getline(wq,25);
	int az=strlen(wq);
	if(az==16)
	{
	    cout<<"Enter your 4 Digit-CVV Passcode\n";
	    cin.getline(qw,10);
	    int ay=strlen(qw);
	    if(ay==4)
            {
                tm();tm();
                clS();
                cout<<"      /.>/.>/.>   \n";
                tm();tm();
                cout<<"                   \n";
                tm();tm();
                cout<<"      /.>/.>/.>   \n";
                tm();tm();
                cout<<"                   \n";
                tm();tm();
                cout<<"     PROCESSING   \n";
                tm();tm();
                cout<<"                   \n";
                tm();tm();
                cout<<"      /.>/.>/.>   \n";
                tm();tm();
                cout<<"                   \n";
                tm();tm();
                cout<<"      /.>/.>/.>   \n";
                tm();tm();
                cout<<"Money Recieved Successfully\n";
                tm();tm();
                cout<<"|.|.|.|Confirming Order/./././\n";
                tm();tm();
                cout<<"/-/-/-*#Cheking Quantity#*-/-/-/\n";
                tm();
                tm();
                tm();
                tm();
                tm();
                clS();
                cout<<"./././/Order Confirmed//././.\n";
                tm();tm();
                cout<<"{.|.|.|.|Shipment Within 2 Business Days/./././.}\n";
                tm();
                clS();
                tm();
                cout<<"/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";
                cout<<"                                           /_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";
                cout<<"                                                                                      /_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";
                cout<<"                                       !!!^*:|:|Thank U For Shopping With Ekart!!!^*:/:/                                       \n";
                cout<<"                                                                                  /_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";
                cout<<"                                            /_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";
                cout<<"/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";tm();tm();
            }
            else if(ay!=4)
            {
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                gt();
            }
        }
        else if(az!=16)
        {
            cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
            gt();
        }   
    }
       
    void Bill::gtp ()
    {
        clS();
        cout<<"      /.>/.>/.>   \n";
        tm();
        tm();
        cout<<"                   \n";
        tm();
        tm();
        cout<<"      /.>/.>/.>   \n";
        tm();
        tm();
        cout<<"                   \n";
        tm();
        tm();
        cout<<"     PROCESSING   \n";
        tm();
        tm();
        cout<<"                   \n";
        tm();
        tm();
        cout<<"      /.>/.>/.>   \n";
        tm();
        tm();
        cout<<"                   \n";
        tm();
        tm();
        cout<<"      /.>/.>/.>   \n";
        tm();
        tm();
        cout<<"|.|.|.|Confirming Order/./././\n";
        tm();
        tm();
        cout<<"/-/-/-*#Cheking Quantity#*-/-/-/\n";
        tm();
        tm();
        tm();
        tm();
        tm();
        clS();
        cout<<"./././/Order Confirmed//././.\n";
        tm();
        tm();
        cout<<"{.|.|.|.|Shipment Within 2 Business Days/./././.}\n";
        tm();
        clS();
        tm();
        cout<<"/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";
        cout<<"                                           /_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";
        cout<<"                                                                                      /_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";
        cout<<"                                       !!!^*:|:|Thank U For Shopping With Ekart!!!^*:/:/                                       \n";
        cout<<"                                                                                  /_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";
        cout<<"                                            /_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";
        cout<<"/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/_*/\n";tm();tm();
    }



     void Bill::tm()
    {
	sleep(1);
    }
    void Bill::clS()
    {
       clrscr();
    }
class Cart:public Bill 
{   public: 
    void uty();
};
void Cart::uty()
    {
       int choice = 0;
clrscr();
	    z:
	    cout<<"\n<<<ITEM ADDED TO YOUR CART>>>\n";sleep(1);clrscr();
	    cout<<"\nMenu - Managing a List\n";
	    cout<<"Move To CHECKOUT-------->/1/\n";
	    cout<<"Continue Shopping------->/2/\n";
	    cout<<"Exit-------------------->/3/\n";
	    cout<<"Select a option\n";
	    cin>>choice;
	    if (choice <1 || choice >3)
	    {
		cout<<"Enter a value between 1 and 3:\n";goto z;
	    }
	    else
	    {
		switch (choice)
		{
		    case 1:
		    ugf();
		    break;

		    case 2:
		    //po4();
		    break;

		    case 3:
                    clrscr();
		    cout<<"/.*/./*----GOODBYE----/.*/./*\n";sleep(1);exit(0);
		    break;

		}

	    }
	}




class Displaycompoacc:public Cart
{
    public:
    void dj();
};
void Displaycompoacc::dj()
    {
        int b,Am;
        int df;
        int op;
        int a;
        
         tt:
        cout<<"1.Laptops\n";
        cout<<"2.Desktops\n";
        cout<<"3.Pen Drives\n";
        cout<<"4.Hard Drives\n";
        cout<<"5.Printer & Ink\n";
        cout<<"6.Routers\n";
        cout<<"To Go BacK------>> 7\n";
        cout<<"Enter Your Choice: \n";
        cin>>Am;
        clrscr();
        switch(Am)
        {
            case 1: 
            cout<<"1.Macbook Pro\n";
            cout<<"2.Macbook Air\n";
            cout<<"3.Surface book\n";
            cout<<"4.Surface Pro 4\n";
            cout<<"5.Surface Pro 3\n";
            cout<<"6.Lenovo Yoga 500\n";
            cout<<"7.Lenvo Yoga 3\n";
            cout<<"8.Lenovo Yoga 3 Pro\n";
            cout<<"9.Lenovo Yoga 2\n";
            cout<<"10.Macbook Retina\n";
            int opx;cin>>opx;
            switch(opx)
            {
                case 1:
                cout<<"Macbook Pro\n";
                strcpy(ui,"Macbook Pro");
                cout<<"Value-'165000 \n";
                adf=88000;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 2:
                cout<<"Macbook Air\n";
                strcpy(ui,"Macbook Air");
                cout<<"Value-'Rs/-77,777 \n";
                adf=77777;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 3:
                cout<<"Surface book\n";
                strcpy(ui,"Surface book");
                cout<<"Value-'Rs/-1,88,000 \n";
                adf=188000;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 4:
                cout<<"Surface Pro 4\n";
                strcpy(ui,"Surface Pro 4");
                cout<<"Value-'2500 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 5:
                cout<<"Surface Pro 3\n";
                strcpy(ui,"Surface Pro 3");
                cout<<"Value-'66000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 6:
                cout<<"Lenovo Yoga 500\n";
                strcpy(ui,"Lenovo Yoga 500");
                cout<<"Value-'66000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 7:
                cout<<"Lenvo Yoga 3\n";
                strcpy(ui,"Lenvo Yoga 3");
                cout<<"Value-'66000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 8:
                cout<<"Lenovo Yoga 3 Pro\n";
                strcpy(ui,"Lenovo Yoga 3 Pro");
                cout<<"Value-'66000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 9:
                cout<<"Lenovo Yoga 2\n";
                strcpy(ui,"Lenovo Yoga 2");
                cout<<"Value-'66000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 10:
                cout<<"Macbook Retina\n";
                strcpy(ui,"Macbook Retina");
                cout<<"Value-'66000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                default:
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                goto tt;
                
          

            }
            break;
            case 2:
            cout<<"1.Lenovo Desk\n";
            cout<<"2.Dell Insperon Desk\n";
            cout<<"3.BenQ\n";
            cout<<"4.Samsung\n";
            cout<<"5.TECHup\n";
            int opa;cin>>opa;
            switch(opa)
            {
                case 1:
                cout<<"Lenovo Desk\n";
                strcpy(ui,"Lenovo Desk");
                cout<<"Value-'66000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 2:
                cout<<"Dell Insperon Desk\n";
                strcpy(ui,"Dell Insperon Desk");
                cout<<"Value-'66000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 3:
                cout<<"BenQ\n";
                strcpy(ui,"BenQ");
                cout<<"Value-'66000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 4:
                cout<<"Samsung\n";
                strcpy(ui,"Samsung");
                cout<<"Value-'66000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 5:
                cout<<"TECHup\n";
                strcpy(ui,"TECHup");
                cout<<"Value-'66000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                default:
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                goto tt;
                


            } 
            break;
            case 3: 
            cout<<"1.Sandisk 8gb\n";
            cout<<"2.PNY 16gb\n";
            cout<<"3.Toshiba 8gb\n";
            cout<<"4.HP 32gb\n";
            cout<<"5.Sandisk PRo 128gb\n";
            cout<<"6.PNY 32gb\n";
            cout<<"7.iball 68gb\n";
            cout<<"8.Transcend 32gb\n";
            cout<<"9.iball 32gb\n";
            cout<<"10.HP 8gb\n";
            int opb;cin>>opa;
            switch(opb)
            {
                case 1:
                cout<<"Sandisk 8gb\n";
                strcpy(ui,"Sandisk 8gb");
                cout<<"Value-'120 \n";
                adf=120;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 2:
                cout<<"PNY 16gb\n";
                strcpy(ui,"PNY 16gb");;
                cout<<"Value-'120 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 3:
                cout<<"Toshiba 8gb\n";
                strcpy(ui,"Toshiba 8gb");
                cout<<"Value-'120 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 4:
                cout<<"HP 32gb\n";
                strcpy(ui,"HP 32gb");
                cout<<"Value-'120 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 5:
                cout<<"Sandisk PRo 128gb\n";
                strcpy(ui,"Sandisk PRo 128gb");
                cout<<"Value-'120 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;
                case 6:
                cout<<"PNY 32gb\n";
                strcpy(ui,"PNY 32gb");
                cout<<"Value-'120 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;
                case 7:
                cout<<"iball 68gb\n";
                strcpy(ui,"iball 68gb");
                cout<<"Value-'120 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;
                case 8:
                cout<<"Transcend 32gb\n";
                strcpy(ui,"Transcend 32gb");
                cout<<"Value-'120 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;
                case 9:
                cout<<"iball 32gb\n";
                strcpy(ui,"iball 32gb");
                cout<<"Value-'120 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;
                case 10:
                cout<<"HP 8gb\n";
                strcpy(ui,"HP 8gb");
                cout<<"Value-120 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                default:
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                goto tt;
                


            }
            break;
            case 4: 
            cout<<"1. Seagate Backup Plus Slim 1TB Portable External Hard Drive with 200GB of Cloud Storage & Mobile Device Backup (Black)\n";
            cout<<"2. Transcend StoreJet 25M3 2.5-inch 1TB Portable External Hard Drive\n";
            cout<<"3. WD My Passport Ultra WDBGPU0010BBK 1TB Portable External Hard Drive (Black)\n";
            cout<<"4. Toshiba Canvio Basics HDTB310AK3AA USB 3.0+USB2.0 1TB External Hard Disk\n";
            cout<<"5. WD My Passport Ultra 1TB Portable External Hard Drive (Black)\n";
            cout<<"6. Transcend StoreJet 2.5 inch 1 TB Auto-Backup Drive (Light Blue)\n";
            cout<<"7. Dell 1TB USB 3.0 External Hard Drive\n";
            cout<<"8. Seagate Expansion 1TB Portable External Hard Drive\n";
            cout<<"9. Dell Backup Plus 1Tb USB 3.0 Portable Hard Drive\n";
            cout<<"10.Samsung 850 EVO 1TB 2.5-Inch SATA III Internal SSD (MZ-75E1T0B/AM)\n";
            int opp;cin>>opp;
            switch(opp)
            {
                case 1:
                cout<<"Seagate Backup Plus Slim 1TB Portable External Hard Drive with 200GB of Cloud Storage & Mobile Device Backup (Black)\n";
                strcpy(ui,"Seagate Backup Plus Slim 1TB Portable External Hard Drive with 200GB of Cloud Storage & Mobile Device Backup (Black)");
                cout<<"Value-'1200 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 2:
                cout<<"Transcend StoreJet 25M3 2.5-inch 1TB Portable External Hard Drive\n";
                strcpy(ui,"Transcend StoreJet 25M3 2.5-inch 1TB Portable External Hard Drive");
                cout<<"Value-'1200 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 3:
                cout<<"WD My Passport Ultra WDBGPU0010BBK 1TB Portable External Hard Drive (Black)\n";
                strcpy(ui,"WD My Passport Ultra WDBGPU0010BBK 1TB Portable External Hard Drive (Black)");
                cout<<"Value-'1200 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 4:
                cout<<"Toshiba Canvio Basics HDTB310AK3AA USB 3.0+USB2.0 1TB External Hard Disk\n";
                strcpy(ui,"Toshiba Canvio Basics HDTB310AK3AA USB 3.0+USB2.0 1TB External Hard Disk");
                cout<<"Value-'15000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 5:
                cout<<"WD My Passport Ultra 1TB Portable External Hard Drive (Black)\n";
                strcpy(ui,"WD My Passport Ultra 1TB Portable External Hard Drive (Black)");
                cout<<"Value-'15000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 6:
                cout<<" Transcend StoreJet 2.5 inch 1 TB Auto-Backup Drive (Light Blue)\n";
                strcpy(ui," Transcend StoreJet 2.5 inch 1 TB Auto-Backup Drive (Light Blue)");
                cout<<"Value-'15000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 7:
                cout<<"Dell 1TB USB 3.0 External Hard Drive\n";
                strcpy(ui,"Dell 1TB USB 3.0 External Hard Drive");
                cout<<"Value-'15000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 8:
                cout<<"Seagate Expansion 1TB Portable External Hard Drive\n";
                strcpy(ui,"Seagate Expansion 1TB Portable External Hard Drive");
                cout<<"Value-'15000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 9:
                cout<<"Dell Backup Plus 1Tb USB 3.0 Portable Hard Drive\n";
                strcpy(ui,"Dell Backup Plus 1Tb USB 3.0 Portable Hard Drive");
                cout<<"Value-'16000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 10:
                cout<<"Samsung 850 EVO 1TB 2.5-Inch SATA III Internal SSD (MZ-75E1T0B/AM)\n";
                strcpy(ui,"Samsung 850 EVO 1TB 2.5-Inch SATA III Internal SSD (MZ-75E1T0B/AM)");
                cout<<"Value-'16000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                default:
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                goto tt;
                


            } 
            break;
            case 5: 
            cout<<"1. Epson L220 Colour Ink Tank System Printer\n";
            cout<<"2. Epson L 130 Color Single Function Inkjet Printer\n";
            cout<<"3. Canon MG2570 Colour Multifunction Inkjet Printer (WHITE)\n";
            cout<<"4. HP 678 Combo Pack - Black & Tricolor Ink Cartridge\n";
            cout<<"5. Samsung ML-2161 Laser Printer\n";
            cout<<"6. Canon MG2570S Colour Multifunction Inkjet Printer\n";
            cout<<"7. HP DeskJet 1112 Colour Printer\n";
            cout<<"8. HP 802 Combo-pack Black-Tri-color Ink Cartridges\n";
            cout<<"9. HP Officejet Pro 8620 e-All-in-One Printer\n";
            cout<<"10.Brother MFC-J3720 InkBenefit Ink Printer\n";
            cout<<"11.Brother MFC-J3520 Colour Wifi Multifunction Laser Printer\n";
            int opl;cin>>opl;
            switch(opl)
            {
                case 1:
                cout<<"Epson L220 Colour Ink Tank System Printer\n";
                strcpy(ui,"Epson L220 Colour Ink Tank System Printer");
                cout<<"Value-'16000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 2:
                cout<<"Epson L 130 Color Single Function Inkjet Printer\n";
                strcpy(ui,"Epson L 130 Color Single Function Inkjet Printer");
                cout<<"Value-'16000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 3:
                cout<<"Canon MG2570 Colour Multifunction Inkjet Printer (WHITE)\n";
                strcpy(ui,"Canon MG2570 Colour Multifunction Inkjet Printer (WHITE)");
                cout<<"Value-'16000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 4:
                cout<<"HP 678 Combo Pack - Black & Tricolor Ink Cartridge\n";
                strcpy(ui,"HP 678 Combo Pack - Black & Tricolor Ink Cartridge");
                cout<<"Value-'16000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df; 
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 5:
                cout<<"Samsung ML-2161 Laser Printer\n";
                strcpy(ui,"Samsung ML-2161 Laser Printer");
                cout<<"Value-'16000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 6:
                cout<<"\n";
                strcpy(ui,"Canon MG2570S Colour Multifunction Inkjet Printer");
                cout<<"Value-'25000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 7:
                cout<<"HP DeskJet 1112 Colour Printer\n";
                strcpy(ui,"HP DeskJet 1112 Colour Printer");
                cout<<"Value-'25000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 8:
                cout<<"HP 802 Combo-pack Black-Tri-color Ink Cartridges\n";
                strcpy(ui,"HP 802 Combo-pack Black-Tri-color Ink Cartridges");
                cout<<"Value-'25000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 9:
                cout<<"HP Officejet Pro 8620 e-All-in-One Printer\n";
                strcpy(ui,"HP Officejet Pro 8620 e-All-in-One Printer");
                cout<<"Value-'25000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 10:
                cout<<"Brother MFC-J3720 InkBenefit Ink Printer\n";
                strcpy(ui,"Brother MFC-J3720 InkBenefit Ink Printer");
                cout<<"Value-'25000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 11:
                cout<<"Brother MFC-J3520 Colour Wifi Multifunction Laser Printer\n";
                strcpy(ui,"Brother MFC-J3520 Colour Wifi Multifunction Laser Printer");
                cout<<"Value-'25000 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                default:
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                goto tt;
                


            } 
            break;
            case 6: 
            cout<<"1. TP-LINK TD-W8960N Wireless N300 ADSL2+ Modem Router 2.4Ghz 300Mbps 802.11b/g/n Splitter 2x 5dBi fixed antennas\n";
            cout<<"2. TP-LINK TL-WR841N 300Mbps Wireless N Router\n";
            cout<<"3. TP-Link TL-WR740N Wireless Router (white)\n";
            cout<<"4. D-Link DWP 157 3G Modem Data Card 21 Mbps (White)\n";
            cout<<"5. D-Link Dir-600M Broadband Wireless Router\n";
            cout<<"6. Tenda TE-N3 N150 Easy Setup Router (White)\n";
            cout<<"7. D-Link DSL-2730U Wireless N 150 ADSL2+ 4-Port Router (Black)\n";
            cout<<"8. D-Link DSL-2750U Wireless N 300 ADSL2+ 4-Port Wi-Fi Router with Modem (Black)\n";
            cout<<"9. Netgear WNR614 N300 Wi-Fi Router (White)\n";
            cout<<"10.Tenda N301 Wireless N300 Easy Setup Router (White)\n";
            cout<<"11.Tenda W311M N150 150Mbps Wireless USB Adapter (Grey)\n";
            int opk;cin>>opk;
            switch(opk)
            {
                case 1:
                cout<<"TP-LINK TD-W8960N Wireless N300 ADSL2+ Modem Router 2.4Ghz 300Mbps 802.11b/g/n Splitter 2x 5dBi fixed antennas\n";
                strcpy(ui,"TP-LINK TD-W8960N Wireless N300 ADSL2+ Modem Router 2.4Ghz 300Mbps 802.11b/g/n Splitter 2x 5dBi fixed antennas");
                cout<<"Value-'2500 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 2:
                cout<<"TP-LINK TL-WR841N 300Mbps Wireless N Router\n";
                strcpy(ui,"TP-LINK TL-WR841N 300Mbps Wireless N Router");
                cout<<"Value-'2500 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 3:
                cout<<"D-Link DWP 157 3G Modem Data Card 21 Mbps (White)\n";
                strcpy(ui,"D-Link DWP 157 3G Modem Data Card 21 Mbps (White)");
                cout<<"Value-'2500 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 4:
                cout<<"D-Link Dir-600M Broadband Wireless Router\n";
                strcpy(ui,"D-Link Dir-600M Broadband Wireless Router");
                cout<<"Value-'4500 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df; 
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 5:
                cout<<"D-Link Dir-600M Broadband Wireless Router\n";
                strcpy(ui,"D-Link Dir-600M Broadband Wireless Router");
                cout<<"Value-'4500 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 6:
                cout<<"Tenda TE-N3 N150 Easy Setup Router (White)\n";
                strcpy(ui,"Tenda TE-N3 N150 Easy Setup Router (White)");
                cout<<"Value-'5500 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 7:
                cout<<"D-Link DSL-2730U Wireless N 150 ADSL2+ 4-Port Router (Black)\n";
                strcpy(ui,"D-Link DSL-2730U Wireless N 150 ADSL2+ 4-Port Router (Black)");
                cout<<"Value-'5500 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 8:
                cout<<"D-Link DSL-2750U Wireless N 300 ADSL2+ 4-Port Wi-Fi Router with Modem (Black)\n";
                strcpy(ui,"D-Link DSL-2750U Wireless N 300 ADSL2+ 4-Port Wi-Fi Router with Modem (Black)");
                cout<<"Value-'5500 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 9:
                cout<<"Netgear WNR614 N300 Wi-Fi Router (White)\n";
                strcpy(ui,"Netgear WNR614 N300 Wi-Fi Router (White)");
                cout<<"Value-'5500 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 10:
                cout<<"Tenda N301 Wireless N300 Easy Setup Router (White)\n";
                strcpy(ui,"Tenda N301 Wireless N300 Easy Setup Router (White)");
                cout<<"Value-'6500 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                break;

                case 11:
                cout<<"Tenda W311M N150 150Mbps Wireless USB Adapter (Grey)\n";
                strcpy(ui,"Tenda W311M N150 150Mbps Wireless USB Adapter (Grey)");
                cout<<"Value-'6500 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    //po4();
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto tt;
                    
                }
                default:
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                goto tt;
                


	    }
	    break;
            case 7:
            //po4();
            break;
            default:
            cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
            goto tt;
            

        }
    }

class Displaymobotab:public Cart
{
    public:
    void gh();
    };
void Displaymobotab::gh()
    {

        int b;
        int df;
        int op;
        int a; 
        yy:
        cout<<"1.All Mobile Phones\n"; 
        cout<<"2.Smartphones\n";
        cout<<"3.Android Mobiles\n";
        cout<<"4.Windows Mobiles\n";
        cout<<"5.All Tablets\n";
        cout<<"To Go BacK------>> 6\n";
        cout<<"Enter Your Choice: \n";
        int abc;
        cin>>abc;
        clrscr();
        switch(abc)
        {
            case 1: 
            cout<<"1.One Plus X\n";
            cout<<"2.BlackBerry Priv\n";
            cout<<"3.HTC One A9\n";
            cout<<"4.Microsoft Lumia 950\n";
            cout<<"5.Microsoft Lumia 950 XL\n";
            cout<<"6.LG V10\n";
            cout<<"7.Nexus 6P\n";
            cout<<"8.Nexus 5P\n";
            cout<<"9.Moto E\n";
            cout<<"10.Moto X\n";
            cout<<"11.Honor 7\n";
            cout<<"12.Moto G(3-gen)\n";
            cout<<"13.iPhone 6S Plus\n";
            cout<<"14.LG G4\n";
            cout<<"15.Samsung Galaxy S6 Edge+\n";
            cout<<"16.Samsung Galaxy Note 4\n";
            cout<<"17.One Plus 2\n";
            cout<<"18.Samsung Galaxy S6 Edge\n";
            cout<<"19.iPhone 6S\n";
            cout<<"20.Samsung Galaxy S6\n";
            cout<<"21.Samsung Galaxy Note 5\n";
	    int A;cin>>A;
            switch(A)
            {
                case 1:
                cout<<"One Plus X\n";
                strcpy(ui,"One Plus X");
                cout<<"Value-Rs/-88 \n";
                adf=17000;
                cout<<"1. Add Item To Your Cart \n";
               
		cin>>df;
		if(df==1)
		{
		    uty();
		}
		else if(df==2)
		{
		    
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto yy;

		}
		break;

		case 2:
		cout<<"BlackBerry Priv\n";
		strcpy(ui,"BlackBerry Priv");
		cout<<"Value-Rs/-17000 \n";
		adf=17000;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		    uty();
		}
                else if(df==2)
                {

		    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 3:
                cout<<"HTC One A9\n";
                strcpy(ui,"HTC One A9");
                cout<<"Value-Rs/-25000 \n";
                adf=25000;
                cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
		    ;
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto yy;

		}
		break;

		case 4:
		cout<<"Microsoft Lumia 950\n";
		strcpy(ui,"Microsoft Lumia 950");
		cout<<"Value-Rs/-25000 \n";
		adf=25000;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		    uty();
		}
		else if(df==2)
		{
		    
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto yy;

		}
		break;

		case 5:
		cout<<"Microsoft Lumia 950 XL\n";
		strcpy(ui,"Microsoft Lumia 950 XL");
		cout<<"Value-Rs/-25000 \n";
		adf=25000;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		    uty();
		}
		else if(df==2)
		{
		    
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 6:
                cout<<"LG V10\n";
                strcpy(ui,"LG V10");
                cout<<"Value-Rs/-28000\n";
                adf=28000;
                cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 7:
                cout<<"Nexus 6P\n";
                strcpy(ui,"Nexus 6P");
                cout<<"Value-Rs/-36000 \n";
                adf=36000;
                cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 8:
                cout<<"Nexus 5P\n";
                strcpy(ui,"Nexus 5P");
                cout<<"Value-Rs/-28000 \n";
                adf=28000;
                cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;



                case 9:
                cout<<"Moto E\n";
                strcpy(ui,"Moto E");
                cout<<"Value-Rs/-6000\n";
                adf=6000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 10:
                cout<<"Moto X\n";
                strcpy(ui,"Moto X");
                cout<<"Value-Rs/-20000 \n";
                adf=20000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 11:
                cout<<"Honor 7\n";
                strcpy(ui,"Honor 7");
                cout<<"Value-Rs/-23000 \n";
                adf=23000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 12:
                cout<<"Moto G(3-gen)\n";
                strcpy(ui,"Moto G(3-gen)");
                cout<<"Value-Rs/-12000 \n";
                adf=12000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 13:
                cout<<"iPhone 6S Plus\n";
                strcpy(ui,"iPhone 6S Plus");
                cout<<"Value-Rs/-70000 \n";
                adf=70000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 14:
                cout<<"LG G4\n";
                strcpy(ui,"LG G4");
                cout<<"Value-Rs/-33000\n";
                adf=33000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 15:
                cout<<"Samsung Galaxy S6 Edge+\n";
                strcpy(ui,"Samsung Galaxy S6 Edge+");
                cout<<"Value-Rs/-35000 \n";
                adf=35000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 16:
                cout<<"Samsung Galaxy Note 4\n";
                strcpy(ui,"Samsung Galaxy Note 4");
                cout<<"Value-Rs/-36000 \n";
                adf=36000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 17:
                cout<<"One Plus 2\n";
                strcpy(ui,"One Plus 2");
                cout<<"Value-Rs/-20000 \n";
                adf=20000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 18:
                cout<<"Samsung Galaxy S6 Edge\n";
                strcpy(ui,"Samsung Galaxy S6 Edge");
                cout<<"Value-Rs/-40000 \n";
                adf=40000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 19:
                cout<<"iPhone 6S\n";
                strcpy(ui,"iPhone 6S");
                cout<<"Value-Rs/-60000 \n";
                adf=60000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 20:
                cout<<"Samsung Galaxy S6\n";
                strcpy(ui,"Samsung Galaxy S6");
                cout<<"Value-Rs/-35000\n";
                adf=35000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 21:
                cout<<"Samsung Galaxy Note 5\n";
                strcpy(ui,"Samsung Galaxy Note 5");
                cout<<"Value-Rs/-50000 \n";
                adf=50000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                default:
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                goto yy;
                


            }
            break;
            case 2: 
            cout<<"1.One Plus X\n";
            cout<<"2.BlackBerry Priv\n";
            cout<<"3.HTC One A9\n";
            cout<<"4.Microsoft Lumia 950\n";
            cout<<"5.Microsoft Lumia 950 XL\n";
            cout<<"6.LG V10\n";
            cout<<"7.Nexus 6P\n";
            cout<<"8.Nexus 5P\n";
            cout<<"9.Moto E\n";
            cout<<"10.Moto X\n";
            cout<<"11.Moto G(3-gen)\n";
            cout<<"12.iPhone 6S Plus\n";
            cout<<"13.LG G4\n";
            cout<<"14.Samsung Galaxy S6 Edge+\n";
            cout<<"15.Samsung Galaxy Note 4\n";
            cout<<"16.One Plus 2\n";
            cout<<"17.Samsung Galaxy S6 Edge\n";
            cout<<"18.iPhone 6S\n";
            cout<<"19.Samsung Galaxy S6\n";
            cout<<"20.Samsung Galaxy Note 5\n";
            int B;cin>>B;
            switch(B)
            {

                case 1:
                cout<<"One Plus X\n";
                strcpy(ui,"One Plus X");
                cout<<"Value-Rs/-20000\n";
                adf=20000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 2:
                cout<<"BlackBerry Priv\n";
                strcpy(ui,"BlackBerry Priv");
                cout<<"Value-Rs/-20000 \n";
                adf=20000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 3:
                cout<<"HTC One A9\n";
                strcpy(ui,"HTC One A9");
                cout<<"Value-Rs/-20000 \n";
                adf=20000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 4:
                cout<<"Microsoft Lumia 950\n";
                strcpy(ui,"Microsoft Lumia 950");
                cout<<"Value-Rs/-25000 \n";
                adf=25000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 5:
                cout<<"Microsoft Lumia 950 XL\n";
                strcpy(ui,"Microsoft Lumia 950 XL");
                cout<<"Value-Rs/-25000 \n";
                adf=25000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 6:
                cout<<"LG V10\n";
                strcpy(ui,"LG V10");
                cout<<"Value-Rs/-30000 \n";
                adf=30000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 7:
                cout<<"Nexus 6P\n";
                strcpy(ui,"Nexus 6P");
                cout<<"Value-Rs/-35000 \n";
                adf=35000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 8:
                cout<<"Nexus 5P\n";
                strcpy(ui,"Nexus 5P");
                cout<<"Value-Rs/-35000 \n";
                adf=35000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 9:
                cout<<"Moto E\n";
                strcpy(ui,"Moto E");
                cout<<"Value-Rs/-19000 \n";
                adf=19000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 10:
                cout<<"Moto X\n";
                strcpy(ui,"Moto X");
                cout<<"Value-Rs/-25000 \n";
                adf=25000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 11:
                cout<<"Moto G(3-gen)\n";
                strcpy(ui,"Moto G(3-gen)");
                cout<<"Value-Rs/-10000 \n";
                adf=10000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 12:
                cout<<"iPhone 6S Plus\n";
                strcpy(ui,"iPhone 6S Plus");
                cout<<"Value-Rs/-70000 \n";
                adf=70000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 13:
                cout<<"LG G4\n";
                strcpy(ui,"LG G4");
                cout<<"Value-Rs/30000 \n";
                adf=30000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 14:
                cout<<"Samsung Galaxy S6 Edge+\n";
                strcpy(ui,"Samsung Galaxy S6 Edge+");
                cout<<"Value-Rs/-50000 \n";
                adf=50000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 15:
                cout<<"Samsung Galaxy Note 4\n";
                strcpy(ui,"Samsung Galaxy Note 4");
                cout<<"Value-Rs/-55000\n";
                adf=55000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 16:
                cout<<"One Plus 2\n";
                strcpy(ui,"One Plus 2");
                cout<<"Value-Rs/-20000 \n";
                adf=20000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 17:
                cout<<"Samsung Galaxy S6 Edge\n";
                strcpy(ui,"Samsung Galaxy S6 Edge");
                cout<<"Value-Rs/-35000 \n";
                adf=35000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 18:
                cout<<"iPhone 6S\n";
                strcpy(ui,"iPhone 6S");
                cout<<"Value-Rs/-60000 \n";
                adf=60000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 19:
                cout<<"Samsung Galaxy S6\n";
                strcpy(ui,"Samsung Galaxy S6");
                cout<<"Value-Rs/-30000\n";
                adf=30000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 20:
                cout<<"Samsung Galaxy Note 5\n";
                strcpy(ui,"Samsung Galaxy Note 5");
                cout<<"Value-Rs/-45000 \n";
                adf=45000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                default:
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                goto yy;
                


            }
            break;

            case 3: 
            cout<<"1.One Plus X\n";
            cout<<"2.BlackBerry Priv\n";
            cout<<"3.HTC One A9\n";
            cout<<"4.LG V10\n";
            cout<<"5.Nexus 6P\n";
            cout<<"6.Nexus 5P\n";
            cout<<"7.Moto E\n";
            cout<<"8.Moto X\n";
            cout<<"9.Moto G(3-gen)\n";
            cout<<"10.LG G4\n";
            cout<<"11.Samsung Galaxy S6 Edge+\n";
            cout<<"12.Samsung Galaxy Note 4\n";
            cout<<"13.One Plus 2\n";
            cout<<"14.Samsung Galaxy S6 Edge\n";
            cout<<"15.Samsung Galaxy S6\n";
            cout<<"16.Samsung Galaxy Note 5\n";
            int C;cin>>C;
            switch(C)
            {

                case 1:
                cout<<"One Plus X\n";
                strcpy(ui,"One Plus X");
                cout<<"Value-Rs/-17000 \n";
                adf=17000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 2:
                cout<<"BlackBerry Priv\n";
                strcpy(ui,"BlackBerry Priv");
                cout<<"Value-Rs/-17000 \n";
                adf=17000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 3:
                cout<<"HTC One A9\n";
                strcpy(ui,"HTC One A9");
                cout<<"Value-Rs/-17000\n";
                adf=17000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 4:
                cout<<"LG V10\n";
                strcpy(ui,"LG V10");
                cout<<"Value-Rs/-17000\n";
                adf=17000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 5:
                cout<<"Nexus 6P\n";
                strcpy(ui,"Nexus 6P");
                cout<<"Value-Rs/-35000 \n";
                adf=35000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 6:
                cout<<"Nexus 5P\n";
                strcpy(ui,"Nexus 5P");
                cout<<"Value-Rs/-25000 \n";
                adf=25000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 7:
                cout<<"Moto E\n";
                strcpy(ui,"Moto E");
                cout<<"Value-Rs/-19000 \n";
                adf=19000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 8:
                cout<<"Moto X\n";
                strcpy(ui,"Moto X");
                cout<<"Value-Rs/-20000\n";
                adf=20000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 9:
                cout<<"Moto G(3-gen)\n";
                strcpy(ui,"Moto G(3-gen)");
                cout<<"Value-Rs/-19000 \n";
                adf=19000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 10:
                cout<<"LG G4\n";
                strcpy(ui,"LG G4");
                cout<<"Value-Rs/-33000 \n";
                adf=33000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 11:
                cout<<"Samsung Galaxy S6 Edge+\n";
                strcpy(ui,"Samsung Galaxy S6 Edge+");
                cout<<"Value-Rs/-45000 \n";
                adf=45000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 12:
                cout<<"Samsung Galaxy Note 4\n";
                strcpy(ui,"Samsung Galaxy Note 4");
                cout<<"Value-Rs/-35000\n";
                adf=35000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 13:
                cout<<"One Plus 2\n";
                strcpy(ui,"One Plus 2");
                cout<<"Value-Rs/-20000 \n";
                adf=20000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 14:
                cout<<"Samsung Galaxy S6 Edge\n";
                strcpy(ui,"Samsung Galaxy S6 Edge");
                cout<<"Value-Rs/-30000 \n";
                adf=30000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 15:
                cout<<"Samsung Galaxy S6\n";
                strcpy(ui,"Samsung Galaxy S6");
                cout<<"Value-Rs/-28000 \n";
                adf=28000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 16:
                cout<<"Samsung Galaxy Note 5\n";
                strcpy(ui,"Samsung Galaxy Note 5");
                cout<<"Value-Rs/-50000\n";
                adf=50000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                default:
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                goto yy;
                


            }   
            break;
            case 4: 
            cout<<"1.Microsoft Lumia 950\n";
            cout<<"2.   Microsoft Lumia 950 XL\n";
            cout<<"3.Microsoft Lumia 430\n";
            cout<<"4.   Microsoft Lumia 640 XL \n";
            cout<<"5.Microsoft Lumia 638\n";
            cout<<"6.   Microsoft Lumia 1320\n";
            cout<<"7.Microsoft Lumia 920\n";
            int D;cin>>D;
            switch(D)
            {
                case 1:
                cout<<"Microsoft Lumia 950\n";
                strcpy(ui,"Microsoft Lumia 950");
                cout<<"Value-Rs/-35000 \n";
                adf=35000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 2:
                cout<<" Microsoft Lumia 950 XL\n";
                strcpy(ui,"Microsoft Lumia 950 XL");
                cout<<"Value-Rs/-40000 \n";
                adf=40000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 3:
                cout<<"Microsoft Lumia 430\n";
                strcpy(ui,"Microsoft Lumia 430");
                cout<<"Value-Rs/-10000 \n";
                adf=10000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 4:
                cout<<"Microsoft Lumia 640 XL\n";
                strcpy(ui,"Microsoft Lumia 640 XL");
                cout<<"Value-Rs/-20000\n";
                adf=20000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 5:
                cout<<"Microsoft Lumia 638\n";
                strcpy(ui,"Microsoft Lumia 638");
                cout<<"Value-Rs/-8000 \n";
                adf=8000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 6:
                cout<<"Microsoft Lumia 1320\n";
                strcpy(ui,"Microsoft Lumia 1320");
                cout<<"Value-Rs/-26000 \n";
                adf=26000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 7:
                cout<<"Microsoft Lumia 920\n";
                strcpy(ui,"Microsoft Lumia 920");
                cout<<"Value-Rs/-20000 \n";
                adf=20000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                default:
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                goto yy;
                


            }      
            break;
            case 5: 
            cout<<"1.iPad Pro\n";
            cout<<"2.Surface Pro 4\n";
            cout<<"3.Mi Pad\n";
            cout<<"4.iPad Air 2\n";
            cout<<"5.Surface Pro 3\n";
            cout<<"6.Samsung Galaxy S2\n";
            cout<<"7.iPad Mini 3\n";
            cout<<"8.iPad\n";
            int E;cin>>E;
            switch(E)
            {
                case 1:
                cout<<"iPad Pro\n";
                strcpy(ui,"iPad Pro");
                cout<<"Value-Rs/-65000 \n";
                adf=65000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 2:
                cout<<"Surface Pro 4\n";
                strcpy(ui,"Surface Pro 4");
                cout<<"Value-Rs/-700000 \n";
                adf=70000;
                cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 3:
                cout<<"Mi Pad\n";
                strcpy(ui,"Mi Pad");
                cout<<"Value-Rs/-10000 \n";
                adf=10000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 4:
                cout<<"iPad Air 2\n";
                strcpy(ui,"iPad Air 2");
                cout<<"Value-Rs/-29000 \n";
                adf=29000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 5:
                cout<<"Surface Pro 3\n";
                strcpy(ui,"Surface Pro 3");
                cout<<"Value-Rs/-35000 \n";
                adf=35000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 6:
                cout<<"Samsung Galaxy S2\n";
                strcpy(ui,"Samsung Galaxy S2");
                cout<<"Value-Rs/-35000 \n";
                adf=35000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 7:
                cout<<"iPad Mini 3\n";
                strcpy(ui,"iPad Mini 3");
                cout<<"Value-Rs/-40000\n";
                adf=40000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                break;

                case 8:
                cout<<"iPad\n";
                strcpy(ui,"iPad");
                cout<<"Value-Rs/-20000 \n";
                adf=20000;cout<<"1. Add Item To Your Cart \n";
               
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto yy;
                    
                }
                default:
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                goto yy;
                

            }
            case 6:
            
            break;
            
            default:
            cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
            goto yy;
            

	}
    }


class Displaybook:public Cart
{
    public:
     void masc();};

    void Displaybook:: masc()
    {
	
	int df;
	int a,rt;


	 ii:
	cout<<"1.All Books\n";
	cout<<"2.Bestsellers\n";
	cout<<"3.Hindi,Tamil & other languages\n";
	cout<<"4.Childrens & Young Adult\n";
	cout<<"5.Literature & Fiction\n";
	cout<<"6.Indian Writing\n";
	cout<<"To Go BacK------>> 7\n";
	cout<<"Enter Your Choice: \n";
	cin>>rt;
	clrscr();
	switch(rt)
	{
	    case 1:
	    cout<<"1.Making India Awesome\n";
	    cout<<"2.Half Girlfriend\n";
	    cout<<"3.Who Will Cry When You Die?\n";
	    cout<<"4.Scion of Ikshvaku\n";
	    cout<<"5.Word Power Made Easy\n";
	    cout<<"6.Wings Of Fire: An Autobiography\n";
	    cout<<"7.Life is What You Make it\n";
	    cout<<"8.The Monk Who Sold His Ferrari\n";
	    cout<<"9.The Alchemist\n";
	    cout<<"10.Youre Trending in My Dreams\n";
	    cout<<"11.The Immortals of Meluha\n";
	    cout<<"12.Can Love Happen Twice\n";
	    cout<<"13.The Da Vinci Code\n";
	    cout<<"14.Angels And Demons\n";
	    cout<<"15.The Secret Of The Nagas" ;
	    cout<<"Enter Your Choice: \n";
	    int b;cin>>b;

	    switch(b)
	    {
		case 1:
		cout<<"Making India Awesome\n";
		 strcpy(ui,"Making India Awesome");
		cout<<"                              by:- Chetan Bhagat \n";
		cout<<"          Paperback Edition\n";
		cout<<"Value-Rs/-88 \n";
		adf=88;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		    uty();
		    
		}
		else if(df==2)
		{
		    

		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto ii;

		}
		break;

		case 2:
		cout<<"Half Girlfriend\n";
		 strcpy(ui,"Half Girlfriend");
		cout<<"                              by:- Chetan Bhagat \n";
		cout<<"          Paperback Edition\n";
		cout<<"Value-Rs/-88 \n";
		adf=88;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		    uty();
		}
		else if(df==2)
		{
		    
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto ii;

		}
		break;

		case 3:

		cout<<"Who Will Cry When You Die?\n";
		 strcpy(ui,"Who Will Cry When You Die?");
		cout<<"                              by:- Robin Sharma  \n";
		cout<<"          Paperback Edition\n";
		cout<<"Value-Rs/-88 \n";
		adf=88;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		   uty();
		}
		else if(df==2)
		{
		    
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto ii;

		}
		break;

		case 4:

		cout<<"Scion of Ikshvaku\n";
		 strcpy(ui,"Scion of Ikshvaku");
		cout<<"                              by:- Amish Tripathi \n";
		cout<<"          Paperback Edition\n";
		cout<<"Value-Rs/-88 \n";
		adf=88;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		    uty();
		}
		else if(df==2)
		{
		    
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto ii;

		}
		break;

		case 5:

		cout<<"Word Power Made Easy\n";
		strcpy(ui,"Word Power Made Easy");
		cout<<"                              by:- Norman Lewis \n";
		cout<<"          Paperback Edition\n";
		cout<<"Value-Rs/-88 \n";
		adf=88;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		    uty();
		}
		else if(df==2)
		{
		    
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto ii;

		}
		break;

		case 6:
		cout<<"Wings Of Fire: An Autobiography\n";
		strcpy(ui,"Wings Of Fire: An Autobiography");
		cout<<"                              by:- A.P.J. Abdul Kalam \n";
		cout<<"          Paperback Edition\n";
		cout<<"Value-Rs/-88 \n";
		adf=88;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		    uty();
		}
		else if(df==2)
		{
		    
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto ii;

		}
		break;

		case 7:
		cout<<"Life is What You Make it\n";
		strcpy(ui,"Life is What You Make it");
		cout<<"                              by:- Preeti Shenoy \n";
		cout<<"          Paperback Edition\n";
		cout<<"Value-Rs/-88 \n";
		adf=88;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 8:
                cout<<"The Monk Who Sold His Ferrari\n";
		strcpy(ui,"The Monk Who Sold His Ferrari");
                cout<<"                              by:- Robin Sharma \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                   uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 9:
                cout<<"The Alchemist\n";
		strcpy(ui,"The Alchemist");
                cout<<"                              by:- Paulo Coelho \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 10:
                cout<<"Youre Trending in My Dreams\n";
		strcpy(ui,"Youre Trending in My Dreams");
                cout<<"                              by:- Sudeep Nagarkar\n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 11:
                cout<<"The Immortals of Meluha\n";
		strcpy(ui,"The Immortals of Meluha");
                cout<<"                              by:- Amish Tripathi  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 12:
                cout<<"Can Love Happen Twice\n";
		strcpy(ui,"Can Love Happen Twice");
                cout<<"                              by:- Ravinder Singh  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 13:
                cout<<"The Da Vinci Code\n";
		strcpy(ui,"The Da Vinci Code");
                cout<<"                              by:- Dan Brown \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 14:
                cout<<"Angels And Demons\n";
		strcpy(ui,"Angels And Demons");
                cout<<"                              by:- Dan Brown \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 15:
                cout<<"The Secret Of The Nagas\n";
		strcpy(ui,"The Secret Of The Nagas");
                cout<<"                              by:- Amish Tripathi \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                default:
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                goto ii;
                

            }
            break;

            case 2:
            cout<<"1.The Sword of Summer\n";
            cout<<"2.Why We Love The Way We Do\n";
            cout<<"3.How To Think Like Bill Gates\n";
            cout<<"4.Street Smart\n";
            cout<<"5.Diary of a Wimpy Kid 10\n";
            cout<<"6.Career of Evil\n";
            cout<<"7.Stretch Your Technology Protect\n";
            cout<<"8.Rougue Lawyer\n";
            cout<<"9.Non Resident Bihari\n";
            cout<<"10.Dreaming Big\n";
            cout<<"Enter Your Choice: \n";
	    int c;cin>>c;
            switch(c)
            {
                case 1:   
                cout<<"The Sword of Summer\n";
		strcpy(ui,"The Sword of Summer");
                cout<<"                              by:- Rick Riordan \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 2:
                cout<<"Why We Love The Way We Do\n";
		strcpy(ui,"Why We Love The Way We Do");
                cout<<"                              by:- Preeti Shenoy \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 3:
                cout<<"How To Think Like Bill Gates\n";
		strcpy(ui,"How To Think Like Bill Gates");
                cout<<"                              by:- Daniel Smith \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 4:
                cout<<"Street Smart\n";
		strcpy(ui,"Street Smart");
                cout<<"                              by:- Jim Rogers \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 5:
                cout<<"Diary of a Wimpy Kid 10\n";
		strcpy(ui,"Diary of a Wimpy Kid 10");
                cout<<"                              by:- Jeff Kinney \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 6:
                cout<<"Career of Evil\n";
		strcpy(ui,"Career of Evil");
                cout<<"                              by:- Robert Galbraith \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 7:
                cout<<"Stretch Your Technology Protect\n";
		strcpy(ui,"Stretch Your Technology Protect");
                cout<<"                              by:- Ankit Fadia \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 8:
                cout<<"Rougue Lawyer\n";
		strcpy(ui,"Rougue Lawyer");
                cout<<"                              by:- John Grisham \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 9:
                cout<<"Non Resident Bihari\n";
		strcpy(ui,"Non Resident Bihari");
                cout<<"                              by:- Shashikant Mishra \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                case 10:
                cout<<"Dreaming Big\n";
		strcpy(ui,"Dreaming Big");
                cout<<"                              by:- Sam Pitroda \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;
                
                default:
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                goto ii;
                


            }
            break;

            case 3:
            cout<<"1.Gitanjali\n"; //hindi books
            cout<<"2.Rashmi Rathi\n";
            cout<<"3.Mahabharat\n";
            cout<<"4.Ramayana\n";
            cout<<"5.Volga Se Ganga\n";
            cout<<"6.Chandrahasam\n";//tamil books
            cout<<"7.Stay Hungry Stay Foolish\n";
            cout<<"8.Abdul Kalams Philosophies\n";
            cout<<"9.Agni Siragugal\n";
            cout<<"10.The Secret\n";          
            cout<<"Enter Your Choice: \n";
	    int d;cin>>d;
            switch(d)
            {
                case 1:   
                cout<<"Gitanjali\n";
		strcpy(ui,"Gitanjali");
                cout<<"                              by:- Tagore R \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 2:
                cout<<"Rashmi Rathi\n";
		strcpy(ui,"Rashmi Rathi");
                cout<<"                              by:- Ramdhari Singh Dinkar  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 3:
                cout<<"Mahabharata\n";
		strcpy(ui,"Mahabharat");
                cout<<"                              by:- C.Rajagopalachari  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 4:
                cout<<"Ramayana\n";
		strcpy(ui,"Ramayana");
                cout<<"                              by:-  C. Rajagopalachari \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 5:
                cout<<"Volga Se Ganga\n";
		strcpy(ui,"Volga Se Ganga");
                cout<<"                              by:- Rahul Sankrityaan  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 6:
                cout<<"Chandrahasam\n";
		strcpy(ui,"Chandrahasam");
                cout<<"                              by:- S. Venkatesan and K. Balashanmugam  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 7:
                cout<<"Stay Hungry Stay Foolish\n";
		strcpy(ui,"Stay Hungry Stay Foolish");
                cout<<"                              by:-  Rashmi Bansal \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 8:
                cout<<"Abdul Kalams Philosophies\n";
		strcpy(ui,"Abdul Kalams Philosophies");
                cout<<"                              by:- K. Parthasarathy  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 9:
                cout<<"Agni Siragugal\n";
		strcpy(ui,"Agni Siragugal");
                cout<<"                              by:- A.P.J. Abdul Kalam  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 10:
                cout<<"The Secret\n";
		strcpy(ui,"The Secret");
                cout<<"                              by:- Rhonda Byrne  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                default:
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                goto ii;
                


            }
            break;

            case 4:
            cout<<"1.Diary of a Wimpy Kid old School\n";    
            cout<<"2.The Fault in our Stars\n";  
            cout<<"3.Copy Colour\n";
            cout<<"4.Harry Potter (Book 1)\n";
            cout<<"5.The Old Man And The Sea\n"; 
            cout<<"6.Percy Jackson and The Sea Monster\n";
            cout<<"7.Lord of The Rings (Series)\n";
            cout<<"8.The Maze Runner\n";
            cout<<"9.Goosebumps\n";
            cout<<"10.The Hunger Games\n"; 
            cout<<"Enter Your Choice: \n";
	    int e;cin>>e;
            switch(e)
            {
                case 1: 
                cout<<"Diary of a Wimpy Kid old School\n";
		strcpy(ui,"Diary of a Wimpy Kid old School");
                cout<<"                              by:- Jeff Kinney \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 2:
                cout<<"The Fault in our Stars\n";
		strcpy(ui,"The Fault in our Stars");
                cout<<"                              by:- John Green  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                 uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 3:
                cout<<"Copy Colour\n";
		strcpy(ui,"Copy Colour");
                cout<<"                              by:- Dreamland Publications  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 4:
                cout<<"Harry Potter (Book 1)\n";
		strcpy(ui,"Harry Potter (Book 1)");
                cout<<"                              by:-  J.K. Rowling \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 5:
                cout<<"The Old Man And The Sea\n";
		strcpy(ui,"The Old Man And The Sea");
                cout<<"                              by:- Ernest Hemingway  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 6:
                cout<<"Percy Jackson and The Sea Monster\n";
		strcpy(ui,"Percy Jackson and The Sea Monster");
                cout<<"                              by:- Rick Riordan  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 7:
                cout<<"Lord of The Rings (Series)\n";
		strcpy(ui,"Lord of The Rings (Series)");
                cout<<"                              by:- J. R. R. Tolkien \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 8:
                cout<<"The Maze Runner\n";
		strcpy(ui,"The Maze Runner");
                cout<<"                              by:- James Dashner \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                   uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 9:
                cout<<"Goosebumps\n";
		strcpy(ui,"Goosebumps");
                cout<<"                              by:- R. L. Stine \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 10:
                cout<<"The Hunger Games\n";
		strcpy(ui,"The Hunger Games");
                cout<<"                              by:- Suzanne Collins  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                   uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                default:
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                goto ii;
                

            }
            break;

            case 5: 
            cout<<"1.The Bestseller She Wrote\n";
            cout<<"2.Career of Evil\n";
            cout<<"3.The Complete Sherlock Holmes\n";
            cout<<"4.A Brief History of Seven Killings\n";
            cout<<"5.The Mountain Shadow\n";
            cout<<"6.A Strangeness in My Mind\n";
            cout<<"7.The 3 Mistakes of My Life\n";
            cout<<"8.Five Point Someone\n";
            cout<<"9.Reckless\n";
            cout<<"10.See Me\n";
            cout<<"Enter Your Choice: \n";
	    int f;cin>>f;
            switch(f)
            {
                case 1: 
                cout<<"The Bestseller She Wrote\n";
		strcpy(ui,"The Bestseller She Wrote");
                cout<<"                              by:- Ravi Subramanian   \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 2:
                cout<<"Career of Evil\n";
		strcpy(ui,"Career of Evil");
                cout<<"                              by:- J. K. Rowling  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 3:
                cout<<"The Complete Sherlock Holmes\n";
		strcpy(ui,"The Complete Sherlock Holmes");
                cout<<"                              by:- Arthur Conan Doyle   \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 4:
                cout<<"A Brief History of Seven Killings\n";
		strcpy(ui,"A Brief History of Seven Killings");
                cout<<"                              by:- Marlon James  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 5:
                cout<<"The Mountain Shadow\n";
		strcpy(ui,"The Mountain Shadow");
                cout<<"                              by:- Gregory David Roberts  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 6:
                cout<<"A Strangeness in My Mind\n";
		strcpy(ui,"A Strangeness in My Mind");
                cout<<"                              by:- A Strangeness in My Mind  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 7:
                cout<<"The 3 Mistakes of My Life\n";
		strcpy(ui,"The 3 Mistakes of My Life");
                cout<<"                              by:- Chetan Bhagat  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 8:
                cout<<"Five Point Someone\n";
		strcpy(ui,"Five Point Someone");
                cout<<"                              by:- Chetan Bhagat   \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 9:
                cout<<"Reckless\n";
		strcpy(ui,"Reckless");
                cout<<"                              by:- Cornelia Funke  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 10:
                cout<<"See Me\n";
		strcpy(ui,"See Me");
                cout<<"                              by:- Nicholas Sparks  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                default:
                cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                goto ii;
                


            }
            break;

            case 6:
            cout<<"1.Scion of Ikshvaku\n";
            cout<<"2.Life is What You Make It\n";
            cout<<"3.The Immortals of Meluha\n";
            cout<<"4.The Secret of The Nagas\n";
            cout<<"5.Can Love Happen Twice\n";
            cout<<"6.I Too Had A Love Story\n";
            cout<<"7.Your Dreams Are Mine Now\n";
            cout<<"8.Thats The Way We Met\n";
            cout<<"9.Non-Resident Bihari\n";
            cout<<"10.Love Stories that Touched My Heart\n";
            cout<<"Enter Your Choice: \n";
	    int g;cin>>g;
            switch(g)
            {
                case 1:  
                cout<<"Scion of Ikshvaku\n";
		strcpy(ui,"Scion of Ikshvaku");
                cout<<"                              by:- Amish Tripathi   \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
                cout<<"1. Add Item To Your Cart \n";
                cout<<"2. Continue Shopping     \n";
                cin>>df;
                if(df==1)
                {
                    uty();
                }
                else if(df==2)
                {
                    
                }
                else
                {
                    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
                    goto ii;
                    
                }
                break;

                case 2:
                cout<<"Life is What You Make It\n";
		strcpy(ui,"Life is What You Make It");
                cout<<"                              by:- Preeti Shenoy  \n";
                cout<<"          Paperback Edition\n";
                cout<<"Value-Rs/-88 \n";
                adf=88;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		    uty();
		}
		else if(df==2)
		{
		    
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto ii;

		}
		break;

		case 3:
		cout<<"The Immortals of Meluha\n";
		strcpy(ui," The Immortals of Meluha");
		cout<<"                              by:- Amish Tripathi \n";
		cout<<"          Paperback Edition\n";
		cout<<"Value-Rs/-88 \n";
		adf=88;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		   uty();
		}
		else if(df==2)
		{
		    
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto ii;

		}
		break;

		case 4:
		cout<<"The Secret of The Nagas\n";
		strcpy(ui,"The Secret of The Nagas");
		cout<<"                              by:- Amish Tripathi \n";
		cout<<"          Paperback Edition\n";
		cout<<"Value-Rs/-88 \n";
		adf=88;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		   uty();
		}
		else if(df==2)
		{
		    
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto ii;

		}
		break;

		case 5:
		cout<<"Can Love Happen Twice\n";
		strcpy(ui,"Can Love Happen Twice");
		cout<<"                              by:- Ravinder Singh \n";
		cout<<"          Paperback Edition\n";
		cout<<"Value-Rs/-88 \n";
		adf=88;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		    uty();
		}
		else if(df==2)
		{
		    
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto ii;

		}
		break;

		case 6:
		cout<<"I Too Had A Love Story\n";
		strcpy(ui,"I Too Had A Love Story");
		cout<<"                              by:- Ravinder Singh  \n";
		cout<<"          Paperback Edition\n";
		cout<<"Value-Rs/-88 \n";
		adf=88;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		    uty();
		}
		else if(df==2)
		{
		    
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto ii;

		}
		break;

		case 7:
		cout<<"Your Dreams Are Mine Now\n";
		strcpy(ui,"Your Dreams Are Mine Now");
		cout<<"                              by:- Ravinder Singh \n";
		cout<<"          Paperback Edition\n";
		cout<<"Value-Rs/-88 \n";
		adf=88;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		    uty();
		}
		else if(df==2)
		{
		    
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto ii;

		}
		break;

		case 8:
		cout<<"Thats The Way We Met\n";
		strcpy(ui,"Thats The Way We Met");
		cout<<"                              by:- Sudeep Nagarkar  \n";
		cout<<"          Paperback Edition\n";
		cout<<"Value-Rs/-88 \n";
		adf=88;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		   uty();
		}
		else if(df==2)
		{
		    
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto ii;

		}
		break;

		case 9:
		cout<<"Non-Resident Bihari\n";
		strcpy(ui,"Non-Resident Bihari");
		cout<<"                              by:- Rahkalam Prakash \n";
		cout<<"          Paperback Edition\n";
		cout<<"Value-Rs/-88 \n";
		adf=88;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		    uty();
		}
		else if(df==2)
		{
		    
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto ii;

		}
		break;

		case 10:
		cout<<"Love Stories that Touched My Heart\n";
		strcpy(ui,"Love Stories that Touched My Heart");
		cout<<"                              by:- Ravinder Singh  \n";
		cout<<"          Paperback Edition\n";
		cout<<"Value-Rs/-88 \n";
		adf=88;
		cout<<"1. Add Item To Your Cart \n";
		cout<<"2. Continue Shopping     \n";
		cin>>df;
		if(df==1)
		{
		    uty();
		}
		else if(df==2)
		{
		    
		}
		else
		{
		    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		    goto ii;

		}
		default:
		cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
		goto ii;



	    }
	    case 7:
	    //


	    default:
	    cout<<"/-/-/-/-/-/  INVALID INPUT  /-/-/-/-/-/\n";
	    goto ii;


	}

    }
     
class Displayog:public Displaybook,Displaymobotab,Displaycompoacc
{
public:
void po1();void po2();void po3();void po4();
void po();void tm();
};
 void Displayog :: po1()
    {

	clrscr();
       cout<<"                                                                                                       ==========Welcome To Ekart==========                                      \n";
	cout<<"                                                                                                                                                                 \n";
	tm();
	cout<<"                                                                                                          //// WE ACCEPT ALL ORDERS////                                      \n";
	cout<<"                                                                                                                                                                 \n";
	tm();
	cout<<"                                                                                                            ------*RETURN POLICY*-----                                           \n";

	cout<<"                                                                                                                                                                 \n";
	tm();
	cout<<"                                                                                                 *-*-*-*-*ONE STOP DESTINATION SUPERMARKET*-*-*-*-*                              \n";

	cout<<"                                                                                                                                                                  \n";
	tm();
	cout<<"                                                                                                     -=-=-=-=-=-=-FASTER DELIVERY-=-=-=-=-=-=-                                   \n";
	cout<<"                                                                                                                                                                 \n";

	tm();

	 }
void Displayog :: po2()
{
	cout<<"1. || OFFER ZONE ||\n";
	tm();
	cout<<"2.Shop by Category |?| \n";
	tm();
	cout<<"Enter Your Choice: \n";
	int opt;cin>>opt;
	switch(opt)
	{

	    case 1:po3();

	    case 2:po4();

	    default:
	    cout<<"-/-/-/-/-INVALID INPUT-/-/-/-/-/-\n";
	    po2();break;
	}
    }
void Displayog :: po3()
{
	    cout<<"No offers valid this time\\ try again later\n";
	    tm();
            po2();
	    }
void Displayog :: po4()
{int op;clrscr();
	    cout<<"[1] Books\t";
	    cout<<"[2] Mobiles & Tablets\t";
	    cout<<"[3] Computers and Peripherals\n\n";
	    cout<<"Enter Your Choice: \n";
	    cin>>op;
	    switch (op)
	    {
		case 1:
	         masc();
		break;

		case 2:
                  gh();
		break;

		case 3:
                  dj();
		break;

                default:
		cout<<"-/-/-/-/-INVALID INPUT-/-/-/-/-/-\n";
		po4();

	    }exit(0);
}
void Displayog :: po()
{
  po1();po2();
}

void Displayog::tm()
    {
       sleep(1);
    }
void main()
{
 Displayog obj1;
 obj1.po();
 getch();
}