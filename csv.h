#include <vector>
#include <string>
#include <fstream>
using std::string;
using std::vector;
class Csv
{
public:
	vector <vector <string>> table;    //存储表格结构的二维vector
	int RowsCount;
	int ColumnsCount;
	Csv(char* filename)
	{	

		FILE *fp;
		char StrLine[2048];             //每行最大读取的字符数
		if ( fopen_s(&fp,filename, "r"))  //判断文件是否存在及可读
		{

		}
		vector <vector<string>> map;
		while (!feof(fp))
		{
			vector <string> row;
			fgets(StrLine, 1024, fp);  //读取一行
			//每一行根据逗号再进行分割
			const char * split = ",";
			char * p,*buf;
			p = strtok_s(StrLine, split,&buf);
			while (p != NULL) {
				row.push_back(p);    //每行每个元素加入行row中
				p = strtok_s(NULL, split,&buf);
			}
			ColumnsCount = row.size();
			map.push_back(row);    //每一行row加入map中
		}
		RowsCount = map.size();
		table = map;

	};

};
