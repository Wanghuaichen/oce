// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_BissecNewton_HeaderFile
#define _math_BissecNewton_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <math_Status.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <Standard_OStream.hxx>
class StdFail_NotDone;
class math_FunctionWithDerivative;



//! This class implements a combination of Newton-Raphson and bissection
//! methods to find the root of the function between two bounds.
//! Knowledge of the derivative is required.
class math_BissecNewton 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructor.
  //! @param theXTolerance - algorithm tolerance.
  Standard_EXPORT math_BissecNewton(const Standard_Real theXTolerance);
  

  //! A combination of Newton-Raphson and bissection methods is done to find
  //! the root of the function F between the bounds Bound1 and Bound2
  //! on the function F.
  //! The tolerance required on the root is given by TolX.
  //! The solution is found when:
  //! abs(Xi - Xi-1) <= TolX and F(Xi) * F(Xi-1) <= 0
  //! The maximum number of iterations allowed is given by NbIterations.
  Standard_EXPORT   void Perform (math_FunctionWithDerivative& F, const Standard_Real Bound1, const Standard_Real Bound2, const Standard_Integer NbIterations = 100) ;
  

  //! This method is called at the end of each iteration to check if the
  //! solution has been found.
  //! It can be redefined in a sub-class to implement a specific test to
  //! stop the iterations.
    virtual   Standard_Boolean IsSolutionReached (math_FunctionWithDerivative& theFunction) ;
  
  //! Tests is the root has been successfully found.
      Standard_Boolean IsDone()  const;
  
  //! returns the value of the root.
  //! Exception NotDone is raised if the minimum was not found.
      Standard_Real Root()  const;
  
  //! returns the value of the derivative at the root.
  //! Exception NotDone is raised if the minimum was not found.
      Standard_Real Derivative()  const;
  
  //! returns the value of the function at the root.
  //! Exception NotDone is raised if the minimum was not found.
      Standard_Real Value()  const;
  
  //! Prints on the stream o information on the current state
  //! of the object.
  //! Is used to redifine the operator <<.
  Standard_EXPORT   void Dump (Standard_OStream& o)  const;
  
  //! Destructor alias.
      void Delete()  const;
  Standard_EXPORT virtual ~math_BissecNewton();




protected:



  math_Status TheStatus;
  Standard_Real XTol;
  Standard_Real x;
  Standard_Real dx;
  Standard_Real f;
  Standard_Real df;


private:



  Standard_Boolean Done;


};


#include <math_BissecNewton.lxx>





#endif // _math_BissecNewton_HeaderFile
