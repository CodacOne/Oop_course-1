
#include<iostream>
#include<vector>

#include "clsString.h"


using namespace std;


int main()

{
	clsString Str1;
	clsString Str2("abDulFatah Kash kasH");

	// Str1.Value = "Abd al fatah";
	// Str2.Value = "Abd al fatah kash";
	cout << " String 1 : " << Str1.Value << "\n";
	cout << " Count of Words Str1 : " << Str1.CountWords()<< "\n";

 //	cout << "Read of String :" << Str2.ReadString() << "\n";

	cout << " String 2       : " << Str2.Value << "\n";
	cout << " Count of Words : " << Str2.CountWords() << "\n";
	cout << " String Length  : " << Str2.Length() << "\n";

	////////
	Str2.UpperFirstLetterOfEachWord();
	cout << " String 2 After Upper First Letter Of Each Word     : " << Str2.Value << "\n";

	////////
	Str2.LowerFirstLetterOfEachWord();
	cout << " String 2 After Lower First Letter Of Each Word     : " << Str2.Value << "\n";

	////////
	Str2.UpperAllLetterOfString(); 
	cout << " String 2 After Upper All Letter Of String          : " << Str2.Value << "\n";

	////////
	Str2.LowerAllLetterOfString();
	cout << " String 2 After Lower All Letter Of String          : " << Str2.Value << "\n";

	////////
	Str2.InvertAllLettersOfStringCase();
	cout << " String 2 After Invert String Case                  : " << Str2.Value << "\n";

	////////
	cout << " Count Capital Letters                 : "   
		 << Str2.CountLetters("AbduAlFataH ", clsString::CapitalLetters)<<"\n";

	////////
	cout << " Count Small Letters                   : "
		<< Str2.CountLetters("AbduAlFataH ", clsString::SmallLetters) << "\n";

	////////
	cout << " Count Vowel Letters                   : "
		<< Str2.CountVowelLetters() << "\n";

	////////
	cout << " Print All Vowels In String            : "
		<< Str2.PrintAllVowelsInString("Aboodi"," ") << "\n";

	////////
	cout << " Print Each Word In String             : ";
    Str2.PrintEachWordInString("Aboodi kash kash");

	////////
	cout << " Count Each Word In String             : "
	<<Str2.CountEachWordInString() << "\n";

	////////

	vector <string> Vstring;
	Vstring= Str2.SplitString(" ");
	cout << " Split String                          : ";
	
	for (string & s: Vstring)
	{

		cout << s << endl;

	}
	
    //////// 
	cout << " Text After Termleft                  : "
		<< Str2.TrimLeft("      Abdulafatah  kashkash    ") << "\n";

	////////
	cout << " Text After Termleft                  : "
		<< Str2.TrimRight("Abdulafatah  kashkash        ") << "\n";

	////////
	cout << " Text After Termleft                  : "
		<< Str2.Trim("       Abdulafatah  kashkash        ") << "\n";

	////////
	vector <string> vString = { "Ali","Mohamad","Aisha","Rama" };

	cout << " Text After Join string from vector   : "
		<< Str2.JoinString(vString) << "\n";

	////////
	string arrstring[] = { "Ali","Fatima","Aisha","Rama" };

	cout << " Text After Join string from array    : "
		<< Str2.JoinString(arrstring,4,"/*") << "\n";

	////////
	cout << " Text After Reverse Words             : "
		<< Str2.ReverseWords()<< "\n";

	////////
	cout << " Text After Replace Word to word      : "
		<< Str2.ReplaceWords("abdulfatah kash","kash","fatim") << "\n";

	////////
	cout << " Text After Replace Word Custom       : "
		<< Str2.ReplaceWordsCustom("abdulfatah kash", "kash", "fatim") << "\n";

	////////
	cout << " Text After remove puncuattion        : "
		<< Str2.RemovePuncuations("ab,du'lfatah,kas,h") << "\n";


	return 0;

}
