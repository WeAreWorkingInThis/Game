////////////////////////////////////////////////////////////////////////////////////////////////////
// NoesisGUI - http://www.noesisengine.com
// Copyright (c) 2013 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __GUI_RELATIVESOURCE_H__
#define __GUI_RELATIVESOURCE_H__


#include <NsCore/Noesis.h>
#include <NsCore/ReflectionDeclare.h>
#include <NsCore/ReflectionDeclareEnum.h>
#include <NsCore/BaseComponent.h>
#include <NsCore/Ptr.h>
#include <NsGui/CoreApi.h>
#include <NsGui/IMarkupExtension.h>
#include <NsGui/CoreApi.h>
#include <NsGui/Enums.h>


namespace Noesis
{

class ResourceKeyType;

NS_WARNING_PUSH
NS_MSVC_WARNING_DISABLE(4251 4275)

////////////////////////////////////////////////////////////////////////////////////////////////////
/// Implements a markup extension that describes the location of the binding source relative to 
/// the position of the binding target.
///
/// http://msdn.microsoft.com/en-us/library/system.windows.data.relativesource.aspx
////////////////////////////////////////////////////////////////////////////////////////////////////
class NS_GUI_CORE_API RelativeSource: public BaseComponent, public IMarkupExtension
{
public:
    /// Initializes a new instance of the RelativeSource class
    RelativeSource();
    
    /// Initializes a new instance of the RelativeSource class with an initial mode
    RelativeSource(RelativeSourceMode mode);
    
    /// Initializes a new instance of the RelativeSource class with an initial mode and additional 
    /// tree-walking qualifiers for finding the desired relative source
    RelativeSource(RelativeSourceMode mode, ResourceKeyType* type, int level);
    
    /// Copy constructor
    RelativeSource(const RelativeSource& other);
    
    /// Destructor
    ~RelativeSource();

    /// Gets a static value that is used to return a RelativeSource constructed for the 
    /// PreviousData mode
    /// \prop
    static RelativeSource* GetPreviousData(); 

    /// Gets a static value that is used to return a RelativeSource constructed for the Self mode
    /// \prop
    static RelativeSource* GetSelf();
    
    /// Gets a static value that is used to return a RelativeSource constructed for the 
    /// TemplatedParent mode
    /// \prop
    static RelativeSource* GetTemplatedParent(); 

    /// Gets or sets relative source mode
    //@{
    RelativeSourceMode GetMode() const;
    void SetMode(RelativeSourceMode mode);
    //@}

    /// Gets or sets the type of ancestor to look for
    //@{
    ResourceKeyType* GetAncestorType() const;
    void SetAncestorType(ResourceKeyType* type);
    //@}

    /// Gets or sets the level of ancestor to look for, in FindAncestor mode. Use 1 to indicate the
    /// one nearest to the binding target element.
    //@{
    int GetAncestorLevel() const;
    void SetAncestorLevel(int level);
    //@}

    /// From IMarkupExtension
    //@{
    /// Returns an object that should be set as the value on the target object's property for this 
    /// markup extension. For RelativeSource, this is another RelativeSource, using the appropriate
    /// source for the specified mode
    Ptr<BaseComponent> ProvideValue(const void* context) override;
    //@}

    NS_IMPLEMENT_INTERFACE_FIXUP

private:
    /// Gets or sets a RelativeSourceMode value that describes the location of the binding source 
    /// relative to the position of the binding target
    RelativeSourceMode mMode; 

    /// Gets or sets the type of ancestor to look for
    Ptr<ResourceKeyType> mAncestorType;
    
    /// Gets or sets the level of ancestor to look for, in FindAncestor mode. Use 1 to indicate 
    /// the one nearest to the binding target element
    int mAncestorLevel;

    NS_DECLARE_REFLECTION(RelativeSource, BaseComponent)
};

NS_WARNING_POP

}

#endif
