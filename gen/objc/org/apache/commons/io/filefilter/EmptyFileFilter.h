//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/filefilter/EmptyFileFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoFilefilterEmptyFileFilter")
#ifdef RESTRICT_OrgApacheCommonsIoFilefilterEmptyFileFilter
#define INCLUDE_ALL_OrgApacheCommonsIoFilefilterEmptyFileFilter 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoFilefilterEmptyFileFilter 1
#endif
#undef RESTRICT_OrgApacheCommonsIoFilefilterEmptyFileFilter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheCommonsIoFilefilterEmptyFileFilter_) && (INCLUDE_ALL_OrgApacheCommonsIoFilefilterEmptyFileFilter || defined(INCLUDE_OrgApacheCommonsIoFilefilterEmptyFileFilter))
#define OrgApacheCommonsIoFilefilterEmptyFileFilter_

#define RESTRICT_OrgApacheCommonsIoFilefilterAbstractFileFilter 1
#define INCLUDE_OrgApacheCommonsIoFilefilterAbstractFileFilter 1
#include "org/apache/commons/io/filefilter/AbstractFileFilter.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaIoFile;
@protocol OrgApacheCommonsIoFilefilterIOFileFilter;

/*!
 @brief This filter accepts files or directories that are empty.
 <p>
  If the <code>File</code> is a directory it checks that
  it contains no files. 
 <p>
  Example, showing how to print out a list of the 
  current directory's empty files/directories: 
 @code

  File dir = new File(".");
  String[] files = dir.list( EmptyFileFilter.EMPTY );
  for ( int i = 0; i &lt; files.length; i++ ) {
      System.out.println(files[i]);
  } 
  
@endcode
  
 <p>
  Example, showing how to print out a list of the 
  current directory's non-empty files/directories: 
 @code

  File dir = new File(".");
  String[] files = dir.list( EmptyFileFilter.NOT_EMPTY );
  for ( int i = 0; i &lt; files.length; i++ ) {
      System.out.println(files[i]);
  } 
  
@endcode
 @since 1.3
 @version $Id$
 */
@interface OrgApacheCommonsIoFilefilterEmptyFileFilter : OrgApacheCommonsIoFilefilterAbstractFileFilter < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Checks to see if the file is empty.
 @param file the file or directory to check
 @return <code>true</code> if the file or directory
   is <i>empty</i>, otherwise <code>false</code>.
 */
- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)file;

#pragma mark Protected

/*!
 @brief Restrictive consructor.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_STATIC_INIT(OrgApacheCommonsIoFilefilterEmptyFileFilter)

/*!
 @brief Singleton instance of <i>empty</i> filter
 */
inline id<OrgApacheCommonsIoFilefilterIOFileFilter> OrgApacheCommonsIoFilefilterEmptyFileFilter_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<OrgApacheCommonsIoFilefilterIOFileFilter> OrgApacheCommonsIoFilefilterEmptyFileFilter_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsIoFilefilterEmptyFileFilter, EMPTY, id<OrgApacheCommonsIoFilefilterIOFileFilter>)

/*!
 @brief Singleton instance of <i>not-empty</i> filter
 */
inline id<OrgApacheCommonsIoFilefilterIOFileFilter> OrgApacheCommonsIoFilefilterEmptyFileFilter_get_NOT_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<OrgApacheCommonsIoFilefilterIOFileFilter> OrgApacheCommonsIoFilefilterEmptyFileFilter_NOT_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsIoFilefilterEmptyFileFilter, NOT_EMPTY, id<OrgApacheCommonsIoFilefilterIOFileFilter>)

FOUNDATION_EXPORT void OrgApacheCommonsIoFilefilterEmptyFileFilter_init(OrgApacheCommonsIoFilefilterEmptyFileFilter *self);

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterEmptyFileFilter *new_OrgApacheCommonsIoFilefilterEmptyFileFilter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterEmptyFileFilter *create_OrgApacheCommonsIoFilefilterEmptyFileFilter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoFilefilterEmptyFileFilter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoFilefilterEmptyFileFilter")
