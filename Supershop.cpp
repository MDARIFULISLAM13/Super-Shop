#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
vector<string> item;
ll amount = 0;
ll pay = 0;
vector<ll> quantityy;
vector<ll> price;

// first list;
void firstlist();
// item list;
void itemlist();

// main&exit
void mainexit();
// menu for select item;
void menu2();
// menu for view item;
void menu1();
// select item;
void selectitem();
// cart;
void cart();
// payment;
void payment();
// mobile bank;
void mobilebank();
// visa
void visa();

void clearcart();

// exit;
void exit()
{
    exit(0);
}
int main()
{
    cout << "Welcome to my shop\n";
    firstlist();
}
// first list;
void firstlist()
{
    cout << "1--View Product list\n2--Buy Product\n3--Cart item\n4--exit\n:";
    int a;
    cin >> a;
    switch (a)
    {
    case 1:
        itemlist();
        menu1();

        break;
    case 2:
        itemlist();
        selectitem();
        break;
    case 3:
        cart();
        menu1();
        break;
    case 4:
        exit();
        break;
    default:
        cout << "Wrong input\nselect again\n";
        firstlist();
    }
}
// item list;
void itemlist()
{
    cout << "1--beef     1kg       500/=\n";
    cout << "2--chicken  1kg       300/=\n";
    cout << "3--egg      12 piece  120/\n";
    cout << "4--rice     1kg       50/=  \n";
    cout << "5--sweet    1kg       300/= \n";
    cout << "6--mangoes  1kg       150/= \n";
}
// main&exit
void mainexit()
{
    cout << "\nm-Main menu\ne-exit\n:";
    char a;
    cin >> a;

    if (a == 'm')
    {
        firstlist();
    }
    else if (a == 'e')
    {
        exit();
    }
    else
    {
        cout << "Wrong Input\ntry again\n:";
        mainexit();
    }
}
// select item;
void selectitem()
{
    cout << "Enter item serial :\n";
    int a;
    cin >> a;
    if (a == 1)
    {
        string t = "beef";
        auto it = find(item.begin(), item.end(), t);

        if (it != item.end())
        {
            int dis = distance(item.begin(), it);
            int nq;
            cout << "Quantity : ";
            cin >> nq;
            quantityy[dis] += nq;
            int pr = nq * 500;
            price[dis] += pr;
        }
        else
        {
            string s = "beef";
            item.push_back(s);
            cout << "Quantity : ";
            int q;
            cin >> q;
            quantityy.push_back(q);
            int p = q * 500;
            price.push_back(p);
        }
    }
    else if (a == 2)
    {
        string t = "chicken";
        auto it = find(item.begin(), item.end(), t);

        if (it != item.end())
        {
            int dis = distance(item.begin(), it);
            int nq;
            cout << "Quantity : ";
            cin >> nq;
            quantityy[dis] += nq;
            int pr = nq * 300;
            price[dis] += pr;
        }
        else
        {
            string s = "chicken";
            item.push_back(s);
            cout << "Quantity : ";
            int q;
            cin >> q;
            quantityy.push_back(q);
            int p = q * 300;
            price.push_back(p);
        }
    }
    else if (a == 3)
    {
        string t = "egg";
        auto it = find(item.begin(), item.end(), t);

        if (it != item.end())
        {
            int dis = distance(item.begin(), it);
            int nq;
            cout << "Quantity : ";
            cin >> nq;
            quantityy[dis] += nq;
            int pr = nq * 120;
            price[dis] += pr;
        }
        else
        {
            string s = "egg";
            item.push_back(s);
            cout << "Quantity : ";
            int q;
            cin >> q;
            quantityy.push_back(q);
            int p = q * 120;
            price.push_back(p);
        }
    }
    else if (a == 4)
    {
        string t = "rice";
        auto it = find(item.begin(), item.end(), t);

        if (it != item.end())
        {
            int dis = distance(item.begin(), it);
            int nq;
            cout << "Quantity : ";
            cin >> nq;
            quantityy[dis] += nq;
            int pr = nq * 50;
            price[dis] += pr;
        }
        else
        {
            string s = "rice";
            item.push_back(s);
            cout << "Quantity : ";
            int q;
            cin >> q;
            quantityy.push_back(q);
            int p = q * 50;
            price.push_back(p);
        }
    }
    else if (a == 5)
    {
        string t = "sweet";
        auto it = find(item.begin(), item.end(), t);

        if (it != item.end())
        {
            int dis = distance(item.begin(), it);
            int nq;
            cout << "Quantity : ";
            cin >> nq;
            quantityy[dis] += nq;
            int pr = nq * 300;
            price[dis] += pr;
        }
        else
        {
            string s = "sweet";
            item.push_back(s);
            cout << "Quantity : ";
            int q;
            cin >> q;
            quantityy.push_back(q);
            int p = q * 300;
            price.push_back(p);
        }
    }
    else if (a == 6)
    {
        string t = "chicken";
        auto it = find(item.begin(), item.end(), t);

        if (it != item.end())
        {
            int dis = distance(item.begin(), it);
            int nq;
            cout << "Quantity : ";
            cin >> nq;
            quantityy[dis] += nq;
            int pr = nq * 150;
            price[dis] += pr;
        }
        else
        {
            string s = "chicken";
            item.push_back(s);
            cout << "Quantity : ";
            int q;
            cin >> q;
            quantityy.push_back(q);
            int p = q * 150;
            price.push_back(p);
        }
    }
    else
    {
        cout << "Wrong input.\nTry again :\n";
        itemlist();
        selectitem();
    }
    cout << "Successfully Add to cart\n";
    menu2();

    /*cout << "1--beef     1kg       500/=\n";
    cout << "2--chicken  1kg       300/=\n";
    cout << "3--egg      12 piece  120/\n";
    cout << "4--rice     1kg       50/=  \n";
    cout << "5--sweet    1kg       300/= \n";
    cout << "6--mangoes  1kg       150/= \n";*/
}
// history
void cart()
{
    int i = 0;
    for (auto it = item.begin(); it != item.end(); ++it)
    {
        cout << *it << "   quantity:: ";
        cout << quantityy[i] << "  Amount::" << price[i] << endl;
        ;
        i++;
    }
    for (int x : price)
    {
        amount += x;
    }

    if (amount > 0)
    {
        cout << "\n\n---------------total amount = " << amount << "/=" << endl;
        cout << "1-Buy Now\n2-clear cart\n3-Add product\n4-Main menu\n5-exit\n";
        int v;
        cin >> v;
        if (v == 1)
        {
            payment();
        }
        else if (v == 2)
        {
            clearcart();
        }
        else if (v == 3)
        {
            itemlist();
            selectitem();
        }
        else if (v == 4)
        {
            firstlist();
        }
        else if (v == 5)
        {
            exit();
        }
    }
    else
    {
        cout << "\nNo Product available cart\n";
        menu1();
    }
}
// payment;
void payment()
{
    cout << "Select payment Option\n";
    ;
    cout << "1-Mobile Banking\n2-visa/master card\n";
    int a;
    cin >> a;
    if (a == 1)
    {
        mobilebank();
    }
    else if (a == 2)
    {
        visa();
    }
    else
    {
        cout << "Wrong input\nTry again\n";
        payment();
    }
}
// clear cart;
void clearcart()
{
    item.clear();
    quantityy.clear();
    price.clear();
    amount = 0;
    cout << "\nsuccessfully remove all product\n";

    cart();
}
// menu for select item;
void menu2()
{
    cout << "\n1-Add more item\n2-Main menu\n";

    if (item.empty() == 0)
    {
        cout << "3-Cart item\n";
    }
    cout << "0-exit\n:";
    int a;
    cin >> a;
    if (a == 1)
    {
        itemlist();
        selectitem();
    }

    else if (a == 2)
    {
        firstlist();
    }
    else if (a == 3)
    {
        cart();
    }
    else if (a == 0)
    {
        exit();
    }
    else
    {
        cout << "Wrong Input\ntry again\n:";
        menu2();
    }
}
// menu for view item;
void menu1()
{
    cout << "\n1-Buy product\n2-Main menu\n";

    cout << "0-exit\n:";
    int a;
    cin >> a;
    if (a == 1)
    {
        itemlist();
        selectitem();
    }

    else if (a == 2)
    {
        firstlist();
    }

    else if (a == 0)
    {
        exit();
    }
    else
    {
        cout << "Wrong Input\ntry again\n:";
        menu1();
    }
}
// mobile bank;
void mobilebank()
{
    cout << "1-Bkash\n2-Nagad\n";
    int a;
    cin >> a;
    if (a == 1)
    {
        string m;
        cout << "Enter Bkash Number\n";
        cin >> m;
        cout << "Enter Pin\n";
        cin >> m;
        cout << "Successfully Payment " << amount << "/=.\nThank You for Shoping\n";
        amount = 0;
        item.clear();
        quantityy.clear();
        price.clear();
        amount = 0;
        mainexit();
    }
    else if (a == 2)
    {
        string m;
        cout << "Enter Nagad Number\n";
        cin >> m;
        cout << "Enter Pin\n";
        cin >> m;
        cout << "Successfully Payment " << amount << "/=.\nThank You for Shoping\n";
        amount = 0;
        item.clear();
        quantityy.clear();
        price.clear();
        amount = 0;
        mainexit();
    }
    else
    {
        cout << "Wrong Input\ntry again\n:";
        mobilebank();
    }
}
// visa
void visa()
{
    cout << "1-Visa card\n2-Master card\n";
    int a;
    cin >> a;
    if (a == 1)
    {
        string m;
        cout << "Enter Visa card Number\n";
        cin >> m;
        cout << "Enter CVV\n";
        cin >> m;
        cout << "Successfully Payment " << amount << "/=.\nThank You for Shoping\n";
        amount = 0;
        item.clear();
        quantityy.clear();
        price.clear();
        amount = 0;
        mainexit();
    }
    else if (a == 2)
    {
        string m;
        cout << "Enter Master card Number\n";
        cin >> m;
        cout << "Enter CVV\n";
        cin >> m;
        cout << "Successfully Payment " << amount << "/=.\nThank You for Shoping\n";
        amount = 0;
        item.clear();
        quantityy.clear();
        price.clear();
        amount = 0;
        mainexit();
    }
    else
    {
        cout << "Wrong Input\ntry again\n:";
        visa();
    }
}
