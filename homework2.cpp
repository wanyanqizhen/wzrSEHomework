#include<iostream>
#include<fstream>
#include<string>
#include<sstream>       
using namespace std;
int main(){
int level;
int i;
int num_keyword=0;//�ؼ��ʸ��� 

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
	
	
    }	
	}
	cout<<"total num: " <<num_keyword<<endl;

	cout<<endl;
				}
