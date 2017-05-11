#include "Question.hpp"

#include <iostream>
#include <string>
using namespace std;

void QuestionBase::Display()
{
	cout << m_questionText << endl;
}

void QuestionBase::SetQuestionText(const string& text)
{
	m_questionText = text;
}

void TrueFalseQuestion::Display()
{
	QuestionBase::Display();
	cout << "(true) or (false)?" << endl;
}

void TrueFalseQuestion::SetCorrectAnswer(const string& correctAnswer)
{
	m_correctAnswer = correctAnswer;
}
bool TrueFalseQuestion::CheckAnswer(const string& userAnswer)
{
	if (m_correctAnswer == userAnswer)
	{
		return turn;
	}
	else
	{
		return false;
	}

}
void MultipleChoiceQuestion::Display()
{
	QuestionBase::Display();
	for (int i = 0; i < 4; i++)
	{
		cout << i << ".  " << m_answer[i] << endl;
	}
}
void MultipleChoiceQuestion::SetCorrectAnswer(int correctAnswer)
{
	m_correctAnswer = correctAnswer;
}
bool MultipleChoiceQuestion::CheckAnswer(int userAnswer)
{
	if (m_correctAnswer == userAnswer)
	{
		return true;
	}
	else
	{
		return false;

	}
}
void MultipleChoiceQuestion::SetAnswerChoice(const string& a0, const string a1, const string& a2, const string& a3)
{
	m_answer[0] = a0;
	m_answer[1] = a1;
	m_answer[2] = a2;
	m_answer[3] = a3;

	for (int i = 0; i < 4; i++)
	{
		return m_answer[i];
	}
}