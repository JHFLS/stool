#include<bits/stdc++.h>
#define random(x) rand()%x
#define randomsize srand((unsigned)time(NULL));
using namespace std;
int banben[4]={1,2,1,1};
bool bcdl,sxhcq;
int /*����*/date_year,date_month,date_day,/*Ȩ��*/qx_taskkill,qx_while1,qx_timeinput,qx_killexplorer,qx_classcloud,qx_bluescreem,qx_devcpp;
string /*����*/computer,timee,filename,cmdtype,cmd;
string /*�˺�����*/nm,pw;
getdate()
{
	time_t timer;
	time(&timer);
	tm* t_tm = localtime(&timer);
	date_year=t_tm->tm_year+1900;
	date_month=t_tm->tm_mon+1;
	date_day=t_tm->tm_mday;
}
int joining()
{
	qx_taskkill=1;
	qx_while1=1;
	qx_timeinput=1;
	qx_killexplorer=1;
	qx_classcloud=1;
	qx_devcpp=1;
	qx_bluescreem=1;
/*	getdate();
	if(bcdl)
	{
		FILE * fil;
		string nm,pw;freopen("%userprofile%\\AppData\\Local\\chenfy\\dl.dat","r",fil);
		cin>>nm>>pw;
		fclose(fil);
	}*/
//	cout<<"�������˺�:";
//	cin>>nm;
//	cout<<"����������:";
//	cin>>pw;
//	system("cls");
//	if (nm=="admin"&&pw=="abcd1234")
//	{
//		qx_taskkill=1;
//		qx_while1=1;
//		qx_timeinput=1;
//		qx_killexplorer=1;
//		qx_classcloud=1;
//		qx_devcpp=1;
//		qx_bluescreem=1;
//	}
//	else
//	{
//		system("cls");
//		cout<<"�˺Ż��������"<<endl;
//		joining();
//	}
}
void gettime()
{
	if(qx_timeinput==1)
	{
		cout<<"������ʱ��:";
		cin>>timee;
	}
	else
	{
	int aaa;
	system("cls");
	cout<<"[1] 10��"<<endl;
	cout<<"[2] 20��"<<endl;
	cout<<"[3] 30��"<<endl;
	cout<<"[4] 40��"<<endl;
	cout<<"[5] 50��"<<endl;
	cout<<"[6] 60��"<<endl;
	cout<<"[7] 70��"<<endl;
	cout<<"[8] 80��"<<endl;
	cout<<"[9] 90��"<<endl;
	cout<<"[0] ֱ�ӹػ�"<<endl;
	cin>>aaa;
	if(aaa==1)
		timee="10";
	else if(aaa==2)
		timee="20";
	else if(aaa==3)
		timee="30";
	else if(aaa==4)
		timee="40";
	else if(aaa==5)
		timee="50";
	else if(aaa==6)
		timee="60";
	else if(aaa==7)
		timee="70";
	else if(aaa==8)
		timee="80";
	else if(aaa==9)
		timee="90";
	else if(aaa==0)
		timee="0";
	}
}
void getcomputer()
{
	system("cls");
	cout<<"������������"<<endl;
	cin>>computer; 
}
void getfile()
{
	system("cls");
	cout<<"�������ļ���"<<endl;
	cin>>filename; 
}
void gettype()
{
	int aaa;
	system("cls");
	cout<<"[1] ����ػ�"<<endl;
	cout<<"[2] �ػ�"<<endl;
	cin>>aaa;
	if (aaa==1)
		cmdtype="-a";
	else
		cmdtype="-s";
}
int shutdown()
{
	gettype();
	system("cls");
	if (cmdtype=="-a")
	{
		int bbb;
		cout<<"[1] ����Լ�"<<endl;
		cout<<"[2] �������"<<endl;
		cout<<"[3] �˳�"<<endl;
		cin>>bbb;
		if(bbb==1)
			cmd="shutdown"+cmdtype;
		else if(bbb==2)
		{
			getcomputer();
			cmd="shutdown "+cmdtype+" -m "+computer;
		}
		else if(bbb==3)
			return 0;
	}
	else
	{
		getcomputer();
		gettime();
		cmd="shutdown "+cmdtype+" -m "+computer+" -t "+timee;
	}
}
void taskkill()
{
	getcomputer();
	getfile();
	cmd="taskkill -s "+computer+" -u test -im "+filename;
}
void tkill(string t)
{
	getcomputer();
	cmd="taskkill -s "+computer+" -u test -f -im "+t;
}
void command_tools()
{
	int bbb,w1=1;
	cout<<"[1] �ػ�"<<endl;
	if(qx_taskkill==1)
		cout<<"[2] ɱ����"<<endl;
	if(qx_bluescreem==1)
		cout<<"[3] ����"<<endl;
	cin>>bbb;
	system("cls");
	if (bbb==1)
		shutdown();
	else if(qx_taskkill==1&&bbb==2)
	{
		int ccc;
		cout<<"[0] ����"<<endl;
		if(qx_killexplorer==1)
			cout<<"[1] ɱ����"<<endl;
		if(qx_classcloud==1)
			cout<<"[2] ɱ�ƿ���"<<endl;
		if(qx_devcpp==1)
			cout<<"[3] ɱc++"<<endl;
		cin>>ccc;
		if(qx_killexplorer==1&&ccc==0)
			taskkill();
		else if(qx_killexplorer==1&&ccc==1)
			tkill("explorer.exe");
		else if(qx_classcloud==1&&ccc==2)
			tkill("ClassManagerApp.exe");
		else if(qx_devcpp==1&&ccc==3)
			tkill("devcpp.exe");
	}
	else if(qx_bluescreem==1&&bbb==3)
	{
		tkill("wininit.exe");
		w1=2;
	}
	system("cls");
	const char *abc = cmd.c_str();
	if(w1==1)
	{
		cout<<"[1] ����1��"<<endl;
		if(qx_while1==1)
			cout<<"[2] ��ѭ��"<<endl;
		cin>>bbb;
	}
//	if(w1==2)
//		system("start \"\" resta.bat");
	if (bbb==1||w1==0||w1==2)
		system(abc);
	else if(qx_while1==1)
		{
//			system("start \"\" resta.bat");
			while (1)
				system(abc);
		}
	system("cls");
}
void randd()
{
	srand((unsigned)time( NULL ));
	int l,r,n,f;
	char b;
	cout<<"����������(������)"<<endl;
	cin>>l>>r;
	f=abs(l-r)+1;
	system("cls");
	cout<<"���������������"<<endl;
	cin>>n;
	system("cls");
	cout<<"�Ƿ�������ֵ(Y / N)"<<endl;
	cin>>b;
	system("cls");
	if(b=='Y'||b=='y')
	{
		int t,tsz[100005],temp; 
		cout<<"����������ֵ����"<<endl;
		cin>>t;
		t=abs(t);
		f+=t;
		system("cls");
		cout<<"����������ֵ"<<endl;
		for(int i=1;i<=t;i++)
			cin>>tsz[i];
		system("cls");
		for(int i=1;i<=n;i++)
		{
			temp=random(f)+l;
			if(temp>r)
				temp=tsz[temp-r];
			cout<<temp<<"  ";
		}
				
	}
	else if(b=='N'||b=='n')
	{
		for(int i=1;i<=n;i++)
			cout<<random(f)+l<<"  ";
	}
	cout<<endl<<"�����ɣ���������˳�";
	system("pause>nul");
}
void seat()
{
	int a,b,x,c;
	cout<<"���������(7��8):";
	cin>>c;
	system("cls");
	cout<<"��������(�Ӵ���������)"<<endl;
	cin>>a;
	system("cls");
	cout<<"��������(��ǰ������)"<<endl;
	cin>>b;
	system("cls");
	if(c==7&&a*10+b>3)
	{
		x=a*10+b-2;
		if(x%10==0)
			x-=1;
	}
	else
		x=a*10+b;
	if(c==7)
		for(int i=1;i<=10;i++)
			cout<<"ta�ļ��������:s-0"<<x<<endl;
	else if(c==8)
		for(int i=1;i<=10;i++)
			cout<<"ta�ļ��������:stu-0"<<x<<endl;
	system("pause>nul");
}
void aboutus()
{
	cout<<"�汾��";
	cout<<banben[0];
	for(int i=1;i<=3;i++)
		cout<<"."<<banben[i];
	cout<<endl;
	cout<<"               ����:chenfy";
	system("pause>nul");
}
/*int setting()
{
	int bbb;
	cout<<"[1] ���ֵ�½                   "<<endl;
	if(bcdl==true)
		cout<<"��";
	else
		cout<<"��";
	cout<<"[2] ��ѭ��ʱ�������иó���     "<<endl;
	if(sxhcq==true)
		cout<<"��";
	else
		cout<<"��";
	cout<<"[0] �˳�"<<endl;
	cin>>bbb;
	if(bbb!=1&&bbb!=2)
		return 0;
	else if(bbb==1)
		bcdl=1-bcdl;
	else if(bbb==2)
		sxhcq=1-sxhcq;
	string abc,acb;
	if(bcdl)
		acb="1";
	else
		acb="0";
	abc="echo "+acb+">%userprofile%\\AppData\\Local\\chenfy\\settings.dat";
	const char *abc1 = abc.c_str();
	if(sxhcq)
		acb="1";
	else
		acb="0";
	abc="echo "+acb+">>%userprofile%\\AppData\\Local\\chenfy\\settings.dat";
	const char *abc2 = abc.c_str();
	system(abc1);
	system(abc2);
	if(bcdl)
	{
		abc="echo "+nm+">%userprofile%\\AppData\\Local\\chenfy\\dl.dat";
		const char *abc1 = abc.c_str();
		abc="echo "+pw+">>%userprofile%\\AppData\\Local\\chenfy\\dl.dat";
		const char *abc2 = abc.c_str();
	}
	
}*/
int main()
{
/*	FILE * fil;
	freopen("%userprofile%\\AppData\\Local\\chenfy\\settings.dat","r",fil);
	cin>>bcdl>>sxhcq;
	fclose(fil);*/
	joining();
	string x;
	while(1)
	{
		cout<<"[1] ����С����"<<endl;
		cout<<"[2] ��ѯ�������(�������)"<<endl;
		cout<<"[3] �����"<<endl;
		cout<<"[a] ����"<<endl;
//		cout<<"[s] ����"<<endl;
		cin>>x;
		system("cls");
		if(x=="1")
			command_tools();
		else if(x=="2")
			seat();
		else if(x=="3")
			randd();
		else if(x=="a")
			aboutus();
/*		else if(x=="s")
			setting();*/
		system("cls");
	}
}
