#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstring>
#define _USE_MATH_DEFINES
#include "math.h"
#include <sstream>
#include <string>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    // vector

    {
        int a[6] = {1, 4, 5, 6, 7, 6};
        int b[6];
        for (int i = 0; i < 6; i++) {
            b[i] = 2 * a[i];
        }//1.1
    }


    {
        int a[6] = {1, 4, 5, 6, 7, 6};
        int b[6];
        for (int i = 0; i < 6; i++) {
            b[i] = 7 + a[i];
        }
        cout << endl;
        for (int i = 0; i < 6; i++) {
            cout << b[i] << " ";
        }
        cout << endl;// 1.2
    }


    {
        int a[6] = {2, 4, 6, 6, 8, 6};
        int b[6];
        for (int i = 0; i < 6; i++) {
            b[i] = a[i] / a[0];
        }
        cout << endl;
        for (int i = 0; i < 6; i++) {
            cout << b[i] << " ";
        }
        cout << endl;// 1.3
    }

    {
        int a[6] = {2, 4, 6, 6, 8, 6};
        float sum = 0.0;
        for (int i = 0; i < 6; i++) {
            sum += a[i];
        }
        cout << sum;// 2.1
    }


    {
        int a[6] = {2, 4, 6, 6, 8, 6};
        float sum = 0.0;
        for (int i = 0; i < 6; i++) {
            sum += pow(a[i], 2);
        }
        cout << sum;// 2.2
    }


    {
        int a[8] = {2, 4, 6, 6, 8, 6, 10, 12};
        float sum = 0.0;
        for (int i = 0; i < 6; i++) {
            sum += a[i];
        }
        cout << sum;// 2.3
    }


    {
        int a[8] = {2, 4, 6, 6, 8, 6, 10, 12};
        float sum = 0.0;
        int k1, k2;
        cout << "введите k1:";
        cin >> k1;
        cout << "введите k2>k1:";
        cin >> k2;
        for (int i = k1; i <= k2; i++) {
            sum += a[i];
        }
        cout << sum;// 2.4
    }

    {
        int a[6] = {2, 4, 6, 6, 8, 6};
        float sum = 0.0;
        for (int i = 0; i < 6; i++) {
            sum += a[i];
        }
        cout << sum / 2;// 2.5
    }

    {
        int a[8] = {2, 4, 6, 6, 8, 6, 10, 12};
        float sum = 0.0;
        int s1, s2;
        cout << "введите s1:";
        cin >> s1;
        cout << "введите s2>s1:";
        cin >> s2;
        for (int i = s1; i <= s2; i++) {
            sum += a[i];
        }
        cout << sum / 2;// 2.6
    }


    {
        int n, i, j;
        int temp;
        int *mas = new int[20];
        srand(time(NULL));
        for (int i = 0; i < 20; i++) {
            mas[i] = -10 + rand() % 20;
            cout << mas[i] << " ";
        }
        cout << endl;
        j = 20 - 1;
        for (i = 0; i < 20 / 2; i++) {
            temp = mas[i];
            mas[i] = mas[j];
            mas[j] = temp;
            j--;
        }
        for (int i = 0; i < 20; i++) {
            cout << mas[i] << " ";
        }
        delete[] mas;

    }
    {

        int a[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
        cout << "\n";
        for (int i = 0; i < 20; i++) {
            cout << a[i] << " ";
        }
        int t = a[0];
        a[0] = a[17];
        a[17] = t;
        int k = a[1];
        a[1] = a[18];
        a[18] = k;
        int m = a[2];
        a[2] = a[19];
        a[19] = m;
        cout << "\n";
        for (int i = 0; i < 20; i++) {
            cout << a[i] << " ";
        }
    } //3

    setlocale(LC_ALL, "rus");
    {
        int n, k;
        int a[5] = {1, -2, 3, -4, 5};
        cout << "\n";
        for (int i = 0; i < 5; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        cout << "Введите номер первого отрицательного элемента: ";
        cin >> k;
        cout << "Массив без " << k << " элемента: ";
        for (int i = 0; i < 4; i++) {
            if (i >= k - 1) {
                n = a[i];
                a[i] = a[i + 1];
                a[i + 1] = n;

            }
            cout << a[i] << " ";
        }
        cout << endl;
    } //4.1

    {
        int n, k;
        int a[5] = {1, -2, 3, -4, 5};
        cout << "\n";
        for (int i = 0; i < 5; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        cout << "Введите номер последнего четного элемента: ";
        cin >> k;
        cout << "Массив без " << k << " элемента: ";
        for (int i = 0; i < 4; i++) {
            if (i >= k - 1) {
                n = a[i];
                a[i] = a[i + 1];
                a[i + 1] = n;

            }
            cout << a[i] << " ";
        }
        cout << endl;
    } //4.2

    {
        char str[] = "Moscow";
        if (strlen(str) % 2 == 0) {
            cout << "В этом слове чётное количество букв";
        } else {
            cout << "В этом слове нечётное количество букв";
        }
    }//5

    {
        char str1[] = "Petrov";
        char str2[] = "Kalashnikova";
        if (strlen(str1) > strlen(str2)) {
            cout << "True ";
        } else {
            cout << "False ";
        } //6
    }

    {
        char str1[] = "Moscow";
        char str2[] = "Blagoveshchensk";
        char str3[] = "Bryansk";
        if (strlen(str2) > strlen(str3) &&  strlen(str3)> strlen(str1))
            cout << "the_longest:Blagoveshchensk" << endl << "the_shortest:Moscow";

        if (strlen(str1) > strlen(str2) && strlen(str2)>strlen(str3))
            cout << "the_longest:Moscow" << endl << "the_shortest:Bryansk";

        if (strlen(str1) > strlen(str3) && strlen(str3)> strlen(str2))
            cout << "the_longest:Moscow" << endl << "the_shortest:Bryansk";

        if (strlen(str2) > strlen(str1) && strlen(str1)> strlen(str3))
            cout << "the_longest:Blagoveshchensk" << endl << "the_shortest:Bryansk";

        if (strlen(str3) > strlen(str2) && strlen(str2)> strlen(str1))
            cout << "the_longest:Bryansk" << endl << "the_shortest:Bryansk";

        if (strlen(str3) > strlen(str1) && strlen(str1)> strlen(str2))
            cout << "the_longest:Bryansk" << endl << "the_shortest:Blagoveshchensk";
        //7
    }

    {
        char a[]="Moscow";
                int m,n;
                cout<< endl<< " Введите m:";
                cin>>m;
        cout<< "Введите n:";
        cin>>n;
        for(int i=m; i<=n; i++){
            cout << a[i]<< " ";
        } //8
    }

    {
        int i = 0;
        string word="sea";
        string a;
        string ch;
        char str[word.length()];
        for( i=0; i<word.length(); i++)
            str[i]='*';
        str[i]='\0';
        ch=str;
        a=ch+word+ch;
        cout<<a;
    } //9

    {
        char word[] = "Mom was washing the frame";
        int i;
        int percentA = 0;

        for (i = 0; i < sizeof(word); i++) {
            if (word[i] == 'a') {
                percentA++;
            }'
        }
        double a=((double) 100/sizeof(word)*percentA);
        cout << " \n Процент букв A в этой фразе:"<< a;
    } //10

    {
        string str = "can you can a can as a canner can can a can?";
        cout<<str;
        string wrd1= "can";
        string wrd2= "new_word";

        istringstream ist(str);
        list<string> list;
        copy(istream_iterator<string>(ist), istream_iterator<string>(), back_inserter(list));
        replace(list.begin(), list.end(), wrd1, wrd2);

        cout << " \n Result: ";
        copy(list.begin(), list.end(), ostream_iterator<string>(cout, " "));
    } //11



 system ("pause");
 return 0;
}
