/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAKnowledgeSetValuesForKeys : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSArray * entries; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setValuesForKeys;
+(id)setValuesForKeysWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)entries;
-(id)groupIdentifier;
-(void)setEntries:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

