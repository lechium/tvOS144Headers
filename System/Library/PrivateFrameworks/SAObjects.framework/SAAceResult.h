/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAAceResult : SABaseAceObject <SAAceSerializable>

@property (nonatomic,retain) id<SAAceSerializable> result; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceResult;
+(id)aceResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id<SAAceSerializable>)result;
-(id)groupIdentifier;
-(void)setResult:(id<SAAceSerializable>)arg1 ;
-(id)encodedClassName;
@end
