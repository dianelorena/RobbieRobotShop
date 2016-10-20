//
// Created by Diane Lorena on 10/6/16.
//

#include "Store.h"
#include "RobotModel.h"

using namespace std;

Store::Store()
{

}

int Store::mainMenuMessage()
{
    cout <<"         WELCOME TO ROBBIE ROBOT SHOP\n\n";
    cout << "___________________________________________\n";
    cout << "              Main Menu                    \n";
    cout << "    Type in a number for desired action    \n";
    cout << "___________________________________________\n";
    cout << "(1) Create\n";
    cout << "(2) View\n\n";
    cout << "___________________________________________\n";
    cout << "        *ENTER 0 TO EXIT PROGRAM*          \n";
    cout << "___________________________________________\n";
    cout << "menu selection: ";
    cin >> mainMenuResponse;
    cout << "\n\n";
    return mainMenuResponse;
}

int Store::viewMenuMessage()
{
    cout << "___________________________________________\n";
    cout << "              View Menu                    \n";
    cout << "    Type in a number for desired action    \n";
    cout << "___________________________________________\n";
    cout << "(1) View All available Models\n";
    cout << "___________________________________________\n";
    cout << "      *ENTER 0 TO RETURN TO MAIN MENU*     \n";
    cout << "___________________________________________\n";
    cout << "menu selection: ";
    cin >> viewMenuResponse;
    cout << "\n\n";
    return viewMenuResponse;
}

int Store::robotPartPickerMessage()
{
    cout << "____________________________________________________________________\n";
    cout << "Please enter part type you would like to add to this robot model : \n";
    cout << "____________________________________________________________________\n";
    cout << "1 = head\n";
    cout << "2 = locomotor\n";
    cout << "3 = left arm\n";
    cout << "4 = right arm\n";
    cout << "5 = Torso\n";
    cout << "6 = Battery\n\n";
    cout << "____________________________________________________________________\n";
    cout << "                  if you are done adding parts                     \n";
    cout << "               * ENTER 0 TO RETURN TO MAIN MENU *                  \n";
    cout << "____________________________________________________________________\n";
    cout << "Part Selection: ";
    cin >> robotPartPicker;
    return robotPartPicker;

}

int Store::createMenuMessage()
{
    cout << "___________________________________________\n";
    cout << "              Create Menu                    \n";
    cout << "    Type in a number for desired action    \n";
    cout << "___________________________________________\n";
    cout << "(1) Create Robot Model\n";
    cout << "(2) Create Customer\n";
    cout << "(3) Create Sales Associate\n";
    cout << "(4) Create Order\n";
    cout << "___________________________________________\n";
    cout << "menu selection: ";
    cin >> createMenuResponse;
    cout << "\n\n";
    return createMenuResponse;
}

void Store::displayAllRobotModelsInfo()
{
    int i = 0;
        cout << "               DISPLAYING ALL ROBOT MODELS AVAILABLE                   \n\n";

    while(i < robotModelsLibrary.size())
    {
        cout << "_______________________________________________________________________\n";
        cout << " MODEL " << Store::robotModelsLibrary[i].getModelNum() << " INFORMATION\n";
        cout << "_______________________________________________________________________\n";
        cout << "Robot name: " << robotModelsLibrary[i].getName() << "\n";
        cout << "Robot model num: " << robotModelsLibrary[i].getModelNum() << "\n";
        cout << "Robot Price: " << robotModelsLibrary[i].getSellingPrice() << "\n";
        cout << "Robot shipping Price: " << robotModelsLibrary[i].getShippingCost() << "\n";
        cout << "Robot Description: " <<robotModelsLibrary[i].getModelDescription() << "\n";
        i++;
    }
}
