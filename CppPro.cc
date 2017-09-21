void main() 
{
	int ch,r=1000,j;
	clrscr();
	gotoxy(33,22);
	cout<<"WELCOME";
	Z:
	clrscr(); gotoxy(25,8) ;
	cout<<"RAILWAY TICKET RESERVATION"; gotoxy(25,9);
	cout<<"==========================";
	gotoxy(20,15) ; cout<<"1.TRAIN DETAILS";
	gotoxy(20,17);
	cout<<"2.UPDATE TRAIN DETAILS ";
	gotoxy(20,19);
	cout<<"3.RESERVING A TICKET ";
	gotoxy(20,21);
	cout<<"4.CANCELLING A TICKET";
	gotoxy(20,23);
	cout<<"5.DISPLAY THE PRESENT TICKET STATUS ";
	gotoxy(20,25);
	cout<<"6.EXIT";
	gotoxy(20,27);
	cout<<"ENTER YOUR CHOICE: ";
 	cin>>ch; char n;
	switch(ch) 
	{
		case 1: {
			ifstream fin("Train1.dat",ios::out);
			fin.seekg(0);
			clrscr();
			if(!fin)
			{
				clrscr();
				gotoxy(10,10);
				cout< <"ERROR IN THE FILE !!!";
			}
			else 
			{
				clrscr();
				while(!fin.eof()) 
				{
				fin.read((char*)&tr,sizeof(tr)); tr.display();
				}
			}
			fin.close(); 
			goto Z;
			}
		case 2:{
			clrscr();
			gotoxy(20,10);
			cout<<"ENTER THE PASSWORD " ;
			cin>>j;
			gotoxy(20,30);
			cout< <"CHECKING PLEASE WAIT	";
			getch();
			}
			{
			Y:
			ofstream fout("Train1.dat",ios::app); tr.input();
			fout.write((char*)&tr,sizeof(tr));
			fout.close();
			gotoxy(10,30);
			cout<<"DO YOU WISH TO CONTINUE UPDATING ?(Y/N)";
			cin>>n;
			if(n==y||n==Y)
			goto Y; goto Z;
			}
			else
				goto Z;
 
			case 3:
				tick.reservation(); 
				goto Z;
 
			case 4:
				tick.cancellation(); 
				goto Z;
 
			case 5:
				tick.display(); goto Z;
 
			case 6:
				exit(0);
	}
	getch();
}


