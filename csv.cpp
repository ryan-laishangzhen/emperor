
#include <iostream>
#include "标头.h"
using namespace std;

int main()
{
	char filename[] = "C:\\Users\\admin\\Desktop\\ADT_ALARM_BUF.CSV"; //文件名
		Csv csv(filename); //元素显示测试：
		for (auto it1 = csv.table.begin(); it1 != csv.table.end(); ++it1)
		{

			for (auto it2 = it1->begin(); it2 != it1->end(); ++it2)
			{
				cout << it2->data() << "\t";
			}
			cout << endl;
		}

		getchar();
		return 0;
}
