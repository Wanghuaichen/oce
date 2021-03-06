// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFGraph_Cycles_HeaderFile
#define _IFGraph_Cycles_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <IFGraph_SubPartsIterator.hxx>
#include <Standard_Boolean.hxx>
class Interface_Graph;
class IFGraph_StrongComponants;


//! determines strong componants in a graph which are Cycles
class IFGraph_Cycles  : public IFGraph_SubPartsIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! creates with a Graph, and will analyse :
  //! whole True  : all the contents of the Model
  //! whole False : sub-parts which will be given later
  Standard_EXPORT IFGraph_Cycles(const Interface_Graph& agraph, const Standard_Boolean whole);
  
  //! creates from a StrongComponants which was already computed
  Standard_EXPORT IFGraph_Cycles(IFGraph_StrongComponants& subparts);
  
  //! does the computation. Cycles are StrongComponants which are
  //! not Single
  Standard_EXPORT virtual   void Evaluate() ;




protected:





private:





};







#endif // _IFGraph_Cycles_HeaderFile
