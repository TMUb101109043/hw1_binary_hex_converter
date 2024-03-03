#include<iostream>
using namespace std;

int main(){
    int num; //the input number 0-255, so eight digits are prepared
    cin>>num;
    int binary[8]={0};
    int base=128; //the base of binary
    int order=0; //indicating the digit of the array
    while(order!=8){
        if(num>=base){ //if the number is dividable, the digit add one
            num=num-base;
            binary[order]++;
        }
        order++;
        base=base/2;
    }
    // for(int i=0; i<8; i++){ //indication of binary transformation
    //     cout<<binary[i];
    // }

    //Next, binary to hex
    int hex[2]={0};
    int multiply=1;
    for(int i=7; i>3; i--){
        hex[1]=hex[1]+binary[i]*multiply;
        multiply*=2;
    }
    multiply=1;
    for(int i=3; i>=0; i--){
        hex[0]=hex[0]+binary[i]*multiply;
        multiply*=2;
    }
    // for(int i=0; i<2; i++){ // indication of hex
    //     cout<<hex[i]<<" ";
    // }
    int binary_digit=0;
    while(binary[binary_digit]==0){
        binary_digit++;
    }
    for(binary_digit; binary_digit<8; binary_digit++){
        cout<<binary[binary_digit];
    }
    cout<<endl;   //換行區隔二進位與十六進為

    int hex_digit=0;
    while(hex[hex_digit]==0){
        hex_digit++;
    }
    for(hex_digit; hex_digit<2; hex_digit++){
        if(hex[hex_digit]<10){
            cout<<hex[hex_digit];
        }
        else{
            if(hex[hex_digit]==10){
                cout<<"A";
            }
            if(hex[hex_digit]==11){
                cout<<"B";
            }
            if(hex[hex_digit]==12){
                cout<<"C";
            }
            if(hex[hex_digit]==13){
                cout<<"D";
            }
            if(hex[hex_digit]==14){
                cout<<"E";
            }
            if(hex[hex_digit]==15){
                cout<<"F";
            }
        }
    }
    
    return 0;
}