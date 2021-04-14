/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAUITemplateEdgeInsets : AceObject <SAAceSerializable>

@property (assign,nonatomic) float bottom; 
@property (assign,nonatomic) float left; 
@property (assign,nonatomic) float right; 
@property (assign,nonatomic) float top; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)edgeInsets;
+(id)edgeInsetsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(float)left;
-(float)right;
-(void)setLeft:(float)arg1 ;
-(float)top;
-(float)bottom;
-(void)setBottom:(float)arg1 ;
-(void)setRight:(float)arg1 ;
-(void)setTop:(float)arg1 ;
-(id)encodedClassName;
@end

