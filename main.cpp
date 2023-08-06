#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//=- Function Declarations
void menu();
double price_range();
string geo_beach_info();
string geo_mount_info();
string geo_forest_info();
string climate_info();
string culture_info();
void vacation_result(string, double, string, string, string, string);
string best_match(string, double, string, string, string, string);

int main() {
    //=- Default Initialization
    int max_price = 0;
    string beach_pref = "N/A";
    string mountain_pref = "N/A";
    string forest_pref = "N/A";
    string clim_pref = "N/A";
    string culture_pref = "N/A";

    //=- Main
    menu();
    culture_pref = culture_info();
    max_price = price_range();
    beach_pref = geo_beach_info();
    mountain_pref = geo_mount_info();
    forest_pref = geo_forest_info();
    clim_pref = climate_info();
    vacation_result(culture_pref, max_price, beach_pref, mountain_pref, forest_pref, clim_pref);

    return 0;
}

//=- Function Definitions
void menu() {
    cout << "__________________________________________" << endl;
    cout << "|--- Welcome to the Vacation Picker! --- |" << endl;
    cout << "| Designed to help you find the perfect  |" << endl;
    cout << "| vacation spot!                         |" << endl;
    cout << "------------------------------------------" << endl;
};

double price_range() {
    double max_price;
    cout << "______________________" << endl;
    cout << "|--- Price Range --- |" << endl;
    cout << "----------------------" << endl;
    cout << "What is the max price you would spend on this vacation?: " << endl;
    cin >> max_price;
    return max_price;
};

string geo_beach_info() {
    string beach_pref;
    string beach_DATA;
    cout << "___________________________" << endl;
    cout << "|--- Beach Preference --- |" << endl;
    cout << "---------------------------" << endl;
    cout << "Would you like to visit a beach on this vacation?: ";
    cin >> beach_pref;
    if (beach_pref == "Yes" || beach_pref == "yes") {
        beach_DATA = "beachTRUE";
    }
    if (beach_pref == "No" || beach_pref == "no") {
        beach_DATA = "beachFALSE";
    }
    return beach_DATA;
};

string geo_mount_info() {
    string mount_pref;
    string mount_DATA;
    cout << "______________________________" << endl;
    cout << "|--- Mountain Preference --- |" << endl;
    cout << "------------------------------" << endl;
    cout << "Would you like to visit a mountain range on this vacation?: ";
    cin >> mount_pref;
    if (mount_pref == "Yes" || mount_pref == "yes") {
        mount_DATA = "mountainTRUE";
    }
    if (mount_pref == "No" || mount_pref == "no") {
        mount_DATA = "mountainFALSE";
    }
    return mount_DATA;
};

string geo_forest_info() {
    string forest_pref;
    string forest_DATA;
    cout << "____________________________" << endl;
    cout << "|--- Forest Preference --- |" << endl;
    cout << "----------------------------" << endl;
    cout << "Would you like to visit a forest / national park on this vacation?: ";
    cin >> forest_pref;
    if (forest_pref == "Yes" || forest_pref == "yes") {
        forest_DATA = "forestTRUE";
    }
    if (forest_pref == "No" || forest_pref == "no") {
        forest_DATA = "forestTRUE";
    }
    return forest_DATA;
};

string climate_info() {
    string climate_pref;
    cout << "____________________________" << endl;
    cout << "|--- Climate Preference --- |" << endl;
    cout << "----------------------------" << endl;
    cout << "Would you prefer a mild to HOT or mild to COLD Climate? [LOWERCASE // hot or cold]: ";
    cin >> climate_pref;
    return climate_pref;
};

string culture_info() {
    string culture_pref;
    cout << "______________________________" << endl;
    cout << "|--- Cultures To Explore --- |" << endl;
    cout << "| >>>- American              |" << endl;
    cout << "| >>>- European              |" << endl;
    cout << "| >>>- Oceanian              |" << endl;
    cout << "| >>>- Middle-eastern        |" << endl;
    cout << "| >>>- African               |" << endl;
    cout << "| >>>- Asian                 |" << endl;
    cout << "| >>>- Latin                 |" << endl;
    cout << "| >>>- Caribbean             |" << endl;
    cout << "------------------------------" << endl;
    cout << "What culture would you like to explore?: [CAPITALIZE]" << endl;
    cin >> culture_pref;

    return culture_pref;
};

void vacation_result(string culture_pref, double max_price, string beach_pref, string mount_pref, string for_pref, string clim_pref) {
    string beach, mountain, forest;
    if (beach_pref == "beachFALSE") {beach = "No";};
    if (beach_pref == "beachTRUE") {beach = "Yes";};
    if (mount_pref == "mountainFALSE") {mountain = "No";};
    if (mount_pref == "mountainTRUE") {mountain = "Yes";};
    if (for_pref == "forestFALSE") {forest = "No";};
    if (for_pref == "forestTRUE") {forest = "Yes";};

    cout << "______________________________" << endl;
    cout << "|---   Your Preferences  --- |" << endl;
    cout << "| >- Culture: " << culture_pref << endl;
    cout << "| >- Max Price: " << max_price << endl;
    cout << "| >- Beach: " << beach << endl;
    cout << "| >- Mountain: " << mountain << endl;
    cout << "| >- Forest / National Park: " << forest << endl;
    cout << "| >- Climate: " << clim_pref << endl;
    cout << "-----------------------------|" << endl;

    //final result - remove comments afterwards
    cout << "__________________________" << endl;
    cout << "|---   Your Matches  --- |" << endl;
    string country = best_match(culture_pref, max_price, beach_pref, mount_pref, for_pref, clim_pref);
    cout << country;
};

string best_match(string culture_pref, double max_price, string beach_pref, string mount_pref, string for_pref, string clim_pref) {
    string country_match, country_match_two, country_match_three, country_match_four, country_match_five, country_match_six, country_match_seven, country_match_eight, country_match_nine, country_match_ten;
    string sub_match, sub_match_two, sub_match_three, sub_match_four, sub_match_five, sub_match_six, sub_match_seven, sub_match_eight, sub_match_nine, sub_match_ten;
    const int size = 196;
    const int matchSize = 10;
    string countries[size] = {
            "Afghanistan 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Albania 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "Algeria 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Andorra 1200 beachFALSE mountainTRUE forestTRUE cold European",
            "Angola 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Antigua and Barbuda 1200 beachTRUE mountainFALSE forestTRUE hot Caribbean",
            "Argentina 1200 beachTRUE mountainTRUE forestTRUE hot American",
            "Armenia 1200 beachFALSE mountainTRUE forestTRUE cold Asian",
            "Australia 1200 beachTRUE mountainTRUE forestTRUE hot Oceanian",
            "Austria 1200 beachFALSE mountainTRUE forestTRUE cold European",
            "Azerbaijan 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Bahamas 1200 beachTRUE mountainFALSE forestFALSE hot Caribbean",
            "Bahrain 1200 beachTRUE mountainFALSE forestFALSE hot Middle-eastern",
            "Bangladesh 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Barbados 1200 beachTRUE mountainFALSE forestFALSE hot Caribbean",
            "Belarus 1200 beachFALSE mountainTRUE forestTRUE cold European",
            "Belgium 1200 beachFALSE mountainFALSE forestTRUE cold European",
            "Belize 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Benin 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Bhutan 1200 beachFALSE mountainTRUE forestTRUE cold Asian",
            "Bolivia 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Bosnia and Herzegovina 1200 beachFALSE mountainTRUE forestTRUE cold European",
            "Botswana 1200 beachFALSE mountainTRUE forestTRUE hot African",
            "Brazil 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Brunei 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Bulgaria 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "Burkina Faso 1200 beachFALSE mountainTRUE forestTRUE hot African",
            "Burundi 1200 beachFALSE mountainTRUE forestTRUE hot African",
            "Cabo Verde 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Cambodia 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Cameroon 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Canada 1200 beachTRUE mountainTRUE forestTRUE cold American",
            "Central African Republic 1200 beachFALSE mountainTRUE forestTRUE hot African",
            "Chad 1200 beachFALSE mountainTRUE forestTRUE hot African",
            "Chile 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "China 1200 beachTRUE mountainTRUE forestTRUE cold Asian",
            "Colombia 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Comoros 1200 beachTRUE mountainFALSE forestTRUE hot African",
            "Congo (Congo-Brazzaville) 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Congo (Congo-Kinshasa) 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Costa Rica 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Cote d'Ivoire 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Croatia 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "Cuba 1200 beachTRUE mountainFALSE forestTRUE hot Caribbean",
            "Cyprus 1200 beachTRUE mountainTRUE forestTRUE hot European",
            "Czechia 1200 beachFALSE mountainTRUE forestTRUE cold European",
            "Denmark 1200 beachFALSE mountainFALSE forestTRUE cold European",
            "Djibouti 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Dominica 1200 beachTRUE mountainFALSE forestTRUE hot Caribbean",
            "Dominican Republic 1200 beachTRUE mountainTRUE forestTRUE hot Caribbean",
            "Ecuador 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Egypt 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "El Salvador 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Equatorial Guinea 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Eritrea 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Estonia 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "Eswatini (fmr. 'Swaziland') 1200 beachFALSE mountainTRUE forestTRUE hot African",
            "Ethiopia 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Fiji 1200 beachTRUE mountainTRUE forestTRUE hot Oceanian",
            "Finland 1200 beachFALSE mountainTRUE forestTRUE cold European",
            "France 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "Gabon 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Gambia 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Georgia 1200 beachTRUE mountainTRUE forestTRUE cold Asian",
            "Germany 1200 beachFALSE mountainTRUE forestTRUE cold European",
            "Ghana 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Greece 1200 beachTRUE mountainTRUE forestTRUE hot European",
            "Grenada 1200 beachTRUE mountainFALSE forestTRUE hot Caribbean",
            "Guatemala 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Guinea 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Guinea-Bissau 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Guyana 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Haiti 1200 beachTRUE mountainTRUE forestTRUE hot Caribbean",
            "Honduras 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Hungary 1200 beachFALSE mountainTRUE forestTRUE cold European",
            "Iceland 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "India 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Indonesia 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Iran 1200 beachTRUE mountainTRUE forestTRUE hot Middle-eastern",
            "Iraq 1200 beachTRUE mountainTRUE forestTRUE hot Middle-eastern",
            "Ireland 1200 beachFALSE mountainTRUE forestTRUE cold European",
            "Israel 1200 beachTRUE mountainTRUE forestTRUE hot Middle-eastern",
            "Italy 1200 beachTRUE mountainTRUE forestTRUE hot European",
            "Jamaica 1200 beachTRUE mountainFALSE forestTRUE hot Caribbean",
            "Japan 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Jordan 1200 beachTRUE mountainTRUE forestTRUE hot Middle-eastern",
            "Kazakhstan 1200 beachTRUE mountainTRUE forestTRUE cold Asian",
            "Kenya 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Kiribati 1200 beachTRUE mountainFALSE forestTRUE hot Oceanian",
            "Korea, North 1200 beachTRUE mountainTRUE forestTRUE cold Asian",
            "Korea, South 1200 beachTRUE mountainTRUE forestTRUE cold Asian",
            "Kosovo 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "Kuwait 1200 beachTRUE mountainFALSE forestFALSE hot Middle-eastern",
            "Kyrgyzstan 1200 beachTRUE mountainTRUE forestTRUE cold Asian",
            "Laos 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Latvia 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "Lebanon 1200 beachTRUE mountainTRUE forestTRUE hot Middle-eastern",
            "Lesotho 1200 beachFALSE mountainTRUE forestTRUE cold African",
            "Liberia 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Libya 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Liechtenstein 1200 beachFALSE mountainTRUE forestTRUE cold European",
            "Lithuania 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "Luxembourg 1200 beachFALSE mountainFALSE forestTRUE cold European",
            "Madagascar 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Malawi 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Malaysia 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Maldives 1200 beachTRUE mountainFALSE forestTRUE hot Asian",
            "Mali 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Malta 1200 beachTRUE mountainFALSE forestTRUE hot European",
            "Marshall Islands 1200 beachTRUE mountainFALSE forestFALSE hot Oceanian",
            "Mauritania 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Mauritius 1200 beachTRUE mountainFALSE forestTRUE hot African",
            "Mexico 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Micronesia 1200 beachTRUE mountainFALSE forestTRUE hot Oceanian",
            "Moldova 1200 beachFALSE mountainTRUE forestTRUE cold European",
            "Monaco 1200 beachTRUE mountainFALSE forestFALSE hot European",
            "Mongolia 1200 beachTRUE mountainTRUE forestTRUE cold Asian",
            "Montenegro 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "Morocco 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Mozambique 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Myanmar (formerly Burma) 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Namibia 1200 beachFALSE mountainTRUE forestTRUE hot African",
            "Nauru 1200 beachTRUE mountainFALSE forestFALSE hot Oceanian",
            "Nepal 1200 beachTRUE mountainTRUE forestTRUE cold Asian",
            "Netherlands 1200 beachFALSE mountainFALSE forestTRUE cold European",
            "New Zealand 1200 beachTRUE mountainTRUE forestTRUE cold Oceanian",
            "Nicaragua 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Niger 1200 beachFALSE mountainTRUE forestTRUE hot African",
            "Nigeria 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "North Macedonia (formerly Macedonia) 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "Norway 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "Oman 1200 beachTRUE mountainTRUE forestTRUE hot Middle-eastern",
            "Pakistan 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Palau 1200 beachTRUE mountainFALSE forestFALSE hot Oceanian",
            "Panama 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Papua New Guinea 1200 beachTRUE mountainTRUE forestTRUE hot Oceanian",
            "Paraguay 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Peru 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Philippines 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Poland 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "Portugal 1200 beachTRUE mountainTRUE forestTRUE hot European",
            "Qatar 1200 beachTRUE mountainFALSE forestFALSE hot Middle-eastern",
            "Romania 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "Russia 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "Rwanda 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Saint Kitts and Nevis 1200 beachTRUE mountainFALSE forestTRUE hot Caribbean",
            "Saint Lucia 1200 beachTRUE mountainFALSE forestTRUE hot Caribbean",
            "Saint Vincent and the Grenadines 1200 beachTRUE mountainFALSE forestTRUE hot Caribbean",
            "Samoa 1200 beachTRUE mountainTRUE forestTRUE hot Oceanian",
            "San Marino 1200 beachFALSE mountainTRUE forestTRUE cold European",
            "Sao Tome and Principe 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Saudi Arabia 1200 beachTRUE mountainFALSE forestFALSE hot Middle-eastern",
            "Senegal 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Serbia 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "Seychelles 1200 beachTRUE mountainFALSE forestTRUE hot African",
            "Sierra Leone 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Singapore 1200 beachTRUE mountainFALSE forestTRUE hot Asian",
            "Slovakia 1200 beachFALSE mountainTRUE forestTRUE cold European",
            "Slovenia 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "Solomon Islands 1200 beachTRUE mountainTRUE forestTRUE hot Oceanian",
            "Somalia 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "South Africa 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "South Sudan 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Spain 1200 beachTRUE mountainTRUE forestTRUE hot European",
            "Sri Lanka 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Sudan 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Suriname 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Sweden 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "Switzerland 1200 beachFALSE mountainTRUE forestTRUE cold European",
            "Syria 1200 beachTRUE mountainTRUE forestTRUE hot Middle-eastern",
            "Taiwan 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Tajikistan 1200 beachTRUE mountainTRUE forestTRUE cold Asian",
            "Tanzania 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Thailand 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Timor-Leste 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Togo 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Tonga 1200 beachTRUE mountainTRUE forestTRUE hot Oceanian",
            "Trinidad and Tobago 1200 beachTRUE mountainFALSE forestTRUE hot Caribbean",
            "Tunisia 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Turkey 1200 beachTRUE mountainTRUE forestTRUE hot European",
            "Turkmenistan 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Tuvalu 1200 beachTRUE mountainFALSE forestTRUE hot Oceanian",
            "Uganda 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Ukraine 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "United Arab Emirates 1200 beachTRUE mountainFALSE forestFALSE hot Middle-eastern",
            "United Kingdom 1200 beachTRUE mountainTRUE forestTRUE cold European",
            "United States of America 1200 beachTRUE mountainTRUE forestTRUE hot American",
            "Uruguay 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Uzbekistan 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Vanuatu 1200 beachTRUE mountainTRUE forestTRUE hot Oceanian",
            "Vatican City (Holy See) 1200 beachFALSE mountainFALSE forestFALSE hot European",
            "Venezuela 1200 beachTRUE mountainTRUE forestTRUE hot Latin",
            "Vietnam 1200 beachTRUE mountainTRUE forestTRUE hot Asian",
            "Yemen 1200 beachTRUE mountainTRUE forestTRUE hot Middle-eastern",
            "Zambia 1200 beachTRUE mountainTRUE forestTRUE hot African",
            "Zimbabwe 1200 beachTRUE mountainTRUE forestTRUE hot African" };

    string filteredCountries[matchSize]; // New array for filtered countries
    int filteredCount = 0; // Index variable for the filtered array

    for (int i = 0; i < size; i++) {
        size_t substring = countries[i].find(culture_pref);
        if (substring != string::npos) {
            size_t substring2 = countries[i].find(beach_pref);
            if (substring2 != string::npos) {
                size_t substring3 = countries[i].find(mount_pref);
                if (substring3 != string::npos) {
                    size_t substring4 = countries[i].find(for_pref);
                    if (substring4 != string::npos) {
                        size_t substring5 = countries[i].find(clim_pref);
                        if (substring5 != string::npos) {
                            filteredCountries[filteredCount] = countries[i];
                            filteredCount++;
                        }
                    }
                }
            }
        }
    }

    if (filteredCount > 0) {
        country_match = filteredCountries[0];
        int pos = country_match.find("1");
        sub_match = country_match.substr(0, pos);
    } else {
        // Handle the case when there are no matching countries
        country_match = "No match found";
    }

    if (filteredCount > 1) {
        country_match_two = filteredCountries[1];
        int pos = country_match_two.find("1");
        sub_match_two = country_match_two.substr(0, pos);
    }

    if (filteredCount > 2) {
        country_match_three = filteredCountries[2];
        int pos = country_match_three.find("1");
        sub_match_three = country_match_three.substr(0, pos);
    }

    if (filteredCount > 3) {
        country_match_four = filteredCountries[3];
        int pos = country_match_four.find("1");
        sub_match_four = country_match_four.substr(0, pos);
    }

    if (filteredCount > 4) {
        country_match_five = filteredCountries[4];
        int pos = country_match_five.find("1");
        sub_match_five = country_match_five.substr(0, pos);
    }

    if (filteredCount > 5) {
        country_match_six = filteredCountries[5];
        int pos = country_match_six.find("1");
        sub_match_six = country_match_six.substr(0, pos);
    }

    if (filteredCount > 6) {
        country_match_seven = filteredCountries[6];
        int pos = country_match_seven.find("1");
        sub_match_seven = country_match_seven.substr(0, pos);
    }

    if (filteredCount > 7) {
        country_match_eight = filteredCountries[7];
        int pos = country_match_eight.find("1");
        sub_match_eight = country_match_eight.substr(0, pos);
    }

    if (filteredCount > 8) {
        country_match_nine = filteredCountries[8];
        int pos = country_match_nine.find("1");
        sub_match_nine = country_match_nine.substr(0, pos);
    }

    if (filteredCount > 9) {
        country_match_ten = filteredCountries[9];
        int pos = country_match_ten.find("1");
        sub_match_ten = country_match_ten.substr(0, pos);
    }

    cout << sub_match << "\n";
    cout << sub_match_two << "\n";
    cout << sub_match_three << "\n";
    cout << sub_match_four << "\n";
    cout << sub_match_five << "\n";
    cout << sub_match_six << "\n";
    cout << sub_match_seven << "\n";
    cout << sub_match_eight << "\n";
    cout << sub_match_nine << "\n";
    return sub_match_ten;
};