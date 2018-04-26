//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/filefilter/OrFileFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoFilefilterOrFileFilter")
#ifdef RESTRICT_OrgApacheCommonsIoFilefilterOrFileFilter
#define INCLUDE_ALL_OrgApacheCommonsIoFilefilterOrFileFilter 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoFilefilterOrFileFilter 1
#endif
#undef RESTRICT_OrgApacheCommonsIoFilefilterOrFileFilter

#if !defined (OrgApacheCommonsIoFilefilterOrFileFilter_) && (INCLUDE_ALL_OrgApacheCommonsIoFilefilterOrFileFilter || defined(INCLUDE_OrgApacheCommonsIoFilefilterOrFileFilter))
#define OrgApacheCommonsIoFilefilterOrFileFilter_

#define RESTRICT_OrgApacheCommonsIoFilefilterAbstractFileFilter 1
#define INCLUDE_OrgApacheCommonsIoFilefilterAbstractFileFilter 1
#include "org/apache/commons/io/filefilter/AbstractFileFilter.h"

#define RESTRICT_OrgApacheCommonsIoFilefilterConditionalFileFilter 1
#define INCLUDE_OrgApacheCommonsIoFilefilterConditionalFileFilter 1
#include "org/apache/commons/io/filefilter/ConditionalFileFilter.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaIoFile;
@protocol JavaUtilList;
@protocol OrgApacheCommonsIoFilefilterIOFileFilter;

/*!
 @brief A <code>java.io.FileFilter</code> providing conditional OR logic across a list of
  file filters.This filter returns <code>true</code> if any filters in the
  list return <code>true</code>.
 Otherwise, it returns <code>false</code>.
  Checking of the file filter list stops when the first filter returns 
 <code>true</code>.
 @since 1.0
 @version $Id$
 - seealso: FileFilterUtils#or(IOFileFilter...)
 */
@interface OrgApacheCommonsIoFilefilterOrFileFilter : OrgApacheCommonsIoFilefilterAbstractFileFilter < OrgApacheCommonsIoFilefilterConditionalFileFilter, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new instance of <code>OrFileFilter</code>.
 @since 1.1
 */
- (instancetype)init;

/*!
 @brief Constructs a new file filter that ORs the result of two other filters.
 @param filter1 the first filter, must not be null
 @param filter2 the second filter, must not be null
 @throw IllegalArgumentExceptionif either filter is null
 */
- (instancetype)initWithOrgApacheCommonsIoFilefilterIOFileFilter:(id<OrgApacheCommonsIoFilefilterIOFileFilter>)filter1
                    withOrgApacheCommonsIoFilefilterIOFileFilter:(id<OrgApacheCommonsIoFilefilterIOFileFilter>)filter2;

/*!
 @brief Constructs a new instance of <code>OrFileFilter</code>
  with the specified filters.
 @param fileFilters the file filters for this filter, copied, null ignored
 @since 1.1
 */
- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)fileFilters;

/*!
 */
- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)file;

/*!
 */
- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)file
                    withNSString:(NSString *)name;

/*!
 */
- (void)addFileFilterWithOrgApacheCommonsIoFilefilterIOFileFilter:(id<OrgApacheCommonsIoFilefilterIOFileFilter>)ioFileFilter;

/*!
 */
- (id<JavaUtilList>)getFileFilters;

/*!
 */
- (jboolean)removeFileFilterWithOrgApacheCommonsIoFilefilterIOFileFilter:(id<OrgApacheCommonsIoFilefilterIOFileFilter>)ioFileFilter;

/*!
 */
- (void)setFileFiltersWithJavaUtilList:(id<JavaUtilList>)fileFilters;

/*!
 @brief Provide a String representaion of this file filter.
 @return a String representaion
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsIoFilefilterOrFileFilter)

FOUNDATION_EXPORT void OrgApacheCommonsIoFilefilterOrFileFilter_init(OrgApacheCommonsIoFilefilterOrFileFilter *self);

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterOrFileFilter *new_OrgApacheCommonsIoFilefilterOrFileFilter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterOrFileFilter *create_OrgApacheCommonsIoFilefilterOrFileFilter_init(void);

FOUNDATION_EXPORT void OrgApacheCommonsIoFilefilterOrFileFilter_initWithJavaUtilList_(OrgApacheCommonsIoFilefilterOrFileFilter *self, id<JavaUtilList> fileFilters);

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterOrFileFilter *new_OrgApacheCommonsIoFilefilterOrFileFilter_initWithJavaUtilList_(id<JavaUtilList> fileFilters) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterOrFileFilter *create_OrgApacheCommonsIoFilefilterOrFileFilter_initWithJavaUtilList_(id<JavaUtilList> fileFilters);

FOUNDATION_EXPORT void OrgApacheCommonsIoFilefilterOrFileFilter_initWithOrgApacheCommonsIoFilefilterIOFileFilter_withOrgApacheCommonsIoFilefilterIOFileFilter_(OrgApacheCommonsIoFilefilterOrFileFilter *self, id<OrgApacheCommonsIoFilefilterIOFileFilter> filter1, id<OrgApacheCommonsIoFilefilterIOFileFilter> filter2);

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterOrFileFilter *new_OrgApacheCommonsIoFilefilterOrFileFilter_initWithOrgApacheCommonsIoFilefilterIOFileFilter_withOrgApacheCommonsIoFilefilterIOFileFilter_(id<OrgApacheCommonsIoFilefilterIOFileFilter> filter1, id<OrgApacheCommonsIoFilefilterIOFileFilter> filter2) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheCommonsIoFilefilterOrFileFilter *create_OrgApacheCommonsIoFilefilterOrFileFilter_initWithOrgApacheCommonsIoFilefilterIOFileFilter_withOrgApacheCommonsIoFilefilterIOFileFilter_(id<OrgApacheCommonsIoFilefilterIOFileFilter> filter1, id<OrgApacheCommonsIoFilefilterIOFileFilter> filter2);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoFilefilterOrFileFilter)

#endif

#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoFilefilterOrFileFilter")
