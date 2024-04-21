#pragma once
#include "Date.h"
#include "Time.h"
#include <string>
#include <vector>
//����������� ������ �������� ����� � ���������.
// 
//����� �������� ����� ������ ����������� ������ ����� �� ������� ������� �� ���������� � ������������ ����������.
//�������, ��� ������� ������� ���������� �� ������ � �������� ���� ���� �� ������� ����.
//������ ����� ����������� �����, �������� ������ ������, ��������� ������, ������� ����, ���������� ������ � ����������� �� ����(VIP � �������).
//��� ��������� �������, ��� ���������� ��������� ��� ���� � ��������� ����� �������, � ����� ���������� ������ �������������(��� ������� ���������).
//���������� ����� � ������ ���� ����������� ������� ���� � ������� � ����.
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
struct Hall
{
	unsigned hall_number; // 1..5
	unsigned row_count; // 1..15
	unsigned seat_count; // 1..15
	Hall(unsigned hall_number_, unsigned row_count_, unsigned seat_count_);

};
struct MovieSession
{
	Date date;
	Time time;
	std::string name;
	Hall hall;
	double base_cost;
	unsigned free_seats = hall.row_count * hall.seat_count;
};
struct Cinema
{
	std::vector<Hall> halls;
	std::vector<MovieSession> movie_sessions;

	void add_hall(Hall& a);
	void add_movie_session(Date date, Time time, std::string name, Hall hall, double base_cost);
	void info();

};