// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeAnalysis_WireOrder_HeaderFile
#define _ShapeAnalysis_WireOrder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Handle_TColgp_HSequenceOfXYZ_HeaderFile
#include <Handle_TColgp_HSequenceOfXYZ.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TColStd_HArray1OfInteger;
class TColgp_HSequenceOfXYZ;
class Standard_TypeMismatch;
class gp_XYZ;
class gp_XY;


//! This class is intended to control and, if possible, redefine <br>
//!          the order of a list of edges which define a wire <br>
//!          Edges are not given directly, but as their bounds (start,end) <br>
//! <br>
//!          This allows to use this tool, either on existing wire, or on <br>
//!          data just taken from a file (coordinates are easy to get) <br>
//! <br>
//!          It can work, either in 2D, or in 3D, but not miscible <br>
//!          Warning about tolerance : according to the mode (2D/3D), it <br>
//!          must be given as 2D or 3D (i.e. metric) tolerance, uniform <br>
//!          on the whole list <br>
//! <br>
//!          Two phases : firstly add the couples (start,end) <br>
//!          secondly perform then get the result <br>
class ShapeAnalysis_WireOrder  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Empty constructor <br>
  Standard_EXPORT   ShapeAnalysis_WireOrder();
  //! Creates a WireOrder in 3D (if mode3d is True) or 2D (if False) <br>
//!           with a tolerance <br>
  Standard_EXPORT   ShapeAnalysis_WireOrder(const Standard_Boolean mode3d,const Standard_Real tol);
  //! Sets new values. Clears the connexion list <br>
//!           If <mode3d> changes, also clears the edge list (else, doesnt) <br>
  Standard_EXPORT     void SetMode(const Standard_Boolean mode3d,const Standard_Real tol) ;
  //! Returns the working tolerance <br>
  Standard_EXPORT     Standard_Real Tolerance() const;
  //! Clears the list of edges, but not mode and tol <br>
  Standard_EXPORT     void Clear() ;
  //! Adds a couple of points 3D (start,end) <br>
  Standard_EXPORT     void Add(const gp_XYZ& start3d,const gp_XYZ& end3d) ;
  //! Adds a couple of points 2D (start,end) <br>
  Standard_EXPORT     void Add(const gp_XY& start2d,const gp_XY& end2d) ;
  //! Returns the count of added couples of points (one per edges) <br>
  Standard_EXPORT     Standard_Integer NbEdges() const;
  //! If this mode is True method perform does not sort edges of <br>
//!           different loops. The resulting order is first loop, second <br>
//!           one etc... <br>
  Standard_EXPORT     Standard_Boolean& KeepLoopsMode() ;
  //! Computes the better order <br>
//!           If <closed> is True (D) considers also closure <br>
//!           Optimised if the couples were already in order <br>
//!           The criterium is : two couples in order if distance between <br>
//!           end-prec and start-cur is less then starting tolerance <tol> <br>
//!           Else, the smallest distance is reached <br>
//!           Gap corresponds to a smallest distance greater than <tol> <br>
  Standard_EXPORT     void Perform(const Standard_Boolean closed = Standard_True) ;
  //! Tells if Perform has been done <br>
//!           Else, the following methods returns original values <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns the status of the order (0 if not done) : <br>
//!            0 : all edges are direct and in sequence <br>
//!            1 : all edges are direct but some are not in sequence <br>
//!            2 : in addition, unresolved gaps remain <br>
//!           -1 : some edges are reversed, but no gap remain <br>
//!           -2 : some edges are reversed and some gaps remain <br>
//!           -10 : COULD NOT BE RESOLVED, Failure on Reorder <br>
//!           gap : regarding starting <tol> <br>
  Standard_EXPORT     Standard_Integer Status() const;
  //! Returns the number of original edge which correspond to the <br>
//!           newly ordered number <n> <br>
//!  Warning : the returned value is NEGATIVE if edge should be reversed <br>
  Standard_EXPORT     Standard_Integer Ordered(const Standard_Integer n) const;
  //! Returns the values of the couple <num>, as 3D values <br>
  Standard_EXPORT     void XYZ(const Standard_Integer num,gp_XYZ& start3d,gp_XYZ& end3d) const;
  //! Returns the values of the couple <num>, as 2D values <br>
  Standard_EXPORT     void XY(const Standard_Integer num,gp_XY& start2d,gp_XY& end2d) const;
  //! Returns the gap between a couple and its preceeding <br>
//!           <num> is considered ordered <br>
//!           If <num> = 0 (D), returns the greatest gap found <br>
  Standard_EXPORT     Standard_Real Gap(const Standard_Integer num = 0) const;
  //! Determines the chains inside which successive edges have a gap <br>
//!           less than a given value. Queried by NbChains and Chain <br>
  Standard_EXPORT     void SetChains(const Standard_Real gap) ;
  //! Returns the count of computed chains <br>
  Standard_EXPORT     Standard_Integer NbChains() const;
  //! Returns, for the chain n0 num, starting and ending numbers of <br>
//!           edges. In the list of ordered edges (see Ordered for originals) <br>
  Standard_EXPORT     void Chain(const Standard_Integer num,Standard_Integer& n1,Standard_Integer& n2) const;
  //! Determines the couples of edges for which end and start fit <br>
//!           inside a given gap. Queried by NbCouples and Couple <br>
  Standard_EXPORT     void SetCouples(const Standard_Real gap) ;
  //! Returns the count of computed couples <br>
  Standard_EXPORT     Standard_Integer NbCouples() const;
  //! Returns, for the couple n0 num, the two implied edges <br>
//!           In the list of ordered edges <br>
  Standard_EXPORT     void Couple(const Standard_Integer num,Standard_Integer& n1,Standard_Integer& n2) const;





protected:





private:



Standard_Boolean myKeepLoops;
Handle_TColStd_HArray1OfInteger myOrd;
Handle_TColStd_HArray1OfInteger myChains;
Handle_TColStd_HArray1OfInteger myCouples;
Handle_TColgp_HSequenceOfXYZ myXYZ;
Standard_Real myTol;
Standard_Real myGap;
Standard_Integer myStat;
Standard_Boolean myMode;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif