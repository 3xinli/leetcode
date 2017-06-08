class Solution {
public:
    string intToRoman(int num) {
        string roman="";
        map<int,string> check;
        check[1000]="M";
        check[900]="CM";
        check[500]="D";
        check[400]="CD";
        check[100]="C";
        check[90]="XC";
        check[50]="L";
        check[40]="XL";
        check[10]="X";
        check[9]="IX";
        check[5]="V";
        check[4]="IV";
        check[1]="I";
        int arr[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        for(int i=0;i<13;i++)
        {
                while(num/arr[i]>0)
                {
                    num-=arr[i];
                    roman+=check[arr[i]];
                }
        }
        return roman;
    }
};//LC12
