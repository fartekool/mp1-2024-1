//����������� ������ �������� ����� � ���������.
// 
//����� �������� ����� ������ ����������� ������ ����� �� ������� ������� �� ���������� � ������������ ����������.
//�������, ��� ������� ������� ���������� �� ������ � �������� ���� ���� �� ������� ����.
//������ ����� ����������� �����, �������� ������ ������, ��������� ������, ������� ����, ���������� ������ � ����������� �� ����(VIP � �������).
//��� ��������� �������, ��� ���������� ��������� ��� ���� � ��������� ����� �������, � ����� ���������� ������ �������������(��� ������� ���������).
//���������� ����� � ������ ���� ����������� ������� ���� � ������� � ����.
//��� ��������� �������, ��� ����� ���� �� ���� ����� � ����� ���� ���������.
//������� ������� �� ����� ������������ ����� 10 ����� ����� ������ ������.
//���������� � ���� ������� �� ��������� 30 ���� ������� �������� � ������ ���������.
//��� ������� ���� ����������� ������� ��������� �������(�� ������� ������ � �� 12.00 �� 18.00).
//��������� ������� �� �������� ������(�� 12.00) ���������� 75 % �� �������, ��������� ������� �� �������� ������(����� 18.00) � 150 % �� �������.
//���������� � ���������� ������(�������� / ������) � ������ ���� �� ������ ������ ����� �������� � ������ ���������.
// 
//����� �������� ����� ������ ������������� ��������� ��������: 
//1) ������� ������ ���������� : ����, ����� ������, �������� ������, ����� ����, ��� ����, ����� ����, 
//2) ��������� ������� ���������� ���������� ��������� ���� � ��������� ����, 
//3) ��������������� ��������� ���������� ����, 
//4) ���������� ����� ��������� �������, 
//5) �������� ����� �������, 
//6) ������������ ������(������ ����� �������� : ����, ����� ������, �������� ������, ����� ����, ����� ����, ����� ����� � ����).

//����� ��������� ������ �������������� ��� ��������� ������ ������ �������� ����� � ����� ���� ���������� � ���������� - ����������� ��������.
#include <iostream>
#include <ciso646>
#include "Cinema.h"
#include "TicketOffice.h"
int main()
{
    using namespace std;
    Cinema cinema;
    Hall hall1(1, 15, 15);
    Hall hall2(2, 14, 15);

    cinema.add_hall(hall1);
    cinema.add_hall(hall2);
    cinema.add_movie_session({ 22, 4, 24 }, { 18, 0 }, "Avatar", hall1, 250);
    cinema.add_movie_session({ 22, 4, 24 }, { 23, 15 }, "Catch me if you can", hall2, 300);
    cinema.info();

    TicketOffice ticket_office(cinema);

    ticket_office.buy_tickets({ 22, 4, 24 }, { 23, 15 }, "Catch me if you can", 1, 1, 2);
    system("pause");
    return 0;
}


