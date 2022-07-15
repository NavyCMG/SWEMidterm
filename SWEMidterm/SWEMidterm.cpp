// SWEMidterm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Helper.H"

int main()
{
    std::vector<bool> ans;

    std::string question1 = "What is 1+1?";
    std::vector<std::string> answers1 = { "1", "2", "3", "4", "0" };
    bool ans1 = Helper::MultChoice(question1, answers1, 2);
    ans.push_back(ans1);
    system("pause");
    system("cls");

    std::string question2 = "How much does the typical MTG collectors set cost?";
    std::vector<std::string> answers2 = { "$50", "$80", "$100", "$120", "$150" };
    bool ans2 = Helper::MultChoice(question2, answers2, 4);
    ans.push_back(ans2);
    system("pause");
    system("cls");

    std::string question3 = "Which superhero is best?";
    std::vector<std::string> answers3 = { "Superman", "Batman", "Spiderman", "Wonderwoman", "Hulk", "Deadpool" };
    bool ans3 = Helper::MultChoice(question3, answers3, 3);
    ans.push_back(ans3);
    system("pause");
    system("cls");

    std::string question4 = "What should student Connor Grimes's grade be for this assignment?";
    std::vector<std::string> answers4 = { "75%", "85%", "95%", "100%", "115%" };
    bool ans4 = Helper::MultChoice(question4, answers4, 4);
    ans.push_back(ans4);
    system("pause");
    system("cls");

    int correct = 0;
    for (int i = 0; i < ans.size(); ++i)
    {
        if (ans[i] == true)
        {
            ++correct;
        }
    }
    std::cout << "You have gotten " << correct << '/' << ans.size() << " correct\n\n\n";
}
