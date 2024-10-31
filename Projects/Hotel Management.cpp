#include <iostream>
using namespace std;

int main () {
	// declared quantity
	int quant;
	int choice;
	
	// quantity of items
	int Qrooms=0, 
	Qwestern=0, Qeastern=0, Qappetizers=0, Qcusines=0, Qdeserts=0;

	// quantity sold
	int Srooms=0,
	Swestern=0, Seastern=0, Sappetizers=0, Scusines=0, Sdeserts=0;

	// Price 	
	int Total_rooms=0,
	Total_western=0, Total_eastern=0, Total_appetizers=0, Total_cusines=0, Total_deserts=0;
	
	// input prompt for items
	cout << "\n\t Total Quantity of items";
	cout << "\n Available Rooms :";
	cin >> Qrooms;
	cout << "\n Quanatity of Western :";
	cin >> Qwestern;
	cout << "\n Quanatity of Eastern :";
	cin >> Qeastern;
	cout << "\n Quanatity of Appetizers :";
	cin >> Qappetizers;
	cout << "\n Quanatity of Cusines :";
	cin >> Qcusines;
	cout << "\n Quanatity of Deserts :";
	cin >> Qdeserts;
	
	option:
	cout << "\n\t\t\t Please Select the Following from the available Options. ";
	cout << "\n\n1) Rooms: ";
	cout << "\n2) Western: ";
	cout << "\n3) Eastern: ";
	cout << "\n4) Appetizers: ";
	cout << "\n5) Cusines: ";
	cout << "\n6) Deserts: ";
	cout << "\n7) Total Sales Collection: ";
	cout << "\n8) Exit: ";
	
	cout << "\n\n Please Enter your Selected Choice of Preference ";
	cin >> choice;
	
	// functionality
	switch(choice) {
		case 1:
			// Room Availability and Cost
			cout << "\n\n Enter the number of rooms that you require: ";
			cin >> quant;
			if (Qrooms-Srooms >=quant) {
				Srooms=Srooms+quant;
				Total_rooms= Total_rooms+quant*2000 ;
				cout << "\n\n\t\t" << quant << " number of room(s) have been alloted";
			}
			else {
				cout << "\n\tOnly" << Qrooms-Srooms << "number of room(s) are left remaining in the Hotel";
				break;
			}
			
		case 2:
		// Western Food Availability and Cost
			cout << "\n\n Enter the number of Western Dishes: ";
			cin >> quant;
			if (Qwestern-Swestern >=quant) {
				Swestern=Swestern+quant;
				Total_western= Total_western+quant*500 ;
				cout << "\n\n\t\t" << quant << " number of Western Dishes have been Ordered";
			}
			else {
				cout << "\n\tOnly" << Qwestern-Swestern << "number of Western Dishes are left remaining in the Hotel";
				break;
			}
			
		case 3:
		// Eastern Food Availability and Cost
			cout << "\n\n Enter the number of Eastern Dishes: ";
			cin >> quant;
			if (Qeastern-Seastern >=quant) {
				Seastern=Seastern+quant;
				Total_eastern= Total_eastern+quant*700 ;
				cout << "\n\n\t\t" << quant << " number of Eastern Dishes have been Ordered";
			}
			else {
				cout << "\n\tOnly" << Qeastern-Seastern << "number of Eastern Dishes are left remaining in the Hotel";
				break;
			}
			
		case 4:
		// Appetizers Food Availability and Cost
			cout << "\n\n Enter the number of Appetizers Dishes: ";
			cin >> quant;
			if (Qappetizers-Sappetizers >=quant) {
				Sappetizers=Sappetizers+quant;
				Total_appetizers= Total_appetizers+quant*300 ;
				cout << "\n\n\t\t" << quant << " number of Appetizer Dishes have been Ordered";
			}
			else {
				cout << "\n\tOnly" << Qappetizers-Sappetizers << "number of Appectizer Dishes are left remaining in the Hotel";
				break;
			}
			
		case 5:
		// Cusines Food Availability and Cost
			cout << "\n\n Enter the number of Cusine Dishes: ";
			cin >> quant;
			if (Qcusines-Scusines >=quant) {
				Scusines=Scusines+quant;
				Total_cusines= Total_cusines+quant*1000 ;
				cout << "\n\n\t\t" << quant << " number of Cusine Dishes have been Ordered";
			}
			else {
				cout << "\n\tOnly" << Qcusines-Scusines << "number of Cusine Dishes are left remaining in the Hotel";
				break;
			}
			
		case 6:
		// Deserts Food Availability and Cost
			cout << "\n\n Enter the number of Desert Dishes: ";
			cin >> quant;
			if (Qdeserts-Sdeserts >=quant) {
				Sdeserts=Sdeserts+quant;
				Total_deserts= Total_deserts+quant*500 ;
				cout << "\n\n\t\t" << quant << " number of Desert Dishes have been Ordered";
			}
			else {
				cout << "\n\tOnly" << Qdeserts-Sdeserts << "number of Desert Dishes are left remaining in the Hotel";
				break;
			}
			
		case 7:
			//  Total Value of collections & Information
			cout << "\n\t\tDetails of Sales and Collection: ";
			
			cout << "\n\n Number of Rooms that were Available :" <<Qrooms;
			cout << "\n\n Number of Rooms that were Alloted : " <<Srooms;
			cout << "\n\n Total Rooms remaining : " <<Qrooms-Srooms;
			cout << "\n\n Total daily Collection of Rooms : " << Total_rooms;
			
			cout << "\n\n Number of Western Dishes that were Available :" <<Qwestern;
			cout << "\n\n Number of Western Dishes that were Served/Sold : " <<Swestern;
			cout << "\n\n Total Western Dishes remaining : " <<Qwestern-Swestern;
			cout << "\n\n Total daily Collection of Western Dishes : " << Total_western;
			
			cout << "\n\n Number of Eastern Dishes that were Available :" <<Qeastern;
			cout << "\n\n Number of Eastern Dishes that were Served/Sold : " <<Seastern;
			cout << "\n\n Total Eastern Dishes remaining : " <<Qeastern-Seastern;
			cout << "\n\n Total daily Collection of Eastern Dishes : " << Total_eastern;
			
			cout << "\n\n Number of Appetizer Dishes that were Available :" <<Qappetizers;
			cout << "\n\n Number of Appetizer Dishes that were Served/Sold : " <<Sappetizers;
			cout << "\n\n Total Appetizer Dishes remaining : " <<Qappetizers-Sappetizers;
			cout << "\n\n Total daily Collection of Appetizer Dishes : " << Total_appetizers;
			
			cout << "\n\n Number of Cusines Dishes that were Available :" <<Qcusines;
			cout << "\n\n Number of Cusines Dishes that were Served/Sold : " <<Scusines;
			cout << "\n\n Total Cusines Dishes remaining : " <<Qcusines-Scusines;
			cout << "\n\n Total daily Collection of Cusines Dishes : " << Total_cusines;
			
			cout << "\n\n Number of Desert Dishes that were Available :" <<Qdeserts;
			cout << "\n\n Number of Desert Dishes that were Served/Sold : " <<Sdeserts;
			cout << "\n\n Total Desert Dishes remaining : " <<Qdeserts-Sdeserts;
			cout << "\n\n Total daily Collection of Desert Dishes : " << Total_deserts;
			
			cout << "\n\n Total collection for the day " << Total_rooms+Total_western+Total_eastern+Total_appetizers+Total_cusines+Total_deserts;
			break;
			
		case 8:
			exit(0);
			
			default:
				cout << "Please select any of the defined Numbers";
	}
	goto option;
}
