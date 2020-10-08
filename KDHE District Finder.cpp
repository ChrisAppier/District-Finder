#include <iostream>

using namespace std;

int main()
{
    string name, num, cont = "y";
    
    while(cont == "y")

    {

    cout<<"Enter the 3 digit district number \n";
    cin>>num;
    
    if(num == "023" || num == "153" || num == "039" || num == "137" || num == "147" || num == "183" || num == "181" || num == "193" || num == "179" || num == "065" || num == "163" || num == "141" || num == "199" || num == "109" || num == "063" || num == "195" || num == "051" || num == "167" || num == "135" || num == "165" || num == "009")
        cout<<"NW District \nAnna Thiede \n2301 East 13th Street \nHays, KS 67601-2651 \nPh: 785-261-6117 \nFax: 785-625-4005 \nDEA: Dan Wells \n";
   
    if(num == "089" || num == "157" || num == "201" || num == "123" || num == "029" || num == "027" || num == "161" || num == "105" || num == "143" || num == "041" || num == "061" || num == "053" || num == "169" || num == "127" || num == "159" || num == "113" || num == "115")
        cout<<"NC District \nJoshua Webb \n2501 Market Place, Suite D \nSalina, KS 67401 \nPh: 785-827-9639 \nFax: 785-827-1544 \nDEA: Jennifer Nichols \n"; 
        
    if(num == "117" || num == "131" || num == "013" || num == "043" || num == "149" || num == "085" || num == "087" || num == "005" || num == "087" || num == "103" || num == "197" || num == "177" || num == "045" || num == "139" || num == "059" || num == "121")
        cout<<"NE District \nPat Simpson \n800 West 24th Street \nLawrence, KS 66046 \nPh: 785-842-4600 \nFax: 785-842-3537\n";
    
    if(num == "111" || num == "031" || num == "003" || num == "107" || num == "073" || num == "207" || num == "001" || num == "011" || num == "205" || num == "133" || num == "037" || num == "019" || num == "125" || num == "099" || num == "021")
        cout<<"SE District \nEthel Evans \n302 West McArtor Rd \nDodge City, KS 67801-6098 \nPh: 620-682-7940 \nFax: 620-225-3731 \nDEA: Wade Klevan \n";
     
    if(num == "155" || num == "079" || num == "017" || num == "015" || num == "095" || num == "077" || num == "191" || num == "035")
        cout<<"SC District \n";
        
    if(num == "071" || num == "203" || num == "171" || num == "101" || num == "075" || num == "093" || num == "055" || num == "083" || num == "145" || num == "047" || num == "185" || num == "069" || num == "057" || num == "097" || num == "151" || num == "187" || num == "067" || num == "081" || num == "129" || num == "189" || num == "175" || num == "119" || num == "025" || num == "033" || num == "007")
        cout<<"SW District \n";
        
    if(num == "209")
        cout<<"WY County \n";
        
    if(num == "091")
        cout<<"JO County \n";
        
    if(num == "173")
        cout<<"SG County \n";
    
    else
        cout<<"District not found \n";

    cont = "error";

    while(cont == "error")
    {
    cout<<"Do you want to look up another district? 'y' or 'n' \n";
    cin>>cont;

    if(cont != "y" && cont != "n")
        {
        cout<<"Invalid Response \n";
        cont = "error";
	}
    }
    }
        
    return 0;
}