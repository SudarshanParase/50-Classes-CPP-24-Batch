#include "Calculator_Header_File.hpp"

int main(void)
{

    Calculator_Overview Overview("Casio (Japan)"
                                , "FX-991EX ClassWiz"
                                , "High-end non-graphing scientific calculator"
                                , "2015; Still flagship in 2025"
                                , "Engineering, science, mathematics exams, college usage");

            Overview.show();

    Calculator_Display Display("High-resolution “Natural Textbook” LCD (4x clearer than\n\t\t\t\t previous models)"
                            , "2-line display (input & output)"
                            , "Supports fraction input, integral display, equation editing"
                            , "Generates QR codes to visualize graphs via smartphone");

            Display.show();

    Calculator_Functionality Functionality("~522 built-in functions — includes advanced calculus,\n\t\t\t\t statistics, solves, regression"
                                        , "Up to 4x4 matrix calculations"
                                        , "Enables table-based data entry and simple calculations"
                                        , "Solves quadratic, cubic, and simultaneous equations"
                                        , "Regression, standard deviation, probability distributions");

            Functionality.show();

    Calculator_Performance Performance("Fast response, near-instant execution — markedly quicker\n\t\t\t\t than older FX-ES models"
                                        , "Dual (solar panel + backup battery) for continuous use"
                                        , "Compact plastic body (~95g); durable keypad"
                                        , "1-2 year warranty varies by region");

            Performance.show();

    Calculator_Exam Exam("Approved for major exams globally (e.g. BC, AP, GCSE, IB and\n\t\t\t\t others)"
                        , "Widely accepted in high school and university settings"
                        , "Accessible layout with familiar layout; strong support across\n\t\t\t\t exam boards");

            Exam.show();

    return (0);
}

// 301 Line Code