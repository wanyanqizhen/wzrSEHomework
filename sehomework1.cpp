#include<iostream>
#include<fstream>
#include<string>
#include<sstream>       
using namespace std;
int main(){
int level;
int i;
int num_keyword=0;//�ؼ��ʸ��� 
int num_switch=0;//switch���� 
int num_switch_case[1000]={0}; //ÿ��switch��Ӧ��case���� 
string keyword[32]={"auto","break;","case","char","const","continue","default:","double","do","else","enum","extern","float","for",
                    "goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef",
                    "union","unsigned","void","volatile","while"}; //�ؼ��ʿ� 
string file;//�ļ�·��  
string file_mine;	
cin>>file;//�����ļ�·�� 
cin>>level;		

ifstream ifs;//�ȴ��ļ��������ж��Ƿ�ʧ�� 
ifs.open(file,ios::in);
 if(!ifs.is_open()){
 	cout<<"�ļ���ʧ��"<<endl;
	 //return; 
 } //��ȡ��� 
 while(getline(ifs,file_mine)){//���ж�ȡ 
 	istringstream is(file_mine);//is���α�ʾfile_mine�е�ÿһ�� 
 	string single_word;//single_word���α�ʾis�е�ÿһ������ 
 	while(is>>single_word){
    
    for(i=0;i<32;i++){//Ѱ�ҹؼ��ʣ��ҵ���num_keyword++ 
	if(single_word.find(keyword[i])!=single_word.npos){
		num_keyword++; 
		break;
	}
    } //���� 
	if(single_word.find(keyword[25])!=single_word.npos){//Ѱ��switch����������ȷ����Ӧ��case������ 
		num_switch++;
	}else{
		if(num_switch>=1){
			if(single_word.find(keyword[2])!=single_word.npos)	num_switch_case[num_switch-1]++;
    }
	}//���� 
	
    }	
	}
	cout<<"total num: " <<num_keyword<<endl;
	cout<<"switch num: "<<num_switch<<endl;
	cout<<"case num: ";
    for(i=0;i<num_switch;i++){
    	cout<<num_switch_case[i]<<" ";
	}
	cout<<endl;
				}
