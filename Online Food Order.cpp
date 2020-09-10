#include<iostream>
#include<fstream>
using namespace std;
struct name
{
	string firstnuser;
	string secondnuser;
	string email;
	string contact;
	string pass;
	string dob;
	string address;
};

int main()
{
	name obj[10];
	int n=20, num[5]={1,2,3,4,5}, i, choice, size, quantity, price;
	string firstname[2], password[2], secondname[2], uemail[2], udob[2], ucontact[2], uaddress[2]; 
	int press;
	string menu[4]={"pizza","burger","parataroll","biryani"};
	string pizza[5]={"Chicken Fajita Pizza", "Lasania Pizza", "Cheese Pizza", "Peri Peri Pizza", "BBQ Pizza"};
	string burger[5]={"Chicken burger", "Zinger burger", "Cheese zinger burger", "Mighty burger", "Beef burger"};
	string parataroll[5]={"BBQ parata roll", "Zinger parata roll", "Cheese BBQ parata roll", "Cheese Zinger parata roll"};
	string biryani[5]={"Chicken biryani", "Beef biryani", "Zinger biryani"};
	system("color F0");
	cout<<"\n\n\t---------------------------------------------------------";
	cout<<"\n\t-\t\t\t\t\t\t\t-";
	cout<<"\n\t-\t\t       Online Food Order      \t\t-";
	cout<<"\n\t-\t\t\t\t\t\t\t-";
	cout<<"\n\t---------------------------------------------------------";
	cout<<"\n\t* Press 1: to open login form";
	cout<<"\n\t* Press 2: to open signup form";
	cout<<"\n\t* Press any key : ";
	cin>>press;
	system("cls");
	//login
	if(press==1)
	{
		login:
		cout<<"\n\n\t---------------------------------------------------------";
		cout<<"\n\t-\t\t\t\t\t\t\t-";
		cout<<"\n\t-\t\t       Onine Food Order      \t\t-";
		cout<<"\n\t-\t\t\t\t\t\t\t-";
		cout<<"\n\t---------------------------------------------------------";
		cout<<"\n\n\n\t---------------------------------------------------------";
		cout<<"\n\n\t\t\tWelcome to login page";
		cout<<"\n\n\n\t---------------------------------------------------------";
		ifstream getfile("pdata.txt");
		for(int i=0; i<n; i++)
	
		{
			getfile>>obj[i].firstnuser;
			getfile>>obj[i].secondnuser;
			getfile>>obj[i].email;
			getfile>>obj[i].contact;
			getfile>>obj[i].pass;
			getfile>>obj[i].dob;
			getfile>>obj[i].address;
		}
		cout<<"\n\n\t Username : ";
		cin>>firstname[0];	
		cout<<"\n\n\t Password : ";
		cin>>password[0];
		system("cls");
		if(!getfile)
		{
			for(int i=0; i<1; i++)
			{
				if(firstname[0] == obj[i].firstnuser && password[0] == obj[i].pass)
				{
					cout<<"\n\n\t---------------------------------------------------------";
					cout<<"\n\t-\t\t\t\t\t\t\t-";
					cout<<"\n\t-\t\t       Onine Food Order      \t\t-";
					cout<<"\n\t-\t\t\t\t\t\t\t-";
					cout<<"\n\t---------------------------------------------------------";
					cout<<"\n\n\n\t---------------------------------------------------------";
					cout<<"\n\n\t\t\t\tWelcome to app";
					cout<<"\n\n\t---------------------------------------------------------";
					cout<<"\n\t* Press 1: to see personal info";
					cout<<"\n\t* Press 2: to order food";
					cout<<"\n\t* Press 3: to see our team detail";
					cout<<"\n\t* Press any key : ";
					cin>>press;
					system("cls");
					//personalinfo
					if(press==1)
					{
						cout<<"\n\n\t---------------------------------------------------------";
						cout<<"\n\t-\t\t\t\t\t\t\t-";
						cout<<"\n\t-\t\t       Onine Food Order      \t\t-";
						cout<<"\n\t-\t\t\t\t\t\t\t-";
						cout<<"\n\t---------------------------------------------------------";
						cout<<"\n\n\n\t---------------------------------------------------------";
						cout<<"\n\n\t\t\tWelcome to personal info";
						cout<<"\n\n\t---------------------------------------------------------";
						cout<<"\n\t*";
						cout<<"\n\t* First Name: "<<obj[i].firstnuser<<endl;
						cout<<"\t*";
						cout<<"\n\t* Second name: "<<obj[i].secondnuser<<endl;
						cout<<"\t*";
						cout<<"\n\t* Email: "<<obj[i].email<<endl;
						cout<<"\t*";
						cout<<"\n\t* Contact: "<<obj[i].contact<<endl;
						cout<<"\t*";
						cout<<"\n\t* Password: "<<obj[i].pass<<endl;
						cout<<"\t*";
						cout<<"\n\t* DOB: "<<obj[i].dob<<endl;
						cout<<"\t*";
						cout<<"\n\t* Address: "<<obj[i].address<<endl;
						cout<<"\t*";
						cout<<"\n\t---------------------------------------------------------";
					}
					//menu
					else if(press==2)
					{
						cout<<"\n\n\t---------------------------------------------------------";
						cout<<"\n\t-\t\t\t\t\t\t\t-";
						cout<<"\n\t-\t\t       Onine Food Order      \t\t-";
						cout<<"\n\t-\t\t\t\t\t\t\t-";
						cout<<"\n\t---------------------------------------------------------";
						cout<<"\n\n\n\t---------------------------------------------------------";
						cout<<"\n\n\t\t\t\tWelcome to menu";
						cout<<"\n\n\t---------------------------------------------------------";
						for(i=0; i<4; i++)
						{
							cout<<"\n\t* "<<num[i]<<": "<<menu[i]<<endl;
						}
						cout<<"\n\t* Press any key : ";
						cin>>press;
						//pizza
						if(press==1)
						{
							cout<<"\n\t 1) "<<pizza[0]<<endl;
							cout<<"\t 2) "<<pizza[1]<<endl;
							cout<<"\t 3) "<<pizza[2]<<endl;
							cout<<"\t 4) "<<pizza[3]<<endl;
							cout<<"\t 5) "<<pizza[4]<<endl;
							cout<<"\n\t* Please Enter which Flavour would you like to have?"<<endl<<"\t* ";
							cin>>choice;
							if(choice>0 && choice<6)
							{
								cout<<"\n\t Pres 1: 1) Small Rs.250\n"<<"\t Press 2: 2) Regular Rs.500\n"<<"\t Press 3: 3) Large Rs.900\n";
								cout<<"\n\t Choose Size Please : ";
								cin>>size;
								if(size>0 && size<4)
								{
									cout<<"\n\t * Tell us quantity : ";
									cin>>quantity;
									switch(size)
									{
										case 1: price=250*quantity; break;
										case 2: price=500*quantity; break;
										case 3: price=900*quantity; break;
									}
									system("cls");
									cout<<"\n\n\t---------------------------------------------------------";
									cout<<"\n\t-\t\t\t\t\t\t\t-";
									cout<<"\n\t-\t\t       Onine Food Order      \t\t-";
									cout<<"\n\t-\t\t\t\t\t\t\t-";
									cout<<"\n\t---------------------------------------------------------";
									switch(choice)
									{
										case 1:
										cout<<"\n\n\t\t\t\t*Order*";
										cout<<"\n\n\t* Your Order : "<<quantity<<" "<<pizza[0];
										cout<<"\n\t* Price : "<<price;
										cout<<"\n\n\t * Thank you for ordering";
										cout<<"\n\t * Your order will be deliever in 40 min";
										cout<<"\n\n\t---------------------------------------------------------\n\n";
										break;
										case 2:
										cout<<"\n\n\t\t\t\t*Order*";
										cout<<"\n\n\t* Your Order : "<<quantity<<" "<<pizza[1];
										cout<<"\n\t* Price : "<<price;
										cout<<"\n\n\t * Thank you for ordering";
										cout<<"\n\t * Your order will be deliever in 40 min";
										cout<<"\n\n\t---------------------------------------------------------\n\n";
										break;
										case 3:
										cout<<"\n\n\t\t\t\t*Order*";
										cout<<"\n\n\t* Your Order : "<<quantity<<" "<<pizza[2];
										cout<<"\n\t* Price : "<<price;
										cout<<"\n\n\t * Thank you for ordering";
										cout<<"\n\t * Your order will be deliever in 40 min";
										cout<<"\n\n\t---------------------------------------------------------\n\n";
										break;
										case 4:
										cout<<"\n\n\t\t\t\t*Order*";
										cout<<"\n\n\t* Your Order : "<<quantity<<" "<<pizza[3];
										cout<<"\n\t* Price : "<<price;
										cout<<"\n\n\t * Thank you for ordering";
										cout<<"\n\t * Your order will be deliever in 40 min";
										cout<<"\n\n\t---------------------------------------------------------\n\n";
										break;
										case 5:
										cout<<"\n\n\t\t\t\t*Order*";
										cout<<"\n\n\t* Your Order : "<<quantity<<" "<<pizza[4];
										cout<<"\n\t* Price : "<<price;
										cout<<"\n\n\t * Thank you for ordering";
										cout<<"\n\t * Your order will be deliever in 40 min";
										cout<<"\n\n\t---------------------------------------------------------\n\n";
										break;
									}
								}
							}
						}
						//burger
						else if(press==2)
						{
							cout<<"\n\t 1) "<<burger[0]<<endl;
							cout<<"\t 2) "<<burger[1]<<endl;
							cout<<"\t 3) "<<burger[2]<<endl;
							cout<<"\t 4) "<<burger[3]<<endl;
							cout<<"\t 5) "<<burger[4]<<endl;
							cout<<"\n\t* Please Enter which Flavour would you like to have?"<<endl<<"\t* ";
							cin>>choice;
							switch(choice)
							{
								case 1: cout<<"\n\t * The price of "<<burger[0]<<" is RS.60"; break;
								case 2: cout<<"\n\t * The price of "<<burger[1]<<" is RS.150"; break;
								case 3: cout<<"\n\t * The price of "<<burger[2]<<" is RS.200"; break;
								case 4: cout<<"\n\t * The price of "<<burger[3]<<" is RS.300"; break;
								case 5: cout<<"\n\t * The price of "<<burger[4]<<" is RS.400"; break;
							}
							cout<<"\n\t * Tell us quantity : ";
							cin>>quantity;
							switch(choice)
							{
								case 1: price=60*quantity; break;
								case 2: price=150*quantity; break;
								case 3: price=200*quantity; break;
								case 4: price=300*quantity; break;
								case 5: price=400*quantity; break;
							}
							system("cls");
							cout<<"\n\n\t---------------------------------------------------------";
							cout<<"\n\t-\t\t\t\t\t\t\t-";
							cout<<"\n\t-\t\t       Onine Food Order      \t\t-";
							cout<<"\n\t-\t\t\t\t\t\t\t-";
							cout<<"\n\t---------------------------------------------------------";
							switch(choice)
							{
								case 1:
								cout<<"\n\n\t\t\t\t*Order*";
								cout<<"\n\n\t* Your Order : "<<quantity<<" "<<burger[0];
								cout<<"\n\t* Price : "<<price;
								cout<<"\n\n\t * Thank you for ordering";
								cout<<"\n\t * Your order will be deliever in 40 min";
								cout<<"\n\n\t---------------------------------------------------------\n\n";
								break;
								case 2:
								cout<<"\n\n\t\t\t\t*Order*";
								cout<<"\n\n\t* Your Order : "<<quantity<<" "<<burger[1];
								cout<<"\n\t* Price : "<<price;
								cout<<"\n\n\t * Thank you for ordering";
								cout<<"\n\t * Your order will be deliever in 40 min";
								cout<<"\n\n\t---------------------------------------------------------\n\n";
								break;
								case 3:
								cout<<"\n\n\t\t\t\t*Order*";
								cout<<"\n\n\t* Your Order : "<<quantity<<" "<<burger[2];
								cout<<"\n\t* Price : "<<price;
								cout<<"\n\n\t * Thank you for ordering";
								cout<<"\n\t * Your order will be deliever in 40 min";
								cout<<"\n\n\t---------------------------------------------------------\n\n";
								break;
								case 4:
								cout<<"\n\n\t\t\t\t*Order*";
								cout<<"\n\n\t* Your Order : "<<quantity<<" "<<burger[3];
								cout<<"\n\t* Price : "<<price;
								cout<<"\n\n\t * Thank you for ordering";
								cout<<"\n\t * Your order will be deliever in 40 min";
								cout<<"\n\n\t---------------------------------------------------------\n\n";
								break;
								case 5:
								cout<<"\n\n\t\t\t\t*Order*";
								cout<<"\n\n\t* Your Order : "<<quantity<<" "<<burger[4];
								cout<<"\n\t* Price : "<<price;
								cout<<"\n\n\t * Thank you for ordering";
								cout<<"\n\t * Your order will be deliever in 40 min";
								cout<<"\n\n\t---------------------------------------------------------\n\n";
								break;
							}
						}
						//parataroll
						else if(press==3)
						{
							cout<<"\n\t 1) "<<parataroll[0]<<endl;
							cout<<"\t 2) "<<parataroll[1]<<endl;
							cout<<"\t 3) "<<parataroll[2]<<endl;
							cout<<"\t 4) "<<parataroll[3]<<endl;
							cout<<"\n\t* Please Enter which Flavour would you like to have?"<<endl<<"\t*";
							cin>>choice;
							switch(choice)
							{
								case 1: cout<<"\n\t * The price of "<<parataroll[0]<<" is RS.400"; break;
								case 2: cout<<"\n\t * The price of "<<parataroll[1]<<" is RS.250"; break;
								case 3: cout<<"\n\t * The price of "<<parataroll[2]<<" is RS.450"; break;
								case 4: cout<<"\n\t * The price of "<<parataroll[3]<<" is RS.300"; break;
							}
							cout<<"\n\t * Tell us quantity : ";
							cin>>quantity;
							switch(choice)
							{
								case 1: price=400*quantity; break;
								case 2: price=250*quantity; break;
								case 3: price=450*quantity; break;
								case 4: price=300*quantity; break;
							}
							system("cls");
							cout<<"\n\n\t---------------------------------------------------------";
							cout<<"\n\t-\t\t\t\t\t\t\t-";
							cout<<"\n\t-\t\t       Onine Food Order      \t\t-";
							cout<<"\n\t-\t\t\t\t\t\t\t-";
							cout<<"\n\t---------------------------------------------------------";
							switch(choice)
							{
								case 1:
								cout<<"\n\n\t\t\t\t*Order*";
								cout<<"\n\n\t* Your Order : "<<quantity<<" "<<parataroll[0];
								cout<<"\n\t* Price : "<<price;
								cout<<"\n\n\t * Thank you for ordering";
								cout<<"\n\t * Your order will be deliever in 40 min";
								cout<<"\n\n\t---------------------------------------------------------\n\n";
								break;
								case 2:
								cout<<"\n\n\t\t\t\t*Order*";
								cout<<"\n\n\t* Your Order : "<<quantity<<" "<<parataroll[1];
								cout<<"\n\t* Price : "<<price;
								cout<<"\n\n\t * Thank you for ordering";
								cout<<"\n\t * Your order will be deliever in 40 min";
								cout<<"\n\n\t---------------------------------------------------------\n\n";
								break;
								case 3:
								cout<<"\n\n\t\t\t\t*Order*";
								cout<<"\n\n\t* Your Order : "<<quantity<<" "<<parataroll[2];
								cout<<"\n\t* Price : "<<price;
								cout<<"\n\n\t * Thank you for ordering";
								cout<<"\n\t * Your order will be deliever in 40 min";
								cout<<"\n\n\t---------------------------------------------------------\n\n";
								break;
								case 4:
								cout<<"\n\n\t\t\t\t*Order*";
								cout<<"\n\n\t* Your Order : "<<quantity<<" "<<parataroll[3];
								cout<<"\n\t* Price : "<<price;
								cout<<"\n\n\t * Thank you for ordering";
								cout<<"\n\t * Your order will be deliever in 40 min";
								cout<<"\n\n\t---------------------------------------------------------\n\n";
								break;
							}
						}
						//biryani
						else if(press==4)
						{
							cout<<"\n\t 1) "<<biryani[0]<<endl;
							cout<<"\t 2) "<<biryani[1]<<endl;
							cout<<"\t 3) "<<biryani[2]<<endl;
							cout<<"\n\t* Please Enter which Flavour would you like to have?"<<endl<<"\t*";
							cin>>choice;
							switch(choice)
							{
								case 1: cout<<"\n\t * The price of "<<biryani[0]<<" is RS.300"; break;
								case 2: cout<<"\n\t * The price of "<<biryani[1]<<" is RS.600"; break;
								case 3: cout<<"\n\t * The price of "<<biryani[2]<<" is RS.400"; break;
							}
							cout<<"\n\t * Tell us quantity : ";
							cin>>quantity;
							switch(choice)
							{
								case 1: price=300*quantity; break;
								case 2: price=600*quantity; break;
								case 3: price=400*quantity; break;
							}
							system("cls");
							cout<<"\n\n\t---------------------------------------------------------";
							cout<<"\n\t-\t\t\t\t\t\t\t-";
							cout<<"\n\t-\t\t       Onine Food Order      \t\t-";
							cout<<"\n\t-\t\t\t\t\t\t\t-";
							cout<<"\n\t---------------------------------------------------------";
							switch(choice)
							{
								case 1:
								cout<<"\n\n\t\t\t\t*Order*";
								cout<<"\n\n\t* Your Order : "<<quantity<<" "<<biryani[0];
								cout<<"\n\t* Price : "<<price;
								cout<<"\n\n\t * Thank you for ordering";
								cout<<"\n\t * Your order will be deliever in 40 min";
								cout<<"\n\n\t---------------------------------------------------------\n\n";
								break;
								case 2:
								cout<<"\n\n\t\t\t\t*Order*";
								cout<<"\n\n\t* Your Order : "<<quantity<<" "<<biryani[1];
								cout<<"\n\t* Price : "<<price;
								cout<<"\n\n\t * Thank you for ordering";
								cout<<"\n\t * Your order will be deliever in 40 min";
								cout<<"\n\n\t---------------------------------------------------------\n\n";
								break;
								case 3:
								cout<<"\n\n\t\t\t\t*Order*";
								cout<<"\n\n\t* Your Order : "<<quantity<<" "<<biryani[2];
								cout<<"\n\t* Price : "<<price;
								cout<<"\n\n\t * Thank you for ordering";
								cout<<"\n\t * Your order will be deliever in 40 min";
								cout<<"\n\n\t---------------------------------------------------------\n\n";
								break;
							}
						}
						//error
						else
						{
							cout<<"\n\n\t---------------------------------------------------------";
							cout<<"\n\t-\t\t\t\t\t\t\t-";
							cout<<"\n\t-\t\t       Onine Food Order      \t\t-";
							cout<<"\n\t-\t\t\t\t\t\t\t-";
							cout<<"\n\t---------------------------------------------------------";
							cout<<"\n\n\t---------------------------------------------------------";
							cout<<"\n\t-\t\t\t\t\t\t\t-";
							cout<<"\n\t-\t\t\t   error   \t\t\t-";
							cout<<"\n\t-\t\t\t\t\t\t\t-";
							cout<<"\n\t---------------------------------------------------------\n\n";
						}
					}
					//teamdetail
					else if(press==3)
					{
						cout<<"\n\n\t---------------------------------------------------------";
						cout<<"\n\t-\t\t\t\t\t\t\t-";
						cout<<"\n\t-\t\t       Onine Food Order      \t\t-";
						cout<<"\n\t-\t\t\t\t\t\t\t-";
						cout<<"\n\t---------------------------------------------------------";
						cout<<"\n\n\n\t---------------------------------------------------------";
						cout<<"\n\n\t\t\t\tAbout Our Team";
						cout<<"\n\n\n\t---------------------------------------------------------";
						cout<<"\n\t\n\t\t\t\t    Member-1";
						cout<<"\n\t\t\t-------------------------------";
						cout<<"\n\t\t\t\tAbdullah Maroof";
						cout<<"\n\t\t\t\t  BAIM-F19-007";
						cout<<"\n\t\t\t    BS Software Engineering";
						cout<<"\n\t\t\t-------------------------------";
						cout<<"\n\n\t\t\t\t    Member-2";
						cout<<"\n\t\t\t-------------------------------";
						cout<<"\n\t\t\t\t Aneesa  Ashraf";
						cout<<"\n\t\t\t\t  BAIM-S20-004";
						cout<<"\n\t\t\t    BS Software Engineering";
						cout<<"\n\t\t\t-------------------------------";
						cout<<"\n\n\t\t\t\t    Member-3";
						cout<<"\n\t\t\t-------------------------------";
						cout<<"\n\t\t\t\t Shifa  Rafique";
						cout<<"\n\t\t\t\t  BSEM-S20-015";
						cout<<"\n\t\t\t    BS Software Engineering";
						cout<<"\n\t\t\t-------------------------------";
						cout<<"\n\n\t\t\t\t    Member-4";
						cout<<"\n\t\t\t-------------------------------";
						cout<<"\n\t\t\t\t Muhammad  Sher";
						cout<<"\n\t\t\t\t  BSEM-S20-025";
						cout<<"\n\t\t\t    BS Software Engineering";
						cout<<"\n\t\t\t-------------------------------";
						cout<<"\n\n\t\t\t\t    Member-5";
						cout<<"\n\t\t\t-------------------------------";
						cout<<"\n\t\t\t\t  Bushra Akram";
						cout<<"\n\t\t\t\t  BSEM-F19-233";
						cout<<"\n\t\t\t    BS Software Engineering";
						cout<<"\n\t\t\t-------------------------------";
						cout<<"\n\n\n\t---------------------------------------------------------";
					}
					//error
					else
					{
						cout<<"\n\n\t---------------------------------------------------------";
						cout<<"\n\t-\t\t\t\t\t\t\t-";
						cout<<"\n\t-\t\t       Onine Food Order      \t\t-";
						cout<<"\n\t-\t\t\t\t\t\t\t-";
						cout<<"\n\t---------------------------------------------------------";
						cout<<"\n\n\t---------------------------------------------------------";
						cout<<"\n\t-\t\t\t\t\t\t\t-";
						cout<<"\n\t-\t\t\t   error   \t\t\t-";
						cout<<"\n\t-\t\t\t\t\t\t\t-";
						cout<<"\n\t---------------------------------------------------------\n\n";
					}
				}
			}
		}
		getfile.close();
	}
	//signup
	else if(press==2)
	{
		signup:
		cout<<"\n\n\t---------------------------------------------------------";
		cout<<"\n\t-\t\t\t\t\t\t\t-";
		cout<<"\n\t-\t\t       Onine Food Order      \t\t-";
		cout<<"\n\t-\t\t\t\t\t\t\t-";
		cout<<"\n\t---------------------------------------------------------";\
		cout<<"\n\n\n\t---------------------------------------------------------";
		cout<<"\n\n\t\t\tWelcome to sign up page";
		cout<<"\n\n\n\t---------------------------------------------------------\n";
		ofstream myfile("pdata.txt", ios::app);
		if(!myfile)
		{
			cout<<"error";
		}
		else
		{
			int i=1;
			while(i<2)
			{
				cout<<"\tEnter User  firstname : ";
				cin>>firstname[i];
				cout<<"\tEnter User secondname : ";
				cin>>secondname[i];
				cout<<"\tEnter User email : ";
				cin>>uemail[i];
				cout<<"\tEnter User contact : ";
				cin>>ucontact[i];
				cout<<"\tEnter User password : ";
				cin>>password[i];
				cout<<"\tEnter User dob : ";
				cin>>udob[i];
				cout<<"\tEnter User address : ";
				cin>>uaddress[i];
				myfile<<firstname[i]<<endl<<secondname[i]<<endl<<uemail[i]<<endl<<ucontact[i]<<endl<<password[i]<<endl<<udob[i]<<endl<<uaddress[i]<<endl;
				i++;
			}
			system("cls");
			goto login;
			
		}
		myfile.close();
	}
	//error
	else
	{
		cout<<"\n\n\t---------------------------------------------------------";
		cout<<"\n\t-\t\t\t\t\t\t\t-";
		cout<<"\n\t-\t\t       Onine Food Order      \t\t-";
		cout<<"\n\t-\t\t\t\t\t\t\t-";
		cout<<"\n\t---------------------------------------------------------";
		cout<<"\n\n\t---------------------------------------------------------";
		cout<<"\n\t-\t\t\t\t\t\t\t-";
		cout<<"\n\t-\t\t\t   error   \t\t\t-";
		cout<<"\n\t-\t\t\t\t\t\t\t-";
		cout<<"\n\t---------------------------------------------------------\n\n";
	}
	cout<<endl;
	system("pause");
	
	return 0;
}
