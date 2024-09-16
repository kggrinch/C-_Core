#include<iostream>

// Object 
class Book
{
  private: // Everything under here will be declared private
      std::string rating;

  public: // Everything under this public: will be public
      std::string title; 
      std::string author;
      int pages;
      // Could add default attributes like int pages = 0; but our default constructor
      // does that already

      // Default constructor
      Book()
      {
        title = "no title";
        author = "no author";
        pages = 0;

      }

      // Constructor
      Book(std::string title, std::string author, int pages, std::string rating)
      {
        // The this->title will refer to the attribute reference/declared at the top
        // and this->title = [title] - will reference to the title in the constuctor.
        this->title = title;
        this->author = author;
        this->pages = pages;
        setRating(rating);

        // Some times you will see construtors where the attribute names in the
        // constructor are different than the ones delacred above. When you see that
        // You will not need to use the this-> keyword

        // Example constructor(string name, string aAuthro, int aPages)
        // {
        //   title = name;
        //   author = aAuthor
        //   pages = aPAges 
        //  }
      }

      // Setter
      void setRating(std::string rating)
      {
        // Set rules so user cant put a random string
        if(rating == "G" || rating == "PG" || rating == "PG-13" || rating == "R" || rating == "NR")
        {
          this->rating = rating;
        }
        else
        {
          this->rating = "NR";
        }
      }

      // Getter
      std::string getRating()
      {
        return rating;
      }

      // Object functions
      void open()
      {
        std::cout << title << "is open";
      }     

      // Object function
      bool isLongBook()
      {
        if(pages >= 500)
        {
          return true;
        }
          return false;
      } 
};


int main()
{

  // Instantaiting object using default constructor
  std::cout << "Instantaiting object using default constructor" << '\n';
  Book bookDefaultConstrutor;
  std::cout <<"bookDefaultConstrutor.title: " << bookDefaultConstrutor.title << '\n';
  std::cout <<"bookDefaultConstrutor.author: " << bookDefaultConstrutor.author<< '\n';
  std::cout <<"bookDefaultConstrutor.pages: " << bookDefaultConstrutor.pages<< '\n';

  // Instantiating object using constructor
  std::cout << "\nInstantiating object using constructor" << '\n';
  Book book1("Lord of the Rings", "Tolkein", 700, "R");
  std::cout <<"book1.title: " << book1.title << '\n';
  std::cout <<"book1.author: " << book1.author << '\n';
  std::cout <<"book1.pages: " << book1.pages << '\n';

  // Changing object attributes manually
  book1.title = "Harry Potter";
  book1.author = "JK Rowling";
  book1.pages = 500;
  book1.setRating("Dog"); // Notice since rating is private I need to use setRating function

  // Printing after changing attributes
  std::cout << "\nPrinting after changing attributes" << std::endl;
  std::cout <<"book1.title: " << book1.title << '\n';
  std::cout <<"book1.author: " << book1.author << '\n';
  std::cout <<"book1.pages: " << book1.pages << '\n';
  std::cout <<"book1.getRating(): " << book1.getRating() << std::endl; // Using Getter function since rating is private

  // Using object functions
  std::cout << "\nUsing object function" << std::endl;
  std::cout <<"book1.isLong(): " << book1.isLongBook() << std::endl;
  std::cout <<"bookDefaultConstrutor.isLongBook(): " << bookDefaultConstrutor.isLongBook() << std::endl;
  
  return 0;
}