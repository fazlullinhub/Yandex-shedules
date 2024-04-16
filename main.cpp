#include <iostream>
#include <CMakeProject1.h>
#include <map>
#include <Tools.h>

std::string OW_API_KEY = "17d97e321a5960d40e64610aa836ead5";
std::string YA_API_KEY = "1eb31582-941a-3ac8-a61f-041c344495ab";

int main() {
	setlocale(LC_ALL, "RUS");
	std::system("chcp 65001");
	std::cout << "Введите пункт отправления: ";
    std::string cityFrom; std::cin >> cityFrom;
	std::cout << "Введите пункт назначения: ";
	std::string cityTo; std::cin >> cityTo;
	YaScheduleApp* app = new YaScheduleApp(OW_API_KEY, YA_API_KEY, cityFrom, cityTo);
	nlohmann::json res = app->getScheduleBetweenCities();
	std::cout << res;
	return 0;


}