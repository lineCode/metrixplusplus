/* File comments * asdasdas * asd * asd * asd * sad * as * das * dasd */     int function_start(asdasd<asd>& asdasd, asdsad* adsadsad){	return 0;}"string \\\\" /* comment */"string \\\\" /* comment \ */asd" */ /* SCC has been trained to know about strings /* */ */"!"\"Double quotes embedded in strings, \\\" too\'!""And \newlines in them""And escaped double quotes at the end of a string\""aa '\\n' OKaa "\""aa "\\n"This is followed by C++/C99 comment number 1.// C++/C99 comment with \continuation character \on three source lines (this should not be seen with the -C flaThe C++/C99 comment number 1 has finished.This is followed by C++/C99 comment number 2./\/\C++/C99 comment (this should not be seen with the -C flag)The C++/C99 comment number 2 has finished.This is followed by regular C comment number 1./\*\Regularcomment*\/The regular C comment number 1 has finished./\\/ This is not a C++/C99 comment!This is followed by C++/C99 comment number 3./\\\/ But this is a C++/C99 comment!The C++/C99 comment number 3 has finished./\\* This is not a C or C++  comment!This is followed by regular C comment number 2./\*/ This is a regular C comment *\but this is just a routine continuation *\and that was not the end either - but this is *\\/The regular C comment number 2 has finished.This is followed by regular C comment number 3./\\\\* C comment */#ifndef BOOST_SMART_PTR_SCOPED_PTR_HPP_INCLUDED#define BOOST_SMART_PTR_SCOPED_PTR_HPP_INCLUDED//  (C) Copyright Greg Colvin and Beman Dawes 1998, 1999.//  Copyright (c) 2001, 2002 Peter Dimov////  Distributed under the Boost Software License, Version 1.0. (See//  accompanying file LICENSE_1_0.txt or copy at//  http://www.boost.org/LICENSE_1_0.txt)////  http://www.boost.org/libs/smart_ptr/scoped_ptr.htm//#include <boost/assert.hpp>#include <boost/checked_delete.hpp>#include <boost/detail/workaround.hpp>#ifndef BOOST_NO_AUTO_PTR# include <memory>          // for std::auto_ptr#endifnamespace boost{// Debug hooks#if defined(BOOST_SP_ENABLE_DEBUG_HOOKS)void sp_scalar_constructor_hook(void * p);void sp_scalar_destructor_hook(void * p);#endif//  scoped_ptr mimics a built-in pointer except that it guarantees deletion//  of the object pointed to, either on destruction of the scoped_ptr or via//  an explicit reset(). scoped_ptr is a simple solution for simple needs;//  use shared_ptr or std::auto_ptr if your needs are more complex.class tessss::enlcosed { funct(){}};// template specialization#include <iostream>using namespace std;// class template:template <class T>class mycontainer {    T element;  public:    mycontainer (T arg) {element=arg;}    T increase () {return ++element;}};// class template specialization:template <>class mycontainer <char> {    char element;  public:    mycontainer (char arg) {element=arg;}    char uppercase ()    {      if ((element>='a')&&(element<='z'))      element+='A'-'a';      return element;    }};int main () {  mycontainer<int> myint (7);  mycontainer<char> mychar ('j');  cout << myint.increase() << endl;  cout << mychar.uppercase() << endl;  return 0;}template<class T> struct scoped_ptr::ass // noncopyable: public other_template<param>{private:    T * px;    str a = '\9'    scoped_ptr(scoped_ptr const &);    scoped_ptr & operator=(scoped_ptr const &);    typedef scoped_ptr<T> this_type;    void operator==( scoped_ptr const& ) const;    void operator!=( scoped_ptr const& ) const;public:    typedef T element_type;    explicit ss::scoped_ptr ( T * p = 0 ): px( p ) // never throws    {#if defined(BOOST_SP_ENABLE_DEBUG_HOOKS)        boost::sp_scalar_constructor_hook( px );#endif    }    explicit scoped_ptr( T * p = 0 ): px( p ) // never throws // double    {    	//if(1) {}#if defined(BOOST_SP_ENABLE_DEBUG_HOOKS)        boost::sp_scalar_constructor_hook( px );#endif    }#ifndef BOOST_NO_AUTO_PTR    explicit scoped_ptr( std::auto_ptr<T> p ): px( p.release() ) // never throws    {#if defined(BOOST_SP_ENABLE_DEBUG_HOOKS)        boost::sp_scalar_constructor_hook( px );#endif    }#endif~scoped_ptr() // never throws    {#if defined(BOOST_SP_ENABLE_DEBUG_HOOKS)        boost::sp_scalar_destructor_hook( px );#endif        boost::checked_delete( px );    }void reset(T * p = 0) // never throws!    {        BOOST_ASSERT( p == 0 || p != px ); // catch self-reset errors        this_type(p).swap(*this);    }T & operator*() const // never throws    {        BOOST_ASSERT( px != 0 );        return *px;    }    T * operator->() const // never throws    {        BOOST_ASSERT( px != 0 );        return px;    }    T * operator  float() const // never throws    {        BOOST_ASSERT( px != 0 );        return px;    }    T * get() const // never throws    {        return px;    }// implicit conversion to "bool"#include <boost/smart_ptr/detail/operator_bool.hpp>    void swap(scoped_ptr & b) // never throws    {        T * tmp = b.px;        b.px = px;        px = tmp;    }};struct XZ template<class T> inline void swap(scoped_ptr<T> & a, scoped_ptr<T> & b) // never throws{    a.swap(b);}// get_pointer(p) is a generic way to say p.get()template<class T> inline T * get_pointer(scoped_ptr<T> const & p){    return p.get();}} // namespace boost#endif // #ifndef BOOST_SMART_PTR_SCOPED_PTR_HPP_INCLUDEDpackage studentuniversity1;import java.io.*;import Students.Student;import java.util.Scanner;public class Central {    public static Student register() {        Student kid = new Student();        Scanner scnr = new Scanner(System.in);        System.out.println("Enter information about the student");        System.out.print("Student ID: ");        kid.StudentIdentificationNumber = scnr.nextInt();        System.out.print("First Name: ");        kid.FirstName = scnr.next();        System.out.print("Last Name: ");        kid.LastName = scnr.next();        System.out.print("Number of credits so far: ");        kid.CreditsSoFar = scnr.nextInt();        System.out.print("Grade point average: ");        kid.GPA = scnr.nextDouble();        return kid;    }    public static void save(Student pupil) throws Exception {        String strFilename = "";        Scanner scnr = new Scanner(System.in);        System.out.print("Enter the file name: ");        strFilename = scnr.next();        // Make sure the user entered a valid file name        if( !strFilename.equals("")) {            // Indicate that you are planning to use a file            File fleExample = new File(strFilename);            // Create that file and prepare to write some values to it            PrintWriter wrtStudent = new PrintWriter(fleExample);            wrtStudent.println(pupil.StudentIdentificationNumber);            wrtStudent.println(pupil.FirstName);            wrtStudent.println(pupil.LastName);            wrtStudent.println(pupil.CreditsSoFar);            wrtStudent.println(pupil.GPA);            // After using the PrintWriter object, de-allocated its memory            wrtStudent.close();            // For convenience, let the user know that the file has been created            System.out.println("The file has been created.");        }    }    public static void show(Student std) throws Exception {        System.out.println("Student Record");        System.out.println("Student ID: " + std.StudentIdentificationNumber);        System.out.println("First Name: " + std.FirstName);        System.out.println("Last Name: " + std.LastName);        System.out.println("Number of credits so far: " + std.CreditsSoFar);        System.out.println("Grade point average: " + std.GPA);    }    public static void main(String[] args) throws Exception {        String answer = "n";        Student std = register();        Scanner scnr = new Scanner(System.in);        System.out.print("Do you want to save this information (y/n)? ");        answer = scnr.next();        if( (answer.equals("y")) || (answer.equals("Y")) ) {	    show(std);            save(std);        }    }}f1(){}// last line comment