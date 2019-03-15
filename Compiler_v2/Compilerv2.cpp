#include "stdafx.h"

map <unsigned int, string> codeOfError = {
	{ 1, "ошибка в простом типе" },
	{ 2, "должно идти имя" },
	{ 3, "должно быть служебное слово PROGRAM" },
	{ 4, "должен идти символ  ')'" },
	{ 5, "должен идти символ  ':'" },
	{ 6, "запрещенный символ" },
	{ 7, "ошибка в списке параметров" },
	{ 8, "должно идти  OF" },
	{ 9, "должен идти символ  '('" },
	{ 10, "ошибка в типе" },
	{ 11, "должен идти символ  '['" },
	{ 12, "должен идти символ  ']'" },
	{ 13, "должно идти слово  END" },
	{ 14, "должен идти символ  ';'" },
	{ 15, "должно идти целое" },
	{ 16, "должен идти символ  '='" },
	{ 17, "должно идти слово  BEGIN" },
	{ 18, "ошибка в разделе описаний" },
	{ 19, "ошибка в списке полей" },
	{ 20, "должен идти символ  ','" },
	{ 21, "ошибка в переменной" },
	{ 50, "ошибка в константе" },
	{ 51, "должен идти символ  ':='" },
	{ 52, "должно идти слово  THEN" },
	{ 53, "должно идти слово  UNTIL" },
	{ 54, "должно идти слово  DO" },
	{ 55, "должно идти слово  TO  или  DOWNTO" },
	{ 56, "должно идти слово  IF" },
	{ 61, "должен идти символ  '.'" },
	{ 74, "должен идти символ  '..'" },
	{ 75, "ошибка в символьной константе" },
	{ 76, "слишком длинная строковая константа" },
	{ 86, "комментарий не закрыт" },
	{ 83, "Должна идти символьная константа" },
	{ 100, "использование имени не соответствует описанию" },
	{ 101, "имя описано повторно" },
	{ 102, "нижняя граница превосходит верхнюю" },
	{ 103, "Имя не принадлежит соответствующему классу" },
	{ 104, "имя не описано" },
	{ 105, "недопустимое рекурсивное определение" },
	{ 108, "файл здесь использовать нельзя" },
	{ 109, "тип не должен быть  REAL" },
	{ 111, "несовместимость с типом дискриминанта" },
	{ 112, "недопустимый ограниченный тип" },
	{ 114, "тип основания не должен быть  REAL  или  INTEGER" },
	{ 115, "файл должен быть текстовым" },
	{ 116, "ошибка в типе параметра стандартной процедуры" },
	{ 117, "неподходящее опережающее описание" },
	{ 118, "недопустимый тип пpизнака ваpиантной части записи" },
	{ 119, "опережающее описание : повторение списка параметров не допускается" },
	{ 120, "тип результата функции должен быть скалярным, ссылочным или ограниченным" },
	{ 121, "параметр - значение не может быть файлом" },
	{ 122, "опережающее описание функции : повторять тип результата нельзя" },
	{ 123, "в описании функции пропущен тип результата" },
	{ 124, "F - формат только для  REAL" },
	{ 125, "ошибка в типе параметра стандартной функции" },
	{ 126, "число параметров не согласуется с описанием" },
	{ 127, "недопустимая подстановка параметров" },
	{ 128, "тип результата функции не соответствует описанию" },
	{ 130, "выражение не относится к множественному типу" },
	{ 135, "тип операнда должен быть  BOOLEAN" },
	{ 137, "недопустимые типы элементов множества" },
	{ 138, "переменная не есть массив" },
	{ 139, "тип индекса не соответствует описанию" },
	{ 140, "переменная не есть запись" },
	{ 141, "переменная должна быть файлом или ссылкой" },
	{ 142, "недопустимая подстановка параметров" },
	{ 143, "недопустимый тип параметра цикла" },
	{ 144, "недопустимый тип выражения" },
	{ 145, "конфликт типов" },
	{ 147, "тип метки не совпадает с типом выбирающего выражения" },
	{ 149, "тип индекса не может быть  REAL  или  INTEGER" },
	{ 152, "в этой записи нет такого поля" },
	{ 156, "метка варианта определяется несколько раз" },
	{ 165, "метка определяется несколько раз" },
	{ 166, "метка описывается несколько раз" },
	{ 167, "неописанная метка" },
	{ 168, "неопределенная метка" },
	{ 169, "ошибка в основании множества(базовом типе)" },
	{ 170, "тип не может быть упакован" },
	{ 177, "здесь не допускается присваивание имени функции" },
	{ 182, "типы не совместны" },
	{ 183, "запрещенная в данном контексте операция" },
	{ 184, "элемент этого типа не может иметь знак" },
	{ 186, "несоответствие типов для операции отношения" },
	{ 189, "конфликт типов параметров" },
	{ 190, "повторное опережающее описание" },
	{ 191, "ошибка в конструкторе множества" },
	{ 193, "лишний индекс для доступа к элементу массива" },
	{ 194, "указано слишком мало индексов для доступа к злементу массива" },
	{ 195, "выбирающая константа вне границ описанного диапазона" },
	{ 196, "недопустимый тип выбирающей константы" },
	{ 197, "параметры процедуры(функции),являющейся параметром, д.б.пар. - значениями" },
	{ 198, "несоответствие количества параметров параметра - процедуры(функции)" },
	{ 199, "несоответствие типов параметров параметра - процедуры(функции)" },
	{ 200, "тип парамера - функции не соответствует описанию" },
	{ 201, "ошибка в вещественной константе : должна идти цифра" },
	{ 203, "целая константа превышает предел" },
	{ 206, "слишком маленькая вещественная константа" },
	{ 207, "слишком большая вещественная константа" },
	{ 208, "недопустимые типы операндов в операции IN" },
	{ 209, "вторым операндом IN должно быть множество" },
	{ 210, "операнды AND, NOT, OR должны быть булевыми" },
	{ 211, "недопустимые типы операндов в операции + или -" },
	{ 212, "операнды DIV и MOD должны быть целыми" },
	{ 213, "недопустимые типы операндов в операции *" },
	{ 214, "недопустимые типы операндов в операции /" },
	{ 215, "первым операндом IN должно быть выражение базового типа множества" },
	{ 216, "опережающее описание есть, полного нет" },
	{ 305, "индексное значение выходит за границы" },
	{ 306, "присваиваемое значение выходит за границы" },
	{ 307, "выражение для элемента множества выходит за пределы" },
	{ 308, "выражение выходит за допустимые пределы" },
	{ 309, "должно идти слово EXPORT" },
	{ 310, "должно идти слово IMPORT" },
	{ 311, "должно идти слово INTERFACE" },
	{ 312, "должно идти слово IMPLEMENTATION" },
	{ 313, "должно идти слово MODULE" },
	{ 314, "слишком много меток" },
	{ 322, "Странный оператор" },
	{ 323, "Плохие константы в ограниченном типе" },
	{ 324, "Небывает такого типа" },
	{ 325, "Неправильный вызов процедуры" },
	{ 326, "Слишком мало параметров" },
	{ 327, "Слишком много параметров" },
	{ 328, "Несоответствие типов" },
	{ 329, "Слишком много индексов" },
	{ 330, "Слишком мало индексов" },
	{ 331, "Должен идти тип" },
	{ 332, "Переменная не является массивом" },
	{ 333, "Неправильный способ использования идентификатора" }
};
struct key
{
	unsigned codekey;
	char     namekey[15];
};

