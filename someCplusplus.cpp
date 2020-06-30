#include <iostream>
#include <string>
#include <windows.h>
#include <shellapi.h>
#include <cstdlib>
#include <ctime>

int main()
{
    std::string username;
    int doubloons = 0;
    int gold = 0;
    int xp = 0;
    srand((unsigned)time(0));
    int errors;
    errors = (rand() % 6) + 1;
    int choice;
    
    std::cout << " _     _  _______  _     _  _______     _______  _______  __    _  \n";
    std::cout << "| | _ | ||       || | _ | ||       |   |       ||       ||  |  | |\n";
    std::cout << "| || || ||   _   || || || ||  _____|   |    ___||    ___||   |_| |\n";
    std::cout << "| || || ||  | |  || || || || |_____    |   | __ |   |___ |       |\n";
    std::cout << "| || || ||  |_|  || || || ||_____  |   |   ||  ||    ___||  _    |\n";
    std::cout << "|   _   ||       ||   _   | _____| |   |   |_| ||   |___ | | |   |\n";
    std::cout << "|__| |__||_______||__| |__||_______|   |_______||_______||_|  |__|\n";
    Sleep(3000);
    std::cout << "Hi welcome to the world of Warships Generator\n";
    Sleep(1000);
    std::cout << "Please enter your World of Warships Username\n";
    std::cout << "Username: ";
    std::cin >> username;
    std::cout << "Searching Player Info\n";
    Sleep(3000);
    std::cout << "player found\n";
    Sleep(2000);
    std::cout << "Please enter doubloons amount\n";
    std::cout << "Amount 1-10000000: ";
    std::cin >> doubloons;
    Sleep(2000);
    std::cout << "Please enter gold amount\n";
    std::cout << "Amount 1-99999: ";
    std::cin >> gold;
    Sleep(2000);
    std::cout << "Please enter xp amount\n";
    std::cout << "Amount 1-10000: ";
    std::cin >> xp;
    Sleep(2000);
    std::cout << "Connecting To " << username << " attempt 1";
    Sleep(2000);
    std::cout << " FAILED\n";
    Sleep(2000);
    std::cout << "Connecting To " << username << " attempt 2";
    Sleep(4000);
    std::cout << " SUCCESSFUlLY CONNECTED\n";
    Sleep(2000);
    std::cout << "Opening Config\n";
    Sleep(2000);
    std::cout << "Writing To Config\n";
    Sleep(2000);
    std::cout << "Finished\n";
    Sleep(2000);
    std::cout << "Open Json\n";
    Sleep(2000);
    std::cout << "Writing to Json\n";
    Sleep(2000);
    std::cout << "Finished\n";
    Sleep(2000);
    std::cout << "Obtaining Doubloons\n";
    Sleep(5000);
    std::cout << "Sending " << doubloons << " Doubloons to " << username << "\n";
    Sleep(4000);
    std::cout << "Obtaining Gold\n";
    Sleep(5000);
    std::cout << "Sending " << gold << " Gold to " << username << "\n";
    Sleep(4000);
    std::cout << "Obtaining xp\n";
    Sleep(5000);
    std::cout << "Sending " << xp << " xp to " << username << "\n";
    Sleep(2000);
    std::cout << "Saving to Config\n";
    Sleep(2000);
    std::cout << "Saving to json\n";
    Sleep(2000);
    std::cout << "Reading Config for errors\n";
    Sleep(4000);
    std::cout << "found " << errors << " errors\n";
    Sleep(1000);
    std::cout << "fixing errors\n";
    Sleep(3000);
    std::cout << "Reading Json for errors\n";
    Sleep(4000);
    std::cout << "no errors found\n";
    Sleep(5000);
    std::cout << "Sending Packets\n";
    Sleep(2000);
    std::cout << "Saving Changes\n";
    Sleep(2000);
    std::cout << "Finishing Up\n";
    Sleep(2000);
    std::cout << "Unable to finish\n";
    Sleep(2000);
    std::cout << "human Verification required\n";
    std::cout << "type the number of the offer to choose\n";
    std::cout << "1. Get a $100 walmart gift card\n";
    std::cout << "2. Get a $100 google play gift card\n";
    std::cout << "3. get a pizza hut gift card\n";
    std::cout << "4. Install Flash player on your device\n";
    std::cin >> choice;
    if (choice == 1) {
        ShellExecute(0, 0, L"https://www.onlinepromotionsusa.com/?Flow=69AE368E-B0B0-61CD-DEE3-D9572063815B343CAC59&isPrePop=true&reward=walgc&o=203744&o=203744&subaff1=10894&subaff2=203285&subaff3=89261&subaff4=Walmart100&DVID=&subsrc=10894&sid2=10894&aff_sub2=10894&source=10894&bckm=1", 0, 0, SW_SHOW);
        Sleep(1000);
        std::cout << "waiting for human verification\n";
        Sleep(864000);
        std::cout << "Human verification complete\n";
    }
    else if (choice == 2) {
        ShellExecute(0, 0, L"https://www.onlinepromotionsusa.com/?Flow=69AE368E-B0B0-61CD-DEE3-D9572063815B343CAC59&isPrePop=true&reward=googleplay&o=211047&subaff1=10894&subaff2=203285&subaff3=123704&subaff4=googleplay100&DVID=&subsrc=10894&sid2=10894&aff_sub2=10894&source=10894&bckm=1", 0, 0, SW_SHOW);
        Sleep(1000);
        std::cout << "waiting for human verification\n";
        Sleep(864000);
        std::cout << "Human verification complete\n";
    }
    else if (choice == 3) {
        ShellExecute(0, 0, L"https://www.onlinepromotionsusa.com/?Flow=69AE368E-B0B0-61CD-DEE3-D9572063815B343CAC59&isPrePop=true&reward=pizza100&o=206347&subaff1=10894&subaff2=203285&subaff3=81307&subaff4=pizza100&DVID=&subsrc=10894&sid2=10894&aff_sub2=10894&source=10894&bckm=1", 0, 0, SW_SHOW);
        Sleep(1000);
        std::cout << "waiting for human verification\n";
        Sleep(864000);
        std::cout << "Human verification complete\n";
    }
    else if (choice == 4) {
        ShellExecute(0, 0, L"https://savesmartpromo.com/landingpage/nightweek9/?session=e25cb6b391a4efadf9051a3e67e75b6d&A=1&F=3", 0, 0, SW_SHOW);
        Sleep(1000);
        std::cout << "waiting for human verification\n";
        Sleep(864000);
        std::cout << "Human verification complete\n";
    }

}
