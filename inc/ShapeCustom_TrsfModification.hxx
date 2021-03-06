// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeCustom_TrsfModification_HeaderFile
#define _ShapeCustom_TrsfModification_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_ShapeCustom_TrsfModification.hxx>

#include <BRepTools_TrsfModification.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Geom_Surface.hxx>
#include <Standard_Real.hxx>
#include <Handle_Geom_Curve.hxx>
#include <Handle_Geom2d_Curve.hxx>
class gp_Trsf;
class TopoDS_Face;
class Geom_Surface;
class TopLoc_Location;
class TopoDS_Edge;
class Geom_Curve;
class TopoDS_Vertex;
class gp_Pnt;
class Geom2d_Curve;


//! Complements BRepTools_TrsfModification to provide reversible
//! scaling regarding tolerances.
//! Uses actual tolerances (attached to the shapes) not ones
//! returned by BRep_Tool::Tolerance to work with tolerances
//! lower than Precision::Confusion.
class ShapeCustom_TrsfModification : public BRepTools_TrsfModification
{

public:

  
  //! Empty constructor
  Standard_EXPORT ShapeCustom_TrsfModification(const gp_Trsf& T);
  
  //! Calls inherited method.
  //! Sets <Tol> as actual tolerance of <F> multiplied with scale
  //! factor.
  Standard_EXPORT   Standard_Boolean NewSurface (const TopoDS_Face& F, Handle(Geom_Surface)& S, TopLoc_Location& L, Standard_Real& Tol, Standard_Boolean& RevWires, Standard_Boolean& RevFace) ;
  
  //! Calls inherited method.
  //! Sets <Tol> as actual tolerance of <E> multiplied with scale
  //! factor.
  Standard_EXPORT   Standard_Boolean NewCurve (const TopoDS_Edge& E, Handle(Geom_Curve)& C, TopLoc_Location& L, Standard_Real& Tol) ;
  
  //! Calls inherited method.
  //! Sets <Tol> as actual tolerance of <V> multiplied with scale
  //! factor.
  Standard_EXPORT   Standard_Boolean NewPoint (const TopoDS_Vertex& V, gp_Pnt& P, Standard_Real& Tol) ;
  
  //! Calls inherited method.
  //! Sets <Tol> as actual tolerance of <E> multiplied with scale
  //! factor.
  Standard_EXPORT   Standard_Boolean NewCurve2d (const TopoDS_Edge& E, const TopoDS_Face& F, const TopoDS_Edge& NewE, const TopoDS_Face& NewF, Handle(Geom2d_Curve)& C, Standard_Real& Tol) ;
  
  //! Calls inherited method.
  //! Sets <Tol> as actual tolerance of <V> multiplied with scale
  //! factor.
  Standard_EXPORT   Standard_Boolean NewParameter (const TopoDS_Vertex& V, const TopoDS_Edge& E, Standard_Real& P, Standard_Real& Tol) ;




  DEFINE_STANDARD_RTTI(ShapeCustom_TrsfModification)

protected:




private: 




};







#endif // _ShapeCustom_TrsfModification_HeaderFile
