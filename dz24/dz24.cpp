// dz24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//4.	���� ������ C � ����� S, S0.����� ������ ���������� ������� C � ����� S �������� ����� S0 .
//C = '.'  S = "hello world. hello step. hello it." S0 = "good"
//hello world good.hello step good.hello it good.

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    char C = '.';
//    string S = "hello world. hello step. hello it.";
//    string S0 = "good";
//
//   string result = "";
//    for (char c : S) {
//        if (c == C) {
//            result += S0 + C;
//        }
//        else {
//            result += c;
//        }
//    }
//
//    cout << result << endl;
//
//    return 0;
//}

//5.	���� ������ C � ����� S, S0.ϳ��� ������� ��������� ������� C � ����� S �������� ����� S0 .
//C = '.'  S = "hello world. hello step. hello it." S0 = "good "
//hello world.good hello step.good hello it.good


//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    char C = '.';
//    string S = "hello world. hello step. hello it.";
//    string S0 = "good ";
//
//string result = "";
//    for (char c : S) {
//        result += c;
//        if (c == C) {
//            result += S0;
//        }
//    }
//
//    cout << result << endl;
//
//    return 0;
//}

//6.	���� ����� S � S0.���������, �� �������� ����� S0  � ����� S.���� ��������, �� ������� True, ���� �� ��������, �� ������� False.
//S = "Hello world" S0 = "world" = > true
//S = "Hello world" S0 = "step" = > false

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string S = "Hello world";
//    string S0 = "world";
//
//    if (S.find(S0) != string::npos) {
//        cout << "true" << endl;
//    }
//    else {
//        cout << "false" << endl;
//    }
//
//    return 0;
//}

//7.	���� ����� S � S0.������ ������� �������� ����� S0  � ����� S.
//S = "hello world. hello step. hello it."    S0 = "hello" = > 3

//#include <iostream>
//#include <string>
//using namespace std;
//
//int countOccurrences(const string& S, const string& S0) {
//    int count = 0;
//    size_t pos = 0;
//    while ((pos = S.find(S0, pos)) != string::npos) {
//        count++;
//        pos += S0.length();
//    }
//    return count;
//}
//
//int main() {
//    string S = "hello world. hello step. hello it.";
//    string S0 = "hello";
//
//    int occurrences = countOccurrences(S, S0);
//    cout << occurrences << endl;
//
//    return 0;
//}


//8.	���� ����� S � S0.�������� � ����� S ������ �������, �� �������� � S0.���� �������, �� ���������, ����, �� ������� ����� S ��� ���.
//S = "hello world. hello step. hello it."    S0 = "hello"
//= > " world. hello step. hello it."

//#include <iostream>
//#include <string>
//using namespace std;
//
//string removeFirstOccurrence(const string& S, const string& S0) {
//    size_t pos = S.find(S0);
//    if (pos != string::npos) {
//        return S.substr(0, pos) + S.substr(pos + S0.length());
//    }
//    return S;
//}
//
//int main() {
//    string S = "hello world. hello step. hello it.";
//    string S0 = "hello";
//
//    string result = removeFirstOccurrence(S, S0);
//    cout << result << endl;
//
//    return 0;
//}





//9.	���� ����� S � S0.�������� � ����� S �� �������, �� ��������� � S0.���� �������, �� ���������, ����, �� ������� ����� S ��� ���.
//S = "hello world. hello step. hello it."    S0 = "hello"
//= > " world. step. it."

//#include <iostream>
//#include <string>
//using namespace std;
//
//string removeAllOccurrences(const string& S, const string& S0) {
//    string result = S;
//    size_t pos = 0;
//    while ((pos = result.find(S0, pos)) != string::npos) {
//        result.erase(pos, S0.length());
//    }
//    return result;
//}
//
//int main() {
//    string S = "hello world. hello step. hello it.";
//    string S0 = "hello";
//
//    string result = removeAllOccurrences(S, S0);
//    cout << result << endl;
//
//    return 0;
//}



//10.	���� ����� S, S1  � S2.������� � ����� S ����� ��������� ����� S1  �� ����� S2 .
//S = "hello world. hello step. hello it."    S1 = "hello" 	S2 = "hi"
//= > "hi world. hello step. hello it"

//#include <iostream>
//#include <string>
//using namespace std;
//
//string replaceFirstOccurrence(const string& S, const string& S1, const string& S2) {
//    size_t pos = S.find(S1);
//    if (pos != string::npos) {
//        return S.substr(0, pos) + S2 + S.substr(pos + S1.length());
//    }
//    return S;
//}
//
//int main() {
//    string S = "hello world. hello step. hello it.";
//    string S1 = "hello";
//    string S2 = "hi";
//
//    string result = replaceFirstOccurrence(S, S1, S2);
//    cout << result << endl;
//
//    return 0;
//}




