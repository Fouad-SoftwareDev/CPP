SRC = main.cpp Bureaucrat.cpp AForm.cpp  PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

NAME = AForm
FLAGS = -Wextra -Werror -Wall -std=c++98
OBJS = ${SRC:.cpp=.o}

all : ${NAME}

${OBJS} : %.o:%.cpp
		c++ ${FLAGS} -c $< -o $@

${NAME} : ${OBJS}
		c++ ${FLAGS} ${OBJS} -o ${NAME}

clean :
		rm -f ${OBJS}

fclean : clean
		rm -f ${NAME}

re :	fclean all

.PHONY : all clean  fclean 