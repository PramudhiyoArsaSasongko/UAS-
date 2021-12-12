#include <iostream>
using namespace std;

char kotak[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkwin();
void papan();

int main()
{
	int pemain = 1,i,choice;

    char mark;
    do
    {
        papan();
        pemain=(pemain%2)?1:2;

        cout << "Pemain " << pemain << ", masukan nomor:  ";
        cin >> choice;

        mark=(pemain == 1) ? 'X' : 'O';

        if (choice == 1 && kotak[1] == '1')

            kotak[1] = mark;
        else if (choice == 2 && kotak[2] == '2')

            kotak[2] = mark;
        else if (choice == 3 && kotak[3] == '3')


            kotak[3] = mark;
        else if (choice == 4 && kotak[4] == '4')

            kotak[4] = mark;
        else if (choice == 5 && kotak[5] == '5')

            kotak[5] = mark;
        else if (choice == 6 && kotak[6] == '6')

            kotak[6] = mark;
        else if (choice == 7 && kotak[7] == '7')

            kotak[7] = mark;
        else if (choice == 8 && kotak[8] == '8')

            kotak[8] = mark;
        else if (choice == 9 && kotak[9] == '9')

            kotak[9] = mark;
        else
        {
            cout<<"Invalid move ";

            pemain--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        pemain++;
    }while(i==-1);
    papan();
    if(i==1)

        cout<<"==>\aPemain "<<--pemain<<" win ";
    else
        cout<<"==>\aSeri";

    cin.ignore();
    cin.get();
    return 0;
}



int checkwin()
{
    if (kotak[1] == kotak[2] && kotak[2] == kotak[3])

        return 1;
    else if (kotak[4] == kotak[5] && kotak[5] == kotak[6])

        return 1;
    else if (kotak[7] == kotak[8] && kotak[8] == kotak[9])

        return 1;
    else if (kotak[1] == kotak[4] && kotak[4] == kotak[7])

        return 1;
    else if (kotak[2] == kotak[5] && kotak[5] == kotak[8])

        return 1;
    else if (kotak[3] == kotak[6] && kotak[6] == kotak[9])

        return 1;
    else if (kotak[1] == kotak[5] && kotak[5] == kotak[9])

        return 1;
    else if (kotak[3] == kotak[5] && kotak[5] == kotak[7])

        return 1;
    else if (kotak[1] != '1' && kotak[2] != '2' && kotak[3] != '3' 
                    && kotak[4] != '4' && kotak[5] != '5' && kotak[6] != '6' 
                  && kotak[7] != '7' && kotak[8] != '8' && kotak[9] != '9')

        return 0;
    else
        return -1;
}




void papan()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Pemain  1 (X)  -  Pemain 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << kotak[1] << "  |  " << kotak[2] << "  |  " << kotak[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << kotak[4] << "  |  " << kotak[5] << "  |  " << kotak[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << kotak[7] << "  |  " << kotak[8] << "  |  " << kotak[9] << endl;

    cout << "     |     |     " << endl << endl;
}