static struct key  keywords[64] = {
	{ ident, " " },
	{ dosy, "do" },
	{ ifsy, "if" },
	{ insy, "in" },
	{ ofsy, "of" },
	{ orsy, "or" },
	{ tosy, "to" },
	{ ident,"  " },
	{ andsy,"and" },
	{ divsy,"div" },
	{ endsy,"end" },
	{ forsy,"for" },
	{ modsy,"mod" },
	{ nilsy,"nil" },
	{ notsy,"not" },
	{ setsy,"set" },
	{ varsy,"var" },
	{ ident,"   " },
	{ casesy,"case" },
	{ elsesy,"else" },
	{ filesy,"file" },
	{ gotosy,"goto" },
	{ onlysy,"only" },
	{ thensy,"then" },
	{ typesy,"type" },
	{ unitsy,"unit" },
	{ usessy,"uses" },
	{ withsy,"with" },
	{ ident, "    " },
	{ arraysy,"array" },
	{ beginsy,"begin" },
	{ constsy,"const" },
	{ labelsy,"label" },
	{ untilsy,"until" },
	{ whilesy,"while" },
	{ ident,  "     " },
	{ exportsy,"export" },
	{ importsy,"import" },
	{ downtosy,"downto" },
	{ modulesy,"module" },
	{ packedsy,"packed" },
	{ recordsy,"record" },
	{ repeatsy,"repeat" },
	{ vectorsy,"vector" },
	{ stringsy,"string" },
	{ ident,   "      " },
	{ forwardsy,"forward" },
	{ processsy,"process" },
	{ programsy,"program" },
	{ segmentsy,"segment" },
	{ ident,    "       " },
	{ functionsy,"function" },
	{ separatesy,"separate" },
	{ ident,     "        " },
	{ interfacesy,"interface" },
	{ proceduresy,"procedure" },
	{ qualifiedsy,"qualified" },
	{ ident,      "         " },
	{ ident,      "          " },
	{ ident,      "           " },
	{ ident,      "            " },
	{ ident,      "             " },
	{ implementationsy,"implementation" },
	{ ident,        "              " }
};
short int last[15] = {-1,0,7,17,28,35,45,50,53,57,58,59,60,61,63};

