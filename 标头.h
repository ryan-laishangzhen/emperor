#include <vector>
#include <string>
#include <fstream>
using std::string;
using std::vector;
class Csv
{
public:
	vector <vector <string>> table;    //�洢���ṹ�Ķ�άvector
	int RowsCount;
	int ColumnsCount;
	Csv(char* filename)
	{	

		FILE *fp;
		char StrLine[2048];             //ÿ������ȡ���ַ���
		if ( fopen_s(&fp,filename, "r"))  //�ж��ļ��Ƿ���ڼ��ɶ�
		{

		}
		vector <vector<string>> map;
		while (!feof(fp))
		{
			vector <string> row;
			fgets(StrLine, 1024, fp);  //��ȡһ��
			//ÿһ�и��ݶ����ٽ��зָ�
			const char * split = ",";
			char * p,*buf;
			p = strtok_s(StrLine, split,&buf);
			while (p != NULL) {
				row.push_back(p);    //ÿ��ÿ��Ԫ�ؼ�����row��
				p = strtok_s(NULL, split,&buf);
			}
			ColumnsCount = row.size();
			map.push_back(row);    //ÿһ��row����map��
		}
		RowsCount = map.size();
		table = map;

	};

};
