//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/filefilter/CanReadFileFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoFilefilterCanReadFileFilter")
#ifdef RESTRICT_OrgApacheCommonsIoFilefilterCanReadFileFilter
#define INCLUDE_ALL_OrgApacheCommonsIoFilefilterCanReadFileFilter 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoFilefilterCanReadFileFilter 1
#endif
#undef RESTRICT_OrgApacheCommonsIoFilefilterCanReadFileFilter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheCommonsIoFilefilterCanReadFileFilter_) && (INCLUDE_ALL_OrgApacheCommonsIoFilefilterCanReadFileFilter || defined(INCLUDE_OrgApacheCommonsIoFilefilterCanReadFileFilter))
#define OrgApacheCommonsIoFilefilterCanReadFileFilter_

#define RESTRICT_OrgApacheCommonsIoFilefilterAbstractFileFilter 1
#define INCLUDE_OrgApacheCommonsIoFilefilterAbstractFileFilter 1
#include "org/apache/commons/io/filefilter/AbstractFileFilter.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaIoFile;
@protocol OrgApacheCommonsIoFilefilterIOFileFilter;

/*!
 @brief This filter accepts <code>File</code>s that can be read.
 <p>
  Example, showing how to print out a list of the 
  current directory's <i>readable</i> files: 
 @code

  File dir = new File(".");
  String[] files = dir.list( CanReadFileFilter.CAN_READ );
  for ( int i = 0; i &lt; files.length; i++ ) {
      System.out.println(files[i]);
  } 
  
@endcode
  
 <p>
  Example, showing how to print out a list of the 
  current directory's <i>un-readable</i> files: 
 @code

  File dir = new File(".");
  String[] files = dir.list( CanReadFileFilter.CANNOT_READ );
  for ( int i = 0; i &lt; files.length; i++ ) {
      System.out.println(files[i]);
  } 
  
@endcode
  
 <p>
  Example, showing how to print out a list of the 
  current directory's <i>read-only</i> files: 
 @code

  File dir = new File(".");
  String[] files = dir.list( CanReadFileFilter.READ_ONLY );
  for ( int i = 0; i &lt; files.length; i++ ) {
      System.out.println(files[i]);
  } 
  
@endcode
 @since 1.3
 @version $Id$
 */
@interface OrgApacheCommonsIoFilefilterCanReadFileFilter : OrgApacheCommonsIoFilefilterAbstractFileFilter < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Checks to see if the file can be read.
 @param file the File to check.
 @return <code>true</code> if the file can be
   read, otherwise <code>false</code>.
 */
- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)file;

#pragma mark Protected

/*!
 @brief Restrictive consructor.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_STATIC_INIT(OrgApacheCommonsIoFilefilterCanReadFileFilter)

/*!
 @brief Singleton instance of <i>readable</i> filter
 */
inline id<OrgApacheCommonsIoFilefilterIOFileFilter> OrgApacheCommonsIoFilefilterCanReadFileFilter_get_CAN_READ(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<OrgApacheCommonsIoFilefilterIOFileFilter> OrgApacheCommonsIoFilefilterCanReadFileFilter_CAN_READ;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsIoFilefilterCanReadFileFilter, CAN_READ, id<OrgApacheCommonsIoFilefilterIOFileFilter>)

/*!
 @brief Singleton instance of not <i>readable</i> filter
 */
inline id<OrgApacheCommonsIoFilefilterIOFileFilter> OrgApacheCommonsIoFilefilterCanReadFileFilter_get_CANNOT_READ(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<OrgApacheCommonsIoFilefilterIOFileFilter> OrgApacheCommonsIoFilefilterCanReadFileFilter_CANNOT_READ;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsIoFilefilterCanReadFileFilter, CANNOT_READ, id<OrgApacheCommonsIoFilefilterIOFileFilter>)

/*!
 @brief Singleton instance of <i>read-only</i> filter
 */
inline id<OrgApacheCommonsIoFilefilterIOFileFilter> OrgApacheCommonsIoFilefilterCanReadFileFilter_get_READ_ONLY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<OrgApacheCommonsIoFilefilterIOFileFilter> OrgApacheCommonsIoFilefilterCanReadFileFilter_READ_ONLY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsIoFilefilterCanReadFileFilter, READ_ONLY, id<OrgApacheCommonsIoFilefilterIOFileFilter>)

FOUNDATION_EXPORT void OrgApacheCommonsIoFilefilterCanReadFileFilter_init(OrgApacheCommonsIoFilefilterCanReadFileFilter *self);

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterCanReadFileFilter *new_OrgApacheCommonsIoFilefilterCanReadFileFilter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterCanReadFileFilter *create_OrgApacheCommonsIoFilefilterCanReadFileFilter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoFilefilterCanReadFileFilter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoFilefilterCanReadFileFilter")
