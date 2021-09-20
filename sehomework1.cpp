#include<iostream>
#include<fstream>
#include<string>
#include<sstream>       
using namespace std;
int main(){
int level;
int i;
int num_keyword=0;//关键词个数 
int num_switch=0;//switch个数 
int num_switch_case[1000]={0}; //每个switch对应的case个数 
string keyword[32]={"auto","break;","case","char","const","continue","default:","double","do","else","enum","extern","float","for",
                    "goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef",
                    "union","unsigned","void","volatile","while"}; //关键词库 
string file;//文件路径  
string file_mine;	
cin>>file;//输入文件路径 
cin>>level;		

ifstream ifs;//先打开文件，并且判断是否失败 
ifs.open(file,ios::in);
 if(!ifs.is_open()){
 	cout<<"文件打开失败"<<endl;
	 //return; 
 } //读取完毕 
 while(getline(ifs,file_mine)){//逐行读取 
 	istringstream is(file_mine);//is依次表示file_mine中的每一行 
 	string single_word;//single_word依次表示is中的每一个单词 
 	while(is>>single_word){
    
    for(i=0;i<32;i++){//寻找关键词，找到后num_keyword++ 
	if(single_word.find(keyword[i])!=single_word.npos){
		num_keyword++; 
		break;
	}
    } //结束 
	if(single_word.find(keyword[25])!=single_word.npos){//寻找switch数量，并且确定相应的case的数量 
		num_switch++;
	}else{
		if(num_switch>=1){
			if(single_word.find(keyword[2])!=single_word.npos)	num_switch_case[num_switch-1]++;
    }
	}//结束 
	
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
