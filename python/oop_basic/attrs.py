class MyObject(object):
	def __init__(self):
		self.x = 9

	def power(self):
		return self.x * self.x
obj = MyObject()
print(hasattr(obj,'x'))
print(hasattr(obj,'y'))
setattr(obj, 'y', 19)
print(hasattr(obj,'y'))
print(getattr(obj,'y'))
print(getattr(obj,'z',404))
f = (getattr(obj,'power'))
print(f)
print(f())