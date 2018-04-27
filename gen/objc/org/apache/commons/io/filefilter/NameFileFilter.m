//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/commons-io/src/main/java/org/apache/commons/io/filefilter/NameFileFilter.java
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "java/io/File.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/System.h"
#include "java/util/List.h"
#include "org/apache/commons/io/IOCase.h"
#include "org/apache/commons/io/filefilter/AbstractFileFilter.h"
#include "org/apache/commons/io/filefilter/NameFileFilter.h"

@interface OrgApacheCommonsIoFilefilterNameFileFilter () {
 @public
  /*!
   @brief The filenames to search for
   */
  IOSObjectArray *names_;
  /*!
   @brief Whether the comparison is case sensitive.
   */
  OrgApacheCommonsIoIOCase *caseSensitivity_;
}

@end

J2OBJC_FIELD_SETTER(OrgApacheCommonsIoFilefilterNameFileFilter, names_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgApacheCommonsIoFilefilterNameFileFilter, caseSensitivity_, OrgApacheCommonsIoIOCase *)

@implementation OrgApacheCommonsIoFilefilterNameFileFilter

- (instancetype __nonnull)initWithNSString:(NSString *)name {
  OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSString_(self, name);
  return self;
}

- (instancetype __nonnull)initWithNSString:(NSString *)name
              withOrgApacheCommonsIoIOCase:(OrgApacheCommonsIoIOCase *)caseSensitivity {
  OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSString_withOrgApacheCommonsIoIOCase_(self, name, caseSensitivity);
  return self;
}

- (instancetype __nonnull)initWithNSStringArray:(IOSObjectArray *)names {
  OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSStringArray_(self, names);
  return self;
}

- (instancetype __nonnull)initWithNSStringArray:(IOSObjectArray *)names
                   withOrgApacheCommonsIoIOCase:(OrgApacheCommonsIoIOCase *)caseSensitivity {
  OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSStringArray_withOrgApacheCommonsIoIOCase_(self, names, caseSensitivity);
  return self;
}

- (instancetype __nonnull)initWithJavaUtilList:(id<JavaUtilList>)names {
  OrgApacheCommonsIoFilefilterNameFileFilter_initWithJavaUtilList_(self, names);
  return self;
}

- (instancetype __nonnull)initWithJavaUtilList:(id<JavaUtilList>)names
                  withOrgApacheCommonsIoIOCase:(OrgApacheCommonsIoIOCase *)caseSensitivity {
  OrgApacheCommonsIoFilefilterNameFileFilter_initWithJavaUtilList_withOrgApacheCommonsIoIOCase_(self, names, caseSensitivity);
  return self;
}

- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)file {
  NSString *name = [((JavaIoFile *) nil_chk(file)) getName];
  {
    IOSObjectArray *a__ = self->names_;
    NSString * const *b__ = ((IOSObjectArray *) nil_chk(a__))->buffer_;
    NSString * const *e__ = b__ + a__->size_;
    while (b__ < e__) {
      NSString *name2 = *b__++;
      if ([((OrgApacheCommonsIoIOCase *) nil_chk(caseSensitivity_)) checkEqualsWithNSString:name withNSString:name2]) {
        return true;
      }
    }
  }
  return false;
}

- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)dir
                    withNSString:(NSString *)name {
  {
    IOSObjectArray *a__ = names_;
    NSString * const *b__ = ((IOSObjectArray *) nil_chk(a__))->buffer_;
    NSString * const *e__ = b__ + a__->size_;
    while (b__ < e__) {
      NSString *name2 = *b__++;
      if ([((OrgApacheCommonsIoIOCase *) nil_chk(caseSensitivity_)) checkEqualsWithNSString:name withNSString:name2]) {
        return true;
      }
    }
  }
  return false;
}

