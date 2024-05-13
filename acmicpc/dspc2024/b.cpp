#include <iostream>
#include <string>


int main(){
    enum Grades2023{Cm, C0, Cp, Bm, B0, Bp, Am, A0, Ap, None};
    enum Grades2024{B, D, P, E};
    
    int N{};
    std::string grades;

    std::cin >> N;
    std::cin >> grades;

    std::string grade = "";
    int idx{};
    Grades2023 grades2023[N]{};

    for(auto c : grades){
        if(c == 'A' || c == 'B' || c == 'C'){
            if(!grade.empty()){
                int g{};
                switch(grade[0]){
                    case 'A': g = 7; break;
                    case 'B': g = 4; break;
                    case 'C': g = 1; break;
                    default: std::cout << "Invalid Grade" << std::endl;
                }
                if(grade.length() == 2){
                    switch(grade[1]){
                        case '+': grades2023[idx] = static_cast<Grades2023>(g+1); break;
                        case '0': grades2023[idx] = static_cast<Grades2023>(g);   break;
                        case '-': grades2023[idx] = static_cast<Grades2023>(g-1); break;
                        default: std::cout << "Error" << std::endl;
                    }
                }
                else
                    grades2023[idx] = static_cast<Grades2023>(g);
                
                grade = "";
                idx++;
            }

        }
        grade += c;
    }

    if(!grade.empty()){
        int g{};
        switch(grade[0]){
            case 'A': g = 7; break;
            case 'B': g = 4; break;
            case 'C': g = 1; break;
            default: std::cout << "Invalid Grade" << std::endl;
        }
        if(grade.length() == 2){
            switch(grade[1]){
                case '+': grades2023[idx] = static_cast<Grades2023>(g+1); break;
                case '0': grades2023[idx] = static_cast<Grades2023>(g);   break;
                case '-': grades2023[idx] = static_cast<Grades2023>(g-1); break;
                default: std::cout << "Error" << std::endl;
            }
        }
        else
            grades2023[idx] = static_cast<Grades2023>(g);
        
        grade = "";
        idx++;
    }

    Grades2024 grades2024[N]{};

    // 2024 grade
    for(int i = 0 ; i < N ; i++){
        Grades2023 prev = Grades2023::None;
        if(i > 0) prev = grades2023[i-1];
        switch(grades2023[i]){
            case Grades2023::Cm:
            case Grades2023::C0:
            case Grades2023::Cp:
                grades2024[i] = Grades2024::B;
                break;
            case Grades2023::Bm:
            case Grades2023::B0:
                if(prev == Grades2023::None || prev <= Grades2023::Cp){
                    grades2024[i] = Grades2024::D;
                } else {
                    grades2024[i] = Grades2024::B;
                }
                break;
            case Grades2023::Bp:
            case Grades2023::Am:
                if(prev == Grades2023::None || prev <= Grades2023::B0){
                    grades2024[i] = Grades2024::P;
                } else {
                    grades2024[i] = Grades2024::D;
                }
                break;
            case Grades2023::A0:
                if(prev == Grades2023::None || prev <= Grades2023::Am){
                    grades2024[i] = Grades2024::E;
                } else {
                    grades2024[i] = Grades2024::P;
                }
                break;
            case Grades2023::Ap:
                grades2024[i] = Grades2024::E;
                break;
        }

        switch(grades2024[i]){
            case Grades2024::B: std::cout << 'B'; break;
            case Grades2024::D: std::cout << 'D'; break;
            case Grades2024::P: std::cout << 'P'; break;
            case Grades2024::E: std::cout << 'E'; break;
        }
    }

    std::cout << '\n';

    return 0;
}