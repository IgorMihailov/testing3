#include "functions.h"

void sorting()
{
    QFile file("../GAME/leaderboard.txt");
    struct S{
      int num;
      QString sss;
    };
    vector<S> statistic;
    size_t k = 0;

    if (file.open(QIODevice::ReadOnly)){
        while(!file.atEnd()){
            QString string = file.readLine();
            QStringList values = string.split(" ");
            int current_num = values[0].toInt();
            QString current_s = values[1];
            S stat;
            stat.num = current_num;
            stat.sss = current_s;
            statistic.push_back(stat);
        }
        file.close();
    }

    for(size_t i = 0; i < statistic.size(); i++){
        for(size_t j = i + 1; j < statistic.size(); j++){
            if(statistic[i].num < statistic[j].num){
                S tmp = statistic[i];
                statistic[i] = statistic[j];
                statistic[j] = tmp;
            }
        }
    }

    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
            {

                while(k < statistic.size())
                {
                    QTextStream writeStream(&file);
                    writeStream << statistic[k].num << " " << statistic[k].sss;
                    k++;
                }
                file.close();
            }

}
