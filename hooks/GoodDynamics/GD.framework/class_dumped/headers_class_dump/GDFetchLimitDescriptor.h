//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDFetchSQLDescriptor.h"

@interface GDFetchLimitDescriptor : GDFetchSQLDescriptor
{
    unsigned int _limit;
    unsigned int _offset;
}

+ (id)descriptorWithSqlDescriptor:(id)arg1 limit:(unsigned int)arg2 offset:(unsigned int)arg3;
- (BOOL)build:(id *)arg1;
- (id)initWithSqlDescriptor:(id)arg1 limit:(unsigned int)arg2 offset:(unsigned int)arg3;

@end

