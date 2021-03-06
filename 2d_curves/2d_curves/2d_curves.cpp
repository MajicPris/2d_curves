// 2d_curves.cpp: определяет точку входа для консольного приложения.
#include<iostream>
#include<vector>
#include"figure.h"
#include<algorithm>
#include <crtdbg.h>
#define _CRTDBG_MAP_ALLOC


using namespace std;



int main()
{
	shared_ptr<Figure> figures;
	vector<shared_ptr<Figure>> vec1;
	for (int i = 0; i < 10; ++i)
	{
		if (i%2==0)
		{
			figures = make_shared<Circle>();
			
		}
		else
		{
			figures = make_shared<Ellipse>();
			
		}
		figures->setRadius();
		figures->setSquare();
		vec1.push_back(figures);
		
	}
	/*Figure* figures;
	vector<Figure> vec1;
	for (int i = 0; i < 10; ++i) {
		if (i%2 ==0)
		{
			figures = new Circle;
		}
		else
		{
			figures = new Ellipse;
		}
		figures->setRadius();
		figures->setSquare();
		vec1.push_back(figures);
	}*/
	for (int i = 0; i < 10; ++i)
	{
		vec1[i]->show();
	}

	sort(vec1.begin(), vec1.end(), [](shared_ptr<Figure> a, shared_ptr<Figure> b) {return a->getSquare() < b->getSquare(); });
	cout << "\n=================================Sorted vector=================================" << endl;
	for (int i = 0; i < vec1.size(); ++i)
	{
		vec1[i]->show();
	}

	double sum_square_circle = 0;
	for (int i = 0; i < vec1.size(); ++i)
	{
		if(vec1[i]->figure_type==Circle_ID)
			sum_square_circle += vec1[i]->getSquare();
	}
	cout << "\nSum_Square_Circle = " << sum_square_circle << endl;
	_CrtDumpMemoryLeaks();
	system("pause");
    return 0;
}

