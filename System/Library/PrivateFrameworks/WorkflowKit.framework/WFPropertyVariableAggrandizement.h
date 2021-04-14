/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFVariableAggrandizement.h>

@class NSString;

@interface WFPropertyVariableAggrandizement : WFVariableAggrandizement

@property (nonatomic,readonly) NSString * propertyName; 
@property (nonatomic,readonly) id<WFPropertyListObject> propertyUserInfo; 
@property (nonatomic,readonly) BOOL negativeProperty; 
@property (nonatomic,readonly) NSString * negativePropertyName; 
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)propertyName;
-(id)initWithPropertyName:(id)arg1 propertyUserInfo:(id)arg2 ;
-(id)initWithPropertyName:(id)arg1 propertyUserInfo:(id)arg2 negativeProperty:(BOOL)arg3 negativePropertyName:(id)arg4 ;
-(id<WFPropertyListObject>)propertyUserInfo;
-(BOOL)negativeProperty;
-(NSString *)negativePropertyName;
-(id)processedContentClasses:(id)arg1 ;
-(void)applyToContentCollection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

