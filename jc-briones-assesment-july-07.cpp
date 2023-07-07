#include <iostream>
//nablacko na 

using namespace std;

void ifInvalid(int* input){
    
	while(!(cin>>*input)){
		cin.clear();
		cin.ignore(100,'\n');
		cout<<"invalid\n";
	}
}
void ifInvalid(double* input){
    
	while(!(cin>>*input)){
		cin.clear();
		cin.ignore(100,'\n');
		cout<<"invalid\n";
	}
}
//__________________________________________________
void inputsPrime(){
    int l, r;
    cout<<"line 1 and 2: input values of L and R \n";
    while(true){
        ifInvalid(&l);
        if(l < 1 || l > 50){
            continue;
        }
        else{
            break;
        }
        
    }
    while(true){
        ifInvalid(&r);
        if(r < 1 || r > 50){
            continue;
        }
        else{
            break;
        }
    }
}
void primePalindromes(){
    
    
    
}
//___________________________________________________

void HistogramInputs(){
        int valueCount, arr[60];
        int result = 0;
        cout<<"line 1: input number of value in array\n line 2 : input values of array \n";
    while(true){
        ifInvalid(&valueCount);
        if(valueCount < 1 || valueCount > 60){
            continue;
        }
        else{
            break;
        }
        
    }
	for(int i = 0; i < valueCount; i++){
        while(true){
            ifInvalid((arr + i));
            if(arr[i] > 90){
                continue;
            }
            else{
                break;
            }
        }
        if(i == 0){
            result += arr[i];
        }
        else{
            result += arr[i + 1];
        }
    
	}
    cout<<result;
}

//______________________________________________________

struct Student{
    
	string name;
    int ID;
	double score;
    
    void setInformation(string aName, int aID, double aScore)
    {
        name = aName;
        ID = aID;
        score = aScore;
    }
};


void StudentGrading(){
    
    string askAdd;
    string name;
    int ID;
	double score;
    int add = 0;
    Student student[60];
    while(true){
        cout<<"\nEnter (1)add, (2)delete : ";
        cin >> askAdd;
        if(askAdd == "1"){
            add++;
            for(int i = 0; i < add; i++){
                cin >>name;
                ifInvalid(&ID);
                ifInvalid(&score);
                student[i].setInformation(name,ID,score);
                
            }
        }
        else if(askAdd == "2"){
            
        }
        else{
            
            
            
        }
        
        
        
            add = 0;
    }

}
int main() {

    HistogramInputs();

    return 0;
}
