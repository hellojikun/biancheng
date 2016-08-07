class Student(object):
	def __init__(self,name):
		self.name = name
	def __str__(self): #解释给人
		return 'Student object(name:%s)'%self.name

	__repr__ = __str__#解释给编译器

print(Student('Min'))