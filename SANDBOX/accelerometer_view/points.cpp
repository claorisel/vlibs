#include "points.h"

static QString data();

static QList<double> field(int n)
{
    QList<double> res;

    auto lines = data().split('\n');
    lines.removeAll("");

    int lineNo = 1;
    for (auto& line:lines)
    {
        ++lineNo;
        line.remove( QRegExp("\\s") );
        auto nums = line.split(',');

        if (nums.count() > n && nums.count() > 4)
            res.append( nums.at(n).toDouble() );
    }
    return res;
}


QList<double> points::xs()
{
    return field(0);
}

QList<double> points::ys()
{
    return field(1);
}

QList<double> points::zs()
{
    return field(2);
}


QList<double> points::g_ys()
{
    return field(7);
}

QList<double> points::g_zs()
{
    return field(8);
}


static QString data()
{
    return R"(
           -0.09,-0.07,1.02,	-9.70,63.50,-105.70,	-nan,63.50,-105.70,	-167.062500

           -0.04,0.01,1.03,	-11.30,63.70,-99.60,	-nan,63.70,-99.60,	-167.062500

           0.00,0.01,1.02,	-7.70,63.20,-105.40,	-nan,63.20,-105.40,	-167.062500

           -0.00,0.01,1.02,	-12.20,63.30,-103.50,	-nan,63.30,-103.50,	-167.062500

           -0.00,0.01,1.02,	-12.00,63.50,-102.50,	-nan,63.50,-102.50,	-167.062500

           -0.00,0.01,1.01,	-11.30,64.30,-101.70,	-nan,64.30,-101.70,	-167.062500

           -0.00,0.01,1.01,	-9.50,66.00,-104.00,	-nan,66.00,-104.00,	-167.062500

           0.00,0.2500

           -0.09,-0.07,1.02,	-9.70,63.50,-105.70,	-nan,63.50,-105.70,	-167.062500
           -0.04,0.01,1.03,	-11.30,63.70,-99.60,	-nan,63.70,-99.60,	-167.062500
           0.00,0.01,1.02,	-7.70,63.20,-105.40,	-nan,63.20,-105.40,	-167.062500

           -0.00,0.01,1.02,	-12.20,63.30,-103.50,	-nan,63.30,-103.50,	-167.062500
           -0.00,0.01,1.02,	-12.00,63.50,-102.50,	-nan,63.50,-102.50,	-167.062500
           -0.00,0.01,1.01,	-11.30,64.30,-101.70,	-nan,64.30,-101.70,	-167.062500

           -0.00,0.01,1.01,	-9.50,66.00,-104.00,	-nan,66.00,-104.00,	-167.062500

           0.00,0.0500

           -0.09,-0.07,1.02,	-9.70,63.50,-105.70,	-nan,63.50,-105.70,	-167.062500

           -0.04,0.01,1.03,	-11.30,63.70,-99.60,	-nan,63.70,-99.60,	-167.062500

           0.00,0.01,1.02,	-7.70,63.20,-105.40,	-nan,63.20,-105.40,	-167.062500

           -0.00,0.01,1.02,	-12.20,63.30,-103.50,	-nan,63.30,-103.50,	-167.062500

           -0.00,0.01,1.02,	-12.00,63.50,-102.50,	-nan,63.50,-102.50,	-167.062500

           -0.00,0.01,1.01,	-11.30,64.30,-101.70,	-nan,64.30,-101.70,	-167.062500

           -0.00,0.01,1.01,	-9.50,66.00,-104.00,	-nan,66.00,-104.00,	-167.062500

           0.00,0.0100

           -0.09,-0.07,1.02,	-9.70,63.50,-105.70,	-nan,63.50,-105.70,	-167.062500

           -0.04,0.01,1.03,	-11.30,63.70,-99.60,	-nan,63.70,-99.60,	-167.062500

           0.00,0.01,1.02,	-7.70,63.20,-105.40,	-nan,63.20,-105.40,	-167.062500

           -0.00,0.01,1.02,	-12.20,63.30,-103.50,	-nan,63.30,-103.50,	-167.062500

           -0.00,0.01,1.02,	-12.00,63.50,-102.50,	-nan,63.50,-102.50,	-167.062500

           -0.00,0.01,1.01,	-11.30,64.30,-101.70,	-nan,64.30,-101.70,	-167.062500

           -0.00,0.01,1.01,	-9.50,66.00,-104.00,	-nan,66.00,-104.00,	-167.062500

           0.00,0.01,0

           -0.09,-0.07,1.02,	-9.70,63.50,-105.70,	-nan,63.50,-105.70,	-167.062500

           -0.04,0.01,1.03,	-11.30,63.70,-99.60,	-nan,63.70,-99.60,	-167.062500

           0.00,0.01,1.02,	-7.70,63.20,-105.40,	-nan,63.20,-105.40,	-167.062500

           -0.00,0.01,1.02,	-12.20,63.30,-103.50,	-nan,63.30,-103.50,	-167.062500

           -0.00,0.01,1.02,	-12.00,63.50,-102.50,	-nan,63.50,-102.50,	-167.062500

           -0.00,0.01,1.01,	-11.30,64.30,-101.70,	-nan,64.30,-101.70,	-167.062500

           -0.00,0.01,1.01,	-9.50,66.00,-104.00,	-nan,66.00,-104.00,	-167.062500

           0.00,0.01,1

           -0.09,-0.07,1.02,	-9.70,63.50,-105.70,	-nan,63.50,-105.70,	-167.062500

           -0.04,0.01,1.03,	-11.30,63.70,-99.60,	-nan,63.70,-99.60,	-167.062500

           0.00,0.01,1.02,	-7.70,63.20,-105.40,	-nan,63.20,-105.40,	-167.062500

           -0.00,0.01,1.02,	-12.20,63.30,-103.50,	-nan,63.30,-103.50,	-167.062500

           -0.00,0.01,1.02,	-12.00,63.50,-102.50,	-nan,63.50,-102.50,	-167.062500

           -0.00,0.01,1.01,	-11.30,64.30,-101.70,	-nan,64.30,-101.70,	-167.062500

           -0.00,0.01,1.01,	-9.50,66.00,-104.00,	-nan,66.00,-104.00,	-167.062500

           0.00,0.01,1

           -0.09,-0.07,1.02,	-9.70,63.50,-105.70,	-nan,63.50,-105.70,	-167.062500

           -0.04,0.01,1.03,	-11.30,63.70,-99.60,	-nan,63.70,-99.60,	-167.062500

           0.00,0.01,1.02,	-7.70,63.20,-105.40,	-nan,63.20,-105.40,	-167.062500

           -0.00,0.01,1.02,	-12.20,63.30,-103.50,	-nan,63.30,-103.50,	-167.062500

           -0.00,0.01,1.02,	-12.00,63.50,-102.50,	-nan,63.50,-102.50,	-167.062500

           -0.00,0.01,1.01,	-11.30,64.30,-101.70,	-nan,64.30,-101.70,	-167.062500

           -0.00,0.01,1.01,	-9.50,66.00,-104.00,	-nan,66.00,-104.00,	-167.062500

           0.00,0.01,1.
           -0.09,-0.07,1.02,	-9.70,63.50,-105.70,	-nan,63.50,-105.70,	-167.062500

           -0.04,0.01,1.03,	-11.30,63.70,-99.60,	-nan,63.70,-99.60,	-167.062500

           0.00,0.01,1.02,	-7.70,63.20,-105.40,	-nan,63.20,-105.40,	-167.062500

           -0.00,0.01,1.02,	-12.20,63.30,-103.50,	-nan,63.30,-103.50,	-167.062500

           -0.00,0.01,1.02,	-12.00,63.50,-102.50,	-nan,63.50,-102.50,	-167.062500

           -0.00,0.01,1.01,	-11.30,64.30,-101.70,	-nan,64.30,-101.70,	-167.062500

           -0.00,0.01,1.01,	-9.50,66.00,-104.00,	-nan,66.00,-104.00,	-167.062500

           0.00,0.01,1.02,	-6.50,62.00,-105.20,	-nan,62.00,-105.20,	-167.062500

           0.00,-0.00,1.02,	-10.10,64.10,-108.10,	-nan,64.10,-108.10,	-167.062500

           0.00,0.00,1.02,	-12.40,62.90,-102.60,	-nan,62.90,-102.60,	-163.812500

           0.00,0.01,1.02,	-9.50,63.60,-106.90,	-nan,63.60,-106.90,	-163.812500

           -0.00,-0.00,1.02,	-10.00,65.40,-104.80,	-nan,65.40,-104.80,	-163.812500

           0.00,0.00,1.02,	-11.70,63.90,-108.40,	-nan,63.90,-108.40,	-163.812500

           0.00,0.00,1.02,	-9.90,62.10,-104.40,	-nan,62.10,-104.40,	-163.812500

           0.00,0.01,1.02,	-9.80,60.30,-105.70,	-nan,60.30,-105.70,	-163.812500

           0.00,0.01,1.02,	-13.10,61.50,-103.00,	-nan,61.50,-103.00,	-163.812500

           0.00,0.00,1.01,	-9.50,64.30,-104.40,	-nan,64.30,-104.40,	-163.812500

           -0.00,0.00,1.02,	-8.10,61.50,-106.50,	-nan,61.50,-106.50,	-163.812500

           -0.01,0.00,1.02,	-13.20,65.40,-104.40,	-nan,65.40,-104.40,	-163.812500

           0.00,0.00,1.02,	-11.00,62.70,-104.10,	-nan,62.70,-104.10,	-162.500000

           -0.00,0.01,1.02,	-9.30,66.40,-107.40,	-nan,66.40,-107.40,	-162.500000

           0.00,0.00,1.02,	-10.00,64.90,-108.70,	-nan,64.90,-108.70,	-162.500000

           0.00,-0.00,1.02,	-12.70,63.80,-101.30,	-nan,63.80,-101.30,	-162.500000

           -0.00,0.01,1.01,	-11.10,65.40,-101.60,	-nan,65.40,-101.60,	-162.500000

           0.01,0.00,0.97,	-12.50,62.90,-101.00,	-nan,62.90,-101.00,	-162.500000

           0.00,0.00,1.02,	-9.40,64.50,-102.30,	-nan,64.50,-102.30,	-162.500000

           -0.01,0.00,1.02,	-11.60,65.60,-97.60,	-nan,65.60,-97.60,	-162.500000

           0.00,0.01,1.02,	-10.50,65.20,-104.30,	-nan,65.20,-104.30,	-162.500000

           0.00,0.00,1.02,	-10.80,65.20,-102.70,	-nan,65.20,-102.70,	-167.375000

           -0.00,0.00,1.01,	-9.40,65.60,-101.80,	-nan,65.60,-101.80,	-167.375000

           -0.00,0.00,1.02,	-12.20,63.50,-102.40,	-nan,63.50,-102.40,	-167.375000

           -0.00,0.01,1.00,	-10.60,63.20,-100.70,	-nan,63.20,-100.70,	-167.375000

           -0.01,0.04,1.02,	-11.20,63.20,-105.80,	-nan,63.20,-105.80,	-167.375000

           0.02,0.00,1.02,	-9.10,61.00,-101.90,	-nan,61.00,-101.90,	-167.375000

           -0.00,0.01,1.02,	-13.60,58.50,-100.20,	-nan,58.50,-100.20,	-167.375000

           -0.01,0.00,1.02,	-10.40,60.40,-105.10,	-nan,60.40,-105.10,	-167.375000

           0.01,0.01,1.01,	-8.00,61.70,-102.40,	-nan,61.70,-102.40,	-167.375000

           0.00,0.00,0.96,	-10.20,61.10,-103.40,	-nan,61.10,-103.40,	-167.375000

           -0.00,0.00,1.02,	-8.20,60.10,-105.50,	-nan,60.10,-105.50,	-166.562500

           -0.00,0.00,1.02,	-8.90,60.90,-102.10,	-nan,60.90,-102.10,	-166.562500

           0.00,0.01,1.01,	-7.50,63.80,-101.80,	-nan,63.80,-101.80,	-166.562500

           0.01,0.00,1.02,	-11.40,61.00,-98.80,	-nan,61.00,-98.80,	-166.562500

           0.00,0.00,1.01,	-8.30,63.90,-95.60,	-nan,63.90,-95.60,	-166.562500

           -0.00,0.00,1.01,	-8.40,62.50,-99.90,	-nan,62.50,-99.90,	-166.562500

           -0.00,0.00,1.02,	-8.50,62.40,-100.30,	-nan,62.40,-100.30,	-166.562500

           -0.00,0.00,1.02,	-8.80,63.90,-102.00,	-nan,63.90,-102.00,	-166.562500

           0.00,0.00,1.01,	-8.50,63.90,-99.50,	-nan,63.90,-99.50,	-166.562500

           -0.00,0.00,1.02,	-10.20,63.00,-102.80,	-nan,63.00,-102.80,	-167.250000

           -0.00,0.00,1.02,	-10.30,63.10,-100.90,	-nan,63.10,-100.90,	-167.250000

           0.00,0.01,1.02,	-10.20,63.60,-99.70,	-nan,63.60,-99.70,	-167.250000

           0.00,0.01,1.02,	-9.00,62.80,-102.80,	-nan,62.80,-102.80,	-167.250000

           -0.01,0.01,1.01,	-9.00,64.70,-101.20,	-nan,64.70,-101.20,	-167.250000

           -0.01,0.00,1.02,	-9.80,63.00,-96.20,	-nan,63.00,-96.20,	-167.250000

           0.00,0.00,1.02,	-6.90,62.20,-98.30,	-nan,62.20,-98.30,	-167.250000

           -0.00,0.01,1.01,	-8.00,65.60,-99.10,	-nan,65.60,-99.10,	-167.250000

           0.00,0.01,1.02,	-8.20,65.60,-98.40,	-nan,65.60,-98.40,	-167.250000

           -0.00,0.00,1.01,	-6.20,63.00,-98.50,	-nan,63.00,-98.50,	-167.250000

           -0.00,0.01,1.02,	-8.20,64.60,-101.10,	-nan,64.60,-101.10,	-169.062500

           0.00,0.00,1.02,	-9.90,64.40,-94.80,	-nan,64.40,-94.80,	-169.062500

           -0.00,0.01,1.01,	-5.50,63.10,-99.00,	-nan,63.10,-99.00,	-169.062500

           -0.00,0.00,1.02,	-10.10,63.20,-93.90,	-nan,63.20,-93.90,	-169.062500

           -0.00,0.01,1.02,	-6.70,61.90,-97.30,	-nan,61.90,-97.30,	-169.062500

           -0.01,0.00,1.01,	-8.90,65.10,-99.20,	-nan,65.10,-99.20,	-169.062500

           -0.00,0.01,1.01,	-7.50,63.50,-95.60,	-nan,63.50,-95.60,	-169.062500

           0.00,0.01,1.01,	-7.30,61.50,-97.10,	-nan,61.50,-97.10,	-169.062500

           0.00,0.01,1.01,	-6.70,64.30,-94.70,	-nan,64.30,-94.70,	-169.062500

           0.02,0.00,1.02,	-10.20,65.20,-95.60,	-nan,65.20,-95.60,	-169.062500

           0.01,0.01,1.02,	-5.60,63.70,-91.90,	-nan,63.70,-91.90,	-172.125000

           0.00,0.00,1.02,	-7.30,65.60,-98.20,	-nan,65.60,-98.20,	-172.125000

           -0.01,0.00,1.02,	-7.80,67.10,-93.00,	-nan,67.10,-93.00,	-172.125000

           -0.00,0.00,1.01,	-5.90,64.00,-95.30,	-nan,64.00,-95.30,	-172.125000

           -0.00,0.00,1.01,	-8.50,64.90,-102.60,	-nan,64.90,-102.60,	-172.125000

           -0.00,0.00,1.02,	-5.30,64.20,-96.90,	-nan,64.20,-96.90,	-172.125000

           0.00,0.01,1.02,	-8.20,66.10,-98.50,	-nan,66.10,-98.50,	-172.125000

           0.00,0.01,1.02,	-6.80,66.10,-92.20,	-nan,66.10,-92.20,	-172.125000

           0.00,0.01,1.01,	-8.00,64.90,-91.90,	-nan,64.90,-91.90,	-172.125000

           0.00,0.01,1.02,	-5.10,65.50,-95.90,	-nan,65.50,-95.90,	-168.500000

           0.01,0.01,1.01,	-7.30,64.70,-92.30,	-nan,64.70,-92.30,	-168.500000

           -0.00,0.01,1.01,	-6.40,65.20,-93.80,	-nan,65.20,-93.80,	-168.500000

           -0.01,0.01,1.02,	-8.60,65.30,-97.20,	-nan,65.30,-97.20,	-168.500000

           -0.00,0.01,1.02,	-5.40,65.40,-92.80,	-nan,65.40,-92.80,	-168.500000

           0.00,0.01,1.02,	-6.00,65.00,-94.60,	-nan,65.00,-94.60,	-168.500000

           -0.00,0.00,1.02,	-6.90,66.20,-92.20,	-nan,66.20,-92.20,	-168.500000

           0.00,0.00,1.01,	-7.10,64.60,-94.00,	-nan,64.60,-94.00,	-168.500000

           0.00,0.01,1.02,	-6.10,64.00,-94.70,	-nan,64.00,-94.70,	-168.500000

           -0.00,0.01,1.02,	-6.30,65.50,-97.40,	-nan,65.50,-97.40,	-168.500000

           0.00,0.01,1.01,	-7.90,65.40,-95.40,	-nan,65.40,-95.40,	-165.750000

           -0.00,0.00,1.01,	-5.60,67.00,-93.70,	-nan,67.00,-93.70,	-165.750000

           0.00,0.01,1.02,	-6.50,65.30,-95.30,	-nan,65.30,-95.30,	-165.750000

           0.00,0.00,1.02,	-4.90,64.70,-91.30,	-nan,64.70,-91.30,	-165.750000

           -0.00,0.01,1.02,	-8.30,63.50,-95.40,	-nan,63.50,-95.40,	-165.750000

           -0.00,0.00,1.02,	-6.80,63.60,-95.00,	-nan,63.60,-95.00,	-165.750000

           0.00,0.01,1.02,	-5.60,66.20,-95.30,	-nan,66.20,-95.30,	-165.750000

           -0.00,0.00,1.02,	-4.60,67.70,-92.10,	-nan,67.70,-92.10,	-165.750000

           -0.00,0.00,1.02,	-6.90,66.80,-91.30,	-nan,66.80,-91.30,	-165.750000

           -0.01,0.00,1.01,	-5.70,64.60,-89.70,	-nan,64.60,-89.70,	-165.750000

           -0.00,0.01,1.01,	-4.60,66.40,-96.50,	-nan,66.40,-96.50,	-167.312500

           0.00,0.00,1.02,	-5.80,65.30,-92.50,	-nan,65.30,-92.50,	-167.312500

           0.01,0.00,1.02,	-6.00,65.50,-96.00,	-nan,65.50,-96.00,	-167.312500

           -0.02,0.00,1.02,	-6.30,64.80,-96.70,	-nan,64.80,-96.70,	-167.312500

           -0.00,0.00,1.01,	-7.30,64.70,-93.60,	-nan,64.70,-93.60,	-167.312500

           -0.00,0.02,1.02,	-4.70,65.20,-96.40,	-nan,65.20,-96.40,	-167.312500

           0.00,-0.00,1.02,	-4.20,63.90,-94.00,	-nan,63.90,-94.00,	-167.312500

           -0.00,0.01,1.01,	-4.70,66.20,-92.50,	-nan,66.20,-92.50,	-167.312500

           0.00,0.00,1.02,	-5.90,65.70,-91.70,	-nan,65.70,-91.70,	-167.312500

           0.01,0.01,1.02,	-5.40,67.10,-90.70,	-nan,67.10,-90.70,	-167.312500

           -0.01,-0.00,1.01,	-4.00,69.50,-92.80,	-nan,69.50,-92.80,	-166.562500

           -0.01,0.00,1.02,	-3.50,65.60,-89.50,	-nan,65.60,-89.50,	-166.562500

           0.00,-0.00,1.02,	-4.10,64.50,-91.10,	-nan,64.50,-91.10,	-166.562500

           0.00,0.00,1.01,	-4.80,64.80,-92.40,	-nan,64.80,-92.40,	-166.562500

           0.00,0.00,1.02,	-5.40,66.00,-94.70,	-nan,66.00,-94.70,	-166.562500

           0.00,0.00,1.01,	-5.10,65.80,-93.40,	-nan,65.80,-93.40,	-166.562500

           -0.00,0.00,1.02,	-6.90,66.00,-91.00,	-nan,66.00,-91.00,	-166.562500

           -0.00,0.00,1.01,	-5.00,64.20,-92.90,	-nan,64.20,-92.90,	-166.562500

           0.00,0.00,1.01,	-3.30,65.10,-89.70,	-nan,65.10,-89.70,	-166.562500

           0.00,0.00,1.02,	-5.70,65.30,-92.30,	-nan,65.30,-92.30,	-166.562500

           0.00,0.00,1.02,	-5.20,64.40,-91.90,	-nan,64.40,-91.90,	-166.125000

           -0.00,0.00,1.02,	-5.40,65.30,-96.10,	-nan,65.30,-96.10,	-166.125000

           -0.00,0.01,1.02,	-5.20,67.50,-92.30,	-nan,67.50,-92.30,	-166.125000

           0.00,0.00,1.02,	-4.70,69.20,-92.30,	-nan,69.20,-92.30,	-166.125000

           0.01,0.00,1.02,	-5.00,66.90,-89.80,	-nan,66.90,-89.80,	-166.125000

           -0.00,0.00,1.02,	-4.40,65.30,-93.50,	-nan,65.30,-93.50,	-166.125000

           0.00,0.00,1.02,	-4.10,65.20,-92.40,	-nan,65.20,-92.40,	-166.125000

           -0.01,0.00,1.01,	-4.80,65.50,-92.90,	-nan,65.50,-92.90,	-166.125000

           -0.00,0.00,1.02,	-3.00,65.60,-90.80,	-nan,65.60,-90.80,	-166.125000

           -0.00,0.00,1.01,	-1.60,64.90,-92.10,	-nan,64.90,-92.10,	-164.750000

           -0.01,0.00,1.01,	-3.50,64.80,-94.00,	-nan,64.80,-94.00,	-164.750000

           -0.01,0.00,1.02,	-5.60,65.70,-91.10,	-nan,65.70,-91.10,	-164.750000

           -0.07,0.01,1.00,	-5.80,65.10,-94.00,	-nan,65.10,-94.00,	-164.750000

           0.04,0.03,1.02,	-7.70,62.00,-96.30,	-nan,62.00,-96.30,	-164.750000

           -0.04,0.00,1.01,	-8.50,62.20,-95.50,	-nan,62.20,-95.50,	-164.750000

           0.00,0.01,1.02,	-5.90,61.90,-95.90,	-nan,61.90,-95.90,	-164.750000

           -0.00,0.00,1.00,	-9.20,63.30,-98.70,	-nan,63.30,-98.70,	-164.750000

           0.00,0.00,1.01,	-10.20,60.80,-92.90,	-nan,60.80,-92.90,	-164.750000

           0.00,0.01,1.02,	-8.90,61.10,-96.90,	-nan,61.10,-96.90,	-164.750000

           0.00,0.01,1.01,	-7.20,62.00,-98.80,	-nan,62.00,-98.80,	-170.000000

           -0.00,0.00,1.02,	-8.50,61.20,-96.10,	-nan,61.20,-96.10,	-170.000000

           -0.00,0.00,1.02,	-10.00,62.50,-96.00,	-nan,62.50,-96.00,	-170.000000

           0.00,0.00,1.01,	-8.10,62.10,-98.10,	-nan,62.10,-98.10,	-170.000000

           -0.00,0.00,1.02,	-8.50,63.90,-95.50,	-nan,63.90,-95.50,	-170.000000

           -0.00,0.00,1.01,	-5.70,62.90,-96.00,	-nan,62.90,-96.00,	-170.000000

           0.00,0.00,1.01,	-7.20,62.40,-95.30,	-nan,62.40,-95.30,	-170.000000

           -0.01,-0.00,1.02,	-8.30,63.50,-97.20,	-nan,63.50,-97.20,	-170.000000

           -0.00,0.00,1.02,	-7.90,60.70,-99.30,	-nan,60.70,-99.30,	-170.000000

           -0.00,0.00,1.02,	-6.90,60.30,-95.20,	-nan,60.30,-95.20,	-170.000000

           -0.00,0.01,1.02,	-7.70,62.50,-97.70,	-nan,62.50,-97.70,	-167.437500

           -0.00,0.00,1.02,	-8.30,62.50,-97.70,	-nan,62.50,-97.70,	-167.437500

           0.00,0.00,1.02,	-7.00,63.60,-99.50,	-nan,63.60,-99.50,	-167.437500

           -0.00,0.00,1.02,	-6.70,64.40,-99.80,	-nan,64.40,-99.80,	-167.437500

           -0.00,0.00,1.01,	-9.70,61.10,-97.00,	-nan,61.10,-97.00,	-167.437500

           0.00,0.00,1.01,	-7.90,59.50,-99.80,	-nan,59.50,-99.80,	-167.437500

           -0.00,0.00,1.02,	-7.90,61.90,-102.70,	-nan,61.90,-102.70,	-167.437500

           -0.00,0.00,1.02,	-9.20,62.10,-95.40,	-nan,62.10,-95.40,	-167.437500

           -0.00,0.00,1.02,	-8.20,58.90,-97.50,	-nan,58.90,-97.50,	-167.437500

           -0.00,0.00,1.02,	-8.40,61.70,-95.90,	-nan,61.70,-95.90,	-167.437500

           -0.00,0.00,1.02,	-5.70,63.80,-97.80,	-nan,63.80,-97.80,	-168.312500

           -0.00,0.00,1.01,	-8.10,62.80,-97.90,	-nan,62.80,-97.90,	-168.312500

           0.00,0.01,1.01,	-5.40,64.10,-97.90,	-nan,64.10,-97.90,	-168.312500

           -0.00,0.01,1.01,	-8.70,60.90,-97.30,	-nan,60.90,-97.30,	-168.312500

           0.00,0.00,1.02,	-5.90,63.60,-96.40,	-nan,63.60,-96.40,	-168.312500

           0.00,0.00,1.02,	-9.10,61.70,-94.10,	-nan,61.70,-94.10,	-168.312500

           -0.00,0.00,1.02,	-7.60,62.60,-95.40,	-nan,62.60,-95.40,	-168.312500

           -0.01,0.00,1.01,	-11.20,58.50,-94.50,	-nan,58.50,-94.50,	-168.312500

           -0.00,0.00,1.01,	-5.00,61.70,-98.00,	-nan,61.70,-98.00,	-168.312500

           -0.00,0.00,1.01,	-7.80,65.10,-99.20,	-nan,65.10,-99.20,	-167.312500

           0.00,0.00,1.02,	-8.50,62.60,-98.40,	-nan,62.60,-98.40,	-167.312500

           0.00,0.00,1.01,	-6.00,59.70,-101.60,	-nan,59.70,-101.60,	-167.312500

           0.19,0.25,1.38,	-7.60,59.50,-101.30,	-nan,59.50,-101.30,	-167.312500

           0.12,0.16,1.21,	-8.50,60.80,-101.00,	-nan,60.80,-101.00,	-167.312500

           -0.18,-0.26,0.62,	-8.10,60.70,-99.70,	-nan,60.70,-99.70,	-167.312500

           0.15,0.28,1.45,	-6.20,60.50,-101.40,	-nan,60.50,-101.40,	-167.312500

           -0.03,0.06,1.13,	-9.10,62.00,-100.60,	-nan,62.00,-100.60,	-167.312500

           -0.17,-0.17,0.77,	-5.70,62.40,-99.10,	-nan,62.40,-99.10,	-167.312500

           0.15,0.28,1.46,	-10.00,63.50,-99.80,	-nan,63.50,-99.80,	-167.312500

           -0.19,-0.25,0.71,	-9.10,61.50,-104.60,	-nan,61.50,-104.60,	-167.375000

           -0.12,-0.14,0.92,	-6.20,61.70,-99.20,	-nan,61.70,-99.20,	-167.375000

           0.22,0.27,1.36,	-7.60,61.40,-101.00,	-nan,61.40,-101.00,	-167.375000

           0.00,0.00,1.01,	-6.60,60.90,-94.30,	-nan,60.90,-94.30,	-167.375000

           0.00,-0.00,1.02,	-10.90,64.60,-95.80,	-nan,64.60,-95.80,	-167.375000

           0.00,0.00,1.02,	-8.20,59.50,-94.80,	-nan,59.50,-94.80,	-167.375000

           0.00,0.00,1.02,	-8.40,62.70,-95.30,	-nan,62.70,-95.30,	-167.375000

           -0.00,0.00,1.02,	-7.70,64.00,-100.50,	-nan,64.00,-100.50,	-167.375000

           0.00,0.00,1.02,	-9.60,61.70,-98.30,	-nan,61.70,-98.30,	-167.375000

           0.00,0.00,1.01,	-6.30,62.30,-97.30,	-nan,62.30,-97.30,	-167.375000

           0.00,0.00,1.02,	-7.70,61.10,-95.80,	-nan,61.10,-95.80,	-168.500000

           -0.00,0.00,1.02,	-10.00,63.90,-92.20,	-nan,63.90,-92.20,	-168.500000

           -0.00,-0.00,1.02,	-7.40,60.90,-94.80,	-nan,60.90,-94.80,	-168.500000

           -0.00,-0.00,1.02,	-6.90,61.50,-95.60,	-nan,61.50,-95.60,	-168.500000

           -0.00,-0.00,1.02,	-9.20,61.30,-95.20,	-nan,61.30,-95.20,	-168.500000

           0.00,0.00,1.01,	-9.30,63.10,-94.70,	-nan,63.10,-94.70,	-168.500000

           0.00,0.01,1.02,	-6.10,61.70,-98.50,	-nan,61.70,-98.50,	-168.500000

           0.00,0.00,1.01,	-8.60,61.80,-96.20,	-nan,61.80,-96.20,	-168.500000

           -0.00,0.00,1.02,	-6.90,64.40,-95.00,	-nan,64.40,-95.00,	-168.500000

           -0.00,0.00,1.02,	-7.50,60.50,-96.70,	-nan,60.50,-96.70,	-168.500000

           -0.00,0.00,1.02,	-8.90,61.10,-95.80,	-nan,61.10,-95.80,	-165.062500

           -0.00,-0.00,1.01,	-9.10,60.60,-94.50,	-nan,60.60,-94.50,	-165.062500

           -0.00,-0.00,1.02,	-7.80,60.10,-98.80,	-nan,60.10,-98.80,	-165.062500

           0.12,0.21,1.25,	-7.70,62.50,-103.60,	-nan,62.50,-103.60,	-165.062500

           -0.17,-0.19,0.69,	-10.90,62.50,-97.10,	-nan,62.50,-97.10,	-165.062500

           -0.16,0.27,1.42,	-8.60,59.00,-100.60,	-nan,59.00,-100.60,	-165.062500

           -0.18,-0.25,0.66,	-8.20,64.20,-97.90,	-nan,64.20,-97.90,	-165.062500

           -0.15,-0.22,0.60,	-6.00,62.10,-96.80,	-nan,62.10,-96.80,	-165.062500

           -0.12,-0.24,0.62,	-9.00,62.10,-102.00,	-nan,62.10,-102.00,	-165.062500

           -0.02,0.09,1.16,	-7.90,61.40,-97.00,	-nan,61.40,-97.00,	-165.812500

           -0.06,-0.20,0.66,	-6.10,61.40,-100.50,	-nan,61.40,-100.50,	-165.812500

           -0.11,-0.23,0.63,	-7.50,60.60,-95.10,	-nan,60.60,-95.10,	-165.812500

           -0.06,-0.18,0.68,	-6.30,63.70,-95.80,	-nan,63.70,-95.80,	-165.812500

           -0.04,-0.03,1.00,	-9.10,60.90,-97.90,	-nan,60.90,-97.90,	-165.812500

           -0.00,0.00,1.02,	-6.50,62.40,-98.00,	-nan,62.40,-98.00,	-165.812500

           -0.00,0.00,1.02,	-7.20,63.00,-95.70,	-nan,63.00,-95.70,	-165.812500

           -0.00,-0.00,1.02,	-7.60,61.30,-95.50,	-nan,61.30,-95.50,	-165.812500

           -0.00,0.00,1.02,	-7.30,61.10,-96.00,	-nan,61.10,-96.00,	-165.812500

           -0.00,0.01,1.01,	-6.30,61.50,-99.90,	-nan,61.50,-99.90,	-165.812500

           -0.00,0.00,1.02,	-7.60,58.70,-97.20,	-nan,58.70,-97.20,	-165.312500

           -0.00,-0.00,1.01,	-6.10,61.80,-100.50,	-nan,61.80,-100.50,	-165.312500

           0.00,0.01,1.01,	-7.30,63.10,-100.20,	-nan,63.10,-100.20,	-165.312500

           0.00,-0.00,1.02,	-6.90,60.50,-97.00,	-nan,60.50,-97.00,	-165.312500

           -0.02,-0.02,1.00,	-8.10,61.20,-97.80,	-nan,61.20,-97.80,	-165.312500

           -0.11,-0.08,0.65,	-10.30,59.10,-98.40,	-nan,59.10,-98.40,	-165.312500

           0.11,0.16,1.15,	-7.80,60.80,-95.30,	-nan,60.80,-95.30,	-165.312500

           -0.19,-0.26,0.56,	-8.30,59.00,-94.10,	-nan,59.00,-94.10,	-165.312500

           -0.09,-0.26,0.62,	-9.80,62.10,-100.80,	-nan,62.10,-100.80,	-165.312500

           -0.16,-0.18,0.86,	-8.70,59.90,-97.60,	-nan,59.90,-97.60,	-168.750000

           0.00,0.11,1.20,	-9.00,60.70,-98.00,	-nan,60.70,-98.00,	-168.750000

           -0.18,-0.21,0.73,	-6.90,61.10,-96.80,	-nan,61.10,-96.80,	-168.750000

           -0.19,-0.30,0.58,	-7.70,60.00,-98.60,	-nan,60.00,-98.60,	-168.750000

           -0.11,-0.12,0.96,	-8.50,60.90,-98.80,	-nan,60.90,-98.80,	-168.750000

           0.04,0.15,1.31,	-8.30,61.30,-97.80,	-nan,61.30,-97.80,	-168.750000

           -0.00,0.00,1.02,	-6.70,60.90,-103.30,	-nan,60.90,-103.30,	-168.750000

           0.00,0.00,1.02,	-8.30,61.30,-99.10,	-nan,61.30,-99.10,	-168.750000

           0.00,0.00,1.02,	-9.10,60.80,-97.90,	-nan,60.80,-97.90,	-168.750000

           -0.00,0.00,1.02,	-8.90,60.40,-98.10,	-nan,60.40,-98.10,	-168.750000

           -0.00,0.00,1.01,	-7.00,62.20,-99.20,	-nan,62.20,-99.20,	-166.250000

           -0.00,-0.00,1.01,	-6.60,62.10,-95.70,	-nan,62.10,-95.70,	-166.250000

           -0.00,0.00,1.02,	-8.30,60.70,-97.60,	-nan,60.70,-97.60,	-166.250000

           -0.00,-0.01,1.02,	-8.70,62.60,-98.50,	-nan,62.60,-98.50,	-166.250000

           0.00,0.00,1.02,	-8.70,60.10,-95.20,	-nan,60.10,-95.20,	-166.250000

           -0.00,0.00,1.01,	-6.80,60.60,-97.20,	-nan,60.60,-97.20,	-166.250000

           0.13,0.23,1.42,	-6.90,58.70,-97.20,	-nan,58.70,-97.20,	-166.250000

           0.16,0.28,1.49,	-9.20,57.80,-99.20,	-nan,57.80,-99.20,	-166.250000

           -0.08,-0.22,0.64,	-8.30,60.30,-97.80,	-nan,60.30,-97.80,	-166.250000

           -0.09,-0.24,0.63,	-6.60,61.30,-92.70,	-nan,61.30,-92.70,	-166.250000

           0.14,0.03,1.13,	-8.00,58.90,-95.80,	-nan,58.90,-95.80,	-165.687500

           -0.03,-0.02,1.09,	-8.60,58.80,-97.40,	-nan,58.80,-97.40,	-165.687500

           0.07,0.02,0.97,	-8.90,60.00,-97.50,	-nan,60.00,-97.50,	-165.687500

           -0.17,-0.19,0.77,	-7.30,59.30,-100.70,	-nan,59.30,-100.70,	-165.687500

           -0.18,-0.29,0.68,	-7.80,60.70,-97.00,	-nan,60.70,-97.00,	-165.687500

           -0.03,-0.15,0.73,	-7.00,58.20,-97.10,	-nan,58.20,-97.10,	-165.687500

           -0.00,-0.01,1.02,	-8.90,63.40,-96.50,	-nan,63.40,-96.50,	-165.687500

           0.00,-0.00,1.02,	-4.80,62.60,-96.90,	-nan,62.60,-96.90,	-165.687500

           -0.00,0.00,1.01,	-7.00,59.20,-98.40,	-nan,59.20,-98.40,	-165.687500

           -0.00,0.00,1.01,	-7.00,60.30,-101.20,	-nan,60.30,-101.20,	-165.687500

           0.00,0.01,1.02,	-7.40,62.40,-99.40,	-nan,62.40,-99.40,	-167.375000

           -0.00,0.00,1.02,	-5.90,62.60,-97.20,	-nan,62.60,-97.20,	-167.375000

           -0.00,-0.00,1.01,	-9.20,60.60,-101.50,	-nan,60.60,-101.50,	-167.375000

           0.00,0.00,1.02,	-8.10,60.80,-91.80,	-nan,60.80,-91.80,	-167.375000

           -0.00,-0.00,1.01,	-7.70,60.10,-95.80,	-nan,60.10,-95.80,	-167.375000

           -0.00,-0.00,1.02,	-7.30,60.10,-98.20,	-nan,60.10,-98.20,	-167.375000

           -0.02,0.00,1.04,	-9.40,58.50,-95.10,	-nan,58.50,-95.10,	-167.375000

           -0.17,-0.19,0.76,	-7.00,60.50,-96.30,	-nan,60.50,-96.30,	-167.375000

           -0.01,-0.06,0.91,	-8.90,62.80,-95.70,	-nan,62.80,-95.70,	-167.375000

           0.17,0.28,1.42,	-10.80,59.80,-96.90,	-nan,59.80,-96.90,	-165.187500

           0.07,0.15,1.27,	-7.20,61.30,-95.80,	-nan,61.30,-95.80,	-165.187500

           0.13,0.18,1.36,	-8.10,60.20,-98.60,	-nan,60.20,-98.60,	-165.187500

           -0.07,-0.18,0.66,	-6.80,59.50,-95.90,	-nan,59.50,-95.90,	-165.187500

           -0.03,-0.00,1.08,	-6.30,60.30,-96.10,	-nan,60.30,-96.10,	-165.187500

           0.24,0.29,1.40,	-10.60,59.70,-96.40,	-nan,59.70,-96.40,	-165.187500

           -0.07,-0.21,0.66,	-8.70,61.00,-98.00,	-nan,61.00,-98.00,	-165.187500

           0.07,0.09,1.08,	-8.80,59.60,-95.80,	-nan,59.60,-95.80,	-165.187500

           -0.01,0.00,1.02,	-8.00,60.30,-94.00,	-nan,60.30,-94.00,	-165.187500

           0.00,0.00,1.01,	-6.70,62.90,-96.50,	-nan,62.90,-96.50,	-165.187500

           -0.01,0.00,1.01,	-6.30,58.50,-100.80,	-nan,58.50,-100.80,	-166.687500

           -0.00,0.00,1.02,	-7.60,60.00,-97.10,	-nan,60.00,-97.10,	-166.687500

           0.00,-0.00,1.02,	-10.50,60.30,-96.00,	-nan,60.30,-96.00,	-166.687500

           -0.01,0.01,1.01,	-10.30,58.60,-97.20,	-nan,58.60,-97.20,	-166.687500

           0.00,0.00,1.01,	-8.00,59.10,-95.60,	-nan,59.10,-95.60,	-166.687500

           -0.01,0.00,1.02,	-7.20,61.20,-97.90,	-nan,61.20,-97.90,	-166.687500

           0.00,0.00,1.02,	-9.10,60.20,-94.70,	-nan,60.20,-94.70,	-166.687500

           -0.00,0.00,1.02,	-9.80,60.40,-98.90,	-nan,60.40,-98.90,	-166.687500

           -0.05,-0.15,0.73,	-3.30,58.30,-99.50,	-nan,58.30,-99.50,	-166.687500

           0.02,-0.23,0.61,	-5.90,58.30,-100.00,	-nan,58.30,-100.00,	-166.687500

           -0.20,-0.30,0.55,	-7.80,58.00,-98.80,	-nan,58.00,-98.80,	-167.062500

           0.12,0.23,1.43,	-8.90,59.50,-96.40,	-nan,59.50,-96.40,	-167.062500

           0.11,0.20,1.38,	-6.60,60.40,-99.80,	-nan,60.40,-99.80,	-167.062500

           -0.07,-0.15,0.70,	-7.20,62.40,-101.80,	-nan,62.40,-101.80,	-167.062500

           -0.04,-0.09,0.83,	-6.80,57.50,-96.30,	-nan,57.50,-96.30,	-167.062500

           -0.19,-0.25,0.72,	-8.60,60.20,-98.40,	-nan,60.20,-98.40,	-167.062500

           -0.12,-0.26,0.59,	-7.60,58.50,-96.40,	-nan,58.50,-96.40,	-167.062500

           -0.22,-0.30,0.54,	-8.00,59.90,-95.20,	-nan,59.90,-95.20,	-167.062500

           -0.01,-0.00,1.02,	-6.50,60.80,-96.40,	-nan,60.80,-96.40,	-167.062500

           -0.00,0.00,1.02,	-8.20,58.10,-95.60,	-nan,58.10,-95.60,	-167.687500

           -0.00,0.00,1.01,	-7.30,56.80,-96.60,	-nan,56.80,-96.60,	-167.687500

           -0.00,0.00,1.01,	-6.30,60.80,-96.80,	-nan,60.80,-96.80,	-167.687500

           -0.00,-0.00,1.01,	-6.00,58.30,-96.20,	-nan,58.30,-96.20,	-167.687500

           -0.00,0.00,1.02,	-6.60,57.50,-101.80,	-nan,57.50,-101.80,	-167.687500

           0.00,0.00,1.01,	-6.90,58.00,-99.10,	-nan,58.00,-99.10,	-167.687500

           0.00,-0.00,1.01,	-8.50,59.40,-96.30,	-nan,59.40,-96.30,	-167.687500

           -0.00,0.00,1.01,	-8.00,60.00,-94.60,	-nan,60.00,-94.60,	-167.687500

           -0.00,0.00,1.02,	-8.50,58.00,-95.60,	-nan,58.00,-95.60,	-167.687500

           -0.10,-0.08,0.98,	-7.50,60.60,-100.80,	-nan,60.60,-100.80,	-167.687500

           -0.17,-0.20,0.73,	-7.70,57.70,-101.50,	-nan,57.70,-101.50,	-166.750000

           0.17,-0.17,0.74,	-6.00,56.30,-100.50,	-nan,56.30,-100.50,	-166.750000

           0.19,0.30,1.48,	-7.60,58.50,-100.30,	-nan,58.50,-100.30,	-166.750000

           -0.19,-0.27,0.71,	-6.90,60.00,-101.60,	-nan,60.00,-101.60,	-166.750000

           0.17,0.28,1.42,	-6.70,60.00,-98.90,	-nan,60.00,-98.90,	-166.750000

           0.14,0.24,1.10,	-6.60,59.00,-99.90,	-nan,59.00,-99.90,	-166.750000

           -0.03,-0.02,1.09,	-5.20,57.40,-100.10,	-nan,57.40,-100.10,	-166.750000

           0.11,0.24,1.45,	-7.20,59.30,-97.30,	-nan,59.30,-97.30,	-166.750000

           -0.07,-0.23,0.62,	-6.00,59.10,-98.70,	-nan,59.10,-98.70,	-166.750000

           0.06,0.04,1.06,	-7.30,60.90,-93.70,	-nan,60.90,-93.70,	-166.750000

           -0.00,-0.00,1.02,	-8.90,57.20,-100.30,	-nan,57.20,-100.30,	-167.687500

           -0.00,-0.00,1.02,	-7.50,56.60,-98.20,	-nan,56.60,-98.20,	-167.687500

           -0.00,0.00,1.01,	-7.30,58.70,-101.80,	-nan,58.70,-101.80,	-167.687500

           0.00,0.01,1.01,	-6.90,57.10,-102.50,	-nan,57.10,-102.50,	-167.687500

           0.00,0.00,1.02,	-7.20,59.50,-97.20,	-nan,59.50,-97.20,	-167.687500

           -0.00,0.00,1.02,	-4.90,61.90,-98.00,	-nan,61.90,-98.00,	-167.687500

           0.00,0.00,1.02,	-6.70,59.70,-99.00,	-nan,59.70,-99.00,	-167.687500

           -0.00,-0.00,1.02,	-7.10,59.00,-101.20,	-nan,59.00,-101.20,	-167.687500

           -0.01,0.00,1.02,	-7.40,59.10,-100.40,	-nan,59.10,-100.40,	-167.687500

           0.00,0.00,1.02,	-5.40,57.00,-95.70,	-nan,57.00,-95.70,	-165.937500

           0.09,0.21,1.38,	-8.60,59.00,-99.80,	-nan,59.00,-99.80,	-165.937500

           -0.02,0.10,0.62,	-5.80,59.00,-96.40,	-nan,59.00,-96.40,	-165.937500

           0.04,0.15,0.59,	-8.40,59.10,-98.90,	-nan,59.10,-98.90,	-165.937500

           -0.17,-0.20,0.75,	-5.00,59.50,-97.60,	-nan,59.50,-97.60,	-165.937500

           0.04,-0.01,0.94,	-4.20,56.10,-99.30,	-nan,56.10,-99.30,	-165.937500

           0.06,0.16,1.30,	-6.60,59.50,-96.20,	-nan,59.50,-96.20,	-165.937500

           -0.03,-0.12,0.72,	-6.10,60.30,-104.30,	-nan,60.30,-104.30,	-165.937500

           -0.09,-0.23,0.62,	-5.00,59.10,-98.40,	-nan,59.10,-98.40,	-165.937500

           -0.01,0.09,1.16,	-7.40,61.50,-97.20,	-nan,61.50,-97.20,	-165.937500

           0.17,0.25,1.31,	-5.00,56.10,-99.50,	-nan,56.10,-99.50,	-169.062500

           0.00,0.00,1.01,	-8.50,58.60,-97.60,	-nan,58.60,-97.60,	-169.062500

           -0.00,-0.00,1.01,	-8.30,61.90,-95.60,	-nan,61.90,-95.60,	-169.062500

           -0.00,0.00,1.02,	-5.00,59.40,-105.10,	-nan,59.40,-105.10,	-169.062500

           -0.01,-0.00,1.02,	-7.10,58.20,-97.50,	-nan,58.20,-97.50,	-169.062500

           -0.00,0.00,1.02,	-3.60,62.10,-99.10,	-nan,62.10,-99.10,	-169.062500

           -0.00,0.00,1.02,	-6.10,59.80,-99.70,	-nan,59.80,-99.70,	-169.062500

           -0.00,0.00,1.02,	-6.10,60.10,-97.80,	-nan,60.10,-97.80,	-169.062500

           -0.00,-0.00,1.02,	-7.10,59.80,-99.30,	-nan,59.80,-99.30,	-169.062500

           0.00,0.00,1.02,	-7.30,60.00,-97.50,	-nan,60.00,-97.50,	-169.062500

           0.00,0.00,1.01,	-5.80,60.10,-99.20,	-nan,60.10,-99.20,	-169.375000

           -0.08,-0.03,1.01,	-7.60,60.00,-101.50,	-nan,60.00,-101.50,	-169.375000

           0.08,0.05,1.05,	-7.10,58.80,-98.30,	-nan,58.80,-98.30,	-169.375000

           -0.12,-0.16,0.83,	-6.40,58.40,-98.50,	-nan,58.40,-98.50,	-169.375000

           -0.01,0.09,1.16,	-5.20,57.30,-99.20,	-nan,57.30,-99.20,	-169.375000

           -0.16,-0.18,0.79,	-6.80,58.70,-99.10,	-nan,58.70,-99.10,	-169.375000

           -0.06,-0.19,0.67,	-8.00,59.50,-96.40,	-nan,59.50,-96.40,	-169.375000

           -0.18,-0.22,0.73,	-5.30,60.00,-101.60,	-nan,60.00,-101.60,	-169.375000

           -0.03,0.04,1.13,	-7.90,59.10,-98.10,	-nan,59.10,-98.10,	-169.375000

           0.08,0.08,1.06,	-8.10,60.10,-98.80,	-nan,60.10,-98.80,	-165.750000

           0.23,0.29,0.81,	-9.00,59.70,-96.30,	-nan,59.70,-96.30,	-165.750000

           -0.05,-0.02,0.99,	-6.60,61.70,-96.90,	-nan,61.70,-96.90,	-165.750000

           0.00,0.00,1.01,	-7.30,61.30,-97.40,	-nan,61.30,-97.40,	-165.750000

           -0.00,0.00,1.02,	-6.80,60.60,-97.50,	-nan,60.60,-97.50,	-165.750000

           0.00,0.00,1.01,	-8.60,60.50,-99.80,	-nan,60.50,-99.80,	-165.750000

           0.00,-0.00,1.02,	-9.70,60.90,-92.40,	-nan,60.90,-92.40,	-165.750000

           0.00,-0.00,1.02,	-6.40,59.70,-99.10,	-nan,59.70,-99.10,	-165.750000

           0.00,-0.00,1.02,	-7.70,60.90,-97.00,	-nan,60.90,-97.00,	-165.750000

           -0.00,-0.00,1.01,	-6.40,59.00,-96.30,	-nan,59.00,-96.30,	-165.750000

           0.00,0.00,1.01,	-7.10,59.50,-98.50,	-nan,59.50,-98.50,	-165.625000

           -0.00,0.00,1.02,	-8.30,61.10,-98.90,	-nan,61.10,-98.90,	-165.625000

           0.00,-0.00,1.01,	-6.40,57.90,-100.50,	-nan,57.90,-100.50,	-165.625000

           0.18,0.27,1.43,	-5.40,62.40,-95.90,	-nan,62.40,-95.90,	-165.625000

           -0.03,-0.09,1.49,	-6.70,59.00,-95.80,	-nan,59.00,-95.80,	-165.625000

           -0.16,-0.29,0.56,	-8.80,59.30,-98.80,	-nan,59.30,-98.80,	-165.625000

           0.07,0.18,1.28,	-6.80,56.10,-97.80,	-nan,56.10,-97.80,	-165.625000

           0.10,0.19,1.36,	-6.30,59.80,-102.10,	-nan,59.80,-102.10,	-165.625000

           -0.13,-0.15,0.86,	-8.10,59.30,-96.30,	-nan,59.30,-96.30,	-165.625000

           -0.10,-0.25,1.44,	-7.70,60.30,-94.60,	-nan,60.30,-94.60,	-165.625000

           -0.18,-0.20,0.75,	-8.90,60.70,-97.30,	-nan,60.70,-97.30,	-165.625000

           0.16,0.21,1.17,	-7.80,58.30,-97.40,	-nan,58.30,-97.40,	-165.625000

           -0.17,-0.20,0.75,	-7.10,58.40,-95.80,	-nan,58.40,-95.80,	-165.625000

           0.00,0.01,1.01,	-6.50,60.90,-98.30,	-nan,60.90,-98.30,	-165.625000

           -0.00,0.00,1.02,	-7.30,59.70,-97.50,	-nan,59.70,-97.50,	-165.625000

           -0.00,0.00,1.01,	-6.50,58.70,-97.50,	-nan,58.70,-97.50,	-165.625000

           0.00,0.00,1.02,	-6.60,61.60,-99.10,	-nan,61.60,-99.10,	-165.625000

           -0.00,0.00,1.02,	-8.00,60.10,-96.00,	-nan,60.10,-96.00,	-165.625000

           0.00,0.00,1.02,	-10.80,60.70,-103.00,	-nan,60.70,-103.00,	-165.625000

           -0.00,0.01,1.02,	-8.20,60.60,-98.20,	-nan,60.60,-98.20,	-165.625000

           0.00,-0.00,1.02,	-7.70,60.70,-95.30,	-nan,60.70,-95.30,	-169.937500

           0.00,0.00,1.02,	-6.60,61.20,-99.10,	-nan,61.20,-99.10,	-169.937500

           -0.00,0.00,1.02,	-7.50,60.20,-96.90,	-nan,60.20,-96.90,	-169.937500

           -0.07,-0.04,1.00,	-4.50,60.90,-98.00,	-nan,60.90,-98.00,	-169.937500

           -0.20,0.05,1.04,	-6.30,60.00,-99.40,	-nan,60.00,-99.40,	-169.937500

           -0.00,0.10,0.61,	-8.00,60.80,-98.50,	-nan,60.80,-98.50,	-169.937500

           -0.19,-0.25,0.72,	-6.80,59.20,-100.60,	-nan,59.20,-100.60,	-169.937500

           -0.19,-0.26,0.55,	-6.40,56.30,-96.80,	-nan,56.30,-96.80,	-169.937500

           0.23,0.29,1.43,	-7.70,58.10,-96.50,	-nan,58.10,-96.50,	-169.937500

           0.16,-0.29,0.60,	-8.30,61.30,-96.70,	-nan,61.30,-96.70,	-164.000000

           -0.07,-0.23,1.48,	-8.10,58.00,-96.40,	-nan,58.00,-96.40,	-164.000000

           -0.05,-0.16,0.70,	-6.30,58.70,-99.00,	-nan,58.70,-99.00,	-164.000000

           -0.18,-0.20,0.75,	-8.20,60.70,-98.80,	-nan,60.70,-98.80,	-164.000000

           0.00,-0.04,1.00,	-7.70,58.50,-101.40,	-nan,58.50,-101.40,	-164.000000

           0.00,0.00,1.01,	-5.30,58.90,-98.90,	-nan,58.90,-98.90,	-164.000000

           -0.00,-0.00,1.01,	-8.30,60.90,-95.20,	-nan,60.90,-95.20,	-164.000000

           -0.01,0.00,1.02,	-8.30,59.80,-93.90,	-nan,59.80,-93.90,	-164.000000

           -0.00,-0.00,1.02,	-7.90,61.00,-97.30,	-nan,61.00,-97.30,	-164.000000

           -0.00,0.00,1.02,	-8.20,61.50,-94.70,	-nan,61.50,-94.70,	-164.000000

           -0.00,0.00,1.01,	-7.40,60.30,-101.90,	-nan,60.30,-101.90,	-169.375000

           -0.01,0.00,1.01,	-5.50,58.20,-96.00,	-nan,58.20,-96.00,	-169.375000

           0.01,0.00,1.01,	-6.90,62.20,-95.80,	-nan,62.20,-95.80,	-169.375000

           0.01,0.00,1.02,	-7.60,60.30,-96.10,	-nan,60.30,-96.10,	-169.375000

           -0.01,0.01,1.01,	-6.10,58.00,-96.70,	-nan,58.00,-96.70,	-169.375000

           -0.15,-0.17,0.80,	-6.40,55.40,-98.30,	-nan,55.40,-98.30,	-169.375000

           -0.16,-0.16,0.80,	-6.00,56.30,-99.30,	-nan,56.30,-99.30,	-169.375000

           -0.18,-0.16,0.70,	-7.30,56.90,-99.10,	-nan,56.90,-99.10,	-169.375000

           0.01,-0.10,0.60,	-4.40,55.90,-98.00,	-nan,55.90,-98.00,	-169.375000

           0.00,0.09,1.04,	-5.20,59.50,-98.80,	-nan,59.50,-98.80,	-169.375000

           -0.02,0.18,1.33,	-7.20,60.60,-101.80,	-nan,60.60,-101.80,	-170.125000

           0.13,0.24,1.42,	-6.70,60.20,-98.10,	-nan,60.20,-98.10,	-170.125000

           0.08,0.25,1.43,	-6.90,57.70,-99.90,	-nan,57.70,-99.90,	-170.125000

           )";
}