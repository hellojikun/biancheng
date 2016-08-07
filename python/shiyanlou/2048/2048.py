#import curses
from random import randrange,choice
from collections import defaultdict
# ord 参数是ascii字符，返回对应的十进制整数i
letter_codes = [ord(ch) for ch in 'WASDRQwasdrq']
actions = ['Up','Left','Down','Right','Restart','Exit']
#dict创建字典 zip将参数打包成元组 ，将这些元组构成list
actions_dict = dict(zip(letter_codes,actions * 2))

def get_user_action(keyboard):
	char = "N"
	while char not in actions_dict:
		char = keyboard.getch()
	return actions_dict[char]







































