- (NSString *)description {
  JavaLangStringBuilder *buffer = create_JavaLangStringBuilder_init();
  [buffer appendWithNSString:[super description]];
  [buffer appendWithNSString:@"("];
  if (names_ != nil) {
    for (jint i = 0; i < names_->size_; i++) {
      if (i > 0) {
        [buffer appendWithNSString:@","];
      }
      [buffer appendWithNSString:IOSObjectArray_Get(names_, i)];
    }
  }
  [buffer appendWithNSString:@")"];
  return [buffer description];
}

- (void)dealloc {
  RELEASE_(names_);
  RELEASE_(caseSensitivity_);
  [super dealloc];
}

@end

void OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSString_(OrgApacheCommonsIoFilefilterNameFileFilter *self, NSString *name) {
  OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSString_withOrgApacheCommonsIoIOCase_(self, name, nil);
}

OrgApacheCommonsIoFilefilterNameFileFilter *new_OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSString_(NSString *name) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoFilefilterNameFileFilter, initWithNSString_, name)
}

OrgApacheCommonsIoFilefilterNameFileFilter *create_OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSString_(NSString *name) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoFilefilterNameFileFilter, initWithNSString_, name)
}

void OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSString_withOrgApacheCommonsIoIOCase_(OrgApacheCommonsIoFilefilterNameFileFilter *self, NSString *name, OrgApacheCommonsIoIOCase *caseSensitivity) {
  OrgApacheCommonsIoFilefilterAbstractFileFilter_init(self);
  if (name == nil) {
    @throw create_JavaLangIllegalArgumentException_initWithNSString_(@"The wildcard must not be null");
  }
  JreStrongAssignAndConsume(&self->names_, [IOSObjectArray newArrayWithObjects:(id[]){ name } count:1 type:NSString_class_()]);
  JreStrongAssign(&self->caseSensitivity_, caseSensitivity == nil ? JreLoadStatic(OrgApacheCommonsIoIOCase, SENSITIVE) : caseSensitivity);
}

OrgApacheCommonsIoFilefilterNameFileFilter *new_OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSString_withOrgApacheCommonsIoIOCase_(NSString *name, OrgApacheCommonsIoIOCase *caseSensitivity) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoFilefilterNameFileFilter, initWithNSString_withOrgApacheCommonsIoIOCase_, name, caseSensitivity)
}

OrgApacheCommonsIoFilefilterNameFileFilter *create_OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSString_withOrgApacheCommonsIoIOCase_(NSString *name, OrgApacheCommonsIoIOCase *caseSensitivity) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoFilefilterNameFileFilter, initWithNSString_withOrgApacheCommonsIoIOCase_, name, caseSensitivity)
}

void OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSStringArray_(OrgApacheCommonsIoFilefilterNameFileFilter *self, IOSObjectArray *names) {
  OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSStringArray_withOrgApacheCommonsIoIOCase_(self, names, nil);
}

OrgApacheCommonsIoFilefilterNameFileFilter *new_OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSStringArray_(IOSObjectArray *names) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoFilefilterNameFileFilter, initWithNSStringArray_, names)
}

OrgApacheCommonsIoFilefilterNameFileFilter *create_OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSStringArray_(IOSObjectArray *names) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoFilefilterNameFileFilter, initWithNSStringArray_, names)
}

void OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSStringArray_withOrgApacheCommonsIoIOCase_(OrgApacheCommonsIoFilefilterNameFileFilter *self, IOSObjectArray *names, OrgApacheCommonsIoIOCase *caseSensitivity) {
  OrgApacheCommonsIoFilefilterAbstractFileFilter_init(self);
  if (names == nil) {
    @throw create_JavaLangIllegalArgumentException_initWithNSString_(@"The array of names must not be null");
  }
  JreStrongAssignAndConsume(&self->names_, [IOSObjectArray newArrayWithLength:names->size_ type:NSString_class_()]);
  JavaLangSystem_arraycopyWithId_withInt_withId_withInt_withInt_(names, 0, self->names_, 0, names->size_);
  JreStrongAssign(&self->caseSensitivity_, caseSensitivity == nil ? JreLoadStatic(OrgApacheCommonsIoIOCase, SENSITIVE) : caseSensitivity);
}

