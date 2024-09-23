
    #include <iostream>
    using namespace std;


    void take_input (int* ptr, int &N); //Взимане на входящи данни от потребителя - размерност и стойности на масива
    void uneven_elements(int* ptr, int &N); //Нов масив от нечетните стойности и намиране на средноаритемтичната им стойност
    void sort_array(int* ptr, int &N); //Записване на копие на вх. масив и сортиране по низходящ ред
    void display_array(int* arr, int size); //Визуализиране на текущия масив

        int main() {
        const int size = 25;
        int user_choice, N;
        int M[size];

        int* ptr = M;

        bool entered_array = false;


         do {
            cout<<"Vavedi chislo, otgovarqshto na izbora ti:"<<endl;
            cout<<"1 - Vavedi nov masiv M(N)"<<endl;
            cout<<"2 - Formirai masiv MN(N) ot nechetnite elementi na M(N) i izvedi srednoaritmetichnata im stoinost"<<endl;
            cout<<"3 - Sortirai masiva M(N) v nizhodqsht red"<<endl;
            cout<<"4 - Izhod ot programata"<<endl;

            cin>>user_choice;
            cin.clear();
            cin.ignore();

            switch(user_choice) {
            case 1:
                take_input(ptr, N);
                entered_array = true;
                break;
            case 2:
                if (entered_array) uneven_elements(ptr, N);
                else cout<<"Purvo vavedi masiv!"<<endl;
                break;
            case 3:
                if (entered_array) sort_array(ptr, N);
                else cout<<"Purvo vavedi masiv!"<<endl;
                break;
            case 4:
                cout<<"Izhod"<<endl;
                break;
            default:
                cout<<"Nevalidna opciq"<<endl;
                break;
        }
        } while (user_choice != 4);

        return 0;
    }

    void take_input(int* ptr, int &N) {
        int user_choice;
        do {
            cout<<"Vavedi razmer na masiva ot 1 do 25"<<endl;
            cin>>user_choice;
            cin.clear();
            cin.ignore();
        } while(user_choice <= 0 || user_choice > 25);

        N = user_choice;

        for(int i = 0; i < N; i++) {
            cout<<"M["<<i<<"] = ";
            cin>>user_choice;
            cin.clear();
            cin.ignore();
            ptr[i] = user_choice;
        }
        cout<<"Masiva e:"<<endl;       
        display_array(ptr, N);
        cout<<endl;
    }

    void uneven_elements(int* ptr, int &N) {
        double sum = 0.0;
        double average;
        int uneven_arr[N];
        int uneven_index = 0;

        for (int i = 0; i < N; i++) {
            if(ptr[i] % 2 != 0) {
                sum += ptr[i];
                uneven_arr[uneven_index++] = ptr[i];
            }
        }

        int* uneven_ptr = uneven_arr;

        average = sum / (uneven_index);

        cout<<"Srednoaritmetichnoto e = "<<average<<endl;
        cout<<"Masiva ot nechetni chisla e "<<endl;
        display_array(uneven_ptr, uneven_index);
        cout<<endl;
    }

    void sort_array(int* ptr, int &N) {
        int MS[N] = {0};

        int i, j;
        bool swapped;

        //Презаписване на масива
        for(int k = 0; k < N; k++) {
            MS[k] = ptr[k];
        }

        //Сортиране на масива
        for (i = 0; i < N - 1; i++) {
            swapped = false;
         
            for (j = 0; j < N - i - 1; j++) {
                int current = MS[j];
                int adjacent = MS[j + 1];
                if (current < adjacent) {
                    int temp = current;
                    MS[j] = adjacent;
                    MS[j + 1] = temp;
                   
                    swapped = true;
                }
            }
            
            if (swapped == false)
                break;
        }
        
        int* ms_p = MS;
        cout<<"Sortiraniq masiv e "<<endl;
        display_array(ms_p, N);
        cout<<endl;
    }

    void display_array(int* arr, int size) {
        for(int i = 0; i < size; i++) {
            cout<<arr[i]<<" ";
        }
    }