//11.	���� ����� S, S1  � S2.������� � ����� S �� ��������� ����� S1  �� ����� S2 .
//S = "hello world. hello step. hello it."    S1 = "hello" 	S2 = "hi"
//= > "hi world. hi step. hi it"

//#include <iostream>
//#include <string>
//using namespace std;
//
//string replaceAllOccurrences(const string& S, const string& S1, const string& S2) {
//    string result = S;
//    size_t pos = 0;
//    while ((pos = result.find(S1, pos)) != string::npos) {
//        result.replace(pos, S1.length(), S2);
//        pos += S2.length();
//    }
//    return result;
//}
//
//int main() {
//    string S = "hello world. hello step. hello it.";
//    string S1 = "hello";
//    string S2 = "hi";
//
//    string result = replaceAllOccurrences(S, S1, S2);
//    cout << result << endl;
//
//    return 0;
//}


//12.	���� ����� - ����������.����������� ����, ��������� �������� �� �������,
//  ���������� �� ������ �������� �����, � ����, � ���������� �������, �� �������,
//  ���������� �� �������� ��������(���������, ����� "���������" ������������� �� "���������").

//#include <iostream>
//#include <string>
//using namespace std;
//
//string encrypt(const string& s) {
//    string even;
//    string odd;
//    for (size_t i = 0; i < s.length(); i++) {
//        if (i % 2 == 0) {
//            even += s[i];
//        }
//        else {
//            odd += s[i];
//        }
//    }
//    string result = even + string(odd.rbegin(), odd.rend());
//    return result;
//}
//
//int main() {
//    setlocale(LC_ALL, "Ukr");
//    string s = "���������";
//    string encrypted = encrypt(s);
//    cout << encrypted << endl;
//
//    return 0;
//}


//13.	���� �������, ����������� �� ��������, �������� � ������� String12.������������ �� �������.

//#include <iostream>
//#include <string>
//using namespace std;
//
//string decrypt(const string& s) {
//    string even(s.begin(), s.begin() + s.length() / 2);
//    string odd(s.begin() + s.length() / 2, s.end());
//string result = even + string(odd.rbegin(), odd.rend());
//    return result;
//}
//
//int main() {
//    setlocale(LC_ALL, "Ukr");
//    string s = "�� ����  ��    .������ � ������";
//    string decrypted = decrypt(s);
//cout << decrypted << endl;
//
//    return 0;
//}

//������ � ������� :

//16.	���� ��� ����� ����� ����� ���������� ������ � ������� SA, SB, SC  �� ����� SD.�������� ����� ���� � ������ SD, � ����� ����������� � �������� �������� ����� � ����� � ��� ����� ������� :
//A1, B1, C1, A2, B2, C2, ... .
//
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//void merge_files(const string& SA, const string& SB, const string& SC, const string& SD) {
//    ifstream fa(SA);
//    ifstream fb(SB);
//    ifstream fc(SC);
//    ofstream fd(SD);
//
//    string a, b, c;
//    while (getline(fa, a) && getline(fb, b) && getline(fc, c)) {
//        fd << a << '\n' << b << '\n' << c << '\n';
//    }
//}
//
//int main() {
//    string SA = "SA.txt";
//    string SB = "SB.txt";
//    string SC = "SC.txt";
//    string SD = "SD.txt";
//
//    merge_files(SA, SB, SC, SD);
//
//    return 0;
//}

//17.	���� �������� ����, �� ������ ���� � ������ "����/�����/��", ������� �� ���� � ����� ���������� �� �� �������, � �� �� - ������(���������, "16/04/2001").�������� ��� ����� ����� �����, ������ � ���� ������ �������� ���, � ������ - �������� ������ ��� ��� � ��������� ��������� �����(� ���� � �������).
//16 / 04 / 2001
//21 / 08 / 2007 = > 16 21 05 19 31
//05 / 11 / 2021 = > 04 08 11 09 12
//19 / 09 / 2000
//31 / 12 / 2009

//#include <iostream>
//#include <fstream>
//#include <sstream>
//#include <vector>
//using namespace std;
//
//void split_dates(const string& input_file, const string& day_file, const string& month_file) {
//    ifstream in(input_file);
//    ofstream day_out(day_file);
//    ofstream month_out(month_file);
//
//    if (!in.is_open() || !day_out.is_open() || !month_out.is_open()) {
//        cerr << "Error opening one of the files." << endl;
//        return;
//    }
//
//    vector<int> days;
//    vector<int> months;
//
//    string line;
//    while (getline(in, line)) {
//        istringstream iss(line);
//        int day, month, year;
//        char slash;
//        iss >> day >> slash >> month >> slash >> year;
//
//        days.push_back(day);
//        months.push_back(month);
//    }
//
//    for (int day : days) {
//        day_out << day << endl;
//    }
//
//    for (int month : months) {
//        month_out << month << endl;
//    }
//}
//
//int main() {
//    string input_file = "input.txt";
//    string day_file = "day.txt";
//    string month_file = "month.txt";
//
//    split_dates(input_file, day_file, month_file);
//
//    cout << "Splitting complete. Check the files " << day_file << " and " << month_file << endl;
//
//    return 0;
//}