struct textPosition {
	unsigned int lineNum;
	unsigned int charNum;
};

struct errorAndPos {
	textPosition positionError;
	unsigned int codeError;
};

ifstream progFile("ProgPasLexicalErr.txt");
ofstream listFile("ProgPas0List.txt");
ofstream codeOfSymbol("Symbols.txt");

list<errorAndPos> errorList;
textPosition positionNow = { 0,0 }; //позиция литеры
string line; //строка для считывания
short int countError = 0; //номер ошибки

unsigned symbol; //код символа
textPosition token; //позиция символа
char *addrname; //адрес идентификатора в таблице имен
int nmb_int; //значение целой константы 
float nmb_float; //значение вещественной константы
char one_symbol; //значение символьной константы 

//void CreateErrorTable()
//{
//	string tempStr;
//	errorAndPos ep;
//	int i = 0;
//	ifstream errorFile("ProgPas0Error.txt");
//	while (!errorFile.eof())
//	{
//		getline(errorFile, tempStr, ' ');
//		ep.positionError.lineNum = atoi(tempStr.c_str());
//		getline(errorFile, tempStr, ' ');
//		ep.positionError.charNum = atoi(tempStr.c_str());
//		getline(errorFile, tempStr, '\n');
//		ep.codeError = atoi(tempStr.c_str());
//		errorList.push_back(ep);
//	}
//	for each (errorAndPos var in errorList)
//	{
//		cout << var.positionError.lineNum << ", " << var.positionError.charNum << ", " << var.codeError << endl;
//	}
//	errorFile.close();
//}

bool chekError()
{
	if (!errorList.empty())
	{
		for each (errorAndPos var in errorList)
		{
			countError++;
			listFile << "**" << setw(2) << setfill('0') << countError << "** " << setfill(' ') << setw(var.positionError.charNum + 1) << "^" << "ошибка код: " << var.codeError << endl;
			listFile << "****** " << var.codeError << ": " << codeOfError[var.codeError] << endl;
		}
		errorList.clear();
		return true;
	}
	else
		return false;
}

void addErrTable(unsigned int erCode, textPosition erPos)
{
	errorAndPos ep;
	ep.positionError.lineNum = erPos.lineNum;
	ep.positionError.charNum = erPos.charNum;
	ep.codeError = erCode;
	errorList.push_back(ep);
}

char nextch() {
	char ch = NULL;
	string s;
	if (positionNow.charNum == (unsigned int)line.size() )
	{
		listFile << "  " << setw(2) << setfill('0') << positionNow.lineNum << "   " << line << "\n";   //ListThisLine();
		if (chekError())
		{
			cout << "There are errors" << endl;
		}
		if (!getline(progFile, line, '\n'))	//ReadNextLine();
			line = "";

		positionNow.lineNum++;
		positionNow.charNum = 0;
		codeOfSymbol << endl;
	}
	ch = line[positionNow.charNum];
	cout << ch << ": line - " << positionNow.lineNum << " char - " << positionNow.charNum << endl;
	positionNow.charNum++;
	return ch;
}

