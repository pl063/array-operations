
    #include <iostream>
    using namespace std;

    int initiate_menu();
    int take_input();

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
        cout<<"Take input";
        return 0;
    }