//18.	���� �������� ����, �� ������ ���� � ������, ��������� � ������� File18.�������� ����� �������� ����, �� ������ �� ��� ���� � ��������� �����(� ���� � �������).���� ���� � ���������� ����� ���� � ���� ������, �� �������� ������������ ���� �������.
//16 / 04 / 2001
//21 / 08 / 2007 = > 21 / 08 / 2007 19 / 07 / 2000
//05 / 11 / 2021
//19 / 07 / 2000
//31 / 12 / 2009
//
//#include <iostream>
//#include <fstream>
//#include <sstream>
//#include <vector>
//using namespace std;
//
//void extract_summer_dates(const string& input1_file, const string& output_file) {
//    ifstream in(input1_file);
//    ofstream out(output_file);
//
//    if (!in.is_open() || !out.is_open()) {
//        cerr << "Error opening one of the files." << endl;
//        return;
//    }
//
//    vector<string> summer_dates;
//
//    string line;
//    while (getline(in, line)) {
//        istringstream iss(line);
//        int day, month, year;
//        char slash;
//        iss >> day >> slash >> month >> slash >> year;
//
//        if (month >= 6 && month <= 8) {
//            summer_dates.push_back(line);
//        }
//    }
//
//    for (const string& date : summer_dates) {
//        out << date << endl;
//    }
//}
//
//int main() {
//    string input_file = "input1.txt";
//    string output_file = "output.txt";
//
//    extract_summer_dates(input_file, output_file);
//
//    cout << "Extraction complete. Check the file " << output_file << endl;
//
//    return 0;
//}

//19.	���� ��� ������� ����� f1 � f2.���� f1 ������ �������� �����.
// ����� � ����� ������� �������� �� ���������� �������.���� f2 ������ ��� �����.
// ����� ����� ��������� �������, ����� ����� - �����, �� ������.������ � ���� f1 �� 
// ������� �������� ������� ����� � ������� ���� �� ����� �����.������������ ����� �������� � ���� g.

//#include <iostream>
//#include <fstream>
//#include <string>
//#include <sstream>
//#include <vector>
//using namespace std;
//
//void replace_words(const string& f1, const string& f2, const string& g) {
//    ifstream in(f1);
//    ifstream in2(f2);
//    ofstream out(g);
//
//    if (!in.is_open() || !in2.is_open() || !out.is_open()) {
//        cerr << "Error opening one of the files." << endl;
//        return;
//    }
//
//    string word1, word2;
//    in2 >> word1 >> word2;
//
//    string line;
//    while (getline(in, line)) {
//        istringstream iss(line);
//        vector<std::string> words;
//        string word;
//        while (iss >> word) {
//            words.push_back(word);
//        }
//
//        for (size_t i = 0; i < words.size(); i++) {
//            if (words[i] == word1) {
//                words[i] = word2;
//            }
//        }
//
//        for (const string& word : words) {
//            out << word << " ";
//        }
//        out << endl;
//    }
//}
//
//int main() {
//    string f1 = "f1.txt";
//    string f2 = "f2.txt";
//    string g = "g.txt";
//
//    replace_words(f1, f2, g);
//
//    cout << "Replacement complete. Check the file " << g << endl;
//
//    return 0;
//}

//20.	���� ��������� ���� f, �� ������ ������� ��� ����������� ��������, ������� �� ����� ������� : ������� ��'� �� �������. �������� �� ������� � ���� g, �������������� ������: 
//1) ��'� �� ������� �������;
//2) ������� �.�.�.
//���� ������� ������������ �������� �� ������� ������ ��������.

//#include <iostream>
//#include <fstream>
//#include <string>
//#include <sstream>
//using namespace std;
//
//void convert_file(const string& f, const string& g1, int variant) {
//    ifstream in(f);
//    ofstream out(g1);
//
//    if (!in.is_open() || !out.is_open()) {
//        cerr << "Error opening one of the files." << endl;
//        return;
//    }
//
//    string line;
//    while (getline(in, line)) {
//        istringstream iss(line);
//        string last_name, first_name, middle_name;
//        iss >> last_name >> first_name >> middle_name;
//
//        if (variant == 1) {
//            out << first_name << " " << middle_name << " " << last_name << endl;
//        }
//        else if (variant == 2) {
//            out << last_name << " " << first_name[0] << "." << middle_name[0] << "." << endl;
//        }
//    }
//}
//
//int main() {
//    string f = "f.txt";
//    string g1 = "g1.txt";
//    int variant = 1; // 1 for "first name middle name last name", 2 for "last name first initial. middle initial."
//
//    convert_file(f, g1, variant);
//
//    cout << "Conversion complete. Check the file " << g1 << endl;
//
//    return 0;
//}