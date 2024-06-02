// dz24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//4.	Дано символ C і рядки S, S0.Перед кожним входженням символу C у рядок S вставити рядок S0 .
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

//5.	Дано символ C і рядки S, S0.Після кожного входження символу C у рядок S вставити рядок S0 .
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

//6.	Дано рядки S і S0.Перевірити, чи міститься рядок S0  у рядку S.Якщо міститься, то вивести True, якщо не міститься, то вивести False.
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

//7.	Дано рядки S і S0.Знайти кількість входжень рядка S0  у рядок S.
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


//8.	Дано рядки S і S0.Видалити з рядка S перший підрядок, що збігається з S0.Якщо підрядків, що збігаються, немає, то вивести рядок S без змін.
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





//9.	Дано рядки S і S0.Видалити з рядка S усі підрядки, що збігаються з S0.Якщо підрядків, що збігаються, немає, то вивести рядок S без змін.
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



//10.	Дано рядки S, S1  і S2.Замінити в рядку S перше входження рядка S1  на рядок S2 .
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




//11.	Дано рядки S, S1  і S2.Замінити в рядку S усі входження рядка S1  на рядок S2 .
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


//12.	Дано рядок - пропозицію.Зашифрувати його, помістивши спочатку всі символи,
//  розташовані на парних позиціях рядка, а потім, у зворотному порядку, всі символи,
//  розташовані на непарних позиціях(наприклад, рядок "Программа" перетвориться на "ргамамроП").

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
//    string s = "Программа";
//    string encrypted = encrypt(s);
//    cout << encrypted << endl;
//
//    return 0;
//}


//13.	Дано речення, зашифроване за правилом, описаним у завданні String12.Розшифрувати це речення.

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
//    string s = "Це було  на    .удерес в їіцкел";
//    string decrypted = decrypt(s);
//cout << decrypted << endl;
//
//    return 0;
//}

//Робота з файлами :

//16.	Дано три файли цілих чисел однакового розміру з іменами SA, SB, SC  та рядок SD.Створити новий файл з іменем SD, у якому чергувалися б елементи вихідних файлів з одним і тим самим номером :
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

//17.	Дано рядковий файл, що містить дати у форматі "день/місяць/рік", причому під день і місяць відводиться по дві позиції, а під рік - чотири(наприклад, "16/04/2001").Створити два файли цілих чисел, перший з яких містить значення днів, а другий - значення місяців для дат з вихідного рядкового файлу(у тому ж порядку).
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

//18.	Дано рядковий файл, що містить дати у форматі, описаному в завданні File18.Створити новий рядковий файл, що містить усі літні дати з вихідного файлу(у тому ж порядку).Якщо дати з необхідною порою року у файлі відсутні, то залишити результуючий файл порожнім.
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

//19.	Дано два текстові файли f1 і f2.Файл f1 містить довільний текст.
// Слова в тексті розділені пробілами та розділовими знаками.Файл f2 містить два слова.
// Перше слово вважається замінним, друге слово - таким, що замінює.Знайти у файлі f1 усі 
// випадки вживання першого слова і замінити його на друге слово.Перетворений текст помістити у файл g.

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

//20.	Дано текстовий файл f, що містить відомості про співробітників установи, записані за таким зразком : Прізвище Ім'я По батькові. Записати ці відомості у файлі g, використовуючи зразки: 
//1) Ім'я По батькові Прізвище;
//2) Прізвище П.І.Б.
//Вибір варіанта перетворення задається на початку роботи програми.

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