void nextsym()
{
	unsigned lname = 0;
	bool printCodeSym = true;
	char name[15];
	char ch = nextch();
	short int i = 0;
	short int flag = 0; //символ
	while (ch == ' ') ch = nextch();
	token.lineNum = positionNow.lineNum;
	token.charNum = positionNow.charNum - 1;

	if (isalpha(ch))
		flag = 1; //буква
	else if (isdigit(ch))
		flag = 2; //цифра

	switch (flag)
	{
	case 0: {
		switch (ch)
		{
		case ',': {
			symbol = comma;
			break;
		}
		case ';': {
			symbol = semicolon;
			break;
		}
		case ':': {
			ch = nextch();
			if (ch == '=') symbol = assign;
			else { symbol = colon; positionNow.charNum--; }
			break;
		}
		case '(': {
			ch = nextch();
			if (ch == '*') symbol = lcomment;
			else { symbol = leftpar; positionNow.charNum--; }
			break;
		}
		case ')': {
			symbol = rightpar;
			break;
		}
		case '=': {
			symbol = equal;
			break;
		}
		case '+': {
			symbol = plus;
			break;
		}
		case '-': {
			/*ch = nextch();
			if (isdigit(ch)) minusDigit = true;
			else*/ symbol = minus;
			break;
		}
		case '/': {
			ch = nextch();
			if (ch == '/')
			{
				ch = nextch();
				while (ch == ' ') ch = nextch();
				if (isalpha(ch))
				{
					while (positionNow.charNum != (unsigned int)line.size())
					{
						ch = nextch();
					}
					printCodeSym = false;
				}
			}
			else
				symbol = slash;
			break;
		}
		case '*': {
			ch = nextch();
			if (ch == ')') symbol = rcomment;
			else { symbol = star; positionNow.charNum--; }
			break;
		}
		case '.': {
			ch = nextch();
			if (ch == '.') symbol = twopoints;
			else { symbol = point; positionNow.charNum--; }
			break;
		}
		case '<': {
			ch = nextch();
			if (ch == '=') symbol = laterequal;
			else
				if (ch == '>') symbol = latergreater;
				else { symbol = later; positionNow.charNum--; }
				break;
		}
		case '>': {
			ch = nextch();
			if (ch == '=') symbol = greaterequal;
			else { symbol = greater; positionNow.charNum--; }
			break;
		}
		case '[': {
			symbol = lbracket;
			break;
		}
		case ']': {
			symbol = rbracket;
			break;
		}
		case '{': {
			textPosition tokenComm;
			tokenComm.charNum = token.charNum; tokenComm.lineNum = token.lineNum;
			ch = nextch();
			while (ch == ' ') ch = nextch();
			if (isalpha(ch))
			{
				
					while (ch != '}' && !progFile.eof())
					{
						ch = nextch();
					}
					printCodeSym = false;
					if (progFile.eof()) { addErrTable(86, tokenComm); ch = nextch(); }
			}
			else
				symbol = flpar;
			break;
		}
		case '}': {
			symbol = frpar;
			break;
		}
		case '^': {
			symbol = arrow;
			break;
		}
		case '\'': {
			ch = nextch();
			if (ch == '\'')
				addErrTable(75, token); //ошибка в символьной константе
			else
			{
				one_symbol = ch;
				
				ch = nextch();
			}
			symbol = charc;
			break;
		}
		default: {
			printCodeSym = false;
			addErrTable(6, token); //запрещенный символ
		}
		}
		cout << symbol << endl;
		break;
	}
	case 1: {
		while (isalpha(ch) || (ch >= '0' && ch <= '9')) {
			name[lname++] = ch;
			ch = nextch();
		}
		positionNow.charNum--;
		name[lname] = '\0';
		cout << name << endl;
		strcpy_s(keywords[last[lname]].namekey, name);
		i = last[lname - 1] + 1;
		while (strcmp(keywords[i].namekey, name) != 0)
			i++;
		symbol = keywords[i].codekey;
		idents.insert(name);
		cout << symbol << endl;
		break;
	}
	case 2: {
		string s;
		nmb_int = 0;
		bool realFlag = false;

		while (ch >= '0' && ch <= '9')
		{
			s += ch;
			if (positionNow.charNum != (unsigned int)line.size())
			{
				ch = nextch();
				if (ch == '.')
				{
					ch = nextch();
					if (isdigit(ch))
					{
						realFlag = true;
						s += '.';
					}
				}
			}
			else
			{
				if (realFlag)
				{
					try {
						nmb_float = stof(s);
					}
					catch (const exception &e) {
						addErrTable(207, token); // константа превышает предел 
						nmb_float = 0;
					}
					symbol = floatc;
					codeOfSymbol << symbol << " ";
					printCodeSym = false;
					ch = nextch();
					cout << nmb_int << endl;
					break;
				}
				else
				{
					try {
						nmb_int = stoi(s);
					}
					catch (const exception &e) {
						addErrTable(203, token); // константа превышает предел 
						nmb_int = 0;
					}
					symbol = intc;
					codeOfSymbol << symbol << " ";
					printCodeSym = false;
					ch = nextch();
					cout << nmb_int << endl;
					break;
				}
			}
		}
		if (realFlag)
		{
			try {
				nmb_float = stof(s);
			}
			catch (const exception &e) {
				addErrTable(207, token); // константа превышает предел 
				nmb_float = 0;
			}
			symbol = floatc;
			cout << nmb_float << endl;
		}
		else
		{
			try {
				nmb_int = stoi(s);
			}
			catch (const exception &e) {
				addErrTable(203, token); // константа превышает предел 
				nmb_int = 0;
			}
			symbol = intc;
			cout << nmb_int << endl;
		}
		positionNow.charNum--;
		break;
	}			
	}
	if (printCodeSym) codeOfSymbol << symbol << " ";
}

void main()
{
	getline(progFile, line, '\n');
	while (!progFile.eof() || line != "")
	{
		nextsym();
	}
	progFile.close();
	listFile.close();
}