OrgApacheCommonsIoFilefilterNameFileFilter *new_OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSStringArray_withOrgApacheCommonsIoIOCase_(IOSObjectArray *names, OrgApacheCommonsIoIOCase *caseSensitivity) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoFilefilterNameFileFilter, initWithNSStringArray_withOrgApacheCommonsIoIOCase_, names, caseSensitivity)
}

OrgApacheCommonsIoFilefilterNameFileFilter *create_OrgApacheCommonsIoFilefilterNameFileFilter_initWithNSStringArray_withOrgApacheCommonsIoIOCase_(IOSObjectArray *names, OrgApacheCommonsIoIOCase *caseSensitivity) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoFilefilterNameFileFilter, initWithNSStringArray_withOrgApacheCommonsIoIOCase_, names, caseSensitivity)
}

void OrgApacheCommonsIoFilefilterNameFileFilter_initWithJavaUtilList_(OrgApacheCommonsIoFilefilterNameFileFilter *self, id<JavaUtilList> names) {
  OrgApacheCommonsIoFilefilterNameFileFilter_initWithJavaUtilList_withOrgApacheCommonsIoIOCase_(self, names, nil);
}

OrgApacheCommonsIoFilefilterNameFileFilter *new_OrgApacheCommonsIoFilefilterNameFileFilter_initWithJavaUtilList_(id<JavaUtilList> names) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoFilefilterNameFileFilter, initWithJavaUtilList_, names)
}

OrgApacheCommonsIoFilefilterNameFileFilter *create_OrgApacheCommonsIoFilefilterNameFileFilter_initWithJavaUtilList_(id<JavaUtilList> names) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoFilefilterNameFileFilter, initWithJavaUtilList_, names)
}

void OrgApacheCommonsIoFilefilterNameFileFilter_initWithJavaUtilList_withOrgApacheCommonsIoIOCase_(OrgApacheCommonsIoFilefilterNameFileFilter *self, id<JavaUtilList> names, OrgApacheCommonsIoIOCase *caseSensitivity) {
  OrgApacheCommonsIoFilefilterAbstractFileFilter_init(self);
  if (names == nil) {
    @throw create_JavaLangIllegalArgumentException_initWithNSString_(@"The list of names must not be null");
  }
  JreStrongAssign(&self->names_, [names toArrayWithNSObjectArray:[IOSObjectArray arrayWithLength:[names size] type:NSString_class_()]]);
  JreStrongAssign(&self->caseSensitivity_, caseSensitivity == nil ? JreLoadStatic(OrgApacheCommonsIoIOCase, SENSITIVE) : caseSensitivity);
}

OrgApacheCommonsIoFilefilterNameFileFilter *new_OrgApacheCommonsIoFilefilterNameFileFilter_initWithJavaUtilList_withOrgApacheCommonsIoIOCase_(id<JavaUtilList> names, OrgApacheCommonsIoIOCase *caseSensitivity) {
  J2OBJC_NEW_IMPL(OrgApacheCommonsIoFilefilterNameFileFilter, initWithJavaUtilList_withOrgApacheCommonsIoIOCase_, names, caseSensitivity)
}

OrgApacheCommonsIoFilefilterNameFileFilter *create_OrgApacheCommonsIoFilefilterNameFileFilter_initWithJavaUtilList_withOrgApacheCommonsIoIOCase_(id<JavaUtilList> names, OrgApacheCommonsIoIOCase *caseSensitivity) {
  J2OBJC_CREATE_IMPL(OrgApacheCommonsIoFilefilterNameFileFilter, initWithJavaUtilList_withOrgApacheCommonsIoIOCase_, names, caseSensitivity)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgApacheCommonsIoFilefilterNameFileFilter)
