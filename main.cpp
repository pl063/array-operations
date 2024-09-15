
    #include <iostream>
    using namespace std;

    int initiate_menu();
    int take_input();
    int display_array(int *arr, int size);

    int main() {
        int key_to_continue;

        initiate_menu();

        cin>>key_to_continue;
        return 0;
    }

    int initiate_menu() {

        int user_choice = 0;


      //The menu looks like:
        cout<<"Vavedi chislo, otgovarqshto na izbora ti:"<<endl;
        cout<<"1 - Vavedi nov masiv M(N)"<<endl;
        cout<<"2 - Formirai masiv MN(N) ot nechetnite elementi na M(N) i izvedi srednoaritmetichnata im stoinost"<<endl;
        cout<<"3 - Sortirai masiva M(N) v nizhodqsht red"<<endl;
        cout<<"4 - Izhod ot programata"<<endl;

         do {
           cin>>user_choice;
            cin.clear();
            cin.ignore(); //ignore the stream
        } while (user_choice < 1 || user_choice > 4);


         switch(user_choice) {
            case 1:
                take_input();
                break;
        }
        return 0;
    }

    int take_input() {
        
        int arr_size = 0;
        int arr_index = 0;
    
        do {
            cout<<"Vavedi razmernost na masiva"<<endl;
            cin>>arr_size;
        } while(arr_size < 0);
        cout<<"Razmera e "<<arr_size<<endl;

        cout<<"Vavedi stoinosti"<<endl;
        int input_array[arr_size];

        for(int i = 0; i < arr_size; i++){
            int current_value;
            cout<<"M(N)["<<arr_index<<"] = ";
            cin>>current_value;
            input_array[arr_index++] = current_value;
            cin.clear();
            cin.ignore();
        }
        
        display_array(input_array, arr_size);
        return 0;
    }

    int display_array(int *arr, int size) {
        for(int i = 0; i < size; i++) {
            cout<<"Masiva e: "<<arr[i]<<" ";
        }
        return 0;
    }