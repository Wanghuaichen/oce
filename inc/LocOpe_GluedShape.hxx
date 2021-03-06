// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_GluedShape_HeaderFile
#define _LocOpe_GluedShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_LocOpe_GluedShape.hxx>

#include <TopoDS_Shape.hxx>
#include <TopTools_MapOfShape.hxx>
#include <TopTools_DataMapOfShapeShape.hxx>
#include <LocOpe_GeneratedShape.hxx>
class TopoDS_Shape;
class TopoDS_Face;
class TopTools_ListOfShape;
class TopoDS_Edge;
class TopoDS_Vertex;



class LocOpe_GluedShape : public LocOpe_GeneratedShape
{

public:

  
  Standard_EXPORT LocOpe_GluedShape();
  
  Standard_EXPORT LocOpe_GluedShape(const TopoDS_Shape& S);
  
  Standard_EXPORT   void Init (const TopoDS_Shape& S) ;
  
  Standard_EXPORT   void GlueOnFace (const TopoDS_Face& F) ;
  
  Standard_EXPORT  const  TopTools_ListOfShape& GeneratingEdges() ;
  
  //! Returns the  edge  created by  the  vertex <V>. If
  //! none, must return a null shape.
  Standard_EXPORT   TopoDS_Edge Generated (const TopoDS_Vertex& V) ;
  
  //! Returns the face created by the edge <E>. If none,
  //! must return a null shape.
  Standard_EXPORT   TopoDS_Face Generated (const TopoDS_Edge& E) ;
  
  //! Returns  the  list of correctly oriented generated
  //! faces.
  Standard_EXPORT  const  TopTools_ListOfShape& OrientedFaces() ;




  DEFINE_STANDARD_RTTI(LocOpe_GluedShape)

protected:




private: 

  
  Standard_EXPORT   void MapEdgeAndVertices() ;

  TopoDS_Shape myShape;
  TopTools_MapOfShape myMap;
  TopTools_DataMapOfShapeShape myGShape;


};







#endif // _LocOpe_GluedShape_HeaderFile
