//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/filefilter/ConditionalFileFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheCommonsIoFilefilterConditionalFileFilter")
#ifdef RESTRICT_OrgApacheCommonsIoFilefilterConditionalFileFilter
#define INCLUDE_ALL_OrgApacheCommonsIoFilefilterConditionalFileFilter 0
#else
#define INCLUDE_ALL_OrgApacheCommonsIoFilefilterConditionalFileFilter 1
#endif
#undef RESTRICT_OrgApacheCommonsIoFilefilterConditionalFileFilter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheCommonsIoFilefilterConditionalFileFilter_) && (INCLUDE_ALL_OrgApacheCommonsIoFilefilterConditionalFileFilter || defined(INCLUDE_OrgApacheCommonsIoFilefilterConditionalFileFilter))
#define OrgApacheCommonsIoFilefilterConditionalFileFilter_

@protocol JavaUtilList;
@protocol OrgApacheCommonsIoFilefilterIOFileFilter;

/*!
 @brief Defines operations for conditional file filters.
 @since 1.1
 @version $Id$
 */
@protocol OrgApacheCommonsIoFilefilterConditionalFileFilter < JavaObject >

/*!
 @brief Adds the specified file filter to the list of file filters at the end of
  the list.
 @param ioFileFilter the filter to be added
 @since 1.1
 */
- (void)addFileFilterWithOrgApacheCommonsIoFilefilterIOFileFilter:(id<OrgApacheCommonsIoFilefilterIOFileFilter>)ioFileFilter;

/*!
 @brief Returns this conditional file filter's list of file filters.
 @return the file filter list
 @since 1.1
 */
- (id<JavaUtilList>)getFileFilters;

/*!
 @brief Removes the specified file filter.
 @param ioFileFilter filter to be removed
 @return <code>true</code> if the filter was found in the list, 
 <code>false</code> otherwise
 @since 1.1
 */
- (jboolean)removeFileFilterWithOrgApacheCommonsIoFilefilterIOFileFilter:(id<OrgApacheCommonsIoFilefilterIOFileFilter>)ioFileFilter;

/*!
 @brief Sets the list of file filters, replacing any previously configured
  file filters on this filter.
 @param fileFilters the list of filters
 @since 1.1
 */
- (void)setFileFiltersWithJavaUtilList:(id<JavaUtilList>)fileFilters;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheCommonsIoFilefilterConditionalFileFilter)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheCommonsIoFilefilterConditionalFileFilter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_OrgApacheCommonsIoFilefilterConditionalFileFilter")
