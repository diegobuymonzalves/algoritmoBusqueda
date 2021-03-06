#include <string>
#include <array>
#include <algorithm>

#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

struct Country {
    std::wstring nombre;
    std::wstring name;
    std::wstring nom;
    std::wstring iso2;
    std::wstring iso3;
    std::wstring phone_code;
};

const unsigned MAX_COUNTRYS = 246;

std::array<Country, MAX_COUNTRYS> countrys{ {
    {.nombre=L"Afganistán",.name=L"Afghanistan",.nom=L"Afghanistan",.iso2=L"AF",.iso3=L"AFG",.phone_code=L"93"},
    {.nombre=L"Albania",.name=L"Albania",.nom=L"Albanie",.iso2=L"AL",.iso3=L"ALB",.phone_code=L"355"},
    {.nombre=L"Alemania",.name=L"Germany",.nom=L"Allemagne",.iso2=L"DE",.iso3=L"DEU",.phone_code=L"49"},
    {.nombre=L"Algeria",.name=L"Algeria",.nom=L"Algérie",.iso2=L"DZ",.iso3=L"DZA",.phone_code=L"213"},
    {.nombre=L"Andorra",.name=L"Andorra",.nom=L"Andorra",.iso2=L"AD",.iso3=L"AND",.phone_code=L"376"},
    {.nombre=L"Angola",.name=L"Angola",.nom=L"Angola",.iso2=L"AO",.iso3=L"AGO",.phone_code=L"244"},
    {.nombre=L"Anguila",.name=L"Anguilla",.nom=L"Anguilla",.iso2=L"AI",.iso3=L"AIA",.phone_code=L"1 264"},
    {.nombre=L"Antártida",.name=L"Antarctica",.nom=L"L'Antarctique",.iso2=L"AQ",.iso3=L"ATA",.phone_code=L"672"},
    {.nombre=L"Antigua y Barbuda",.name=L"Antigua and Barbuda",.nom=L"Antigua et Barbuda",.iso2=L"AG",.iso3=L"ATG",.phone_code=L"1 268"},
    {.nombre=L"Antillas Neerlandesas",.name=L"Netherlands Antilles",.nom=L"Antilles Néerlandaises",.iso2=L"AN",.iso3=L"ANT",.phone_code=L"599"},
    {.nombre=L"Arabia Saudita",.name=L"Saudi Arabia",.nom=L"Arabie Saoudite",.iso2=L"SA",.iso3=L"SAU",.phone_code=L"966"},
    {.nombre=L"Argentina",.name=L"Argentina",.nom=L"Argentine",.iso2=L"AR",.iso3=L"ARG",.phone_code=L"54"},
    {.nombre=L"Armenia",.name=L"Armenia",.nom=L"L'Arménie",.iso2=L"AM",.iso3=L"ARM",.phone_code=L"374"},
    {.nombre=L"Aruba",.name=L"Aruba",.nom=L"Aruba",.iso2=L"AW",.iso3=L"ABW",.phone_code=L"297"},
    {.nombre=L"Australia",.name=L"Australia",.nom=L"Australie",.iso2=L"AU",.iso3=L"AUS",.phone_code=L"61"},
    {.nombre=L"Austria",.name=L"Austria",.nom=L"Autriche",.iso2=L"AT",.iso3=L"AUT",.phone_code=L"43"},
    {.nombre=L"Azerbayán",.name=L"Azerbaijan",.nom=L"L'Azerbaïdjan",.iso2=L"AZ",.iso3=L"AZE",.phone_code=L"994"},
    {.nombre=L"Bahamas",.name=L"Bahamas",.nom=L"Bahamas",.iso2=L"BS",.iso3=L"BHS",.phone_code=L"1 242"},
    {.nombre=L"Bahrein",.name=L"Bahrain",.nom=L"Bahreïn",.iso2=L"BH",.iso3=L"BHR",.phone_code=L"973"},
    {.nombre=L"Bangladesh",.name=L"Bangladesh",.nom=L"Bangladesh",.iso2=L"BD",.iso3=L"BGD",.phone_code=L"880"},
    {.nombre=L"Barbados",.name=L"Barbados",.nom=L"Barbade",.iso2=L"BB",.iso3=L"BRB",.phone_code=L"1 246"},
    {.nombre=L"Belice",.name=L"Belize",.nom=L"Belize",.iso2=L"BZ",.iso3=L"BLZ",.phone_code=L"501"},
    {.nombre=L"Benín",.name=L"Benin",.nom=L"Bénin",.iso2=L"BJ",.iso3=L"BEN",.phone_code=L"229"},
    {.nombre=L"Bélgica",.name=L"Belgium",.nom=L"Belgique",.iso2=L"BE",.iso3=L"BEL",.phone_code=L"32"},
    {.nombre=L"Bhután",.name=L"Bhutan",.nom=L"Le Bhoutan",.iso2=L"BT",.iso3=L"BTN",.phone_code=L"975"},
    {.nombre=L"Bielorrusia",.name=L"Belarus",.nom=L"Biélorussie",.iso2=L"BY",.iso3=L"BLR",.phone_code=L"375"},
    {.nombre=L"Birmania",.name=L"Myanmar",.nom=L"Myanmar",.iso2=L"MM",.iso3=L"MMR",.phone_code=L"95"},
    {.nombre=L"Bolivia",.name=L"Bolivia",.nom=L"Bolivie",.iso2=L"BO",.iso3=L"BOL",.phone_code=L"591"},
    {.nombre=L"Bosnia y Herzegovina",.name=L"Bosnia and Herzegovina",.nom=L"Bosnie-Herzégovine",.iso2=L"BA",.iso3=L"BIH",.phone_code=L"387"},
    {.nombre=L"Botsuana",.name=L"Botswana",.nom=L"Botswana",.iso2=L"BW",.iso3=L"BWA",.phone_code=L"267"},
    {.nombre=L"Brasil",.name=L"Brazil",.nom=L"Brésil",.iso2=L"BR",.iso3=L"BRA",.phone_code=L"55"},
    {.nombre=L"Brunéi",.name=L"Brunei",.nom=L"Brunei",.iso2=L"BN",.iso3=L"BRN",.phone_code=L"673"},
    {.nombre=L"Bulgaria",.name=L"Bulgaria",.nom=L"Bulgarie",.iso2=L"BG",.iso3=L"BGR",.phone_code=L"359"},
    {.nombre=L"Burkina Faso",.name=L"Burkina Faso",.nom=L"Burkina Faso",.iso2=L"BF",.iso3=L"BFA",.phone_code=L"226"},
    {.nombre=L"Burundi",.name=L"Burundi",.nom=L"Burundi",.iso2=L"BI",.iso3=L"BDI",.phone_code=L"257"},
    {.nombre=L"Cabo Verde",.name=L"Cape Verde",.nom=L"Cap-Vert",.iso2=L"CV",.iso3=L"CPV",.phone_code=L"238"},
    {.nombre=L"Camboya",.name=L"Cambodia",.nom=L"Cambodge",.iso2=L"KH",.iso3=L"KHM",.phone_code=L"855"},
    {.nombre=L"Camerún",.name=L"Cameroon",.nom=L"Cameroun",.iso2=L"CM",.iso3=L"CMR",.phone_code=L"237"},
    {.nombre=L"Canadá",.name=L"Canada",.nom=L"Canada",.iso2=L"CA",.iso3=L"CAN",.phone_code=L"1"},
    {.nombre=L"Chad",.name=L"Chad",.nom=L"Tchad",.iso2=L"TD",.iso3=L"TCD",.phone_code=L"235"},
    {.nombre=L"Chile",.name=L"Chile",.nom=L"Chili",.iso2=L"CL",.iso3=L"CHL",.phone_code=L"56"},
    {.nombre=L"China",.name=L"China",.nom=L"Chine",.iso2=L"CN",.iso3=L"CHN",.phone_code=L"86"},
    {.nombre=L"Chipre",.name=L"Cyprus",.nom=L"Chypre",.iso2=L"CY",.iso3=L"CYP",.phone_code=L"357"},
    {.nombre=L"Ciudad del Vaticano",.name=L"Vatican City State",.nom=L"Cité du Vatican",.iso2=L"VA",.iso3=L"VAT",.phone_code=L"39"},
    {.nombre=L"Colombia",.name=L"Colombia",.nom=L"Colombie",.iso2=L"CO",.iso3=L"COL",.phone_code=L"57"},
    {.nombre=L"Comoras",.name=L"Comoros",.nom=L"Comores",.iso2=L"KM",.iso3=L"COM",.phone_code=L"269"},
    {.nombre=L"Congo",.name=L"Congo",.nom=L"Congo",.iso2=L"CG",.iso3=L"COG",.phone_code=L"242"},
    {.nombre=L"Congo",.name=L"Congo",.nom=L"Congo",.iso2=L"CD",.iso3=L"COD",.phone_code=L"243"},
    {.nombre=L"Corea del Norte",.name=L"North Korea",.nom=L"Corée du Nord",.iso2=L"KP",.iso3=L"PRK",.phone_code=L"850"},
    {.nombre=L"Corea del Sur",.name=L"South Korea",.nom=L"Corée du Sud",.iso2=L"KR",.iso3=L"KOR",.phone_code=L"82"},
    {.nombre=L"Costa de Marfil",.name=L"Ivory Coast",.nom=L"Côte-d'Ivoire",.iso2=L"CI",.iso3=L"CIV",.phone_code=L"225"},
    {.nombre=L"Costa Rica",.name=L"Costa Rica",.nom=L"Costa Rica",.iso2=L"CR",.iso3=L"CRI",.phone_code=L"506"},
    {.nombre=L"Croacia",.name=L"Croatia",.nom=L"Croatie",.iso2=L"HR",.iso3=L"HRV",.phone_code=L"385"},
    {.nombre=L"Cuba",.name=L"Cuba",.nom=L"Cuba",.iso2=L"CU",.iso3=L"CUB",.phone_code=L"53"},
    {.nombre=L"Dinamarca",.name=L"Denmark",.nom=L"Danemark",.iso2=L"DK",.iso3=L"DNK",.phone_code=L"45"},
    {.nombre=L"Dominica",.name=L"Dominica",.nom=L"Dominique",.iso2=L"DM",.iso3=L"DMA",.phone_code=L"1 767"},
    {.nombre=L"Ecuador",.name=L"Ecuador",.nom=L"Equateur",.iso2=L"EC",.iso3=L"ECU",.phone_code=L"593"},
    {.nombre=L"Egipto",.name=L"Egypt",.nom=L"Egypte",.iso2=L"EG",.iso3=L"EGY",.phone_code=L"20"},
    {.nombre=L"El Salvador",.name=L"El Salvador",.nom=L"El Salvador",.iso2=L"SV",.iso3=L"SLV",.phone_code=L"503"},
    {.nombre=L"Emiratos Árabes Unidos",.name=L"United Arab Emirates",.nom=L"Emirats Arabes Unis",.iso2=L"AE",.iso3=L"ARE",.phone_code=L"971"},
    {.nombre=L"Eritrea",.name=L"Eritrea",.nom=L"Erythrée",.iso2=L"ER",.iso3=L"ERI",.phone_code=L"291"},
    {.nombre=L"Eslovaquia",.name=L"Slovakia",.nom=L"Slovaquie",.iso2=L"SK",.iso3=L"SVK",.phone_code=L"421"},
    {.nombre=L"Eslovenia",.name=L"Slovenia",.nom=L"Slovénie",.iso2=L"SI",.iso3=L"SVN",.phone_code=L"386"},
    {.nombre=L"España",.name=L"Spain",.nom=L"Espagne",.iso2=L"ES",.iso3=L"ESP",.phone_code=L"34"},
    {.nombre=L"Estados Unidos de América",.name=L"United States of America",.nom=L"États-Unis d'Amérique",.iso2=L"US",.iso3=L"USA",.phone_code=L"1"},
    {.nombre=L"Estonia",.name=L"Estonia",.nom=L"L'Estonie",.iso2=L"EE",.iso3=L"EST",.phone_code=L"372"},
    {.nombre=L"Etiopía",.name=L"Ethiopia",.nom=L"Ethiopie",.iso2=L"ET",.iso3=L"ETH",.phone_code=L"251"},
    {.nombre=L"Filipinas",.name=L"Philippines",.nom=L"Philippines",.iso2=L"PH",.iso3=L"PHL",.phone_code=L"63"},
    {.nombre=L"Finlandia",.name=L"Finland",.nom=L"Finlande",.iso2=L"FI",.iso3=L"FIN",.phone_code=L"358"},
    {.nombre=L"Fiyi",.name=L"Fiji",.nom=L"Fidji",.iso2=L"FJ",.iso3=L"FJI",.phone_code=L"679"},
    {.nombre=L"Francia",.name=L"France",.nom=L"France",.iso2=L"FR",.iso3=L"FRA",.phone_code=L"33"},
    {.nombre=L"Gabón",.name=L"Gabon",.nom=L"Gabon",.iso2=L"GA",.iso3=L"GAB",.phone_code=L"241"},
    {.nombre=L"Gambia",.name=L"Gambia",.nom=L"Gambie",.iso2=L"GM",.iso3=L"GMB",.phone_code=L"220"},
    {.nombre=L"Georgia",.name=L"Georgia",.nom=L"Géorgie",.iso2=L"GE",.iso3=L"GEO",.phone_code=L"995"},
    {.nombre=L"Ghana",.name=L"Ghana",.nom=L"Ghana",.iso2=L"GH",.iso3=L"GHA",.phone_code=L"233"},
    {.nombre=L"Gibraltar",.name=L"Gibraltar",.nom=L"Gibraltar",.iso2=L"GI",.iso3=L"GIB",.phone_code=L"350"},
    {.nombre=L"Granada",.name=L"Grenada",.nom=L"Grenade",.iso2=L"GD",.iso3=L"GRD",.phone_code=L"1 473"},
    {.nombre=L"Grecia",.name=L"Greece",.nom=L"Grèce",.iso2=L"GR",.iso3=L"GRC",.phone_code=L"30"},
    {.nombre=L"Groenlandia",.name=L"Greenland",.nom=L"Groenland",.iso2=L"GL",.iso3=L"GRL",.phone_code=L"299"},
    {.nombre=L"Guadalupe",.name=L"Guadeloupe",.nom=L"Guadeloupe",.iso2=L"GP",.iso3=L"GLP",.phone_code=L""},
    {.nombre=L"Guam",.name=L"Guam",.nom=L"Guam",.iso2=L"GU",.iso3=L"GUM",.phone_code=L"1 671"},
    {.nombre=L"Guatemala",.name=L"Guatemala",.nom=L"Guatemala",.iso2=L"GT",.iso3=L"GTM",.phone_code=L"502"},
    {.nombre=L"Guayana Francesa",.name=L"French Guiana",.nom=L"Guyane française",.iso2=L"GF",.iso3=L"GUF",.phone_code=L""},
    {.nombre=L"Guernsey",.name=L"Guernsey",.nom=L"Guernesey",.iso2=L"GG",.iso3=L"GGY",.phone_code=L""},
    {.nombre=L"Guinea",.name=L"Guinea",.nom=L"Guinée",.iso2=L"GN",.iso3=L"GIN",.phone_code=L"224"},
    {.nombre=L"Guinea Ecuatorial",.name=L"Equatorial Guinea",.nom=L"Guinée Equatoriale",.iso2=L"GQ",.iso3=L"GNQ",.phone_code=L"240"},
    {.nombre=L"Guinea-Bissau",.name=L"Guinea-Bissau",.nom=L"Guinée-Bissau",.iso2=L"GW",.iso3=L"GNB",.phone_code=L"245"},
    {.nombre=L"Guyana",.name=L"Guyana",.nom=L"Guyane",.iso2=L"GY",.iso3=L"GUY",.phone_code=L"592"},
    {.nombre=L"Haití",.name=L"Haiti",.nom=L"Haïti",.iso2=L"HT",.iso3=L"HTI",.phone_code=L"509"},
    {.nombre=L"Honduras",.name=L"Honduras",.nom=L"Honduras",.iso2=L"HN",.iso3=L"HND",.phone_code=L"504"},
    {.nombre=L"Hong kong",.name=L"Hong Kong",.nom=L"Hong Kong",.iso2=L"HK",.iso3=L"HKG",.phone_code=L"852"},
    {.nombre=L"Hungría",.name=L"Hungary",.nom=L"Hongrie",.iso2=L"HU",.iso3=L"HUN",.phone_code=L"36"},
    {.nombre=L"India",.name=L"India",.nom=L"Inde",.iso2=L"IN",.iso3=L"IND",.phone_code=L"91"},
    {.nombre=L"Indonesia",.name=L"Indonesia",.nom=L"Indonésie",.iso2=L"ID",.iso3=L"IDN",.phone_code=L"62"},
    {.nombre=L"Irán",.name=L"Iran",.nom=L"Iran",.iso2=L"IR",.iso3=L"IRN",.phone_code=L"98"},
    {.nombre=L"Irak",.name=L"Iraq",.nom=L"Irak",.iso2=L"IQ",.iso3=L"IRQ",.phone_code=L"964"},
    {.nombre=L"Irlanda",.name=L"Ireland",.nom=L"Irlande",.iso2=L"IE",.iso3=L"IRL",.phone_code=L"353"},
    {.nombre=L"Isla Bouvet",.name=L"Bouvet Island",.nom=L"Bouvet Island",.iso2=L"BV",.iso3=L"BVT",.phone_code=L""},
    {.nombre=L"Isla de Man",.name=L"Isle of Man",.nom=L"Ile de Man",.iso2=L"IM",.iso3=L"IMN",.phone_code=L"44"},
    {.nombre=L"Isla de Navidad",.name=L"Christmas Island",.nom=L"Christmas Island",.iso2=L"CX",.iso3=L"CXR",.phone_code=L"61"},
    {.nombre=L"Isla Norfolk",.name=L"Norfolk Island",.nom=L"Île de Norfolk",.iso2=L"NF",.iso3=L"NFK",.phone_code=L""},
    {.nombre=L"Islandia",.name=L"Iceland",.nom=L"Islande",.iso2=L"IS",.iso3=L"ISL",.phone_code=L"354"},
    {.nombre=L"Islas Bermudas",.name=L"Bermuda Islands",.nom=L"Bermudes",.iso2=L"BM",.iso3=L"BMU",.phone_code=L"1 441"},
    {.nombre=L"Islas Caimán",.name=L"Cayman Islands",.nom=L"Iles Caïmans",.iso2=L"KY",.iso3=L"CYM",.phone_code=L"1 345"},
    {.nombre=L"Islas Cocos (Keeling)",.name=L"Cocos (Keeling) Islands",.nom=L"Cocos (Keeling",.iso2=L"CC",.iso3=L"CCK",.phone_code=L"61"},
    {.nombre=L"Islas Cook",.name=L"Cook Islands",.nom=L"Iles Cook",.iso2=L"CK",.iso3=L"COK",.phone_code=L"682"},
    {.nombre=L"Islas de Åland",.name=L"Åland Islands",.nom=L"Îles Åland",.iso2=L"AX",.iso3=L"ALA",.phone_code=L""},
    {.nombre=L"Islas Feroe",.name=L"Faroe Islands",.nom=L"Iles Féro",.iso2=L"FO",.iso3=L"FRO",.phone_code=L"298"},
    {.nombre=L"Islas Georgias del Sur y Sandwich del Sur",.name=L"South Georgia and the South Sandwich Islands",.nom=L"Géorgie du Sud et les Îles Sandwich du Sud",.iso2=L"GS",.iso3=L"SGS",.phone_code=L""},
    {.nombre=L"Islas Heard y McDonald",.name=L"Heard Island and McDonald Islands",.nom=L"Les îles Heard et McDonald",.iso2=L"HM",.iso3=L"HMD",.phone_code=L""},
    {.nombre=L"Islas Maldivas",.name=L"Maldives",.nom=L"Maldives",.iso2=L"MV",.iso3=L"MDV",.phone_code=L"960"},
    {.nombre=L"Islas Malvinas",.name=L"Falkland Islands (Malvinas)",.nom=L"Iles Falkland (Malvinas",.iso2=L"FK",.iso3=L"FLK",.phone_code=L"500"},
    {.nombre=L"Islas Marianas del Norte",.name=L"Northern Mariana Islands",.nom=L"Iles Mariannes du Nord",.iso2=L"MP",.iso3=L"MNP",.phone_code=L"1 670"},
    {.nombre=L"Islas Marshall",.name=L"Marshall Islands",.nom=L"Iles Marshall",.iso2=L"MH",.iso3=L"MHL",.phone_code=L"692"},
    {.nombre=L"Islas Pitcairn",.name=L"Pitcairn Islands",.nom=L"Iles Pitcairn",.iso2=L"PN",.iso3=L"PCN",.phone_code=L"870"},
    {.nombre=L"Islas Salomón",.name=L"Solomon Islands",.nom=L"Iles Salomon",.iso2=L"SB",.iso3=L"SLB",.phone_code=L"677"},
    {.nombre=L"Islas Turcas y Caicos",.name=L"Turks and Caicos Islands",.nom=L"Iles Turques et Caïques",.iso2=L"TC",.iso3=L"TCA",.phone_code=L"1 649"},
    {.nombre=L"Islas Ultramarinas Menores de Estados Unidos",.name=L"United States Minor Outlying Islands",.nom=L"États-Unis Îles mineures éloignées",.iso2=L"UM",.iso3=L"UMI",.phone_code=L""},
    {.nombre=L"Islas Vírgenes Británicas",.name=L"Virgin Islands",.nom=L"Iles Vierges",.iso2=L"VG",.iso3=L"VG",.phone_code=L"1 284"},
    {.nombre=L"Islas Vírgenes de los Estados Unidos",.name=L"United States Virgin Islands",.nom=L"Îles Vierges américaines",.iso2=L"VI",.iso3=L"VIR",.phone_code=L"1 340"},
    {.nombre=L"Israel",.name=L"Israel",.nom=L"Israël",.iso2=L"IL",.iso3=L"ISR",.phone_code=L"972"},
    {.nombre=L"Italia",.name=L"Italy",.nom=L"Italie",.iso2=L"IT",.iso3=L"ITA",.phone_code=L"39"},
    {.nombre=L"Jamaica",.name=L"Jamaica",.nom=L"Jamaïque",.iso2=L"JM",.iso3=L"JAM",.phone_code=L"1 876"},
    {.nombre=L"Japón",.name=L"Japan",.nom=L"Japon",.iso2=L"JP",.iso3=L"JPN",.phone_code=L"81"},
    {.nombre=L"Jersey",.name=L"Jersey",.nom=L"Maillot",.iso2=L"JE",.iso3=L"JEY",.phone_code=L""},
    {.nombre=L"Jordania",.name=L"Jordan",.nom=L"Jordan",.iso2=L"JO",.iso3=L"JOR",.phone_code=L"962"},
    {.nombre=L"Kazajistán",.name=L"Kazakhstan",.nom=L"Le Kazakhstan",.iso2=L"KZ",.iso3=L"KAZ",.phone_code=L"7"},
    {.nombre=L"Kenia",.name=L"Kenya",.nom=L"Kenya",.iso2=L"KE",.iso3=L"KEN",.phone_code=L"254"},
    {.nombre=L"Kirgizstán",.name=L"Kyrgyzstan",.nom=L"Kirghizstan",.iso2=L"KG",.iso3=L"KGZ",.phone_code=L"996"},
    {.nombre=L"Kiribati",.name=L"Kiribati",.nom=L"Kiribati",.iso2=L"KI",.iso3=L"KIR",.phone_code=L"686"},
    {.nombre=L"Kuwait",.name=L"Kuwait",.nom=L"Koweït",.iso2=L"KW",.iso3=L"KWT",.phone_code=L"965"},
    {.nombre=L"Laos",.name=L"Laos",.nom=L"Laos",.iso2=L"LA",.iso3=L"LAO",.phone_code=L"856"},
    {.nombre=L"Lesoto",.name=L"Lesotho",.nom=L"Lesotho",.iso2=L"LS",.iso3=L"LSO",.phone_code=L"266"},
    {.nombre=L"Letonia",.name=L"Latvia",.nom=L"La Lettonie",.iso2=L"LV",.iso3=L"LVA",.phone_code=L"371"},
    {.nombre=L"Liberia",.name=L"Liberia",.nom=L"Liberia",.iso2=L"LR",.iso3=L"LBR",.phone_code=L"231"},
    {.nombre=L"Libia",.name=L"Libya",.nom=L"Libye",.iso2=L"LY",.iso3=L"LBY",.phone_code=L"218"},
    {.nombre=L"Liechtenstein",.name=L"Liechtenstein",.nom=L"Liechtenstein",.iso2=L"LI",.iso3=L"LIE",.phone_code=L"423"},
    {.nombre=L"Lituania",.name=L"Lithuania",.nom=L"La Lituanie",.iso2=L"LT",.iso3=L"LTU",.phone_code=L"370"},
    {.nombre=L"Líbano",.name=L"Lebanon",.nom=L"Liban",.iso2=L"LB",.iso3=L"LBN",.phone_code=L"961"},
    {.nombre=L"Luxemburgo",.name=L"Luxembourg",.nom=L"Luxembourg",.iso2=L"LU",.iso3=L"LUX",.phone_code=L"352"},
    {.nombre=L"Macao",.name=L"Macao",.nom=L"Macao",.iso2=L"MO",.iso3=L"MAC",.phone_code=L"853"},
    {.nombre=L"Macedônia",.name=L"Macedonia",.nom=L"Macédoine",.iso2=L"MK",.iso3=L"MKD",.phone_code=L"389"},
    {.nombre=L"Madagascar",.name=L"Madagascar",.nom=L"Madagascar",.iso2=L"MG",.iso3=L"MDG",.phone_code=L"261"},
    {.nombre=L"Malasia",.name=L"Malaysia",.nom=L"Malaisie",.iso2=L"MY",.iso3=L"MYS",.phone_code=L"60"},
    {.nombre=L"Malawi",.name=L"Malawi",.nom=L"Malawi",.iso2=L"MW",.iso3=L"MWI",.phone_code=L"265"},
    {.nombre=L"Mali",.name=L"Mali",.nom=L"Mali",.iso2=L"ML",.iso3=L"MLI",.phone_code=L"223"},
    {.nombre=L"Malta",.name=L"Malta",.nom=L"Malte",.iso2=L"MT",.iso3=L"MLT",.phone_code=L"356"},
    {.nombre=L"Marruecos",.name=L"Morocco",.nom=L"Maroc",.iso2=L"MA",.iso3=L"MAR",.phone_code=L"212"},
    {.nombre=L"Martinica",.name=L"Martinique",.nom=L"Martinique",.iso2=L"MQ",.iso3=L"MTQ",.phone_code=L""},
    {.nombre=L"Mauricio",.name=L"Mauritius",.nom=L"Iles Maurice",.iso2=L"MU",.iso3=L"MUS",.phone_code=L"230"},
    {.nombre=L"Mauritania",.name=L"Mauritania",.nom=L"Mauritanie",.iso2=L"MR",.iso3=L"MRT",.phone_code=L"222"},
    {.nombre=L"Mayotte",.name=L"Mayotte",.nom=L"Mayotte",.iso2=L"YT",.iso3=L"MYT",.phone_code=L"262"},
    {.nombre=L"México",.name=L"Mexico",.nom=L"Mexique",.iso2=L"MX",.iso3=L"MEX",.phone_code=L"52"},
    {.nombre=L"Micronesia",.name=L"Estados Federados de",.nom=L"Federados Estados de",.iso2=L"FM",.iso3=L"FSM",.phone_code=L"691"},
    {.nombre=L"Moldavia",.name=L"Moldova",.nom=L"Moldavie",.iso2=L"MD",.iso3=L"MDA",.phone_code=L"373"},
    {.nombre=L"Mongolia",.name=L"Mongolia",.nom=L"Mongolie",.iso2=L"MN",.iso3=L"MNG",.phone_code=L"976"},
    {.nombre=L"Montenegro",.name=L"Montenegro",.nom=L"Monténégro",.iso2=L"ME",.iso3=L"MNE",.phone_code=L"382"},
    {.nombre=L"Montserrat",.name=L"Montserrat",.nom=L"Montserrat",.iso2=L"MS",.iso3=L"MSR",.phone_code=L"1 664"},
    {.nombre=L"Mónaco",.name=L"Monaco",.nom=L"Monaco",.iso2=L"MC",.iso3=L"MCO",.phone_code=L"377"},
    {.nombre=L"Mozambique",.name=L"Mozambique",.nom=L"Mozambique",.iso2=L"MZ",.iso3=L"MOZ",.phone_code=L"258"},
    {.nombre=L"Namibia",.name=L"Namibia",.nom=L"Namibie",.iso2=L"NA",.iso3=L"NAM",.phone_code=L"264"},
    {.nombre=L"Nauru",.name=L"Nauru",.nom=L"Nauru",.iso2=L"NR",.iso3=L"NRU",.phone_code=L"674"},
    {.nombre=L"Nepal",.name=L"Nepal",.nom=L"Népal",.iso2=L"NP",.iso3=L"NPL",.phone_code=L"977"},
    {.nombre=L"Nicaragua",.name=L"Nicaragua",.nom=L"Nicaragua",.iso2=L"NI",.iso3=L"NIC",.phone_code=L"505"},
    {.nombre=L"Niger",.name=L"Niger",.nom=L"Niger",.iso2=L"NE",.iso3=L"NER",.phone_code=L"227"},
    {.nombre=L"Nigeria",.name=L"Nigeria",.nom=L"Nigeria",.iso2=L"NG",.iso3=L"NGA",.phone_code=L"234"},
    {.nombre=L"Niue",.name=L"Niue",.nom=L"Niou",.iso2=L"NU",.iso3=L"NIU",.phone_code=L"683"},
    {.nombre=L"Noruega",.name=L"Norway",.nom=L"Norvège",.iso2=L"NO",.iso3=L"NOR",.phone_code=L"47"},
    {.nombre=L"Nueva Caledonia",.name=L"New Caledonia",.nom=L"Nouvelle-Calédonie",.iso2=L"NC",.iso3=L"NCL",.phone_code=L"687"},
    {.nombre=L"Nueva Zelanda",.name=L"New Zealand",.nom=L"Nouvelle-Zélande",.iso2=L"NZ",.iso3=L"NZL",.phone_code=L"64"},
    {.nombre=L"Omán",.name=L"Oman",.nom=L"Oman",.iso2=L"OM",.iso3=L"OMN",.phone_code=L"968"},
    {.nombre=L"Países Bajos",.name=L"Netherlands",.nom=L"Pays-Bas",.iso2=L"NL",.iso3=L"NLD",.phone_code=L"31"},
    {.nombre=L"Pakistán",.name=L"Pakistan",.nom=L"Pakistan",.iso2=L"PK",.iso3=L"PAK",.phone_code=L"92"},
    {.nombre=L"Palau",.name=L"Palau",.nom=L"Palau",.iso2=L"PW",.iso3=L"PLW",.phone_code=L"680"},
    {.nombre=L"Palestina",.name=L"Palestine",.nom=L"La Palestine",.iso2=L"PS",.iso3=L"PSE",.phone_code=L""},
    {.nombre=L"Panamá",.name=L"Panama",.nom=L"Panama",.iso2=L"PA",.iso3=L"PAN",.phone_code=L"507"},
    {.nombre=L"Papúa Nueva Guinea",.name=L"Papua New Guinea",.nom=L"Papouasie-Nouvelle-Guinée",.iso2=L"PG",.iso3=L"PNG",.phone_code=L"675"},
    {.nombre=L"Paraguay",.name=L"Paraguay",.nom=L"Paraguay",.iso2=L"PY",.iso3=L"PRY",.phone_code=L"595"},
    {.nombre=L"Perú",.name=L"Peru",.nom=L"Pérou",.iso2=L"PE",.iso3=L"PER",.phone_code=L"51"},
    {.nombre=L"Polinesia Francesa",.name=L"French Polynesia",.nom=L"Polynésie française",.iso2=L"PF",.iso3=L"PYF",.phone_code=L"689"},
    {.nombre=L"Polonia",.name=L"Poland",.nom=L"Pologne",.iso2=L"PL",.iso3=L"POL",.phone_code=L"48"},
    {.nombre=L"Portugal",.name=L"Portugal",.nom=L"Portugal",.iso2=L"PT",.iso3=L"PRT",.phone_code=L"351"},
    {.nombre=L"Puerto Rico",.name=L"Puerto Rico",.nom=L"Porto Rico",.iso2=L"PR",.iso3=L"PRI",.phone_code=L"1"},
    {.nombre=L"Qatar",.name=L"Qatar",.nom=L"Qatar",.iso2=L"QA",.iso3=L"QAT",.phone_code=L"974"},
    {.nombre=L"Reino Unido",.name=L"United Kingdom",.nom=L"Royaume-Uni",.iso2=L"GB",.iso3=L"GBR",.phone_code=L"44"},
    {.nombre=L"República Centroafricana",.name=L"Central African Republic",.nom=L"République Centrafricaine",.iso2=L"CF",.iso3=L"CAF",.phone_code=L"236"},
    {.nombre=L"República Checa",.name=L"Czech Republic",.nom=L"République Tchèque",.iso2=L"CZ",.iso3=L"CZE",.phone_code=L"420"},
    {.nombre=L"República Dominicana",.name=L"Dominican Republic",.nom=L"République Dominicaine",.iso2=L"DO",.iso3=L"DOM",.phone_code=L"1 809"},
    {.nombre=L"Reunión",.name=L"Réunion",.nom=L"Réunion",.iso2=L"RE",.iso3=L"REU",.phone_code=L""},
    {.nombre=L"Ruanda",.name=L"Rwanda",.nom=L"Rwanda",.iso2=L"RW",.iso3=L"RWA",.phone_code=L"250"},
    {.nombre=L"Rumanía",.name=L"Romania",.nom=L"Roumanie",.iso2=L"RO",.iso3=L"ROU",.phone_code=L"40"},
    {.nombre=L"Rusia",.name=L"Russia",.nom=L"La Russie",.iso2=L"RU",.iso3=L"RUS",.phone_code=L"7"},
    {.nombre=L"Sahara Occidental",.name=L"Western Sahara",.nom=L"Sahara Occidental",.iso2=L"EH",.iso3=L"ESH",.phone_code=L""},
    {.nombre=L"Samoa",.name=L"Samoa",.nom=L"Samoa",.iso2=L"WS",.iso3=L"WSM",.phone_code=L"685"},
    {.nombre=L"Samoa Americana",.name=L"American Samoa",.nom=L"Les Samoa américaines",.iso2=L"AS",.iso3=L"ASM",.phone_code=L"1 684"},
    {.nombre=L"San Bartolomé",.name=L"Saint Barthélemy",.nom=L"Saint-Barthélemy",.iso2=L"BL",.iso3=L"BLM",.phone_code=L"590"},
    {.nombre=L"San Cristóbal y Nieves",.name=L"Saint Kitts and Nevis",.nom=L"Saint Kitts et Nevis",.iso2=L"KN",.iso3=L"KNA",.phone_code=L"1 869"},
    {.nombre=L"San Marino",.name=L"San Marino",.nom=L"San Marino",.iso2=L"SM",.iso3=L"SMR",.phone_code=L"378"},
    {.nombre=L"San Martín (Francia)",.name=L"Saint Martin (French part)",.nom=L"Saint-Martin (partie française)",.iso2=L"MF",.iso3=L"MAF",.phone_code=L"1 599"},
    {.nombre=L"San Pedro y Miquelón",.name=L"Saint Pierre and Miquelon",.nom=L"Saint-Pierre-et-Miquelon",.iso2=L"PM",.iso3=L"SPM",.phone_code=L"508"},
    {.nombre=L"San Vicente y las Granadinas",.name=L"Saint Vincent and the Grenadines",.nom=L"Saint-Vincent et Grenadines",.iso2=L"VC",.iso3=L"VCT",.phone_code=L"1 784"},
    {.nombre=L"Santa Elena",.name=L"Ascensión y Tristán de Acuña",.nom=L"Ascensión y Tristan de Acuña",.iso2=L"SH",.iso3=L"SHN",.phone_code=L"290"},
    {.nombre=L"Santa Lucía",.name=L"Saint Lucia",.nom=L"Sainte-Lucie",.iso2=L"LC",.iso3=L"LCA",.phone_code=L"1 758"},
    {.nombre=L"Santo Tomé y Príncipe",.name=L"Sao Tome and Principe",.nom=L"Sao Tomé et Principe",.iso2=L"ST",.iso3=L"STP",.phone_code=L"239"},
    {.nombre=L"Senegal",.name=L"Senegal",.nom=L"Sénégal",.iso2=L"SN",.iso3=L"SEN",.phone_code=L"221"},
    {.nombre=L"Serbia",.name=L"Serbia",.nom=L"Serbie",.iso2=L"RS",.iso3=L"SRB",.phone_code=L"381"},
    {.nombre=L"Seychelles",.name=L"Seychelles",.nom=L"Les Seychelles",.iso2=L"SC",.iso3=L"SYC",.phone_code=L"248"},
    {.nombre=L"Sierra Leona",.name=L"Sierra Leone",.nom=L"Sierra Leone",.iso2=L"SL",.iso3=L"SLE",.phone_code=L"232"},
    {.nombre=L"Singapur",.name=L"Singapore",.nom=L"Singapour",.iso2=L"SG",.iso3=L"SGP",.phone_code=L"65"},
    {.nombre=L"Siria",.name=L"Syria",.nom=L"Syrie",.iso2=L"SY",.iso3=L"SYR",.phone_code=L"963"},
    {.nombre=L"Somalia",.name=L"Somalia",.nom=L"Somalie",.iso2=L"SO",.iso3=L"SOM",.phone_code=L"252"},
    {.nombre=L"Sri lanka",.name=L"Sri Lanka",.nom=L"Sri Lanka",.iso2=L"LK",.iso3=L"LKA",.phone_code=L"94"},
    {.nombre=L"Sudáfrica",.name=L"South Africa",.nom=L"Afrique du Sud",.iso2=L"ZA",.iso3=L"ZAF",.phone_code=L"27"},
    {.nombre=L"Sudán",.name=L"Sudan",.nom=L"Soudan",.iso2=L"SD",.iso3=L"SDN",.phone_code=L"249"},
    {.nombre=L"Suecia",.name=L"Sweden",.nom=L"Suède",.iso2=L"SE",.iso3=L"SWE",.phone_code=L"46"},
    {.nombre=L"Suiza",.name=L"Switzerland",.nom=L"Suisse",.iso2=L"CH",.iso3=L"CHE",.phone_code=L"41"},
    {.nombre=L"Surinám",.name=L"Suriname",.nom=L"Surinam",.iso2=L"SR",.iso3=L"SUR",.phone_code=L"597"},
    {.nombre=L"Svalbard y Jan Mayen",.name=L"Svalbard and Jan Mayen",.nom=L"Svalbard et Jan Mayen",.iso2=L"SJ",.iso3=L"SJM",.phone_code=L""},
    {.nombre=L"Swazilandia",.name=L"Swaziland",.nom=L"Swaziland",.iso2=L"SZ",.iso3=L"SWZ",.phone_code=L"268"},
    {.nombre=L"Tadjikistán",.name=L"Tajikistan",.nom=L"Le Tadjikistan",.iso2=L"TJ",.iso3=L"TJK",.phone_code=L"992"},
    {.nombre=L"Tailandia",.name=L"Thailand",.nom=L"Thaïlande",.iso2=L"TH",.iso3=L"THA",.phone_code=L"66"},
    {.nombre=L"Taiwán",.name=L"Taiwan",.nom=L"Taiwan",.iso2=L"TW",.iso3=L"TWN",.phone_code=L"886"},
    {.nombre=L"Tanzania",.name=L"Tanzania",.nom=L"Tanzanie",.iso2=L"TZ",.iso3=L"TZA",.phone_code=L"255"},
    {.nombre=L"Territorio Británico del Océano Índico",.name=L"British Indian Ocean Territory",.nom=L"Territoire britannique de l'océan Indien",.iso2=L"IO",.iso3=L"IOT",.phone_code=L""},
    {.nombre=L"Territorios Australes y Antárticas Franceses",.name=L"French Southern Territories",.nom=L"Terres australes françaises",.iso2=L"TF",.iso3=L"ATF",.phone_code=L""},
    {.nombre=L"Timor Oriental",.name=L"East Timor",.nom=L"Timor-Oriental",.iso2=L"TL",.iso3=L"TLS",.phone_code=L"670"},
    {.nombre=L"Togo",.name=L"Togo",.nom=L"Togo",.iso2=L"TG",.iso3=L"TGO",.phone_code=L"228"},
    {.nombre=L"Tokelau",.name=L"Tokelau",.nom=L"Tokélaou",.iso2=L"TK",.iso3=L"TKL",.phone_code=L"690"},
    {.nombre=L"Tonga",.name=L"Tonga",.nom=L"Tonga",.iso2=L"TO",.iso3=L"TON",.phone_code=L"676"},
    {.nombre=L"Trinidad y Tobago",.name=L"Trinidad and Tobago",.nom=L"Trinidad et Tobago",.iso2=L"TT",.iso3=L"TTO",.phone_code=L"1 868"},
    {.nombre=L"Tunez",.name=L"Tunisia",.nom=L"Tunisie",.iso2=L"TN",.iso3=L"TUN",.phone_code=L"216"},
    {.nombre=L"Turkmenistán",.name=L"Turkmenistan",.nom=L"Le Turkménistan",.iso2=L"TM",.iso3=L"TKM",.phone_code=L"993"},
    {.nombre=L"Turquía",.name=L"Turkey",.nom=L"Turquie",.iso2=L"TR",.iso3=L"TUR",.phone_code=L"90"},
    {.nombre=L"Tuvalu",.name=L"Tuvalu",.nom=L"Tuvalu",.iso2=L"TV",.iso3=L"TUV",.phone_code=L"688"},
    {.nombre=L"Ucrania",.name=L"Ukraine",.nom=L"L'Ukraine",.iso2=L"UA",.iso3=L"UKR",.phone_code=L"380"},
    {.nombre=L"Uganda",.name=L"Uganda",.nom=L"Ouganda",.iso2=L"UG",.iso3=L"UGA",.phone_code=L"256"},
    {.nombre=L"Uruguay",.name=L"Uruguay",.nom=L"Uruguay",.iso2=L"UY",.iso3=L"URY",.phone_code=L"598"},
    {.nombre=L"Uzbekistán",.name=L"Uzbekistan",.nom=L"L'Ouzbékistan",.iso2=L"UZ",.iso3=L"UZB",.phone_code=L"998"},
    {.nombre=L"Vanuatu",.name=L"Vanuatu",.nom=L"Vanuatu",.iso2=L"VU",.iso3=L"VUT",.phone_code=L"678"},
    {.nombre=L"Venezuela",.name=L"Venezuela",.nom=L"Venezuela",.iso2=L"VE",.iso3=L"VEN",.phone_code=L"58"},
    {.nombre=L"Vietnam",.name=L"Vietnam",.nom=L"Vietnam",.iso2=L"VN",.iso3=L"VNM",.phone_code=L"84"},
    {.nombre=L"Wallis y Futuna",.name=L"Wallis and Futuna",.nom=L"Wallis et Futuna",.iso2=L"WF",.iso3=L"WLF",.phone_code=L"681"},
    {.nombre=L"Yemen",.name=L"Yemen",.nom=L"Yémen",.iso2=L"YE",.iso3=L"YEM",.phone_code=L"967"},
    {.nombre=L"Yibuti",.name=L"Djibouti",.nom=L"Djibouti",.iso2=L"DJ",.iso3=L"DJI",.phone_code=L"253"},
    {.nombre=L"Zambia",.name=L"Zambia",.nom=L"Zambie",.iso2=L"ZM",.iso3=L"ZMB",.phone_code=L"260"},
    {.nombre=L"Zimbabue",.name=L"Zimbabwe",.nom=L"Zimbabwe",.iso2=L"ZW",.iso3=L"ZWE",.phone_code=L"263"}
} };

#endif // DATA_H_INCLUDED
