// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFill_FaceAndOrder_HeaderFile
#define _BRepFill_FaceAndOrder_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopoDS_Face.hxx>
#include <GeomAbs_Shape.hxx>
class BRepFill_Filling;
class TopoDS_Face;


//! A structure containing Face and Order of constraint
class BRepFill_FaceAndOrder 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepFill_FaceAndOrder();
  
  Standard_EXPORT BRepFill_FaceAndOrder(const TopoDS_Face& aFace, const GeomAbs_Shape anOrder);


friend class BRepFill_Filling;


protected:





private:



  TopoDS_Face myFace;
  GeomAbs_Shape myOrder;


};







#endif // _BRepFill_FaceAndOrder_HeaderFile
