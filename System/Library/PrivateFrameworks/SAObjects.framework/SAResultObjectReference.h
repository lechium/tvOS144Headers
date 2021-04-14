/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAResultObjectReference : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * className; 
@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,copy) NSString * referenceId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resultObjectReference;
+(id)resultObjectReferenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)className;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setClassName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)referenceId;
-(void)setReferenceId:(NSString *)arg1 ;
@end

