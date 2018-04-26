//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/filefilter/FileFileFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoFilefilterFileFileFilter")
#ifdef RESTRICT_OrgApacheCommonsIoFilefilterFileFileFilter
#define INCLUDE_ALL_OrgApacheCommonsIoFilefilterFileFileFilter 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoFilefilterFileFileFilter 1
#endif
#undef RESTRICT_OrgApacheCommonsIoFilefilterFileFileFilter

#if !defined (OrgApacheCommonsIoFilefilterFileFileFilter_) && (INCLUDE_ALL_OrgApacheCommonsIoFilefilterFileFileFilter || defined(INCLUDE_OrgApacheCommonsIoFilefilterFileFileFilter))
#define OrgApacheCommonsIoFilefilterFileFileFilter_

#define RESTRICT_OrgApacheCommonsIoFilefilterAbstractFileFilter 1
#define INCLUDE_OrgApacheCommonsIoFilefilterAbstractFileFilter 1
#include "org/apache/commons/io/filefilter/AbstractFileFilter.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaIoFile;
@protocol OrgApacheCommonsIoFilefilterIOFileFilter;

/*!
 @brief This filter accepts <code>File</code>s that are files (not directories).
 <p>
  For example, here is how to print out a list of the real files
  within the current directory: 
 @code

  File dir = new File(".");
  String[] files = dir.list( FileFileFilter.FILE );
  for ( int i = 0; i &lt; files.length; i++ ) {
      System.out.println(files[i]);
  } 
  
@endcode
 @since 1.3
 @version $Id$
 - seealso: FileFilterUtils#fileFileFilter()
 */
@interface OrgApacheCommonsIoFilefilterFileFileFilter : OrgApacheCommonsIoFilefilterAbstractFileFilter < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Checks to see if the file is a file.
 @param file the File to check
 @return true if the file is a file
 */
- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)file;

#pragma mark Protected

/*!
 @brief Restrictive consructor.
 */
- (instancetype)init;

@end

J2OBJC_STATIC_INIT(OrgApacheCommonsIoFilefilterFileFileFilter)

/*!
 @brief Singleton instance of file filter
 */
inline id<OrgApacheCommonsIoFilefilterIOFileFilter> OrgApacheCommonsIoFilefilterFileFileFilter_get_FILE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<OrgApacheCommonsIoFilefilterIOFileFilter> OrgApacheCommonsIoFilefilterFileFileFilter_FILE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheCommonsIoFilefilterFileFileFilter, FILE, id<OrgApacheCommonsIoFilefilterIOFileFilter>)

FOUNDATION_EXPORT void OrgApacheCommonsIoFilefilterFileFileFilter_init(OrgApacheCommonsIoFilefilterFileFileFilter *self);

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterFileFileFilter *new_OrgApacheCommonsIoFilefilterFileFileFilter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterFileFileFilter *create_OrgApacheCommonsIoFilefilterFileFileFilter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoFilefilterFileFileFilter)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoFilefilterFileFileFilter")
