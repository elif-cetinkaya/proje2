from student import Student
from teacher import Teacher

def main():
    # Bir öğrenci oluştur
    student = Student("Seydi", 20, "S12345")
    print(student.display_info())

    # Bir öğretmen oluştur
    teacher = Teacher("Elif", 35, "Mathematics")
    print(teacher.display_info())

if __name__ == "__main__":
    main()
