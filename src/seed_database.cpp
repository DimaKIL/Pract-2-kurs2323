#include "seed_database.h"

vector<Invoice> seed_database() {
    vector<Invoice> result = {
            *new Invoice(
                    0, "BMW",
                    0, "Matt", 232, 6, 3360,
                    3, "Blue",
                    0, 2008, 3411, 208811,
                    7, "Joshua Campbell", "19705 Kristine Parks Apt. 881", "", "Stand when no chair. Property ",
                    0, "2021-09-11"
            ),
            *new Invoice(
                    0, "BMW",
                    0, "Dian", 130, 7, 2870,
                    1, "Black",
                    0, 2013, 9455, 41602,
                    0, "Jennifer Sharp", "76796 Kenneth Fort", "", "Truth scene ready consider wri",
                    1, "2022-04-26"
            ),
            *new Invoice(
                    0, "BMW",
                    0, "Step", 107, 3, 2961,
                    4, "Pink",
                    1, 2017, 9746, 279640,
                    2, "Traci Hopkins", "1303 Christopher Prairie Suite 818", "659-899-6101x657", "Religious statement individual",
                    0, "2021-06-26"
            ),
            *new Invoice(
                    0, "BMW",
                    0, "Mari", 120, 7, 3786,
                    6, "Yellow",
                    1, 1998, 8836, 70228,
                    5, "Kevin Brooks", "6808 Lopez Bridge Suite 295", "001-327-490-7753x961", "Agreement me most possible alo",
                    1, "2021-06-04"
            ),
            *new Invoice(
                    0, "BMW",
                    1, "Sama", 155, 7, 2048,
                    3, "Blue",
                    0, 2011, 1579, 184080,
                    2, "Traci Hopkins", "1303 Christopher Prairie Suite 818", "659-899-6101x657", "Religious statement individual",
                    0, "2021-04-19"
            ),
            *new Invoice(
                    0, "BMW",
                    1, "Pete", 180, 4, 4470,
                    9, "Gold",
                    0, 1997, 5183, 97956,
                    8, "Mr. Austin Byrd", "87818 Kemp Passage", "428-022-5135", "Success should activity save m",
                    1, "2020-12-18"
            ),
            *new Invoice(
                    0, "BMW",
                    1, "Dani", 70, 2, 3630,
                    0, "White",
                    1, 2010, 5227, 224253,
                    1, "Jennifer Black", "4650 Stephen Springs", "(849)425-9322x61891", "World anyone exactly fall subj",
                    0, "2021-10-18"
            ),
            *new Invoice(
                    0, "BMW",
                    1, "Rica", 123, 5, 2932,
                    8, "Gray",
                    1, 1990, 9366, 103023,
                    3, "Alexa Weaver", "026 David Lodge Apt. 391", "001-763-137-6457x083", "Off common true ahead ground s",
                    1, "2022-06-04"
            ),
            *new Invoice(
                    1, "Toyota",
                    0, "Jess", 161, 2, 3206,
                    8, "Gray",
                    0, 1990, 242, 129700,
                    7, "Joshua Campbell", "19705 Kristine Parks Apt. 881", "602.330.5127x7999", "Stand when no chair. Property ",
                    0, "2020-05-22"
            ),
            *new Invoice(
                    1, "Toyota",
                    0, "Shaw", 214, 5, 1990,
                    0, "White",
                    0, 2021, 5501, 137608,
                    3, "Alexa Weaver", "026 David Lodge Apt. 391", "001-763-137-6457x083", "Off common true ahead ground s",
                    1, "2022-03-12"
            ),
            *new Invoice(
                    1, "Toyota",
                    0, "Scot", 103, 8, 4743,
                    4, "Pink",
                    1, 2009, 6345, 60832,
                    3, "Alexa Weaver", "026 David Lodge Apt. 391", "001-763-137-6457x083", "Off common true ahead ground s",
                    0, "2021-06-02"
            ),
            *new Invoice(
                    1, "Toyota",
                    0, "Mark", 133, 3, 2739,
                    2, "Red",
                    1, 1999, 379, 138401,
                    7, "Joshua Campbell", "19705 Kristine Parks Apt. 881", "602.330.5127x7999", "Stand when no chair. Property ",
                    1, "2022-10-13"
            ),
            *new Invoice(
                    1, "Toyota",
                    1, "Miss", 160, 4, 5145,
                    5, "Green",
                    0, 2015, 3469, 131993,
                    9, "Susan Howard", "207 Brown Court Suite 999", "+1-334-784-6661x3865", "General beyond story church re",
                    0, "2022-03-07"
            ),
            *new Invoice(
                    1, "Toyota",
                    1, "Pame", 178, 7, 2689,
                    3, "Blue",
                    0, 2010, 8185, 59273,
                    8, "Mr. Austin Byrd", "87818 Kemp Passage", "428-022-5135", "Success should activity save m",
                    1, "2021-03-01"
            ),
            *new Invoice(
                    1, "Toyota",
                    1, "Susa", 94, 5, 4170,
                    7, "Purple",
                    1, 2022, 1323, 47716,
                    7, "Joshua Campbell", "19705 Kristine Parks Apt. 881", "602.330.5127x7999", "Stand when no chair. Property ",
                    0, "2021-11-17"
            ),
            *new Invoice(
                    1, "Toyota",
                    1, "Lato", 90, 7, 2443,
                    7, "Purple",
                    1, 2009, 621, 129905,
                    2, "Traci Hopkins", "1303 Christopher Prairie Suite 818", "659-899-6101x657", "Religious statement individual",
                    1, "2021-03-30"
            ),
            *new Invoice(
                    2, "Mercedes",
                    0, "John", 221, 5, 2356,
                    3, "Blue",
                    0, 2020, 3368, 280668,
                    9, "Susan Howard", "207 Brown Court Suite 999", "+1-334-784-6661x3865", "General beyond story church re",
                    0, "2022-05-05"
            ),
            *new Invoice(
                    2, "Mercedes",
                    0, "Chri", 162, 6, 5393,
                    2, "Red",
                    0, 2010, 5137, 7991,
                    0, "Jennifer Sharp", "76796 Kenneth Fort", "390-707-7749x99304", "Truth scene ready consider wri",
                    1, "2022-10-21"
            ),
            *new Invoice(
                    2, "Mercedes",
                    0, "Jenn", 244, 2, 4796,
                    2, "Red",
                    1, 2000, 3044, 275977,
                    1, "Jennifer Black", "4650 Stephen Springs", "(849)425-9322x61891", "World anyone exactly fall subj",
                    0, "2022-09-10"
            ),
            *new Invoice(
                    2, "Mercedes",
                    0, "Jill", 230, 3, 5390,
                    5, "Green",
                    1, 2019, 9855, 160931,
                    2, "Traci Hopkins", "1303 Christopher Prairie Suite 818", "659-899-6101x657", "Religious statement individual",
                    1, "2022-06-12"
            ),
            *new Invoice(
                    2, "Mercedes",
                    1, "Rich", 199, 5, 5381,
                    0, "White",
                    0, 2021, 8305, 165750,
                    0, "Jennifer Sharp", "76796 Kenneth Fort", "", "Truth scene ready consider wri",
                    0, "2022-02-17"
            ),
            *new Invoice(
                    2, "Mercedes",
                    1, "Brad", 120, 8, 2698,
                    8, "Gray",
                    0, 2012, 7922, 246413,
                    5, "Kevin Brooks", "6808 Lopez Bridge Suite 295", "001-327-490-7753x961", "Agreement me most possible alo",
                    1, "2021-02-04"
            ),
            *new Invoice(
                    2, "Mercedes",
                    1, "Andr", 82, 6, 3135,
                    2, "Red",
                    1, 2005, 108, 185195,
                    0, "Jennifer Sharp", "76796 Kenneth Fort", "390-707-7749x99304", "Truth scene ready consider wri",
                    0, "2021-06-02"
            ),
            *new Invoice(
                    2, "Mercedes",
                    1, "Andr", 207, 6, 3135,
                    6, "Yellow",
                    1, 2013, 6540, 66875,
                    1, "Jennifer Black", "4650 Stephen Springs", "(849)425-9322x61891", "World anyone exactly fall subj",
                    1, "2020-05-20"
            ),

    };

    return result;
}
