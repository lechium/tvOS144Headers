/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IOKitten/IOKObject.h>

@class NSString, NSDictionary;

@interface IOKRegistryEntry : IOKObject

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long entryID; 
@property (nonatomic,copy) NSDictionary * properties; 
+(id)rootEntry;
+(id)registryIteratorForPlane:(id)arg1 withOptions:(unsigned)arg2 error:(id*)arg3 ;
+(id)entryFromPath:(id)arg1 ;
-(NSString *)name;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(id)initWithIOObject:(unsigned)arg1 ;
-(id)childIteratorInServicePlaneWithError:(id*)arg1 ;
-(id)parentIteratorInServicePlaneWithError:(id*)arg1 ;
-(id)initWithRegistryEntry:(unsigned)arg1 ;
-(id)registryIteratorForPlane:(id)arg1 withOptions:(unsigned)arg2 error:(id*)arg3 ;
-(id)nameInPlane:(id)arg1 error:(id*)arg2 ;
-(id)locationInPlane:(id)arg1 error:(id*)arg2 ;
-(id)pathInPlane:(id)arg1 ;
-(id)childIteratorInPlane:(id)arg1 error:(id*)arg2 ;
-(id)childIteratorInPlane:(id)arg1 error:(id*)arg2 withEnumerationBlock:(/*^block*/id)arg3 ;
-(id)childInPlane:(id)arg1 error:(id*)arg2 ;
-(id)parentIteratorInPlane:(id)arg1 error:(id*)arg2 ;
-(id)parentIteratorInPlane:(id)arg1 error:(id*)arg2 withEnumerationBlock:(/*^block*/id)arg3 ;
-(id)parentEntryInPlane:(id)arg1 error:(id*)arg2 ;
-(id)registryIteratorForServicePlaneWithOptions:(unsigned)arg1 error:(id*)arg2 ;
-(id)nameInServicePlaneWithError:(id*)arg1 ;
-(id)locationInServicePlaneWithError:(id*)arg1 ;
-(id)pathInServicePlane;
-(unsigned long long)entryID;
-(id)searchForPropertyWithKey:(id)arg1 inPlane:(id)arg2 ;
-(id)childIteratorInServicePlaneWithError:(id*)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(id)childInServicePlaneWithError:(id*)arg1 ;
-(id)parentIteratorInServicePlaneWithError:(id*)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(id)parentEntryInServicePlaneWithError:(id*)arg1 ;
-(BOOL)isAttachedToPlane:(id)arg1 ;
@end

